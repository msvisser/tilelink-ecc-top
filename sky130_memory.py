import generator.controller
import generator.error_correction
from generator.controller import PartialWriteWrapper
from amaranth import *
from amaranth.hdl.rec import Direction
from amaranth_soc.memory import MemoryMap
from riscv_tilelink import tilelink


class MemoryRecord(Record):
    def __init__(self, addr_width, data_width, mask_width=0, src_loc_at=0):
        super().__init__([
            ('clk', 1, Direction.FANOUT),
            ('rst', 1, Direction.FANOUT),
            ('addr', addr_width, Direction.FANOUT),
            ('clk_en', 1, Direction.FANOUT),
            ('write_en', 1, Direction.FANOUT),
            ('write_mask', mask_width, Direction.FANOUT),
            ('write_data', data_width, Direction.FANOUT),
            ('read_data', data_width, Direction.FANIN),
        ], src_loc_at=src_loc_at + 1)

    def ports(self):
        return [self.clk, self.rst, self.addr, self.clk_en, self.write_en, self.write_mask, self.write_data, self.read_data]


class TilelinkMemory(Elaboratable):
    counter = 0

    def __init__(self, addr_width, data_width=4, source_id_width=0):
        # Determine the link parameters
        self.addr_width = addr_width
        self.data_width = data_width

        # Create the link and memory map
        self.bus = tilelink.Interface(addr_width=addr_width, data_width=data_width, source_id_width=source_id_width, sink_id_width=0)
        memory_map = MemoryMap(addr_width=addr_width, data_width=8)
        memory_map.add_resource(self, name=f"mem{TilelinkMemory.counter}", size=2 ** addr_width)
        self.bus.memory_map = memory_map
        TilelinkMemory.counter += 1

        # Determine the memory sizing
        self.data_width_bits = 8 * data_width
        self.memory_depth = 2 ** (self.addr_width - self.bus.addr_local_width)

        # Create the memory interface
        self.mem = MemoryRecord(addr_width=self.addr_width - self.bus.addr_local_width, data_width=self.data_width_bits, mask_width=self.data_width)

    def elaborate(self, platform):
        assert platform == "sky130", f"Unknown platform: {platform}"

        m = Module()

        # Create a copy of the A bus one cycle ago
        last_a = Record.like(self.bus.a)
        with m.If(self.bus.a.ready):
            m.d.sync += last_a.eq(self.bus.a)

        # Does the A bus fire in this cycle
        a_fire = self.bus.a.valid & self.bus.a.ready

        # Connect the read port
        m.d.comb += [
            self.mem.addr.eq(self.bus.a.address[self.bus.addr_local_width:]),
            self.mem.clk_en.eq(a_fire),
        ]

        # Connect the write port
        we = self.bus.a.opcode.matches(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData)
        m.d.comb += [
            self.mem.clk.eq(ClockSignal()),
            self.mem.rst.eq(ResetSignal()),
            self.mem.write_data.eq(self.bus.a.data),
            self.mem.write_en.eq(a_fire & we),
            self.mem.write_mask.eq(self.bus.a.mask),
        ]

        # Determine the ready of the input bus
        m.d.comb += self.bus.a.ready.eq(~self.bus.d.valid | self.bus.d.ready)

        # If channel A fired last cycle channel D is valid this cycle
        with m.If(last_a.ready):
            m.d.comb += self.bus.d.valid.eq(last_a.valid)

        # Assign the result messages
        with m.Switch(last_a.opcode):
            with m.Case(tilelink.ChannelAOpcode.Get):
                m.d.comb += self.bus.tilelink_access_ack_data(data=self.mem.read_data, size=last_a.size, source=last_a.source)
            with m.Case(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData):
                m.d.comb += self.bus.tilelink_access_ack(size=last_a.size, source=last_a.source)

        return m



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
        if not hasattr(generator.error_correction, code_name):
            raise ValueError(f"Unknown code: {code_name}")
        code_class = getattr(generator.error_correction, code_name)

        self.code = code_class(data_bits=self.data_width_bits)
        self.code.generate_matrices_cached(timeout=30.0)

        # Generate the memory controller
        if not hasattr(generator.controller, controller_name):
            raise ValueError(f"Unknown controller: {controller_name}")
        controller_class = getattr(generator.controller, controller_name)

        self.controller = controller_class(
            self.code,
            addr_width=self.addr_width - self.bus.addr_local_width
        )

        # Create the memory connection
        self.mem = MemoryRecord(addr_width=self.addr_width - self.bus.addr_local_width, data_width=self.code.total_bits)

    def elaborate(self, platform):
        assert platform == "sky130", f"Unknown platform: {platform}"

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

        # Connect the memory interface up the hierarchy
        m.d.comb += [
            self.mem.clk.eq(ClockSignal()),
            self.mem.rst.eq(ResetSignal()),
            self.mem.addr.eq(controller.sram.addr),
            self.mem.clk_en.eq(controller.sram.clk_en),
            self.mem.write_en.eq(controller.sram.write_en),
            self.mem.write_data.eq(controller.sram.write_data),
            controller.sram.read_data.eq(self.mem.read_data),
        ]

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
