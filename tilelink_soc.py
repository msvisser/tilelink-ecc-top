import struct
from nmigen import *
from nmigen.back import rtlil, cxxrtl, verilog
from nmigen.sim import Simulator, Passive
from nmigen.cli import main_parser
from nmigen.utils import log2_int
from nmigen_soc.memory import MemoryMap
import tilelink
from tilelink import TilelinkArbiter, TilelinkDecoder
from tilelink.peripheral import TilelinkMemory, TilelinkUART
from tilelink.master import TilelinkInstructionMaster, TilelinkDataMaster
from core import RISCVCore


class TilelinkPeripheral(Elaboratable):
    def __init__(self, data_width=4, source_id_width=0):
        self.data_width = data_width
        self.source_id_width = source_id_width

        self.bus = tilelink.Interface(addr_width=log2_int(4*data_width), data_width=data_width, source_id_width=source_id_width, sink_id_width=0)
        memory_map = MemoryMap(addr_width=log2_int(4*data_width), data_width=8)
        memory_map.add_resource(self, name="io", size=4*data_width)
        self.bus.memory_map = memory_map

        self.output_valid = Signal()
        self.output = Signal(unsigned(8))
        self.halt_simulator = Signal()

    def elaborate(self, platform):
        m = Module()

        # Automatically reset the register to zero
        m.d.sync += self.output_valid.eq(False)

        # Cycle counter
        cycle_count = Signal(unsigned(64))
        m.d.sync += cycle_count.eq(cycle_count + 1)

        # Does the A bus fire in this cycle
        a_fire = self.bus.a.valid & self.bus.a.ready
        we = self.bus.a.opcode.matches(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData)

        for i in range(self.data_width):
            with m.If(a_fire & we & self.bus.a.mask[i]):
                with m.Switch(self.bus.a.address):
                    with m.Case(0):
                        m.d.sync += [
                            self.output.word_select(i, 8).eq(self.bus.a.data.word_select(i, 8)),
                            self.output_valid.eq(True),
                        ]
                    with m.Case(4):
                        m.d.sync += self.halt_simulator.word_select(i, 8).eq(self.bus.a.data.word_select(i, 8))
                    with m.Case(8):
                        m.d.sync += cycle_count[0:32].word_select(i, 8).eq(self.bus.a.data.word_select(i, 8))
                    with m.Case(12):
                        m.d.sync += cycle_count[32:64].word_select(i, 8).eq(self.bus.a.data.word_select(i, 8))

        # Determine the ready of the input bus
        m.d.comb += self.bus.a.ready.eq(~self.bus.d.valid | self.bus.d.ready)

        # When channel A fires the response will be valid next cycle
        with m.If(self.bus.a.ready):
            m.d.sync += self.bus.d.valid.eq(self.bus.a.valid)

        # Assign the result messages
        with m.Switch(self.bus.a.opcode):
            with m.Case(tilelink.ChannelAOpcode.Get):
                with m.Switch(self.bus.a.address):
                    with m.Case(0):
                        m.d.sync += self.bus.tilelink_access_ack_data(data=self.output, size=self.bus.a.size, source=self.bus.a.source)
                    with m.Case(4):
                        m.d.sync += self.bus.tilelink_access_ack_data(data=self.halt_simulator, size=self.bus.a.size, source=self.bus.a.source)
                    with m.Case(8):
                        m.d.sync += self.bus.tilelink_access_ack_data(data=cycle_count[0:32], size=self.bus.a.size, source=self.bus.a.source)
                    with m.Case(12):
                        m.d.sync += self.bus.tilelink_access_ack_data(data=cycle_count[32:64], size=self.bus.a.size, source=self.bus.a.source)
            with m.Case(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData):
                m.d.sync += self.bus.tilelink_access_ack(size=self.bus.a.size, source=self.bus.a.source)

        return m


class TilelinkSOC(Elaboratable):
    def __init__(self, firmware):
        self.firmware = firmware

        self.output = Signal(unsigned(8))
        self.output_valid = Signal()
        self.halt_simulator = Signal()
        self.tx_o = Signal()

    def elaborate(self, platform):
        m = Module()

        # Create the processor core
        m.submodules.core = core = RISCVCore()
        # Create the Tilelink masters for the instruction and data stream
        m.submodules.instruction_master = instruction_master = TilelinkInstructionMaster(addr_width=32, max_outstanding=2)
        m.submodules.data_master = data_master = TilelinkDataMaster(addr_width=32, max_outstanding=2)

        # Connect the core to the Tilelink masters
        m.d.comb += [
            core.instruction_stream.connect(instruction_master.instruction_stream),
            core.data_stream.connect(data_master.data_stream),
        ]

        # Create an address decoder
        m.submodules.tl_instr_decoder = tl_instr_decoder = TilelinkDecoder(addr_width=32, source_id_width=instruction_master.bus.source_id_width)
        m.submodules.tl_data_decoder = tl_data_decoder = TilelinkDecoder(addr_width=32, source_id_width=data_master.bus.source_id_width)

        tl_instr_rom = tilelink.Interface(addr_width=15, data_width=4, source_id_width=instruction_master.bus.source_id_width, sink_id_width=0)
        tl_instr_ram = tilelink.Interface(addr_width=15, data_width=4, source_id_width=instruction_master.bus.source_id_width, sink_id_width=0)
        tl_data_rom = tilelink.Interface(addr_width=15, data_width=4, source_id_width=data_master.bus.source_id_width, sink_id_width=0)
        tl_data_ram = tilelink.Interface(addr_width=15, data_width=4, source_id_width=data_master.bus.source_id_width, sink_id_width=0)

        # Create an arbiter so both masters can access the same memory
        m.submodules.tl_rom_arbiter = tl_rom_arbiter = TilelinkArbiter([tl_instr_rom, tl_data_rom])
        m.submodules.tl_ram_arbiter = tl_ram_arbiter = TilelinkArbiter([tl_instr_ram, tl_data_ram])

        # Create a ROM and RAM memory
        m.submodules.tl_rom = tl_rom = TilelinkMemory(addr_width=15, data_width=4, source_id_width=tl_rom_arbiter.source_id_width, init=self.firmware, read_only=True)
        m.submodules.tl_ram = tl_ram = TilelinkMemory(addr_width=15, data_width=4, source_id_width=tl_ram_arbiter.source_id_width)

        m.submodules.tl_periph = tl_periph = TilelinkPeripheral(source_id_width=tl_data_decoder.source_id_width)
        m.d.comb += [
            self.output.eq(tl_periph.output),
            self.output_valid.eq(tl_periph.output_valid),
            self.halt_simulator.eq(tl_periph.halt_simulator),
        ]

        tl_instr_rom.memory_map = tl_rom.bus.memory_map
        tl_instr_ram.memory_map = tl_ram.bus.memory_map
        tl_data_rom.memory_map = tl_rom.bus.memory_map
        tl_data_ram.memory_map = tl_ram.bus.memory_map

        # Add the memories to the decoder
        tl_instr_decoder.add(tl_instr_rom, addr=0x00000000)
        tl_instr_decoder.add(tl_instr_ram, addr=0x00008000)
        tl_data_decoder.add(tl_data_rom, addr=0x00000000)
        tl_data_decoder.add(tl_data_ram, addr=0x00008000)
        tl_data_decoder.add(tl_periph.bus, addr=0x80000000)

        # Connect the arbiter to the memory
        m.d.comb += instruction_master.bus.connect(tl_instr_decoder.bus)
        m.d.comb += data_master.bus.connect(tl_data_decoder.bus)
        m.d.comb += tl_rom_arbiter.bus.connect(tl_rom.bus)
        m.d.comb += tl_ram_arbiter.bus.connect(tl_ram.bus)

        return m


if __name__ == "__main__":
    import sys
    sys.setrecursionlimit(3000)

    design = TilelinkSOC(firmware="firmware/test.bin")
    platform = None
    ports = [design.output, design.output_valid, design.halt_simulator]
    name = "top"

    parser = main_parser()
    args = parser.parse_args()

    if args.action == "generate":
        fragment = Fragment.get(design, platform)
        generate_type = args.generate_type
        if generate_type is None and args.generate_file:
            if args.generate_file.name.endswith(".il"):
                generate_type = "il"
            if args.generate_file.name.endswith(".cc"):
                generate_type = "cc"
            if args.generate_file.name.endswith(".v"):
                generate_type = "v"
        if generate_type is None:
            parser.error("Unable to auto-detect language, specify explicitly with -t/--type")
        if generate_type == "il":
            output = rtlil.convert(fragment, name=name, ports=ports)
        if generate_type == "cc":
            output = cxxrtl.convert(fragment, name=name, ports=ports)
        if generate_type == "v":
            output = verilog.convert(fragment, name=name, ports=ports)
        if args.generate_file:
            args.generate_file.write(output)
        else:
            print(output)

    if args.action == "simulate":
        fragment = Fragment.get(design, platform)
        sim = Simulator(fragment)

        def print_output_process():
            yield Passive()
            while True:
                yield
                output_valid = yield design.output_valid
                if output_valid:
                    output = yield design.output
                    print(chr(output & 0xff), end='')

        def wait_for_halt_simulator():
            halt_simulator = False
            cycle = 0
            while not halt_simulator:
                yield
                halt_simulator = yield design.halt_simulator
                cycle += 1
            print(f"Halted simulator after {cycle} cycles")

        sim.add_clock(args.sync_period)
        sim.add_sync_process(print_output_process)
        sim.add_sync_process(wait_for_halt_simulator)
        with sim.write_vcd(vcd_file=args.vcd_file, gtkw_file=args.gtkw_file, traces=ports):
            sim.run_until(args.sync_period * args.sync_clocks)
