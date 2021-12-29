from nmigen import *
from nmigen.back import rtlil, cxxrtl, verilog
from nmigen.sim import Simulator, Passive
from nmigen.cli import main_parser

from riscv_tilelink import tilelink
from riscv_tilelink.tilelink import TilelinkArbiter, TilelinkDecoder
from riscv_tilelink.tilelink.peripheral import TilelinkSimulationPeripheral
from riscv_tilelink.tilelink.master import TilelinkInstructionMaster, TilelinkDataMaster
from riscv_tilelink.core import RISCVCore

from sky130_memory import TilelinkMemory, TilelinkECCMemory, MemoryRecord


class TilelinkSOC(Elaboratable):
    def __init__(self, code_name, controller_name):
        self.code_name = code_name
        self.controller_name = controller_name

        self.sim_output = Signal(unsigned(8))
        self.sim_output_valid = Signal()
        self.halt_simulator = Signal(unsigned(6))

        self.instruction_master = TilelinkInstructionMaster(addr_width=32, max_outstanding=2)
        self.data_master = TilelinkDataMaster(addr_width=32, max_outstanding=2)

        self.tl_instr_ram = tilelink.Interface(addr_width=14, data_width=4, source_id_width=self.instruction_master.bus.source_id_width, sink_id_width=0)
        self.tl_data_ram = tilelink.Interface(addr_width=14, data_width=4, source_id_width=self.data_master.bus.source_id_width, sink_id_width=0)

        self.tl_ram_arbiter = TilelinkArbiter([self.tl_instr_ram, self.tl_data_ram])
        self.tl_ram = TilelinkECCMemory(
            addr_width=14, data_width=4, source_id_width=self.tl_ram_arbiter.source_id_width,
            code_name=self.code_name, controller_name=self.controller_name
        )

        self.imem = MemoryRecord(addr_width=12, data_width=32, mask_width=4)
        self.dmem = MemoryRecord(addr_width=12, data_width=self.tl_ram.code.total_bits)

    def ports(self):
        return [self.sim_output, self.sim_output_valid, self.halt_simulator, *self.imem.ports(), *self.dmem.ports()]

    def elaborate(self, platform):
        m = Module()

        # Create the processor core
        m.submodules.core = core = RISCVCore()
        # Create the Tilelink masters for the instruction and data stream
        m.submodules.instruction_master = self.instruction_master
        m.submodules.data_master = self.data_master

        # Connect the core to the Tilelink masters
        m.d.comb += [
            core.instruction_stream.connect(self.instruction_master.instruction_stream),
            core.data_stream.connect(self.data_master.data_stream),
        ]

        # Create an address decoder
        m.submodules.tl_instr_decoder = tl_instr_decoder = TilelinkDecoder(addr_width=32, source_id_width=self.instruction_master.bus.source_id_width)
        m.submodules.tl_data_decoder = tl_data_decoder = TilelinkDecoder(addr_width=32, source_id_width=self.data_master.bus.source_id_width)

        tl_instr_rom = tilelink.Interface(addr_width=14, data_width=4, source_id_width=self.instruction_master.bus.source_id_width, sink_id_width=0)
        tl_data_rom = tilelink.Interface(addr_width=14, data_width=4, source_id_width=self.data_master.bus.source_id_width, sink_id_width=0)

        # Create an arbiter so both masters can access the same memory
        m.submodules.tl_rom_arbiter = tl_rom_arbiter = TilelinkArbiter([tl_instr_rom, tl_data_rom])
        m.submodules.tl_ram_arbiter = self.tl_ram_arbiter

        # Create a ROM and RAM memory
        m.submodules.tl_rom = tl_rom = TilelinkMemory(addr_width=14, data_width=4, source_id_width=tl_rom_arbiter.source_id_width)
        m.submodules.tl_ram = self.tl_ram

        m.submodules.tl_periph = tl_periph = TilelinkSimulationPeripheral(source_id_width=tl_data_decoder.source_id_width)
        m.d.comb += [
            self.sim_output.eq(tl_periph.sim_output),
            self.sim_output_valid.eq(tl_periph.sim_output_valid),
            self.halt_simulator.eq(tl_periph.halt_simulator),
            core.external_interrupt.eq(tl_periph.external_interrupt),
        ]

        tl_instr_rom.memory_map = tl_rom.bus.memory_map
        self.tl_instr_ram.memory_map = self.tl_ram.bus.memory_map
        tl_data_rom.memory_map = tl_rom.bus.memory_map
        self.tl_data_ram.memory_map = self.tl_ram.bus.memory_map

        # Add the memories to the decoder
        tl_instr_decoder.add(tl_instr_rom, addr=0x00000000)
        tl_instr_decoder.add(self.tl_instr_ram, addr=0x00008000)
        tl_data_decoder.add(tl_data_rom, addr=0x00000000)
        tl_data_decoder.add(self.tl_data_ram, addr=0x00008000)
        tl_data_decoder.add(tl_periph.bus, addr=0x80000000)

        # Connect the arbiter to the memory
        m.d.comb += self.instruction_master.bus.connect(tl_instr_decoder.bus)
        m.d.comb += self.data_master.bus.connect(tl_data_decoder.bus)
        m.d.comb += tl_rom_arbiter.bus.connect(tl_rom.bus)
        m.d.comb += self.tl_ram_arbiter.bus.connect(self.tl_ram.bus)

        m.d.comb += [
            tl_rom.mem.connect(self.imem),
            self.tl_ram.mem.connect(self.dmem),
        ]

        return m


if __name__ == "__main__":
    import sys
    sys.setrecursionlimit(3000)

    parser = main_parser()
    parser.add_argument("--code", default="ExtendedHammingCode")
    parser.add_argument("--controller", default="WriteBackController")
    parser.add_argument("--platform", default="sky130")
    args = parser.parse_args()

    design = TilelinkSOC(code_name=args.code, controller_name=args.controller)
    ports = design.ports()
    name = "top"

    if args.action == "generate":
        fragment = Fragment.get(design, args.platform)
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
