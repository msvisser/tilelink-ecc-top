from generator.controller import PartialWriteWrapper, WriteBackController
from generator.error_correction import ExtendedHammingCode
from nmigen import *
from nmigen_soc.memory import MemoryMap
from riscv_tilelink import tilelink


class TilelinkECCMemory(Elaboratable):
    counter = 0

    def __init__(self, addr_width, data_width=4, source_id_width=0):
        # Determine the link parameters
        self.addr_width = addr_width
        self.data_width = data_width

        # Create the link and memory map
        self.bus = tilelink.Interface(addr_width=addr_width, data_width=data_width, source_id_width=source_id_width, sink_id_width=0)
        memory_map = MemoryMap(addr_width=addr_width, data_width=8)
        memory_map.add_resource(self, name=f"ecc_mem{TilelinkECCMemory.counter}", size=2 ** addr_width)
        self.bus.memory_map = memory_map
        TilelinkECCMemory.counter += 1

        # Determine the memory sizing
        self.data_width_bits = 8 * data_width
        self.memory_depth = 2 ** (self.addr_width - self.bus.addr_local_width)

        self.code = ExtendedHammingCode(data_bits=32)
        self.code.generate_matrices_cached(timeout=30.0)

    def elaborate(self, platform):
        m = Module()

        # Create the ECC memory controller
        m.submodules.wrapper = wrapper = PartialWriteWrapper(addr_width=13, data_bits=32)
        m.submodules.controller = controller = WriteBackController(self.code, addr_width=13)
        m.d.comb += [
            wrapper.req_out.connect(controller.req),
            controller.rsp.connect(wrapper.rsp_in),
        ]

        # Create the memory and the read port
        if platform == "sim":
            mem = Memory(width=self.code.total_bits, depth=self.memory_depth)
            # Read port
            m.submodules.read_port = read_port = mem.read_port(transparent=False)
            m.d.comb += [
                read_port.addr.eq(controller.sram.addr),
                read_port.en.eq(controller.sram.clk_en & ~controller.sram.write_en),
                controller.sram.read_data.eq(read_port.data),
            ]

            # Write port
            m.submodules.write_port = write_port = mem.write_port()
            m.d.comb += [
                write_port.addr.eq(controller.sram.addr),
                write_port.data.eq(controller.sram.write_data),
                write_port.en.eq(controller.sram.clk_en & controller.sram.write_en)
            ]
        elif platform == "cxxrtl":
            m.submodules.memory = Instance("sim_dmem",
                # p_ADDR_WIDTH=13,
                p_DATA_WIDTH=self.code.total_bits,
                i_clk = ClockSignal(),
                i_rst = ResetSignal(),
                i_addr = controller.sram.addr,
                i_clk_en = controller.sram.clk_en,
                i_write_en = controller.sram.write_en,
                i_write_data = controller.sram.write_data,
                o_read_data = controller.sram.read_data,
            )
        else:
            assert False, f"unknown platform {platform}"

        last_a = Record.like(self.bus.a)
        with m.If(self.bus.a.ready):
            m.d.sync += last_a.eq(self.bus.a)

        m.d.comb += [
            wrapper.req_in.valid.eq(self.bus.a.valid),
            self.bus.a.ready.eq(wrapper.req_in.ready),
            wrapper.req_in.addr.eq(self.bus.a.address[self.bus.addr_local_width:]),
            wrapper.req_in.write_en.eq(self.bus.a.opcode.matches(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData)),
            wrapper.req_in.write_mask.eq(self.bus.a.mask),
            wrapper.req_in.write_data.eq(self.bus.a.data),

            self.bus.d.valid.eq(wrapper.rsp_out.valid),
            wrapper.rsp_out.ready.eq(self.bus.d.ready),
        ]

        with m.Switch(last_a.opcode):
            with m.Case(tilelink.ChannelAOpcode.Get):
                m.d.comb += self.bus.tilelink_access_ack_data(data=wrapper.rsp_out.read_data, size=last_a.size, source=last_a.source, corrupt=wrapper.rsp_out.uncorrectable_error)
            with m.Case(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData):
                m.d.comb += self.bus.tilelink_access_ack(size=last_a.size, source=last_a.source)


        # # Create a copy of the A bus one cycle ago
        # last_a = Record.like(self.bus.a)
        # with m.If(self.bus.a.ready):
        #     m.d.sync += last_a.eq(self.bus.a)

        # # Does the A bus fire in this cycle
        # a_fire = self.bus.a.valid & self.bus.a.ready

        # # Connect the read port
        # m.d.comb += [
        #     read_port.addr.eq(self.bus.a.address[self.bus.addr_local_width:]),
        #     read_port.en.eq(a_fire),
        # ]

        # # Connect the write port
        # m.d.comb += [
        #     write_port.addr.eq(self.bus.a.address[self.bus.addr_local_width:]),
        #     write_port.data.eq(self.bus.a.data),
        # ]
        # we = self.bus.a.opcode.matches(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData)
        # for i in range(self.data_width):
        #     m.d.comb += write_port.en[i].eq(a_fire & we & self.bus.a.mask[i])

        # # Determine the ready of the input bus
        # m.d.comb += self.bus.a.ready.eq(~self.bus.d.valid | self.bus.d.ready)

        # # If channel A fired last cycle channel D is valid this cycle
        # with m.If(last_a.ready):
        #     m.d.comb += self.bus.d.valid.eq(last_a.valid)

        # # Assign the result messages
        # with m.Switch(last_a.opcode):
        #     with m.Case(tilelink.ChannelAOpcode.Get):
        #         m.d.comb += self.bus.tilelink_access_ack_data(data=read_port.data, size=last_a.size, source=last_a.source)
        #     with m.Case(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData):
        #         m.d.comb += self.bus.tilelink_access_ack(size=last_a.size, source=last_a.source)

        return m
