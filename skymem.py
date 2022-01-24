from sqlite3 import TimeFromTicks
from amaranth import *

from riscv_tilelink import tilelink
from amaranth_soc.memory import MemoryMap


class SkyMem(Elaboratable):
    def __init__(self, data_width: int, addr_width: int, mask_width: int):
        self.data_width = data_width
        self.addr_width = addr_width
        self.mask_width = mask_width

        self.addr = Signal(unsigned(addr_width))
        self.clk_en = Signal()
        self.write_en = Signal()
        self.write_mask = Signal(unsigned(mask_width))
        self.write_data = Signal(unsigned(data_width))
        self.read_data = Signal(unsigned(data_width))

    def elaborate(self, platform):
        assert platform == "sky130"

        m = Module()

        clk_en_0 = ~(self.clk_en & (self.addr[-1] == 0))
        clk_en_1 = ~(self.clk_en & (self.addr[-1] == 1))
        read_data_0 = Signal(self.data_width)
        read_data_1 = Signal(self.data_width)
        addr_top_prev = Signal()
        m.d.sync += addr_top_prev.eq(self.addr[-1])

        if self.mask_width == 0:
            m.submodules[f'sram{self.data_width}_0'] = Instance(
                f"sram_{self.data_width}_2048_sky130",
                i_clk0=ClockSignal(),
                i_csb0=clk_en_0,
                i_web0=~self.write_en,
                i_spare_wen0=0,
                i_addr0=self.addr,
                i_din0=self.write_data,
                o_dout0=read_data_0,
            )

            m.submodules[f'sram{self.data_width}_1'] = Instance(
                f"sram_{self.data_width}_2048_sky130",
                i_clk0=ClockSignal(),
                i_csb0=clk_en_1,
                i_web0=~self.write_en,
                i_spare_wen0=0,
                i_addr0=self.addr,
                i_din0=self.write_data,
                o_dout0=read_data_1,
            )
        else:
            m.submodules[f'sram{self.data_width}_0_mask'] = Instance(
                f"sram_{self.data_width}_2048_sky130_mask",
                i_clk0=ClockSignal(),
                i_csb0=clk_en_0,
                i_web0=~self.write_en,
                i_wmask0=self.write_mask,
                i_spare_wen0=0,
                i_addr0=self.addr,
                i_din0=self.write_data,
                o_dout0=read_data_0,
            )

            m.submodules[f'sram{self.data_width}_1_mask'] = Instance(
                f"sram_{self.data_width}_2048_sky130_mask",
                i_clk0=ClockSignal(),
                i_csb0=clk_en_1,
                i_web0=~self.write_en,
                i_wmask0=self.write_mask,
                i_spare_wen0=0,
                i_addr0=self.addr,
                i_din0=self.write_data,
                o_dout0=read_data_1,
            )

        with m.Switch(addr_top_prev):
            with m.Case(0):
                m.d.comb += self.read_data.eq(read_data_0)
            with m.Case(1):
                m.d.comb += self.read_data.eq(read_data_1)

        return m


class TilelinkSkyMemory(Elaboratable):
    counter = 0

    def __init__(self, addr_width, data_width=4, source_id_width=0, init=None, read_only=False):
        # Determine the link parameters
        self.addr_width = addr_width
        self.data_width = data_width

        # Create the link and memory map
        self.bus = tilelink.Interface(addr_width=addr_width, data_width=data_width, source_id_width=source_id_width, sink_id_width=0)
        memory_map = MemoryMap(addr_width=addr_width, data_width=8)
        memory_map.add_resource(self, name=f"mem{TilelinkSkyMemory.counter}", size=2 ** addr_width)
        self.bus.memory_map = memory_map
        TilelinkSkyMemory.counter += 1

        # Determine the memory sizing
        self.data_width_bits = 8 * data_width
        self.memory_depth = 2 ** (self.addr_width - self.bus.addr_local_width)

    def elaborate(self, platform):
        assert platform == "sky130"

        m = Module()

        # Create a copy of the A bus one cycle ago
        last_a = Record.like(self.bus.a)
        with m.If(self.bus.a.ready):
            m.d.sync += last_a.eq(self.bus.a)

        # Does the A bus fire in this cycle
        a_fire = self.bus.a.valid & self.bus.a.ready

        m.submodules.memory = mem = SkyMem(self.data_width_bits, self.addr_width - self.bus.addr_local_width, self.data_width)

        # Connect the read port
        m.d.comb += [
            mem.addr.eq(self.bus.a.address[self.bus.addr_local_width:]),
            mem.clk_en.eq(a_fire),
        ]

        # Connect the write port
        we = self.bus.a.opcode.matches(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData)
        m.d.comb += [
            mem.write_data.eq(self.bus.a.data),
            mem.write_en.eq(we),
            mem.write_mask.eq(self.bus.a.mask),
        ]

        # Determine the ready of the input bus
        m.d.comb += self.bus.a.ready.eq(~self.bus.d.valid | self.bus.d.ready)

        # If channel A fired last cycle channel D is valid this cycle
        with m.If(last_a.ready):
            m.d.comb += self.bus.d.valid.eq(last_a.valid)

        # Assign the result messages
        with m.Switch(last_a.opcode):
            with m.Case(tilelink.ChannelAOpcode.Get):
                m.d.comb += self.bus.tilelink_access_ack_data(data=mem.read_data, size=last_a.size, source=last_a.source)
            with m.Case(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData):
                m.d.comb += self.bus.tilelink_access_ack(size=last_a.size, source=last_a.source)

        return m
