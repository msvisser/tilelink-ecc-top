import memory_controller_generator.controller
import memory_controller_generator.error_correction
from memory_controller_generator.controller import PartialWriteWrapper
from amaranth import *
from amaranth_soc.memory import MemoryMap
from riscv_tilelink import tilelink


class TilelinkECCMemory(Elaboratable):
    counter = 0

    def __init__(self, addr_width, data_width=4, source_id_width=0, code_name=None, controller_name=None):
        # Determine the link parameters
        self.addr_width = addr_width
        self.data_width = data_width

        # Create the link and memory map
        self.bus = tilelink.Interface(addr_width=addr_width, data_width=data_width, source_id_width=source_id_width,
                                      sink_id_width=0)
        memory_map = MemoryMap(addr_width=addr_width, data_width=8)
        memory_map.add_resource(self, name=f"ecc_mem{TilelinkECCMemory.counter}", size=2 ** addr_width)
        self.bus.memory_map = memory_map
        TilelinkECCMemory.counter += 1

        # Determine the memory sizing
        self.data_width_bits = 8 * data_width
        self.memory_depth = 2 ** (self.addr_width - self.bus.addr_local_width)

        # Generate the error correction code matrices
        if not hasattr(memory_controller_generator.error_correction, code_name):
            raise ValueError(f"Unknown code: {code_name}")
        code_class = getattr(memory_controller_generator.error_correction, code_name)

        self.code = code_class(data_bits=self.data_width_bits)
        self.code.generate_matrices_cached(timeout=30.0)

        # Generate the memory controller
        if not hasattr(memory_controller_generator.controller, controller_name):
            raise ValueError(f"Unknown controller: {controller_name}")
        controller_class = getattr(memory_controller_generator.controller, controller_name)

        self.controller = controller_class(
            self.code,
            addr_width=self.addr_width - self.bus.addr_local_width
        )

    def elaborate(self, platform):
        m = Module()

        # Create the ECC memory controller
        m.submodules.wrapper = wrapper = PartialWriteWrapper(
            addr_width=self.addr_width - self.bus.addr_local_width,
            data_bits=self.data_width_bits
        )
        m.submodules.controller_name = controller = self.controller
        m.d.comb += [
            wrapper.req_out.connect(controller.req),
            controller.rsp.connect(wrapper.rsp_in),
        ]

        if platform == "sim":
            # Create the memory
            mem = Memory(width=self.code.total_bits, depth=self.memory_depth)

            # Create and connect the read port to the controller
            m.submodules.read_port = read_port = mem.read_port(transparent=False)
            m.d.comb += [
                read_port.addr.eq(controller.sram.addr),
                read_port.en.eq(controller.sram.clk_en & ~controller.sram.write_en),
                controller.sram.read_data.eq(read_port.data),
            ]

            # Create and connect the write port to the controller
            m.submodules.write_port = write_port = mem.write_port()
            m.d.comb += [
                write_port.addr.eq(controller.sram.addr),
                write_port.data.eq(controller.sram.write_data),
                write_port.en.eq(controller.sram.clk_en & controller.sram.write_en)
            ]
        elif platform == "cxxrtl":
            # Create a black-box memory instance which will be replaced in simulation
            m.submodules.memory = Instance(
                "sim_dmem",
                p_DATA_WIDTH=self.code.total_bits,
                i_clk=ClockSignal(),
                i_rst=ResetSignal(),
                i_addr=controller.sram.addr,
                i_clk_en=controller.sram.clk_en,
                i_write_en=controller.sram.write_en,
                i_write_data=controller.sram.write_data,
                o_read_data=controller.sram.read_data,
                i_error=controller.debug.error,
                i_uncorrectable_error=controller.debug.uncorrectable_error,
                i_flips=controller.debug.flips,
                i_ignore=controller.debug.ignore,
            )
        else:
            assert False, f"unknown platform {platform}"

        # Remember the last request
        last_a = Record.like(self.bus.a)
        with m.If(self.bus.a.ready):
            m.d.sync += last_a.eq(self.bus.a)

        # Connect the Tilelink signals int the controller
        m.d.comb += [
            wrapper.req_in.valid.eq(self.bus.a.valid),
            self.bus.a.ready.eq(wrapper.req_in.ready),
            wrapper.req_in.addr.eq(self.bus.a.address[self.bus.addr_local_width:]),
            wrapper.req_in.write_en.eq(
                self.bus.a.opcode.matches(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData)),
            wrapper.req_in.write_mask.eq(self.bus.a.mask),
            wrapper.req_in.write_data.eq(self.bus.a.data),

            self.bus.d.valid.eq(wrapper.rsp_out.valid),
            wrapper.rsp_out.ready.eq(self.bus.d.ready),
        ]

        # Determine the response based on the last request
        with m.Switch(last_a.opcode):
            with m.Case(tilelink.ChannelAOpcode.Get):
                m.d.comb += self.bus.tilelink_access_ack_data(
                    data=wrapper.rsp_out.read_data,
                    size=last_a.size,
                    source=last_a.source,
                    corrupt=wrapper.rsp_out.uncorrectable_error
                )
            with m.Case(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData):
                m.d.comb += self.bus.tilelink_access_ack(size=last_a.size, source=last_a.source)

        return m
