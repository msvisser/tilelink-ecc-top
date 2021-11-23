from nmigen import *
from nmigen.hdl.rec import Layout, Direction
from nmigen.utils import log2_int

from .arbitration import Arbitration
from .isa import Opcode, Funct7, Funct3Arithmetic, Funct3Branch, Funct3Mul
from .decoder import Decoder, ALUOperation, Control, ALULeft, ALURight, WritebackSelect, BranchMode, BranchType


class InstructionStream(Layout):
    """
    Layout for the stream of instruction requests coming out of the core and
    responses going back into the core.
    """
    def __init__(self):
        super().__init__([
            ('req_addr', 32, Direction.FANOUT),
            ('req_valid', 1, Direction.FANOUT),
            ('req_ready', 1, Direction.FANIN),

            ('rsp_data', 32, Direction.FANIN),
            ('rsp_valid', 1, Direction.FANIN),
            ('rsp_ready', 1, Direction.FANOUT),
        ])


class DataStream(Layout):
    """
    Layout for the stream of data requests coming out of the core and responses
    going back into the core.
    """
    def __init__(self):
        super().__init__([
            ('req_addr', 32, Direction.FANOUT),
            ('req_data', 32, Direction.FANOUT),
            ('req_we', 1, Direction.FANOUT),
            ('req_size', 2, Direction.FANOUT),
            ('req_unsigned', 1, Direction.FANOUT),
            ('req_valid', 1, Direction.FANOUT),
            ('req_ready', 1, Direction.FANIN),

            ('rsp_data', 32, Direction.FANIN),
            ('rsp_valid', 1, Direction.FANIN),
            ('rsp_ready', 1, Direction.FANOUT),
        ])


class RISCVCore(Elaboratable):
    def __init__(self):
        self.instruction_stream = Record(InstructionStream())
        self.data_stream = Record(DataStream())

    def elaborate(self, platform):
        m = Module()

        """
        Address Generation
        """
        a_arbitration = Arbitration(name='a_arbitration')
        a_arbitration.elaborate(m)

        a_program_counter = Signal(unsigned(32))
        with m.If(a_arbitration.firing):
            m.d.sync += a_program_counter.eq(a_program_counter + 4)

        """
        Instruction Fetch
        """
        # Arbitration
        f_arbitration = Arbitration(name='f_arbitration')
        f_arbitration.elaborate(m, a_arbitration)

        # Program counter
        f_program_counter = Signal(unsigned(32))
        with m.If(f_arbitration.moving):
            m.d.sync += f_program_counter.eq(a_program_counter)

        # Create instruction request
        m.d.comb += [
            self.instruction_stream.req_addr.eq(f_program_counter),
            self.instruction_stream.req_valid.eq(f_arbitration.valid & ~f_arbitration.halted_by_next & ~f_arbitration.remove),
        ]
        m.d.comb += f_arbitration.halted_by_self.eq(f_arbitration.valid & ~self.instruction_stream.req_ready)

        """
        Instruction Decode
        """
        # Arbitration
        d_arbitration = Arbitration(name='d_arbitration')
        d_arbitration.elaborate(m, f_arbitration)

        # Program counter
        d_program_counter = Signal(unsigned(32))
        with m.If(d_arbitration.moving):
            m.d.sync += d_program_counter.eq(f_program_counter)

        # Accept instruction response
        m.d.comb += [
            self.instruction_stream.rsp_ready.eq(~d_arbitration.halted_by_next),
            d_arbitration.halted_by_self.eq((d_arbitration.valid | d_arbitration.remove) & ~self.instruction_stream.rsp_valid),
        ]

        # Get the intruction from the response data
        d_instruction = Signal(unsigned(32))
        m.d.comb += d_instruction.eq(self.instruction_stream.rsp_data)

        # Decode the instruction
        m.submodules.decoder = decoder = Decoder()
        d_control = Record(Control())
        m.d.comb += [
            decoder.instruction.eq(d_instruction),
            d_control.eq(decoder.control),
        ]

        # Handle branch if always taken
        with m.If(d_arbitration.firing & (d_control.branch_mode == BranchMode.ALWAYS) & (d_control.branch_type == BranchType.PC_REL)):
            m.d.comb += [
                a_arbitration.remove.eq(1),
                f_arbitration.remove.eq(1),
            ]
            m.d.sync += a_program_counter.eq(d_program_counter + d_control.immediate)

        # Create the register file
        register_file = Memory(width=32, depth=32, init=[0 for _ in range(32)])

        # Create the register file read ports
        d_rs1_read_port = register_file.read_port(transparent=False)
        d_rs2_read_port = register_file.read_port(transparent=False)
        m.submodules += [d_rs1_read_port, d_rs2_read_port]
        m.d.comb += [
            d_rs1_read_port.addr.eq(d_control.rs1),
            d_rs2_read_port.addr.eq(d_control.rs2),
            # Only enable reading the register file if this stage is moving
            d_rs1_read_port.en.eq(d_arbitration.moving),
            d_rs2_read_port.en.eq(d_arbitration.moving),
        ]

        # Forwarded values
        d_rs1_value_forwarded = Signal(unsigned(32))
        d_rs2_value_forwarded = Signal(unsigned(32))
        d_rs1_is_forwarded = Signal()
        d_rs2_is_forwarded = Signal()

        """
        Execute
        """
        # Arbitration
        x_arbitration = Arbitration(name='x_arbitration')
        x_arbitration.elaborate(m, d_arbitration)

        # Get the program counter, instruction and control signals
        x_program_counter = Signal(unsigned(32))
        x_instruction = Signal(unsigned(32))
        x_control = Record(Control())
        with m.If(x_arbitration.moving):
            m.d.sync += x_program_counter.eq(d_program_counter)
            m.d.sync += x_instruction.eq(d_instruction)
            m.d.sync += x_control.eq(d_control)

        # Register file values
        x_rs1_value_read = Signal(unsigned(32))
        x_rs2_value_read = Signal(unsigned(32))
        m.d.comb += [
            x_rs1_value_read.eq(d_rs1_read_port.data),
            x_rs2_value_read.eq(d_rs2_read_port.data),
        ]

        # Forwarded register file values
        x_rs1_value_forwarded = Signal(unsigned(32))
        x_rs2_value_forwarded = Signal(unsigned(32))
        x_rs1_is_forwarded = Signal()
        x_rs2_is_forwarded = Signal()
        with m.If(x_arbitration.moving):
            m.d.sync += [
                x_rs1_value_forwarded.eq(d_rs1_value_forwarded),
                x_rs2_value_forwarded.eq(d_rs2_value_forwarded),
                x_rs1_is_forwarded.eq(d_rs1_is_forwarded),
                x_rs2_is_forwarded.eq(d_rs2_is_forwarded),
            ]

        # Select the correct register file values
        x_rs1_value = Signal(unsigned(32))
        x_rs2_value = Signal(unsigned(32))
        m.d.comb += [
            x_rs1_value.eq(Mux(x_rs1_is_forwarded, x_rs1_value_forwarded, x_rs1_value_read)),
            x_rs2_value.eq(Mux(x_rs2_is_forwarded, x_rs2_value_forwarded, x_rs2_value_read)),
        ]

        # Load the ALU inputs
        x_alu_left = Signal(unsigned(32))
        x_alu_right = Signal(unsigned(32))

        with m.Switch(x_control.alu_left_select):
            with m.Case(ALULeft.RS1):
                m.d.comb += x_alu_left.eq(x_rs1_value)
            with m.Case(ALULeft.PC):
                m.d.comb += x_alu_left.eq(x_program_counter)
            with m.Case(ALULeft.ZERO):
                m.d.comb += x_alu_left.eq(0)

        with m.Switch(x_control.alu_right_select):
            with m.Case(ALURight.RS2):
                m.d.comb += x_alu_right.eq(x_rs2_value)
            with m.Case(ALURight.IMM):
                m.d.comb += x_alu_right.eq(x_control.immediate)
            with m.Case(ALURight.FOUR):
                m.d.comb += x_alu_right.eq(4)

        # Create a signal for the ALU output
        x_alu_result = Signal(unsigned(32))

        # Do the ALU calculations
        with m.Switch(x_control.alu_operation):
            with m.Case(ALUOperation.ADD_SUB):
                with m.If(x_control.alu_mode_switch):
                    m.d.comb += x_alu_result.eq(x_alu_left - x_alu_right)
                with m.Else():
                    m.d.comb += x_alu_result.eq(x_alu_left + x_alu_right)
            with m.Case(ALUOperation.SHL):
                m.d.comb += x_alu_result.eq(x_alu_left << x_alu_right[0:5])
            with m.Case(ALUOperation.SLT):
                m.d.comb += x_alu_result.eq(x_alu_left.as_signed() < x_alu_right.as_signed())
            with m.Case(ALUOperation.SLTU):
                m.d.comb += x_alu_result.eq(x_alu_left < x_alu_right)
            with m.Case(ALUOperation.XOR):
                m.d.comb += x_alu_result.eq(x_alu_left ^ x_alu_right)
            with m.Case(ALUOperation.SHR):
                with m.If(x_control.alu_mode_switch):
                    m.d.comb += x_alu_result.eq(x_alu_left.as_signed() >> x_alu_right[0:5])
                with m.Else():
                    m.d.comb += x_alu_result.eq(x_alu_left >> x_alu_right[0:5])
            with m.Case(ALUOperation.OR):
                m.d.comb += x_alu_result.eq(x_alu_left | x_alu_right)
            with m.Case(ALUOperation.AND):
                m.d.comb += x_alu_result.eq(x_alu_left & x_alu_right)

        x_muldiv_intermediate = Signal(unsigned(64))
        x_muldiv_result = Signal(unsigned(32))
        with m.Switch(x_control.alu_operation):
            with m.Case(Funct3Mul.MUL):
                m.d.comb += [
                    x_muldiv_intermediate.eq(x_rs1_value * x_rs2_value),
                    x_muldiv_result.eq(x_muldiv_intermediate[0:32])
                ]
            with m.Case(Funct3Mul.MULH):
                m.d.comb += [
                    x_muldiv_intermediate.eq(x_rs1_value.as_signed() * x_rs2_value.as_signed()),
                    x_muldiv_result.eq(x_muldiv_intermediate[32:64])
                ]
            with m.Case(Funct3Mul.MULHSU):
                m.d.comb += [
                    x_muldiv_intermediate.eq(x_rs1_value.as_signed() * x_rs2_value),
                    x_muldiv_result.eq(x_muldiv_intermediate[32:64])
                ]
            with m.Case(Funct3Mul.MULHU):
                m.d.comb += [
                    x_muldiv_intermediate.eq(x_rs1_value * x_rs2_value),
                    x_muldiv_result.eq(x_muldiv_intermediate[32:64])
                ]

        # Determine if this is a branch
        x_branch_taken = Signal()
        with m.If(x_control.branch_mode == BranchMode.ALWAYS):
            m.d.comb += x_branch_taken.eq(x_control.branch_type == BranchType.REG_REL)
        with m.Elif(x_control.branch_mode == BranchMode.COND_ZERO):
            m.d.comb += x_branch_taken.eq(x_alu_result == 0)
        with m.Elif(x_control.branch_mode == BranchMode.COND_ONE):
            m.d.comb += x_branch_taken.eq(x_alu_result != 0)

        # Determine the target of the branch
        x_branch_target = Signal(unsigned(32))
        with m.Switch(x_control.branch_type):
            with m.Case(BranchType.PC_REL):
                m.d.comb += x_branch_target.eq(x_program_counter + x_control.immediate)
            with m.Case(BranchType.REG_REL):
                m.d.comb += x_branch_target.eq(x_rs1_value + x_control.immediate)

        """
        Memory
        """
        # Arbitration
        m_arbitration = Arbitration(name='m_arbitration')
        m_arbitration.elaborate(m, x_arbitration)

        m_program_counter = Signal(unsigned(32))
        m_instruction = Signal(unsigned(32))
        m_control = Record(Control())
        m_alu_result = Signal(unsigned(32))
        m_muldiv_result = Signal(unsigned(32))
        m_rs2_value = Signal(unsigned(32))
        m_branch_taken = Signal()
        m_branch_target = Signal(unsigned(32))
        with m.If(m_arbitration.moving):
            m.d.sync += m_program_counter.eq(x_program_counter)
            m.d.sync += m_instruction.eq(x_instruction)
            m.d.sync += m_control.eq(x_control)
            m.d.sync += m_alu_result.eq(x_alu_result)
            m.d.sync += m_muldiv_result.eq(x_muldiv_result)
            m.d.sync += m_rs2_value.eq(x_rs2_value)
            m.d.sync += m_branch_taken.eq(x_branch_taken)
            m.d.sync += m_branch_target.eq(x_branch_target)

        # Handle the branch if taken
        with m.If(m_arbitration.firing & m_branch_taken):
            m.d.comb += [
                a_arbitration.remove.eq(1),
                f_arbitration.remove.eq(1),
                d_arbitration.remove.eq(1),
                x_arbitration.remove.eq(1),
            ]
            m.d.sync += a_program_counter.eq(m_branch_target)

        # Create memory access request
        m.d.comb += [
            self.data_stream.req_addr.eq(m_alu_result),
            # When this is a write request RS2 contains the write value
            self.data_stream.req_data.eq(m_rs2_value),
            # Set the correct byte select bits
            self.data_stream.req_size.eq(m_control.mem_size),
            # Set the write enable
            self.data_stream.req_we.eq(m_control.mem_we),
            # The request is valid only if the current stage is executing a memory operation
            self.data_stream.req_valid.eq(m_arbitration.valid & ~m_arbitration.halted_by_next & ~m_arbitration.remove & m_control.mem_enable),
            # Set the unsigned flag
            self.data_stream.req_unsigned.eq(m_control.mem_unsigned),
        ]
        # Halt the memory stage if this is a memory request but the bus is not ready
        m.d.comb += m_arbitration.halted_by_self.eq(m_arbitration.valid & ~self.data_stream.req_ready & m_control.mem_enable)

        """
        Writeback
        """
        # Arbitration
        w_arbitration = Arbitration(name='w_arbitration')
        w_arbitration.elaborate(m, m_arbitration)

        # Get the program counter, instruction, control signals and alu result
        w_program_counter = Signal(unsigned(32))
        w_instruction = Signal(unsigned(32))
        w_control = Record(Control())
        w_alu_result = Signal(unsigned(32))
        w_muldiv_result = Signal(unsigned(32))
        with m.If(w_arbitration.moving):
            m.d.sync += w_program_counter.eq(m_program_counter)
            m.d.sync += w_instruction.eq(m_instruction)
            m.d.sync += w_control.eq(m_control)
            m.d.sync += w_alu_result.eq(m_alu_result)
            m.d.sync += w_muldiv_result.eq(m_muldiv_result)

        # Accept memory responses
        m.d.comb += [
            self.data_stream.rsp_ready.eq(w_arbitration.valid & w_control.mem_enable),
            w_arbitration.halted_by_self.eq(w_arbitration.valid & w_control.mem_enable & ~self.data_stream.rsp_valid),
        ]

        # Determine the data to write to the register file
        w_write_data = Signal(unsigned(32))
        with m.Switch(w_control.writeback_select):
            with m.Case(WritebackSelect.ALU):
                m.d.comb += w_write_data.eq(w_alu_result)
            with m.Case(WritebackSelect.MEMORY):
                m.d.comb += w_write_data.eq(self.data_stream.rsp_data)
            with m.Case(WritebackSelect.MULDIV):
                m.d.comb += w_write_data.eq(w_muldiv_result)

        # Create a write port to the register file
        w_write_port = register_file.write_port()
        m.submodules += w_write_port

        # Connect the write port
        m.d.comb += [
            w_write_port.addr.eq(w_control.rd),
            w_write_port.data.eq(w_write_data),
            w_write_port.en.eq(w_arbitration.firing & w_control.register_write),
        ]


        """
        Hazard detection and forwarding logic
        """
        with m.If(
            (x_arbitration.valid & (x_control.writeback_select != WritebackSelect.ALU) & x_control.register_write & ((x_control.rd == d_control.rs1) | (x_control.rd == d_control.rs2))) |
            (m_arbitration.valid & (m_control.writeback_select != WritebackSelect.ALU) & m_control.register_write & ((m_control.rd == d_control.rs1) | (m_control.rd == d_control.rs2)))
        ):
            m.d.comb += d_arbitration.halted_by_next.eq(1)
        with m.Else():
            stages = [
                (x_arbitration, x_control, x_alu_result),
                (m_arbitration, m_control, m_alu_result),
                (w_arbitration, w_control, w_write_data),
            ]
            with m.If(d_control.rs1 != 0):
                for (arb, ctl, val) in reversed(stages):
                    with m.If(arb.valid & ctl.register_write & (ctl.rd == d_control.rs1)):
                        m.d.comb += [
                            d_rs1_value_forwarded.eq(val),
                            d_rs1_is_forwarded.eq(1),
                        ]
            with m.If(d_control.rs2 != 0):
                for (arb, ctl, val) in reversed(stages):
                    with m.If(arb.valid & ctl.register_write & (ctl.rd == d_control.rs2)):
                        m.d.comb += [
                            d_rs2_value_forwarded.eq(val),
                            d_rs2_is_forwarded.eq(1),
                        ]

        return m
