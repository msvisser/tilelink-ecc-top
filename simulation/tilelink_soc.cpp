#include "tilelink_soc.h"

#if defined(CXXRTL_INCLUDE_CAPI_IMPL) || \
    defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_capi.cc>
#endif

#if defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_vcd_capi.cc>
#endif

using namespace cxxrtl_yosys;

namespace cxxrtl_design {

bool p_top::eval() {
	bool converged = true;
	bool posedge_p_clk = this->posedge_p_clk();
	value<2> i_procmux_24_55034__CMP;
	value<2> i_procmux_24_55033__CMP;
	value<2> i_procmux_24_55019__CMP;
	value<3> i_procmux_24_54989__CMP;
	value<3> i_procmux_24_54988__CMP;
	value<1> i_procmux_24_54739__Y;
	value<5> i_procmux_24_53899__Y;
	value<32> i_procmux_24_53896__Y;
	value<32> i_procmux_24_53893__Y;
	value<8> i_procmux_24_53888__Y;
	value<57> i_procmux_24_53885__Y;
	value<57> i_procmux_24_53882__Y;
	value<1> i_procmux_24_52991__Y;
	value<1> i_procmux_24_52832__Y;
	value<2> i_procmux_24_52766__CMP;
	value<2> i_procmux_24_52749__CMP;
	value<2> i_procmux_24_52732__CMP;
	value<2> i_procmux_24_52715__CMP;
	value<2> i_procmux_24_52653__CMP;
	value<2> i_procmux_24_52636__CMP;
	value<2> i_procmux_24_52491__Y;
	value<2> i_procmux_24_52492__CMP;
	value<13> i_procmux_24_52412__Y;
	value<32> i_procmux_24_52409__Y;
	value<32> i_procmux_24_52406__Y;
	value<13> i_procmux_24_52403__Y;
	value<32> i_procmux_24_52400__Y;
	value<32> i_procmux_24_52397__Y;
	value<13> i_procmux_24_52394__Y;
	value<32> i_procmux_24_52391__Y;
	value<32> i_procmux_24_52388__Y;
	value<13> i_procmux_24_52385__Y;
	value<32> i_procmux_24_52382__Y;
	value<32> i_procmux_24_52379__Y;
	value<2> i_procmux_24_52232__Y;
	value<2> i_procmux_24_52233__CMP;
	// \hdlname: tl_rom_arbiter bus__a__address
	// \src: tilelink_soc.v:28802.18-28862.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<15> p_tl__rom__arbiter_2e_bus____a____address;
	// \hdlname: tl_rom_arbiter bus__a__valid
	// \src: tilelink_soc.v:28802.18-28862.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<1> p_tl__rom__arbiter_2e_bus____a____valid;
	// \hdlname: tl_rom_arbiter bus__d__source
	// \src: tilelink_soc.v:28802.18-28862.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<2> p_tl__rom__arbiter_2e_bus____d____source;
	// \hdlname: tl_rom_arbiter rr_grant
	// \src: tilelink_soc.v:28802.18-28862.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:42
	value<1> p_tl__rom__arbiter_2e_rr__grant;
	// \hdlname: tl_rom_arbiter tl_data_rom__d__valid
	// \src: tilelink_soc.v:28802.18-28862.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:113
	value<1> p_tl__rom__arbiter_2e_tl__data__rom____d____valid;
	// \hdlname: tl_rom_arbiter tl_instr_rom__d__valid
	// \src: tilelink_soc.v:28802.18-28862.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:111
	value<1> p_tl__rom__arbiter_2e_tl__instr__rom____d____valid;
	// \hdlname: tl_rom_arbiter rr rst
	// \src: tilelink_soc.v:28802.18-28862.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:27308.10-27313.4
	value<1> p_tl__rom__arbiter_2e_rr_2e_rst;
	// \hdlname: tl_rom_arbiter rr requests
	// \src: tilelink_soc.v:28802.18-28862.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:41|tilelink_soc.v:27308.10-27313.4
	value<2> p_tl__rom__arbiter_2e_rr_2e_requests;
	// \hdlname: tl_rom_arbiter rr clk
	// \src: tilelink_soc.v:28802.18-28862.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:27308.10-27313.4
	value<1> p_tl__rom__arbiter_2e_rr_2e_clk;
	// \hdlname: tl_rom bus__a__ready
	// \src: tilelink_soc.v:28779.10-28801.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<1> p_tl__rom_2e_bus____a____ready;
	// \hdlname: tl_rom bus__d__data
	// \src: tilelink_soc.v:28779.10-28801.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<32> p_tl__rom_2e_bus____d____data;
	// \hdlname: tl_rom bus__d__source
	// \src: tilelink_soc.v:28779.10-28801.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<2> p_tl__rom_2e_bus____d____source;
	// \hdlname: tl_rom bus__d__valid
	// \src: tilelink_soc.v:28779.10-28801.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<1> p_tl__rom_2e_bus____d____valid;
	// \hdlname: tl_rom clk
	// \src: tilelink_soc.v:28779.10-28801.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__rom_2e_clk;
	// \hdlname: tl_rom rst
	// \src: tilelink_soc.v:28779.10-28801.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__rom_2e_rst;
	// \src: tilelink_soc.v:28779.10-28801.4|tilelink_soc.v:26822.14-26822.20
	value<32> i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_26822_24_35523__DATA;
	// \src: tilelink_soc.v:28779.10-28801.4|tilelink_soc.v:26828.17-26828.126
	value<1> i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_26828_24_35526__Y;
	// \hdlname: tl_ram_arbiter bus__a__address
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<15> p_tl__ram__arbiter_2e_bus____a____address;
	// \hdlname: tl_ram_arbiter bus__a__data
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<32> p_tl__ram__arbiter_2e_bus____a____data;
	// \hdlname: tl_ram_arbiter bus__a__mask
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<4> p_tl__ram__arbiter_2e_bus____a____mask;
	// \hdlname: tl_ram_arbiter bus__a__opcode
	// \enum_value_111: AcquirePerm
	// \enum_value_110: AcquireBlock
	// \enum_value_101: Intent
	// \enum_value_100: Get
	// \enum_value_011: LogicalData
	// \enum_value_010: ArithmeticData
	// \enum_value_001: PutPartialData
	// \enum_value_000: PutFullData
	// \enum_base_type: ChannelAOpcode
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<3> p_tl__ram__arbiter_2e_bus____a____opcode;
	// \hdlname: tl_ram_arbiter bus__a__valid
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<1> p_tl__ram__arbiter_2e_bus____a____valid;
	// \hdlname: tl_ram_arbiter bus__d__source
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<2> p_tl__ram__arbiter_2e_bus____d____source;
	// \hdlname: tl_ram_arbiter rr_grant
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:42
	value<1> p_tl__ram__arbiter_2e_rr__grant;
	// \hdlname: tl_ram_arbiter tl_data_ram__d__valid
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:114
	value<1> p_tl__ram__arbiter_2e_tl__data__ram____d____valid;
	// \hdlname: tl_ram_arbiter tl_instr_ram__d__valid
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:112
	value<1> p_tl__ram__arbiter_2e_tl__instr__ram____d____valid;
	// \hdlname: tl_ram_arbiter rr rst
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:18130.10-18135.4
	value<1> p_tl__ram__arbiter_2e_rr_2e_rst;
	// \hdlname: tl_ram_arbiter rr requests
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:41|tilelink_soc.v:18130.10-18135.4
	value<2> p_tl__ram__arbiter_2e_rr_2e_requests;
	// \hdlname: tl_ram_arbiter rr clk
	// \src: tilelink_soc.v:28718.18-28778.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:18130.10-18135.4
	value<1> p_tl__ram__arbiter_2e_rr_2e_clk;
	// \hdlname: tl_ram bus__a__mask
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<4> p_tl__ram_2e_bus____a____mask;
	// \hdlname: tl_ram bus__a__opcode
	// \enum_value_111: AcquirePerm
	// \enum_value_110: AcquireBlock
	// \enum_value_101: Intent
	// \enum_value_100: Get
	// \enum_value_011: LogicalData
	// \enum_value_010: ArithmeticData
	// \enum_value_001: PutPartialData
	// \enum_value_000: PutFullData
	// \enum_base_type: ChannelAOpcode
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<3> p_tl__ram_2e_bus____a____opcode;
	// \hdlname: tl_ram bus__a__ready
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<1> p_tl__ram_2e_bus____a____ready;
	// \hdlname: tl_ram bus__a__valid
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<1> p_tl__ram_2e_bus____a____valid;
	// \hdlname: tl_ram bus__d__data
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<32> p_tl__ram_2e_bus____d____data;
	// \hdlname: tl_ram bus__d__source
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<2> p_tl__ram_2e_bus____d____source;
	// \hdlname: tl_ram bus__d__valid
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<1> p_tl__ram_2e_bus____d____valid;
	// \hdlname: tl_ram clk
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__ram_2e_clk;
	// \hdlname: tl_ram memory_w_en
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:62
	value<4> p_tl__ram_2e_memory__w__en;
	// \hdlname: tl_ram rst
	// \src: tilelink_soc.v:28695.10-28717.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__ram_2e_rst;
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17614.14-17614.20
	value<32> i_flatten_5c_tl__ram_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_17614_24_10808__DATA;
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17643.18-17643.128
	value<1> i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_17643_24_10834__Y;
	// \hdlname: tl_periph $11
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_11;
	// \hdlname: tl_periph $110
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_110;
	// \hdlname: tl_periph $158
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_158;
	// \hdlname: tl_periph $23
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_23;
	// \hdlname: tl_periph $35
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_35;
	// \hdlname: tl_periph $47
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_47;
	// \hdlname: tl_periph $62
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_62;
	// \hdlname: tl_periph $74
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_74;
	// \hdlname: tl_periph $86
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_86;
	// \hdlname: tl_periph $98
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:44
	value<1> p_tl__periph_2e__24_98;
	// \hdlname: tl_periph bus__a__address
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:20
	value<4> p_tl__periph_2e_bus____a____address;
	// \hdlname: tl_periph bus__a__mask
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:20
	value<4> p_tl__periph_2e_bus____a____mask;
	// \hdlname: tl_periph bus__a__opcode
	// \enum_value_111: AcquirePerm
	// \enum_value_110: AcquireBlock
	// \enum_value_101: Intent
	// \enum_value_100: Get
	// \enum_value_011: LogicalData
	// \enum_value_010: ArithmeticData
	// \enum_value_001: PutPartialData
	// \enum_value_000: PutFullData
	// \enum_base_type: ChannelAOpcode
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:20
	value<3> p_tl__periph_2e_bus____a____opcode;
	// \hdlname: tl_periph bus__a__ready
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:20
	value<1> p_tl__periph_2e_bus____a____ready;
	// \hdlname: tl_periph bus__a__valid
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:20
	value<1> p_tl__periph_2e_bus____a____valid;
	// \hdlname: tl_periph clk
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__periph_2e_clk;
	// \hdlname: tl_periph rst
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__periph_2e_rst;
	// \src: tilelink_soc.v:28671.13-28694.4|tilelink_soc.v:8720.19-8720.116
	value<1> i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_8720_24_2433__Y;
	// \src: tilelink_soc.v:28671.13-28694.4|tilelink_soc.v:8740.18-8740.111
	value<65> i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y;
	// \src: tilelink_soc.v:28671.13-28694.4|tilelink_soc.v:8791.3-8843.6
	value<1> i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_2496;
	// \src: tilelink_soc.v:28671.13-28694.4|tilelink_soc.v:8791.3-8843.6
	value<1> i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_2498;
	// \src: tilelink_soc.v:28671.13-28694.4|tilelink_soc.v:8791.3-8843.6
	value<1> i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_2500;
	// \hdlname: tl_instr_decoder _bus__a__address
	// \src: tilelink_soc.v:28610.20-28670.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:42
	value<32> p_tl__instr__decoder_2e___bus____a____address;
	// \hdlname: tl_instr_decoder _bus__d__data
	// \src: tilelink_soc.v:28610.20-28670.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:42
	value<32> p_tl__instr__decoder_2e___bus____d____data;
	// \hdlname: tl_instr_decoder rr_grant
	// \src: tilelink_soc.v:28610.20-28670.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:11
	value<2> p_tl__instr__decoder_2e_rr__grant;
	// \hdlname: tl_instr_decoder tl_instr_ram__a__valid
	// \src: tilelink_soc.v:28610.20-28670.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:112
	value<1> p_tl__instr__decoder_2e_tl__instr__ram____a____valid;
	// \hdlname: tl_instr_decoder tl_instr_rom__a__valid
	// \src: tilelink_soc.v:28610.20-28670.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:111
	value<1> p_tl__instr__decoder_2e_tl__instr__rom____a____valid;
	// \src: tilelink_soc.v:28610.20-28670.4|tilelink_soc.v:6699.18-6699.118|tilelink_soc.v:7983.6-7988.4
	value<3> i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6699_24_2252__Y;
	// \hdlname: tl_instr_decoder rr requests
	// \src: tilelink_soc.v:28610.20-28670.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:10|tilelink_soc.v:7983.6-7988.4
	value<2> p_tl__instr__decoder_2e_rr_2e_requests;
	// \hdlname: tl_data_decoder _bus__a__address
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:42
	value<32> p_tl__data__decoder_2e___bus____a____address;
	// \hdlname: tl_data_decoder _bus__d__data
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:42
	value<32> p_tl__data__decoder_2e___bus____d____data;
	// \hdlname: tl_data_decoder bus__a__data
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:20
	value<32> p_tl__data__decoder_2e_bus____a____data;
	// \hdlname: tl_data_decoder bus__a__size
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:20
	value<2> p_tl__data__decoder_2e_bus____a____size;
	// \hdlname: tl_data_decoder bus__a__source
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:20
	value<1> p_tl__data__decoder_2e_bus____a____source;
	// \hdlname: tl_data_decoder bus__a__valid
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:20
	value<1> p_tl__data__decoder_2e_bus____a____valid;
	// \hdlname: tl_data_decoder rr_grant
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:11
	value<3> p_tl__data__decoder_2e_rr__grant;
	// \hdlname: tl_data_decoder tl_data_ram__a__valid
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:114
	value<1> p_tl__data__decoder_2e_tl__data__ram____a____valid;
	// \hdlname: tl_data_decoder tl_data_rom__a__valid
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:113
	value<1> p_tl__data__decoder_2e_tl__data__rom____a____valid;
	// \src: tilelink_soc.v:28532.19-28609.4|tilelink_soc.v:6768.18-6768.118|tilelink_soc.v:7196.10-7201.4
	value<4> i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6768_24_2267__Y;
	// \hdlname: tl_data_decoder rr requests
	// \src: tilelink_soc.v:28532.19-28609.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:10|tilelink_soc.v:7196.10-7201.4
	value<3> p_tl__data__decoder_2e_rr_2e_requests;
	// \hdlname: instruction_master $19
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:70
	value<1> p_instruction__master_2e__24_19;
	// \hdlname: instruction_master $21
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:84
	value<1> p_instruction__master_2e__24_21;
	// \hdlname: instruction_master $23
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:93
	value<1> p_instruction__master_2e__24_23;
	// \hdlname: instruction_master $25
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:95
	value<1> p_instruction__master_2e__24_25;
	// \hdlname: instruction_master $27
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:102
	value<1> p_instruction__master_2e__24_27;
	// \hdlname: instruction_master $38
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:93
	value<1> p_instruction__master_2e__24_38;
	// \hdlname: instruction_master $42
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:93
	value<1> p_instruction__master_2e__24_42;
	// \hdlname: instruction_master bus__a__ready
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____a____ready;
	// \hdlname: instruction_master bus__a__valid
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____a____valid;
	// \hdlname: instruction_master bus__d__source
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____d____source;
	// \hdlname: instruction_master bus__d__valid
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____d____valid;
	// \hdlname: instruction_master clk
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_instruction__master_2e_clk;
	// \hdlname: instruction_master instruction_stream__req_valid
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:20
	value<1> p_instruction__master_2e_instruction__stream____req__valid;
	// \hdlname: instruction_master instruction_stream__rsp_data
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:20
	value<32> p_instruction__master_2e_instruction__stream____rsp__data;
	// \hdlname: instruction_master instruction_stream__rsp_ready
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:20
	value<1> p_instruction__master_2e_instruction__stream____rsp__ready;
	// \hdlname: instruction_master instruction_stream__rsp_valid
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:20
	value<1> p_instruction__master_2e_instruction__stream____rsp__valid;
	// \hdlname: instruction_master rst
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_instruction__master_2e_rst;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6461.3-6557.6
	value<2> i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2189;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6461.3-6557.6
	value<2> i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_2190;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6461.3-6557.6
	value<32> i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2191;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6461.3-6557.6
	value<32> i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_2192;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6461.3-6557.6
	value<2> i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2197;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6461.3-6557.6
	value<2> i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2198;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6461.3-6557.6
	value<32> i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2199;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6461.3-6557.6
	value<32> i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_2200;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6573.3-6594.6
	value<1> i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__valid_5b_0_3a_0_5d_;
	// \src: tilelink_soc.v:28509.22-28531.4|tilelink_soc.v:6595.3-6616.6
	value<32> i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__data_5b_31_3a_0_5d_;
	// \hdlname: data_master $18
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_18;
	// \hdlname: data_master $20
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_20;
	// \hdlname: data_master $22
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_22;
	// \hdlname: data_master $24
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_24;
	// \hdlname: data_master $26
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_26;
	// \hdlname: data_master $275
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	value<1> p_data__master_2e__24_275;
	// \hdlname: data_master $28
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_28;
	// \hdlname: data_master $30
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_30;
	// \hdlname: data_master $32
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:125
	value<1> p_data__master_2e__24_32;
	// \hdlname: data_master $34
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_34;
	// \hdlname: data_master $341
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	value<1> p_data__master_2e__24_341;
	// \hdlname: data_master $343
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_343;
	// \hdlname: data_master $345
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:164
	value<1> p_data__master_2e__24_345;
	// \hdlname: data_master $36
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:164
	value<1> p_data__master_2e__24_36;
	// \hdlname: data_master $41
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_41;
	// \hdlname: data_master $44
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_44;
	// \hdlname: data_master $47
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_47;
	// \hdlname: data_master $58
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_58;
	// \hdlname: data_master $64
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_64;
	// \hdlname: data_master $73
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_73;
	// \hdlname: data_master $75
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_75;
	// \hdlname: data_master $77
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_77;
	// \hdlname: data_master $79
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_79;
	// \hdlname: data_master $81
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	value<1> p_data__master_2e__24_81;
	// \hdlname: data_master addr_local_bits
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:138
	value<2> p_data__master_2e_addr__local__bits;
	// \hdlname: data_master bus__a__address
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<32> p_data__master_2e_bus____a____address;
	// \hdlname: data_master bus__a__data
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<32> p_data__master_2e_bus____a____data;
	// \hdlname: data_master bus__a__mask
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<4> p_data__master_2e_bus____a____mask;
	// \hdlname: data_master bus__a__opcode
	// \enum_value_111: AcquirePerm
	// \enum_value_110: AcquireBlock
	// \enum_value_101: Intent
	// \enum_value_100: Get
	// \enum_value_011: LogicalData
	// \enum_value_010: ArithmeticData
	// \enum_value_001: PutPartialData
	// \enum_value_000: PutFullData
	// \enum_base_type: ChannelAOpcode
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<3> p_data__master_2e_bus____a____opcode;
	// \hdlname: data_master bus__a__ready
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____a____ready;
	// \hdlname: data_master bus__a__size
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<2> p_data__master_2e_bus____a____size;
	// \hdlname: data_master bus__a__source
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____a____source;
	// \hdlname: data_master bus__a__valid
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____a____valid;
	// \hdlname: data_master bus__d__data
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<32> p_data__master_2e_bus____d____data;
	// \hdlname: data_master bus__d__source
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____d____source;
	// \hdlname: data_master bus__d__valid
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____d____valid;
	// \hdlname: data_master clk
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_data__master_2e_clk;
	// \hdlname: data_master data_stream__req_addr
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<32> p_data__master_2e_data__stream____req__addr;
	// \hdlname: data_master data_stream__req_size
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<2> p_data__master_2e_data__stream____req__size;
	// \hdlname: data_master data_stream__req_valid
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<1> p_data__master_2e_data__stream____req__valid;
	// \hdlname: data_master data_stream__req_we
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<1> p_data__master_2e_data__stream____req__we;
	// \hdlname: data_master data_stream__rsp_ready
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<1> p_data__master_2e_data__stream____rsp__ready;
	// \hdlname: data_master data_stream__rsp_valid
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<1> p_data__master_2e_data__stream____rsp__valid;
	// \hdlname: data_master is_unsigned
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:137
	value<1> p_data__master_2e_is__unsigned;
	// \hdlname: data_master read_data
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:135
	value<32> p_data__master_2e_read__data;
	// \hdlname: data_master req_size
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:136
	value<2> p_data__master_2e_req__size;
	// \hdlname: data_master rst
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_data__master_2e_rst;
	// \src: tilelink_soc.v:28481.15-28508.4|tilelink_soc.v:5190.3-5262.6
	value<2> i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2035;
	// \src: tilelink_soc.v:28481.15-28508.4|tilelink_soc.v:5190.3-5262.6
	value<2> i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_2036;
	// \src: tilelink_soc.v:28481.15-28508.4|tilelink_soc.v:5190.3-5262.6
	value<2> i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2039;
	// \src: tilelink_soc.v:28481.15-28508.4|tilelink_soc.v:5190.3-5262.6
	value<2> i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2040;
	// \src: tilelink_soc.v:28481.15-28508.4|tilelink_soc.v:5367.3-5388.6
	value<1> i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__valid_5b_0_3a_0_5d_;
	// \src: tilelink_soc.v:28481.15-28508.4|tilelink_soc.v:5389.3-5410.6
	value<32> i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__data_5b_31_3a_0_5d_;
	// \src: tilelink_soc.v:28481.15-28508.4|tilelink_soc.v:5635.3-5686.6
	value<32> i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_;
	// \src: tilelink_soc.v:28481.15-28508.4|tilelink_soc.v:5635.3-5686.6
	value<32> i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_;
	// \src: tilelink_soc.v:28481.15-28508.4|tilelink_soc.v:5635.3-5686.6
	value<32> i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_;
	// \hdlname: core $251
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:51
	value<1> p_core_2e__24_251;
	// \hdlname: core $356
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:25
	value<1> p_core_2e__24_356;
	// \hdlname: core $44
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:47
	value<1> p_core_2e__24_44;
	// \hdlname: core $448
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:47
	value<1> p_core_2e__24_448;
	// \hdlname: core $470
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:47
	value<1> p_core_2e__24_470;
	// \hdlname: core $492
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:47
	value<1> p_core_2e__24_492;
	// \hdlname: core $514
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:47
	value<1> p_core_2e__24_514;
	// \hdlname: core $536
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:47
	value<1> p_core_2e__24_536;
	// \hdlname: core $567
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:47
	value<1> p_core_2e__24_567;
	// \hdlname: core $571
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:373
	value<1> p_core_2e__24_571;
	// \hdlname: core $578
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:384
	value<1> p_core_2e__24_578;
	// \hdlname: core $587
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:395
	value<1> p_core_2e__24_587;
	// \hdlname: core $653
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:407
	value<1> p_core_2e__24_653;
	// \hdlname: core $79
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:25
	value<1> p_core_2e__24_79;
	// \hdlname: core $807
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:508
	value<1> p_core_2e__24_807;
	// \hdlname: core $809
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:518
	value<1> p_core_2e__24_809;
	// \hdlname: core $857
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:508
	value<1> p_core_2e__24_857;
	// \hdlname: core $859
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:518
	value<1> p_core_2e__24_859;
	// \hdlname: core $907
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:508
	value<1> p_core_2e__24_907;
	// \hdlname: core $909
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:525
	value<1> p_core_2e__24_909;
	// \hdlname: core $957
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:508
	value<1> p_core_2e__24_957;
	// \hdlname: core $959
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:525
	value<1> p_core_2e__24_959;
	// \hdlname: core a_arbitration__halted
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_a__arbitration____halted;
	// \hdlname: core a_arbitration__remove
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_a__arbitration____remove;
	// \hdlname: core a_btb_w_en
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:87
	value<1> p_core_2e_a__btb__w__en;
	// \hdlname: core clk
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_core_2e_clk;
	// \hdlname: core d_arbitration__halted
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_d__arbitration____halted;
	// \hdlname: core d_arbitration__halted_by_next
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_d__arbitration____halted__by__next;
	// \hdlname: core d_arbitration__remove
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_d__arbitration____remove;
	// \hdlname: core d_control__rs1
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:165
	value<5> p_core_2e_d__control____rs1;
	// \hdlname: core d_control__rs2
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:165
	value<5> p_core_2e_d__control____rs2;
	// \hdlname: core f_arbitration__halted
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_f__arbitration____halted;
	// \hdlname: core f_arbitration__halted_by_next
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_f__arbitration____halted__by__next;
	// \hdlname: core f_arbitration__remove
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_f__arbitration____remove;
	// \hdlname: core f_btb_result__predictor
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:101
	value<2> p_core_2e_f__btb__result____predictor;
	// \hdlname: core f_btb_result__tag
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:101
	value<22> p_core_2e_f__btb__result____tag;
	// \hdlname: core f_btb_result__target
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:101
	value<32> p_core_2e_f__btb__result____target;
	// \hdlname: core f_btb_result__valid
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:101
	value<1> p_core_2e_f__btb__result____valid;
	// \hdlname: core f_predict_branch_taken
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:109
	value<1> p_core_2e_f__predict__branch__taken;
	// \hdlname: core m_arbitration__halted
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_m__arbitration____halted;
	// \hdlname: core m_arbitration__halted_by_next
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_m__arbitration____halted__by__next;
	// \hdlname: core register_file_w_en
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:493
	value<1> p_core_2e_register__file__w__en;
	// \hdlname: core rst
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_core_2e_rst;
	// \hdlname: core w_arbitration__halted
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_w__arbitration____halted;
	// \hdlname: core w_write_data
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:483
	value<32> p_core_2e_w__write__data;
	// \hdlname: core x_alu_left
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:246
	value<32> p_core_2e_x__alu__left;
	// \hdlname: core x_alu_result
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:266
	value<32> p_core_2e_x__alu__result;
	// \hdlname: core x_alu_right
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:247
	value<32> p_core_2e_x__alu__right;
	// \hdlname: core x_arbitration__halted
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_x__arbitration____halted;
	// \hdlname: core x_arbitration__remove
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_x__arbitration____remove;
	// \hdlname: core x_muldiv_intermediate
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:293
	value<64> p_core_2e_x__muldiv__intermediate;
	// \hdlname: core x_rs1_value
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:238
	value<32> p_core_2e_x__rs1__value;
	// \hdlname: core x_rs2_value
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:239
	value<32> p_core_2e_x__rs2__value;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2058.14-2058.19
	value<57> i_flatten_5c_core_2e__24_memrd_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2058_24_299__DATA;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2105.14-2105.27
	value<32> i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_2105_24_308__DATA;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2108.14-2108.27
	value<32> i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_2108_24_309__DATA;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2120.19-2120.119
	value<1> i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2120_24_317__Y;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2121.19-2121.132
	value<1> i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2121_24_318__Y;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2223.19-2223.153
	value<32> i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_2223_24_420__Y;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2224.19-2224.153
	value<32> i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_2224_24_421__Y;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2250.19-2250.159
	value<1> i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2397.19-2397.136
	value<1> i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2400.19-2400.106
	value<1> i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:3179.3-3227.6
	value<32> i_flatten_5c_core_2e__24_2_5c_mispredict__with__history_24_next_5b_31_3a_0_5d__24_932;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:3179.3-3227.6
	value<32> i_flatten_5c_core_2e__24_4_5c_mispredict__with__history_24_next_5b_31_3a_0_5d__24_934;
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:3776.3-3821.6
	value<32> i_flatten_5c_core_2e__24_2_5c_a__program__counter_24_next_5b_31_3a_0_5d__24_1047;
	// \hdlname: core decoder instruction
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:79|tilelink_soc.v:2700.11-2719.4
	value<32> p_core_2e_decoder_2e_instruction;
	// \hdlname: core decoder control__writeback_select
	// \enum_value_10: MULDIV
	// \enum_value_01: MEMORY
	// \enum_value_00: ALU
	// \enum_base_type: WritebackSelect
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<2> p_core_2e_decoder_2e_control____writeback__select;
	// \hdlname: core decoder control__register_write
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<1> p_core_2e_decoder_2e_control____register__write;
	// \hdlname: core decoder control__rd
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<5> p_core_2e_decoder_2e_control____rd;
	// \hdlname: core decoder control__mem_we
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<1> p_core_2e_decoder_2e_control____mem__we;
	// \hdlname: core decoder control__mem_unsigned
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<1> p_core_2e_decoder_2e_control____mem__unsigned;
	// \hdlname: core decoder control__mem_size
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<2> p_core_2e_decoder_2e_control____mem__size;
	// \hdlname: core decoder control__mem_enable
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<1> p_core_2e_decoder_2e_control____mem__enable;
	// \hdlname: core decoder control__immediate
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<32> p_core_2e_decoder_2e_control____immediate;
	// \hdlname: core decoder control__branch_type
	// \enum_value_1: REG_REL
	// \enum_value_0: PC_REL
	// \enum_base_type: BranchType
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<1> p_core_2e_decoder_2e_control____branch__type;
	// \hdlname: core decoder control__branch_mode
	// \enum_value_11: COND_ONE
	// \enum_value_10: COND_ZERO
	// \enum_value_01: ALWAYS
	// \enum_value_00: NEVER
	// \enum_base_type: BranchMode
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<2> p_core_2e_decoder_2e_control____branch__mode;
	// \hdlname: core decoder control__alu_right_select
	// \enum_value_10: FOUR
	// \enum_value_01: IMM
	// \enum_value_00: RS2
	// \enum_base_type: ALURight
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<2> p_core_2e_decoder_2e_control____alu__right__select;
	// \hdlname: core decoder control__alu_operation
	// \enum_value_111: AND
	// \enum_value_110: OR
	// \enum_value_101: SHR
	// \enum_value_100: XOR
	// \enum_value_011: SLTU
	// \enum_value_010: SLT
	// \enum_value_001: SHL
	// \enum_value_000: ADD_SUB
	// \enum_base_type: ALUOperation
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<3> p_core_2e_decoder_2e_control____alu__operation;
	// \hdlname: core decoder control__alu_mode_switch
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<1> p_core_2e_decoder_2e_control____alu__mode__switch;
	// \hdlname: core decoder control__alu_left_select
	// \enum_value_10: ZERO
	// \enum_value_01: PC
	// \enum_value_00: RS1
	// \enum_base_type: ALULeft
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2700.11-2719.4
	value<2> p_core_2e_decoder_2e_control____alu__left__select;
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:81
	// cell $procmux$52492_CMP0
	i_procmux_24_52492__CMP.slice<0>() = logic_not<1>(p_tl__ram_2e_last__a____opcode.curr);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:81
	// cell $procmux$52492_CMP1
	i_procmux_24_52492__CMP.slice<1>() = eq_uu<1>(p_tl__ram_2e_last__a____opcode.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:81
	// cell $procmux$52233_CMP0
	i_procmux_24_52233__CMP.slice<0>() = logic_not<1>(p_tl__rom_2e_last__a____opcode.curr);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:81
	// cell $procmux$52233_CMP1
	i_procmux_24_52233__CMP.slice<1>() = eq_uu<1>(p_tl__rom_2e_last__a____opcode.curr, value<3>{0x1u});
	// cells $procmux$52491 $procmux$52492_ANY $procmux$52493_CMP0
	i_procmux_24_52491__Y = (reduce_or<1>(i_procmux_24_52492__CMP) ? p_tl__ram_2e_last__a____source.curr : (eq_uu<1>(p_tl__ram_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__ram_2e_last__a____source.curr : value<2>{0u}));
	// cells $procmux$52232 $procmux$52233_ANY $procmux$52234_CMP0
	i_procmux_24_52232__Y = (reduce_or<1>(i_procmux_24_52233__CMP) ? p_tl__rom_2e_last__a____source.curr : (eq_uu<1>(p_tl__rom_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__rom_2e_last__a____source.curr : value<2>{0u}));
	// connection
	p_tl__ram_2e_bus____d____source = i_procmux_24_52491__Y;
	// connection
	p_tl__rom_2e_bus____d____source = i_procmux_24_52232__Y;
	// connection
	p_tl__ram__arbiter_2e_bus____d____source = p_tl__ram_2e_bus____d____source;
	// connection
	p_tl__rom__arbiter_2e_bus____d____source = p_tl__rom_2e_bus____d____source;
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:77
	// cell $procmux$52477
	p_tl__ram_2e_bus____d____valid = (p_tl__ram_2e_last__a____ready.curr ? p_tl__ram_2e_last__a____valid.curr : value<1>{0u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:77
	// cell $procmux$52218
	p_tl__rom_2e_bus____d____valid = (p_tl__rom_2e_last__a____ready.curr ? p_tl__rom_2e_last__a____valid.curr : value<1>{0u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:66
	// cell $procmux$52266
	p_tl__ram__arbiter_2e_tl__instr__ram____d____valid = (i_procmux_24_52491__Y.slice<1>().val() ? value<1>{0u} : p_tl__ram_2e_bus____d____valid);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:66
	// cell $procmux$52043
	p_tl__rom__arbiter_2e_tl__instr__rom____d____valid = (i_procmux_24_52232__Y.slice<1>().val() ? value<1>{0u} : p_tl__rom_2e_bus____d____valid);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:66
	// cell $procmux$52293
	p_tl__ram__arbiter_2e_tl__data__ram____d____valid = (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__ram_2e_bus____d____valid : value<1>{0u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:66
	// cell $procmux$52070
	p_tl__rom__arbiter_2e_tl__data__rom____d____valid = (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__rom_2e_bus____d____valid : value<1>{0u});
	// connection
	p_tl__instr__decoder_2e_rr_2e_requests = p_tl__ram__arbiter_2e_tl__instr__ram____d____valid.concat(p_tl__rom__arbiter_2e_tl__instr__rom____d____valid).val();
	// connection
	p_tl__data__decoder_2e_rr_2e_requests = p_tl__periph_2e_bus____d____valid.curr.concat(p_tl__ram__arbiter_2e_tl__data__ram____d____valid).concat(p_tl__rom__arbiter_2e_tl__data__rom____d____valid).val();
	// cells $flatten\tl_instr_decoder.\rr.$or$tilelink_soc.v:6699$2252 $flatten\tl_instr_decoder.\rr.$and$tilelink_soc.v:6698$2251 $flatten\tl_instr_decoder.\rr.$not$tilelink_soc.v:6697$2250 $flatten\tl_instr_decoder.\rr.$sub$tilelink_soc.v:6696$2249 $flatten\tl_instr_decoder.\rr.$and$tilelink_soc.v:6703$2256 $flatten\tl_instr_decoder.\rr.$not$tilelink_soc.v:6702$2255 $flatten\tl_instr_decoder.\rr.$sub$tilelink_soc.v:6701$2254
	i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6699_24_2252__Y = or_uu<3>(and_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), not_u<5>(sub_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), value<3>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<0>()).concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<1>()).val()))).slice<1,0>().val(), and_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), not_u<5>(sub_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), value<3>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<0>()).concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<1>()).val()))).slice<4,2>().val());
	// cells $flatten\tl_data_decoder.\rr.$or$tilelink_soc.v:6768$2267 $flatten\tl_data_decoder.\rr.$and$tilelink_soc.v:6767$2266 $flatten\tl_data_decoder.\rr.$not$tilelink_soc.v:6766$2265 $flatten\tl_data_decoder.\rr.$sub$tilelink_soc.v:6765$2264 $flatten\tl_data_decoder.\rr.$and$tilelink_soc.v:6772$2271 $flatten\tl_data_decoder.\rr.$not$tilelink_soc.v:6771$2270 $flatten\tl_data_decoder.\rr.$sub$tilelink_soc.v:6770$2269
	i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6768_24_2267__Y = or_uu<4>(and_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), not_u<7>(sub_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), value<4>{0u}.concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<1,0>()).concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<2>()).val()))).slice<2,0>().val(), and_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), not_u<7>(sub_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), value<4>{0u}.concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<1,0>()).concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<2>()).val()))).slice<6,3>().val());
	// connection
	p_tl__instr__decoder_2e_rr__grant = i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6699_24_2252__Y.slice<1,0>().val();
	// connection
	p_tl__data__decoder_2e_rr__grant = i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6768_24_2267__Y.slice<2,0>().val();
	// connection
	p_data__master_2e_bus____a____address = p_core_2e_m__alu__result.curr;
	// connection
	p_tl__ram__arbiter_2e_rr__grant = p_tl__ram__arbiter_2e_rr_2e_grant.curr;
	// connection
	p_tl__rom__arbiter_2e_rr__grant = p_tl__rom__arbiter_2e_rr_2e_grant.curr;
	// cells $procmux$52991 $procmux$52994 $procmux$52305 $procmux$52997 $procmux$52082
	i_procmux_24_52991__Y = (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? p_tl__periph_2e_bus____d____source.curr : (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__ram_2e_bus____d____source.slice<0>().val() : value<1>{0u}) : (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__rom_2e_bus____d____source.slice<0>().val() : value<1>{0u}) : value<1>{0u})));
	// cells $flatten\tl_ram.$or$tilelink_soc.v:17643$10834 $procmux$52260 $procmux$53027 $procmux$52263 $procmux$52859 $flatten\tl_ram.$not$tilelink_soc.v:17642$10833
	i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_17643_24_10834__Y = or_uu<1>(not_u<1>(p_tl__ram_2e_bus____d____valid), (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? value<1>{0x1u} : value<1>{0u}) : (i_procmux_24_52491__Y.slice<1>().val() ? value<1>{0u} : (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? value<1>{0x1u} : value<1>{0u}))));
	// cells $flatten\tl_rom.$or$tilelink_soc.v:26828$35526 $procmux$52037 $procmux$52961 $procmux$52040 $procmux$52811 $flatten\tl_rom.$not$tilelink_soc.v:26827$35525
	i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_26828_24_35526__Y = or_uu<1>(not_u<1>(p_tl__rom_2e_bus____d____valid), (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? value<1>{0x1u} : value<1>{0u}) : (i_procmux_24_52232__Y.slice<1>().val() ? value<1>{0u} : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? value<1>{0x1u} : value<1>{0u}))));
	// connection
	p_tl__data__decoder_2e___bus____a____address = p_data__master_2e_bus____a____address;
	// cells $flatten\tl_periph.$or$tilelink_soc.v:8720$2433 $procmux$53033 $flatten\tl_periph.$not$tilelink_soc.v:8719$2432
	i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_8720_24_2433__Y = or_uu<1>(not_u<1>(p_tl__periph_2e_bus____d____valid.curr), (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? value<1>{0x1u} : value<1>{0u}));
	// connection
	p_data__master_2e_bus____d____source = i_procmux_24_52991__Y;
	// cells $procmux$52949 $procmux$52952 $procmux$52955
	p_data__master_2e_bus____d____valid = (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? p_tl__periph_2e_bus____d____valid.curr : (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? p_tl__ram__arbiter_2e_tl__data__ram____d____valid : (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? p_tl__rom__arbiter_2e_tl__data__rom____d____valid : value<1>{0u})));
	// cells $procmux$52832 $procmux$52278 $procmux$52835 $procmux$52055
	i_procmux_24_52832__Y = (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? (i_procmux_24_52491__Y.slice<1>().val() ? value<1>{0u} : p_tl__ram_2e_bus____d____source.slice<0>().val()) : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? (i_procmux_24_52232__Y.slice<1>().val() ? value<1>{0u} : p_tl__rom_2e_bus____d____source.slice<0>().val()) : value<1>{0u}));
	// cells $procmux$53596 $flatten\data_master.$eq$tilelink_soc.v:5103$1994 $flatten\data_master.$eq$tilelink_soc.v:5102$1993
	i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__valid_5b_0_3a_0_5d_ = (p_data__master_2e_read__ptr.curr ? eq_uu<1>(p_data__master_2e_state_24_5.curr, value<2>{0x2u}) : eq_uu<1>(p_data__master_2e_state.curr, value<2>{0x2u}));
	// connection
	p_data__master_2e__24_58 = p_data__master_2e_bus____d____valid;
	// cells $procmux$52242 $procmux$52243_CMP0
	p_tl__rom_2e_bus____d____data = (eq_uu<1>(p_tl__rom_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__rom_2e___0__.curr : value<32>{0u});
	// cells $procmux$52884 $procmux$52885_CMP0 $procmux$52886_CMP0 $procmux$52887_CMP0 $procmux$52257 $procmux$52034
	p_data__master_2e_bus____a____ready = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_8720_24_2433__Y : (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? (p_tl__ram__arbiter_2e_rr__grant ? i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_17643_24_10834__Y : value<1>{0u}) : (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? (p_tl__rom__arbiter_2e_rr__grant ? i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_26828_24_35526__Y : value<1>{0u}) : value<1>{0u})));
	// cells $procmux$52501 $procmux$52502_CMP0
	p_tl__ram_2e_bus____d____data = (eq_uu<1>(p_tl__ram_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__ram_2e___0__.curr : value<32>{0u});
	// connection
	p_instruction__master_2e_bus____d____source = i_procmux_24_52832__Y;
	// cells $procmux$53592 $procmux$53589 $procmux$53587 $flatten\data_master.$eq$tilelink_soc.v:5104$1995
	p_data__master_2e_data__stream____rsp__valid = (p_data__master_2e__24_58 ? (p_data__master_2e__24_58 ? (eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr) ? value<1>{0x1u} : i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__valid_5b_0_3a_0_5d_) : value<1>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__valid_5b_0_3a_0_5d_);
	// cells $procmux$52805 $procmux$52808
	p_instruction__master_2e_bus____d____valid = (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? p_tl__ram__arbiter_2e_tl__instr__ram____d____valid : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? p_tl__rom__arbiter_2e_tl__instr__rom____d____valid : value<1>{0u}));
	// cells $procmux$52850 $procmux$52290 $procmux$52853 $procmux$52067
	p_tl__instr__decoder_2e___bus____d____data = (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? (i_procmux_24_52491__Y.slice<1>().val() ? value<32>{0u} : p_tl__ram_2e_bus____d____data) : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? (i_procmux_24_52232__Y.slice<1>().val() ? value<32>{0u} : p_tl__rom_2e_bus____d____data) : value<32>{0u}));
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:79
	// cell $procmux$53346
	i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__data_5b_31_3a_0_5d_ = (p_instruction__master_2e_read__ptr.curr ? p_instruction__master_2e_data_24_18.curr : p_instruction__master_2e_data.curr);
	// connection
	p_instruction__master_2e__24_42 = p_instruction__master_2e_bus____d____valid;
	// cells $flatten\core.$and$tilelink_soc.v:2400$599 $flatten\core.$not$tilelink_soc.v:2399$598 $flatten\core.$and$tilelink_soc.v:2398$597
	i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y = and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____mem__enable.curr), not_u<1>(p_data__master_2e_data__stream____rsp__valid));
	// cells $procmux$53342 $procmux$53339 $procmux$53337 $flatten\instruction_master.$eq$tilelink_soc.v:6433$2170
	p_instruction__master_2e_instruction__stream____rsp__data = (p_instruction__master_2e__24_42 ? (p_instruction__master_2e__24_42 ? (eq_uu<1>(p_instruction__master_2e_bus____d____source, p_instruction__master_2e_read__ptr.curr) ? p_tl__instr__decoder_2e___bus____d____data : i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__data_5b_31_3a_0_5d_) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__data_5b_31_3a_0_5d_);
	// connection
	p_core_2e_w__arbitration____halted = i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y;
	// connection
	p_core_2e_m__arbitration____halted__by__next = p_core_2e_w__arbitration____halted;
	// cells $flatten\core.$or$tilelink_soc.v:2250$449 $flatten\core.$and$tilelink_soc.v:2385$584 $flatten\core.$and$tilelink_soc.v:2384$583 $flatten\core.$not$tilelink_soc.v:2383$582 $procmux$53360 $flatten\data_master.$and$tilelink_soc.v:5113$2004 $flatten\data_master.$logic_not$tilelink_soc.v:5107$1998 $flatten\data_master.$and$tilelink_soc.v:5096$1987 $flatten\data_master.$logic_not$tilelink_soc.v:5012$1903
	i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y = or_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>((p_data__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_data__master_2e_state_24_5.curr), p_data__master_2e_bus____a____ready) : and_uu<1>(logic_not<1>(p_data__master_2e_state.curr), p_data__master_2e_bus____a____ready)))), p_core_2e_m__control____mem__enable.curr), p_core_2e_m__arbitration____halted__by__next);
	// connection
	p_core_2e__24_356 = i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y;
	// connection
	p_core_2e_decoder_2e_instruction = p_instruction__master_2e_instruction__stream____rsp__data;
	// connection
	p_core_2e_m__arbitration____halted = p_core_2e__24_356;
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$55019_CMP0
	i_procmux_24_55019__CMP.slice<0>() = logic_not<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val());
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$55019_CMP1
	i_procmux_24_55019__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$55033_CMP0
	i_procmux_24_55033__CMP.slice<0>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x6u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$55033_CMP1
	i_procmux_24_55033__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x7u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$55034_CMP0
	i_procmux_24_55034__CMP.slice<0>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x4u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$55034_CMP1
	i_procmux_24_55034__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x5u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$54988_CMP0
	i_procmux_24_54988__CMP.slice<0>() = logic_not<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val());
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$54988_CMP1
	i_procmux_24_54988__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x5u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$54988_CMP2
	i_procmux_24_54988__CMP.slice<2>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x7u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$54989_CMP0
	i_procmux_24_54989__CMP.slice<0>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$54989_CMP1
	i_procmux_24_54989__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x4u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$54989_CMP2
	i_procmux_24_54989__CMP.slice<2>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x6u});
	// connection
	p_core_2e_decoder_2e_control____rd = p_core_2e_decoder_2e_instruction.slice<11,7>().val();
	// cells $flatten\core.$and$tilelink_soc.v:2291$490 $flatten\core.$not$tilelink_soc.v:2290$489
	p_core_2e__24_492 = and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted));
	// cells $procmux$55068 $procmux$55069_CMP0 $procmux$55070_CMP0 $procmux$55071_CMP0 $procmux$55072_CMP0
	p_core_2e_decoder_2e_control____alu__left__select = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x17u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x37u}) ? value<2>{0x2u} : value<2>{0u}))));
	// cells $procmux$55023 $procmux$55024_CMP0 $procmux$55025_CMP0 $flatten\core.\decoder.$eq$tilelink_soc.v:5853$2138 $procmux$55020 $procmux$55021_CMP0 $procmux$55018 $procmux$55019_ANY
	p_core_2e_decoder_2e_control____alu__mode__switch = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<31,25>().val(), value<6>{0x20u}) : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (reduce_or<1>(i_procmux_24_55019__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}));
	// cells $procmux$55038 $procmux$55039_CMP0 $procmux$55040_CMP0 $procmux$55041_CMP0 $procmux$55035 $procmux$55036_CMP0 $procmux$55032 $procmux$55033_ANY $procmux$55034_ANY
	p_core_2e_decoder_2e_control____alu__operation = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x13u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<14,12>().val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<14,12>().val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (reduce_or<1>(i_procmux_24_55033__CMP) ? value<3>{0x3u} : (reduce_or<1>(i_procmux_24_55034__CMP) ? value<3>{0x2u} : value<3>{0u})) : value<3>{0u}) : value<3>{0u})));
	// cells $procmux$55054 $procmux$55055_CMP0 $procmux$55056_CMP0 $procmux$55057_CMP0 $procmux$55058_CMP0 $procmux$55059_CMP0 $procmux$55060_CMP0 $procmux$55061_CMP0
	p_core_2e_decoder_2e_control____alu__right__select = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x13u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<2>{0x2u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? value<2>{0x2u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x17u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x37u}) ? value<2>{0x1u} : value<2>{0u})))))));
	// cells $procmux$54993 $procmux$54994_CMP0 $procmux$54995_CMP0 $procmux$54996_CMP0 $procmux$54990 $procmux$54991_CMP0 $procmux$54987 $procmux$54988_ANY $procmux$54989_ANY
	p_core_2e_decoder_2e_control____branch__mode = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (reduce_or<1>(i_procmux_24_54988__CMP) ? value<2>{0x2u} : (reduce_or<1>(i_procmux_24_54989__CMP) ? value<2>{0x3u} : value<2>{0u})) : value<2>{0u}) : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? value<2>{0x1u} : value<2>{0u})));
	// cells $procmux$54983 $procmux$54984_CMP0
	p_core_2e_decoder_2e_control____branch__type = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<1>{0x1u} : value<1>{0u});
	// cells $procmux$55043 $procmux$55044_CMP0 $procmux$55045_CMP0 $procmux$55046_CMP0 $procmux$55047_CMP0 $procmux$55048_CMP0 $procmux$55049_CMP0 $procmux$55050_CMP0 $procmux$55051_CMP0 $procmux$55052_CMP0
	p_core_2e_decoder_2e_control____immediate = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x13u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,25>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<11,7>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<7>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<30,25>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<11,8>()).concat(value<1>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<12>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<19,12>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<20>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<30,21>()).concat(value<1>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x17u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31,12>().concat(value<12>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x37u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31,12>().concat(value<12>{0u}).val() : value<32>{0u})))))))));
	// cells $procmux$55084 $procmux$55085_CMP0 $procmux$55086_CMP0
	p_core_2e_decoder_2e_control____mem__enable = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<1>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? value<1>{0x1u} : value<1>{0u}));
	// cells $procmux$55077 $procmux$55078_CMP0 $procmux$55079_CMP0
	p_core_2e_decoder_2e_control____mem__size = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<13,12>().val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<13,12>().val() : value<2>{0u}));
	// cells $procmux$55074 $procmux$55075_CMP0
	p_core_2e_decoder_2e_control____mem__unsigned = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<14>().val() : value<1>{0u});
	// cells $procmux$55081 $procmux$55082_CMP0
	p_core_2e_decoder_2e_control____mem__we = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<1>{0x1u} : value<1>{0u});
	// cells $procmux$55008 $procmux$55009_CMP0 $procmux$55010_CMP0 $flatten\core.\decoder.$reduce_or$tilelink_soc.v:5854$2139
	p_core_2e_decoder_2e_control____register__write = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<1>{0u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? value<1>{0u} : reduce_or<1>(p_core_2e_decoder_2e_control____rd)));
	// cells $procmux$55004 $procmux$55005_CMP0 $procmux$55006_CMP0 $procmux$55001 $procmux$55002_CMP0 $procmux$54999 $flatten\core.\decoder.$eq$tilelink_soc.v:5855$2140
	p_core_2e_decoder_2e_control____writeback__select = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<31,25>().val(), value<6>{0x1u}) ? value<2>{0x2u} : value<2>{0u}) : value<2>{0u}) : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? value<2>{0x1u} : value<2>{0u}));
	// cells $procmux$53333 $flatten\instruction_master.$eq$tilelink_soc.v:6430$2167 $flatten\instruction_master.$eq$tilelink_soc.v:6429$2166
	i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__valid_5b_0_3a_0_5d_ = (p_instruction__master_2e_read__ptr.curr ? eq_uu<1>(p_instruction__master_2e_state_24_5.curr, value<2>{0x2u}) : eq_uu<1>(p_instruction__master_2e_state.curr, value<2>{0x2u}));
	// connection
	p_instruction__master_2e__24_38 = p_instruction__master_2e_bus____d____valid;
	// connection
	value<2>().concat(value<1>()).concat(value<1>()).concat(value<2>()).concat(value<1>()).concat(value<1>()).concat(value<1>()).concat(value<2>()).concat(value<2>()).concat(value<2>()).concat(value<1>()).concat(value<1>()).concat(value<3>()).concat(value<32>()).concat(value<5>()).concat(p_core_2e_d__control____rs2).concat(p_core_2e_d__control____rs1) = p_core_2e_decoder_2e_control____writeback__select.concat(p_core_2e_decoder_2e_control____register__write).concat(p_core_2e_decoder_2e_control____mem__unsigned).concat(p_core_2e_decoder_2e_control____mem__size).concat(p_core_2e_decoder_2e_control____mem__we).concat(p_core_2e_decoder_2e_control____mem__enable).concat(p_core_2e_decoder_2e_control____branch__type).concat(p_core_2e_decoder_2e_control____branch__mode).concat(p_core_2e_decoder_2e_control____alu__right__select).concat(p_core_2e_decoder_2e_control____alu__left__select).concat(value<1>{0u}).concat(p_core_2e_decoder_2e_control____alu__mode__switch).concat(p_core_2e_decoder_2e_control____alu__operation).concat(p_core_2e_decoder_2e_control____immediate).concat(p_core_2e_decoder_2e_control____rd).concat(p_core_2e_decoder_2e_instruction.slice<24,20>()).concat(p_core_2e_decoder_2e_instruction.slice<19,15>()).val();
	// cells $procmux$53329 $procmux$53326 $procmux$53324 $flatten\instruction_master.$eq$tilelink_soc.v:6432$2169
	p_instruction__master_2e_instruction__stream____rsp__valid = (p_instruction__master_2e__24_38 ? (p_instruction__master_2e__24_38 ? (eq_uu<1>(p_instruction__master_2e_bus____d____source, p_instruction__master_2e_read__ptr.curr) ? value<1>{0x1u} : i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__valid_5b_0_3a_0_5d_) : value<1>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__valid_5b_0_3a_0_5d_);
	// connection
	p_data__master_2e__24_73 = p_data__master_2e_bus____d____valid;
	// cells $flatten\core.$and$tilelink_soc.v:2281$480 $flatten\core.$not$tilelink_soc.v:2280$479
	p_core_2e__24_470 = and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted));
	// cells $procmux$54173 $procmux$54158 $procmux$54156 $flatten\core.$and$tilelink_soc.v:2299$498 $flatten\core.$ne$tilelink_soc.v:2298$497 $flatten\core.$and$tilelink_soc.v:2297$496 $procmux$54164 $procmux$54162 $flatten\core.$and$tilelink_soc.v:2296$495 $flatten\core.$not$tilelink_soc.v:2295$494 $procmux$54170 $procmux$54168 $flatten\core.$and$tilelink_soc.v:2294$493 $flatten\core.$not$tilelink_soc.v:2293$492
	p_core_2e_d__arbitration____remove = (p_core_2e__24_492 ? (p_core_2e__24_492 ? (and_uu<1>(and_uu<1>(p_core_2e_m__branch__taken.curr, p_core_2e_m__predict__branch__taken.curr), ne_uu<1>(p_core_2e_m__branch__target.curr, p_core_2e_m__predict__branch__target.curr)) ? value<1>{0x1u} : (p_core_2e__24_492 ? (and_uu<1>(not_u<1>(p_core_2e_m__branch__taken.curr), p_core_2e_m__predict__branch__taken.curr) ? value<1>{0x1u} : (p_core_2e__24_492 ? (and_uu<1>(p_core_2e_m__branch__taken.curr, not_u<1>(p_core_2e_m__predict__branch__taken.curr)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u})) : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// connection
	p_data__master_2e__24_75 = p_data__master_2e_bus____d____valid;
	// connection
	p_data__master_2e__24_77 = p_data__master_2e_bus____d____valid;
	// cells $procmux$53018 $procmux$53021 $procmux$52320 $procmux$53024 $procmux$52097
	p_tl__data__decoder_2e___bus____d____data = (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? p_tl__periph_2e_bus____d____data.curr : (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__ram_2e_bus____d____data : value<32>{0u}) : (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__rom_2e_bus____d____data : value<32>{0u}) : value<32>{0u})));
	// cells $procmux$54739 $flatten\core.$or$tilelink_soc.v:2184$381 $flatten\core.$and$tilelink_soc.v:2183$380 $flatten\core.$or$tilelink_soc.v:2182$379 $flatten\core.$eq$tilelink_soc.v:2181$378 $flatten\core.$eq$tilelink_soc.v:2180$377 $flatten\core.$and$tilelink_soc.v:2179$376 $flatten\core.$and$tilelink_soc.v:2178$375 $flatten\core.$reduce_or$tilelink_soc.v:2177$374 $flatten\core.$and$tilelink_soc.v:2176$373 $flatten\core.$or$tilelink_soc.v:2175$372 $flatten\core.$eq$tilelink_soc.v:2174$371 $flatten\core.$eq$tilelink_soc.v:2173$370 $flatten\core.$and$tilelink_soc.v:2171$368 $flatten\core.$and$tilelink_soc.v:2170$367 $flatten\core.$reduce_or$tilelink_soc.v:2169$366
	i_procmux_24_54739__Y = (or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2)))) ? value<1>{0x1u} : i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y);
	// cells $procmux$53625 $procmux$53622 $procmux$53620
	p_data__master_2e_req__size = (p_data__master_2e__24_73 ? (p_data__master_2e__24_73 ? (i_procmux_24_52991__Y ? p_data__master_2e_size_24_40.curr : p_data__master_2e_size.curr) : value<2>{0u}) : value<2>{0u});
	// connection
	p_tl__instr__decoder_2e___bus____a____address = p_core_2e_f__program__counter.curr;
	// connection
	p_core_2e_d__arbitration____halted__by__next = i_procmux_24_54739__Y;
	// cells $procmux$53635 $procmux$53632 $procmux$53630
	p_data__master_2e_is__unsigned = (p_data__master_2e__24_75 ? (p_data__master_2e__24_75 ? (i_procmux_24_52991__Y ? p_data__master_2e_unsigned_24_43.curr : p_data__master_2e_unsigned.curr) : value<1>{0u}) : value<1>{0u});
	// connection
	p_data__master_2e_bus____d____data = p_tl__data__decoder_2e___bus____d____data;
	// cells $procmux$53645 $procmux$53642 $procmux$53640
	p_data__master_2e_addr__local__bits = (p_data__master_2e__24_77 ? (p_data__master_2e__24_77 ? (i_procmux_24_52991__Y ? p_data__master_2e_addr__low_24_46.curr : p_data__master_2e_addr__low.curr) : value<2>{0u}) : value<2>{0u});
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	// cell $flatten\data_master.$logic_not$tilelink_soc.v:5109$2000
	p_data__master_2e__24_81 = logic_not<1>(p_data__master_2e_req__size);
	// connection
	p_data__master_2e__24_79 = p_data__master_2e_bus____d____valid;
	// cells $flatten\core.$or$tilelink_soc.v:2128$325 $flatten\core.$and$tilelink_soc.v:2156$353 $flatten\core.$not$tilelink_soc.v:2155$352 $flatten\core.$or$tilelink_soc.v:2154$351
	p_core_2e_d__arbitration____halted = or_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_d__arbitration____valid.curr, p_core_2e_d__arbitration____remove), not_u<1>(p_instruction__master_2e_instruction__stream____rsp__valid)), p_core_2e_d__arbitration____halted__by__next);
	// connection
	p_core_2e_f__arbitration____halted__by__next = p_core_2e_d__arbitration____halted;
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	// cell $flatten\data_master.$eq$tilelink_soc.v:5055$1946
	p_data__master_2e__24_275 = eq_uu<1>(p_data__master_2e_req__size, value<1>{0x1u});
	// connection
	p_data__master_2e_data__stream____req__size = p_core_2e_m__control____mem__size.curr;
	// cells $procmux$52769 $procmux$52770_CMP0 $procmux$52771_CMP0 $procmux$52284 $procmux$52061
	p_instruction__master_2e_bus____a____ready = (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_17643_24_10834__Y) : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_26828_24_35526__Y) : value<1>{0u}));
	// cells $procmux$54152 $procmux$54137 $procmux$54135 $flatten\core.$and$tilelink_soc.v:2289$488 $flatten\core.$ne$tilelink_soc.v:2288$487 $flatten\core.$and$tilelink_soc.v:2287$486 $procmux$54143 $procmux$54141 $flatten\core.$and$tilelink_soc.v:2286$485 $flatten\core.$not$tilelink_soc.v:2285$484 $procmux$54149 $procmux$54147 $flatten\core.$and$tilelink_soc.v:2284$483 $flatten\core.$not$tilelink_soc.v:2283$482
	p_core_2e_f__arbitration____remove = (p_core_2e__24_470 ? (p_core_2e__24_470 ? (and_uu<1>(and_uu<1>(p_core_2e_m__branch__taken.curr, p_core_2e_m__predict__branch__taken.curr), ne_uu<1>(p_core_2e_m__branch__target.curr, p_core_2e_m__predict__branch__target.curr)) ? value<1>{0x1u} : (p_core_2e__24_470 ? (and_uu<1>(not_u<1>(p_core_2e_m__branch__taken.curr), p_core_2e_m__predict__branch__taken.curr) ? value<1>{0x1u} : (p_core_2e__24_470 ? (and_uu<1>(p_core_2e_m__branch__taken.curr, not_u<1>(p_core_2e_m__predict__branch__taken.curr)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u})) : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// connection
	p_data__master_2e_data__stream____req__addr = p_core_2e_m__alu__result.curr;
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$logic_not$tilelink_soc.v:5006$1897
	p_data__master_2e__24_18 = logic_not<1>(p_data__master_2e_data__stream____req__size);
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	// cell $flatten\data_master.$eq$tilelink_soc.v:5091$1982
	p_data__master_2e__24_341 = eq_uu<1>(p_data__master_2e_req__size, value<2>{0x2u});
	// connection
	p_data__master_2e_data__stream____req__we = p_core_2e_m__control____mem__we.curr;
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:5018$1909
	p_data__master_2e__24_20 = eq_uu<1>(p_data__master_2e_data__stream____req__size, value<1>{0x1u});
	// cells $flatten\core.$and$tilelink_soc.v:2382$581 $flatten\core.$and$tilelink_soc.v:2381$580 $flatten\core.$not$tilelink_soc.v:2380$579
	p_data__master_2e_data__stream____req__valid = and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted__by__next)), p_core_2e_m__control____mem__enable.curr);
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:5029$1920
	p_data__master_2e__24_22 = eq_uu<1>(p_data__master_2e_data__stream____req__size, value<2>{0x2u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:95
	// cell $procmux$53871
	p_data__master_2e_bus____a____opcode = (p_data__master_2e_data__stream____req__we ? value<3>{0u} : value<3>{0x4u});
	// cells $flatten\core.$and$tilelink_soc.v:2272$471 $flatten\core.$not$tilelink_soc.v:2271$470
	p_core_2e__24_448 = and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted));
	// cells $procmux$53577 $flatten\data_master.$and$tilelink_soc.v:4995$1886 $flatten\data_master.$logic_not$tilelink_soc.v:4984$1875 $flatten\data_master.$and$tilelink_soc.v:4973$1864 $flatten\data_master.$logic_not$tilelink_soc.v:4962$1853
	p_data__master_2e_bus____a____valid = (p_data__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_data__master_2e_state_24_5.curr), p_data__master_2e_data__stream____req__valid) : and_uu<1>(logic_not<1>(p_data__master_2e_state.curr), p_data__master_2e_data__stream____req__valid));
	// cells $flatten\core.$and$tilelink_soc.v:2125$322 $flatten\core.$not$tilelink_soc.v:2124$321 $flatten\core.$and$tilelink_soc.v:2123$320 $flatten\core.$not$tilelink_soc.v:2122$319
	p_instruction__master_2e_instruction__stream____req__valid = and_uu<1>(and_uu<1>(p_core_2e_f__arbitration____valid.curr, not_u<1>(p_core_2e_f__arbitration____halted__by__next)), not_u<1>(p_core_2e_f__arbitration____remove));
	// cells $procmux$52925 $procmux$52926_CMP0
	p_tl__periph_2e_bus____a____opcode = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____opcode : value<3>{0u});
	// cells $procmux$52958 $procmux$52959_CMP0
	p_tl__data__decoder_2e_bus____a____valid = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$53694 $procmux$53659 $procmux$53657 $procmux$53653 $procmux$53651 $procmux$53674 $procmux$53672 $procmux$53668 $procmux$53666 $procmux$53663 $procmux$53665_CMP0 $flatten\data_master.$ternary$tilelink_soc.v:5090$1981 $flatten\data_master.$ternary$tilelink_soc.v:5089$1980 $flatten\data_master.$ternary$tilelink_soc.v:5088$1979 $flatten\data_master.$ternary$tilelink_soc.v:5087$1978 $flatten\data_master.$ternary$tilelink_soc.v:5086$1977 $flatten\data_master.$ternary$tilelink_soc.v:5085$1976 $flatten\data_master.$ternary$tilelink_soc.v:5083$1974 $flatten\data_master.$ternary$tilelink_soc.v:5082$1973 $flatten\data_master.$ternary$tilelink_soc.v:5081$1972 $flatten\data_master.$ternary$tilelink_soc.v:5080$1971 $flatten\data_master.$ternary$tilelink_soc.v:5079$1970 $flatten\data_master.$ternary$tilelink_soc.v:5078$1969 $flatten\data_master.$ternary$tilelink_soc.v:5077$1968 $flatten\data_master.$ternary$tilelink_soc.v:5076$1967 $flatten\data_master.$ternary$tilelink_soc.v:5075$1966 $flatten\data_master.$ternary$tilelink_soc.v:5074$1965 $flatten\data_master.$ternary$tilelink_soc.v:5072$1963 $flatten\data_master.$ternary$tilelink_soc.v:5071$1962 $flatten\data_master.$ternary$tilelink_soc.v:5070$1961 $flatten\data_master.$ternary$tilelink_soc.v:5069$1960 $flatten\data_master.$ternary$tilelink_soc.v:5068$1959 $flatten\data_master.$ternary$tilelink_soc.v:5067$1958 $flatten\data_master.$ternary$tilelink_soc.v:5066$1957 $flatten\data_master.$ternary$tilelink_soc.v:5065$1956 $flatten\data_master.$ternary$tilelink_soc.v:5064$1955 $flatten\data_master.$ternary$tilelink_soc.v:5063$1954 $flatten\data_master.$ternary$tilelink_soc.v:5061$1952 $flatten\data_master.$ternary$tilelink_soc.v:5060$1951 $flatten\data_master.$ternary$tilelink_soc.v:5059$1950 $flatten\data_master.$ternary$tilelink_soc.v:5058$1949 $flatten\data_master.$ternary$tilelink_soc.v:5057$1948 $flatten\data_master.$ternary$tilelink_soc.v:5056$1947 $procmux$53691 $procmux$53689 $procmux$53685 $procmux$53683 $procmux$53678 $procmux$53679_CMP0 $procmux$53680_CMP0 $procmux$53681_CMP0 $procmux$53682_CMP0 $flatten\data_master.$ternary$tilelink_soc.v:5054$1945 $flatten\data_master.$ternary$tilelink_soc.v:5053$1944 $flatten\data_master.$ternary$tilelink_soc.v:5052$1943 $flatten\data_master.$ternary$tilelink_soc.v:5050$1941 $flatten\data_master.$ternary$tilelink_soc.v:5049$1940 $flatten\data_master.$ternary$tilelink_soc.v:5048$1939 $flatten\data_master.$ternary$tilelink_soc.v:5047$1938 $flatten\data_master.$ternary$tilelink_soc.v:5046$1937 $flatten\data_master.$ternary$tilelink_soc.v:5045$1936 $flatten\data_master.$ternary$tilelink_soc.v:5044$1935 $flatten\data_master.$ternary$tilelink_soc.v:5043$1934 $flatten\data_master.$ternary$tilelink_soc.v:5042$1933 $flatten\data_master.$ternary$tilelink_soc.v:5041$1932 $flatten\data_master.$ternary$tilelink_soc.v:5039$1930 $flatten\data_master.$ternary$tilelink_soc.v:5038$1929 $flatten\data_master.$ternary$tilelink_soc.v:5037$1928 $flatten\data_master.$ternary$tilelink_soc.v:5036$1927 $flatten\data_master.$ternary$tilelink_soc.v:5035$1926 $flatten\data_master.$ternary$tilelink_soc.v:5034$1925 $flatten\data_master.$ternary$tilelink_soc.v:5033$1924 $flatten\data_master.$ternary$tilelink_soc.v:5032$1923 $flatten\data_master.$ternary$tilelink_soc.v:5031$1922 $flatten\data_master.$ternary$tilelink_soc.v:5030$1921 $flatten\data_master.$ternary$tilelink_soc.v:5028$1919 $flatten\data_master.$ternary$tilelink_soc.v:5027$1918 $flatten\data_master.$ternary$tilelink_soc.v:5026$1917 $flatten\data_master.$ternary$tilelink_soc.v:5025$1916 $flatten\data_master.$ternary$tilelink_soc.v:5024$1915 $flatten\data_master.$ternary$tilelink_soc.v:5023$1914 $flatten\data_master.$ternary$tilelink_soc.v:5022$1913 $flatten\data_master.$ternary$tilelink_soc.v:5021$1912 $flatten\data_master.$ternary$tilelink_soc.v:5020$1911 $flatten\data_master.$ternary$tilelink_soc.v:5019$1910 $flatten\data_master.$ternary$tilelink_soc.v:5017$1908 $flatten\data_master.$ternary$tilelink_soc.v:5016$1907 $flatten\data_master.$ternary$tilelink_soc.v:5015$1906 $flatten\data_master.$ternary$tilelink_soc.v:5014$1905 $flatten\data_master.$ternary$tilelink_soc.v:5013$1904 $flatten\data_master.$ternary$tilelink_soc.v:5011$1902 $flatten\data_master.$ternary$tilelink_soc.v:5010$1901 $flatten\data_master.$ternary$tilelink_soc.v:5009$1900 $flatten\data_master.$ternary$tilelink_soc.v:5008$1899 $flatten\data_master.$ternary$tilelink_soc.v:5007$1898 $flatten\data_master.$ternary$tilelink_soc.v:5005$1896 $flatten\data_master.$ternary$tilelink_soc.v:5004$1895 $flatten\data_master.$ternary$tilelink_soc.v:5003$1894 $flatten\data_master.$ternary$tilelink_soc.v:5002$1893 $flatten\data_master.$ternary$tilelink_soc.v:5001$1892 $flatten\data_master.$ternary$tilelink_soc.v:5000$1891 $flatten\data_master.$ternary$tilelink_soc.v:4999$1890 $flatten\data_master.$ternary$tilelink_soc.v:4998$1889 $flatten\data_master.$ternary$tilelink_soc.v:4997$1888 $flatten\data_master.$ternary$tilelink_soc.v:4996$1887 $flatten\data_master.$ternary$tilelink_soc.v:4994$1885 $flatten\data_master.$ternary$tilelink_soc.v:4993$1884 $flatten\data_master.$ternary$tilelink_soc.v:4992$1883 $flatten\data_master.$ternary$tilelink_soc.v:4991$1882 $flatten\data_master.$ternary$tilelink_soc.v:4990$1881 $flatten\data_master.$ternary$tilelink_soc.v:4989$1880 $flatten\data_master.$ternary$tilelink_soc.v:4988$1879 $flatten\data_master.$ternary$tilelink_soc.v:4987$1878 $flatten\data_master.$ternary$tilelink_soc.v:4986$1877 $flatten\data_master.$ternary$tilelink_soc.v:4985$1876 $flatten\data_master.$ternary$tilelink_soc.v:4983$1874 $flatten\data_master.$ternary$tilelink_soc.v:4982$1873 $flatten\data_master.$ternary$tilelink_soc.v:4981$1872 $flatten\data_master.$ternary$tilelink_soc.v:4980$1871 $flatten\data_master.$ternary$tilelink_soc.v:4979$1870 $flatten\data_master.$ternary$tilelink_soc.v:4978$1869 $flatten\data_master.$ternary$tilelink_soc.v:4977$1868 $flatten\data_master.$ternary$tilelink_soc.v:4976$1867 $flatten\data_master.$ternary$tilelink_soc.v:4975$1866 $flatten\data_master.$ternary$tilelink_soc.v:4974$1865 $flatten\data_master.$ternary$tilelink_soc.v:4972$1863 $flatten\data_master.$ternary$tilelink_soc.v:4971$1862 $flatten\data_master.$ternary$tilelink_soc.v:4970$1861 $flatten\data_master.$ternary$tilelink_soc.v:4969$1860 $flatten\data_master.$ternary$tilelink_soc.v:4968$1859 $flatten\data_master.$ternary$tilelink_soc.v:4967$1858 $flatten\data_master.$ternary$tilelink_soc.v:4966$1857 $flatten\data_master.$ternary$tilelink_soc.v:4965$1856 $flatten\data_master.$ternary$tilelink_soc.v:4964$1855 $flatten\data_master.$ternary$tilelink_soc.v:4963$1854 $flatten\data_master.$ternary$tilelink_soc.v:4961$1852 $flatten\data_master.$ternary$tilelink_soc.v:4960$1851 $flatten\data_master.$ternary$tilelink_soc.v:4959$1850 $flatten\data_master.$ternary$tilelink_soc.v:4958$1849 $flatten\data_master.$ternary$tilelink_soc.v:4957$1848 $flatten\data_master.$ternary$tilelink_soc.v:5118$2009 $flatten\data_master.$ternary$tilelink_soc.v:5117$2008 $flatten\data_master.$ternary$tilelink_soc.v:5116$2007 $flatten\data_master.$ternary$tilelink_soc.v:5115$2006 $flatten\data_master.$ternary$tilelink_soc.v:5114$2005 $flatten\data_master.$ternary$tilelink_soc.v:5112$2003 $flatten\data_master.$ternary$tilelink_soc.v:5111$2002 $flatten\data_master.$ternary$tilelink_soc.v:5110$2001
	p_data__master_2e_read__data = (p_data__master_2e__24_79 ? (p_data__master_2e__24_79 ? (p_data__master_2e__24_341 ? (p_data__master_2e__24_79 ? (p_data__master_2e__24_341 ? p_tl__data__decoder_2e___bus____d____data : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_79 ? (p_data__master_2e__24_275 ? (p_data__master_2e__24_79 ? (p_data__master_2e__24_275 ? (p_data__master_2e_addr__local__bits.slice<1>().val() ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<31,16>()).val() : (not_u<1>(p_data__master_2e_addr__local__bits.slice<1>().val()) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<15,0>()).val() : value<32>{0u})) : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_79 ? (p_data__master_2e__24_81 ? (p_data__master_2e__24_79 ? (p_data__master_2e__24_81 ? (eq_uu<1>(p_data__master_2e_addr__local__bits, value<2>{0x3u}) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<31,24>()).val() : (eq_uu<1>(p_data__master_2e_addr__local__bits, value<2>{0x2u}) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<23,16>()).val() : (eq_uu<1>(p_data__master_2e_addr__local__bits, value<2>{0x1u}) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<15,8>()).val() : (logic_not<1>(p_data__master_2e_addr__local__bits) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<7,0>()).val() : value<32>{0u})))) : value<32>{0u}) : value<32>{0u}) : value<32>{0u}) : value<32>{0u})) : value<32>{0u})) : value<32>{0u}) : value<32>{0u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:120
	// cell $procmux$53609
	i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__data_5b_31_3a_0_5d_ = (p_data__master_2e_read__ptr.curr ? p_data__master_2e_data_24_63.curr : p_data__master_2e_data_24_62.curr);
	// connection
	p_data__master_2e__24_64 = p_data__master_2e_bus____d____valid;
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:478
	// cell $flatten\core.$and$tilelink_soc.v:2397$596
	i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y = and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____mem__enable.curr);
	// cells $procmux$53356 $flatten\instruction_master.$and$tilelink_soc.v:6421$2158 $flatten\instruction_master.$logic_not$tilelink_soc.v:6420$2157 $flatten\instruction_master.$and$tilelink_soc.v:6419$2156 $flatten\instruction_master.$logic_not$tilelink_soc.v:6418$2155
	p_instruction__master_2e_bus____a____valid = (p_instruction__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_instruction__master_2e_state_24_5.curr), p_instruction__master_2e_instruction__stream____req__valid) : and_uu<1>(logic_not<1>(p_instruction__master_2e_state.curr), p_instruction__master_2e_instruction__stream____req__valid));
	// cells $procmux$53790 $procmux$53787 $procmux$53799 $procmux$53796 $procmux$53793 $procmux$53795_CMP0 $procmux$53810 $procmux$53807 $procmux$53802 $procmux$53803_CMP0 $procmux$53804_CMP0 $procmux$53805_CMP0 $procmux$53806_CMP0
	p_data__master_2e_bus____a____mask = (p_data__master_2e__24_22 ? (p_data__master_2e__24_22 ? value<4>{0xfu} : value<4>{0u}) : (p_data__master_2e__24_20 ? (p_data__master_2e__24_20 ? (p_data__master_2e_data__stream____req__addr.slice<1>().val() ? value<4>{0xcu} : (not_u<1>(p_data__master_2e_data__stream____req__addr.slice<1>().val()) ? value<4>{0x3u} : value<4>{0u})) : value<4>{0u}) : (p_data__master_2e__24_18 ? (p_data__master_2e__24_18 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<4>{0x8u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<4>{0x4u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<4>{0x2u} : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? value<4>{0x1u} : value<4>{0u})))) : value<4>{0u}) : value<4>{0u})));
	// connection
	p_tl__periph_2e_bus____a____valid = p_tl__data__decoder_2e_bus____a____valid;
	// connection
	p_tl__periph_2e_bus____a____ready = i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_8720_24_2433__Y;
	// cells $flatten\core.$or$tilelink_soc.v:2415$614 $flatten\core.$and$tilelink_soc.v:2127$324 $flatten\core.$not$tilelink_soc.v:2126$323 $procmux$53058 $flatten\instruction_master.$and$tilelink_soc.v:6437$2174 $flatten\instruction_master.$logic_not$tilelink_soc.v:6436$2173 $flatten\instruction_master.$and$tilelink_soc.v:6431$2168 $flatten\instruction_master.$logic_not$tilelink_soc.v:6422$2159
	p_core_2e__24_79 = or_uu<1>(and_uu<1>(p_core_2e_f__arbitration____valid.curr, not_u<1>((p_instruction__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_instruction__master_2e_state_24_5.curr), p_instruction__master_2e_bus____a____ready) : and_uu<1>(logic_not<1>(p_instruction__master_2e_state.curr), p_instruction__master_2e_bus____a____ready)))), p_core_2e_f__arbitration____halted__by__next);
	// connection
	p_core_2e_f__btb__result____predictor.concat(p_core_2e_f__btb__result____target).concat(p_core_2e_f__btb__result____tag).concat(p_core_2e_f__btb__result____valid) = p_core_2e___0__.curr;
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:5073$1964
	p_data__master_2e__24_30 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:70
	// cell $flatten\instruction_master.$and$tilelink_soc.v:6423$2160
	p_instruction__master_2e__24_19 = and_uu<1>(p_instruction__master_2e_bus____a____valid, p_instruction__master_2e_bus____a____ready);
	// cells $flatten\core.$and$tilelink_soc.v:2327$526 $flatten\core.$not$tilelink_soc.v:2326$525
	p_core_2e__24_571 = and_uu<1>(p_core_2e_m__branch__taken.curr, not_u<1>(p_core_2e_m__predict__branch__taken.curr));
	// connection
	p_core_2e_a__arbitration____halted = p_core_2e__24_79;
	// connection
	p_core_2e_f__arbitration____halted = p_core_2e__24_79;
	// cells $flatten\core.$and$tilelink_soc.v:2325$524 $flatten\core.$not$tilelink_soc.v:2324$523
	p_core_2e__24_567 = and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted));
	// cells $procmux$52940 $procmux$52941_CMP0
	p_tl__periph_2e_bus____a____mask = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____mask : value<4>{0u});
	// cells $flatten\core.$and$tilelink_soc.v:2120$317 $flatten\core.$eq$tilelink_soc.v:2119$316
	i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2120_24_317__Y = and_uu<1>(p_core_2e_f__btb__result____valid, eq_uu<1>(p_core_2e_f__btb__result____tag, p_core_2e_f__program__counter.curr.slice<31,10>().val()));
	// connection
	p_data__master_2e_data__stream____rsp__ready = i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y;
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:155
	// cell $flatten\core.$not$tilelink_soc.v:2153$350
	p_instruction__master_2e_instruction__stream____rsp__ready = not_u<1>(p_core_2e_d__arbitration____halted__by__next);
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$logic_not$tilelink_soc.v:5040$1931
	p_data__master_2e__24_24 = logic_not<1>(p_data__master_2e_data__stream____req__size);
	// cells $procmux$52937 $procmux$52938_CMP0
	p_tl__periph_2e_bus____a____address = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____address.slice<3,0>().val() : value<4>{0u});
	// cells $procmux$54131 $procmux$54116 $procmux$54114 $flatten\core.$and$tilelink_soc.v:2279$478 $flatten\core.$ne$tilelink_soc.v:2278$477 $flatten\core.$and$tilelink_soc.v:2277$476 $procmux$54122 $procmux$54120 $flatten\core.$and$tilelink_soc.v:2276$475 $flatten\core.$not$tilelink_soc.v:2275$474 $procmux$54128 $procmux$54126 $flatten\core.$and$tilelink_soc.v:2274$473 $flatten\core.$not$tilelink_soc.v:2273$472
	p_core_2e_a__arbitration____remove = (p_core_2e__24_448 ? (p_core_2e__24_448 ? (and_uu<1>(and_uu<1>(p_core_2e_m__branch__taken.curr, p_core_2e_m__predict__branch__taken.curr), ne_uu<1>(p_core_2e_m__branch__target.curr, p_core_2e_m__predict__branch__target.curr)) ? value<1>{0x1u} : (p_core_2e__24_448 ? (and_uu<1>(not_u<1>(p_core_2e_m__branch__taken.curr), p_core_2e_m__predict__branch__taken.curr) ? value<1>{0x1u} : (p_core_2e__24_448 ? (and_uu<1>(p_core_2e_m__branch__taken.curr, not_u<1>(p_core_2e_m__predict__branch__taken.curr)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u})) : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8677$2390 $flatten\tl_periph.$and$tilelink_soc.v:8666$2379 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8755$2470 $flatten\tl_periph.$logic_not$tilelink_soc.v:8739$2454 $flatten\tl_periph.$eq$tilelink_soc.v:8749$2464 $flatten\tl_periph.$and$tilelink_soc.v:8721$2434
	p_tl__periph_2e__24_11 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:525
	// cell $flatten\core.$reduce_or$tilelink_soc.v:2505$704
	p_core_2e__24_959 = reduce_or<1>(p_core_2e_d__control____rs2);
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:518
	// cell $flatten\core.$reduce_or$tilelink_soc.v:2449$648
	p_core_2e__24_859 = reduce_or<1>(p_core_2e_d__control____rs1);
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:242
	// cell $flatten\core.$ternary$tilelink_soc.v:2224$421
	i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_2224_24_421__Y = (p_core_2e_x__rs2__is__forwarded.curr ? p_core_2e_x__rs2__value__forwarded.curr : p_core_2e___2__.curr);
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:241
	// cell $flatten\core.$ternary$tilelink_soc.v:2223$420
	i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_2223_24_420__Y = (p_core_2e_x__rs1__is__forwarded.curr ? p_core_2e_x__rs1__value__forwarded.curr : p_core_2e___1__.curr);
	// cells $procmux$54491 $procmux$54492_CMP0 $procmux$54493_CMP0 $procmux$54494_CMP0 $procmux$53605 $procmux$53602 $procmux$53600 $flatten\data_master.$eq$tilelink_soc.v:5105$1996
	p_core_2e_w__write__data = (eq_uu<1>(p_core_2e_w__control____writeback__select.curr, value<2>{0x2u}) ? p_core_2e_w__muldiv__result.curr : (eq_uu<1>(p_core_2e_w__control____writeback__select.curr, value<2>{0x1u}) ? (p_data__master_2e__24_64 ? (p_data__master_2e__24_64 ? (eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr) ? p_data__master_2e_read__data : i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__data_5b_31_3a_0_5d_) : value<32>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__data_5b_31_3a_0_5d_) : (logic_not<1>(p_core_2e_w__control____writeback__select.curr) ? p_core_2e_w__alu__result.curr : value<32>{0u})));
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:525
	// cell $flatten\core.$reduce_or$tilelink_soc.v:2477$676
	p_core_2e__24_909 = reduce_or<1>(p_core_2e_d__control____rs2);
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:518
	// cell $flatten\core.$reduce_or$tilelink_soc.v:2421$620
	p_core_2e__24_809 = reduce_or<1>(p_core_2e_d__control____rs1);
	// cells $procmux$53495 $procmux$53489 $procmux$53487
	i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2035 = (p_data__master_2e__24_30 ? (p_data__master_2e__24_30 ? (p_data__master_2e_send__ptr.curr ? value<2>{0x1u} : p_data__master_2e_state_24_5.curr) : value<2>{0u}) : p_data__master_2e_state_24_5.curr);
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:125
	// cell $flatten\data_master.$and$tilelink_soc.v:5084$1975
	p_data__master_2e__24_32 = and_uu<1>(p_data__master_2e_data__stream____rsp__valid, p_data__master_2e_data__stream____rsp__ready);
	// cells $procmux$53492 $procmux$53482 $procmux$53480
	i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_2036 = (p_data__master_2e__24_30 ? (p_data__master_2e__24_30 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_state.curr : value<2>{0x1u}) : value<2>{0u}) : p_data__master_2e_state.curr);
	// cells $procmux$53314 $procmux$53295 $procmux$53293
	i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2189 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? value<2>{0x1u} : p_instruction__master_2e_state_24_5.curr) : value<2>{0u}) : p_instruction__master_2e_state_24_5.curr);
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:84
	// cell $flatten\instruction_master.$and$tilelink_soc.v:6424$2161
	p_instruction__master_2e__24_21 = and_uu<1>(p_instruction__master_2e_instruction__stream____rsp__valid, p_instruction__master_2e_instruction__stream____rsp__ready);
	// cells $procmux$53311 $procmux$53288 $procmux$53286
	i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_2190 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? p_instruction__master_2e_state.curr : value<2>{0x1u}) : value<2>{0u}) : p_instruction__master_2e_state.curr);
	// cells $procmux$53308 $procmux$53281 $procmux$53279
	i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2191 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? value<32>{0u} : p_instruction__master_2e_data_24_18.curr) : value<32>{0u}) : p_instruction__master_2e_data_24_18.curr);
	// cells $procmux$53305 $procmux$53302 $procmux$53300
	i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_2192 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? p_instruction__master_2e_data.curr : value<32>{0u}) : value<32>{0u}) : p_instruction__master_2e_data.curr);
	// cells $flatten\core.$or$tilelink_soc.v:2503$702 $flatten\core.$and$tilelink_soc.v:2502$701 $flatten\core.$or$tilelink_soc.v:2501$700 $flatten\core.$eq$tilelink_soc.v:2500$699 $flatten\core.$eq$tilelink_soc.v:2499$698 $flatten\core.$and$tilelink_soc.v:2498$697 $flatten\core.$and$tilelink_soc.v:2497$696 $flatten\core.$reduce_or$tilelink_soc.v:2496$695 $flatten\core.$and$tilelink_soc.v:2495$694 $flatten\core.$or$tilelink_soc.v:2494$693 $flatten\core.$eq$tilelink_soc.v:2492$691 $flatten\core.$eq$tilelink_soc.v:2491$690 $flatten\core.$and$tilelink_soc.v:2490$689 $flatten\core.$and$tilelink_soc.v:2489$688 $flatten\core.$reduce_or$tilelink_soc.v:2488$687
	p_core_2e__24_957 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2))));
	// cells $flatten\core.$and$tilelink_soc.v:2302$501 $flatten\core.$not$tilelink_soc.v:2300$499
	p_core_2e__24_514 = and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted));
	// cells $flatten\core.$or$tilelink_soc.v:2447$646 $flatten\core.$and$tilelink_soc.v:2446$645 $flatten\core.$or$tilelink_soc.v:2445$644 $flatten\core.$eq$tilelink_soc.v:2444$643 $flatten\core.$eq$tilelink_soc.v:2443$642 $flatten\core.$and$tilelink_soc.v:2442$641 $flatten\core.$and$tilelink_soc.v:2441$640 $flatten\core.$reduce_or$tilelink_soc.v:2440$639 $flatten\core.$and$tilelink_soc.v:2439$638 $flatten\core.$or$tilelink_soc.v:2438$637 $flatten\core.$eq$tilelink_soc.v:2436$635 $flatten\core.$eq$tilelink_soc.v:2435$634 $flatten\core.$and$tilelink_soc.v:2434$633 $flatten\core.$and$tilelink_soc.v:2433$632 $flatten\core.$reduce_or$tilelink_soc.v:2432$631
	p_core_2e__24_857 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2))));
	// cells $flatten\core.$or$tilelink_soc.v:2476$675 $flatten\core.$and$tilelink_soc.v:2475$674 $flatten\core.$or$tilelink_soc.v:2474$673 $flatten\core.$eq$tilelink_soc.v:2473$672 $flatten\core.$eq$tilelink_soc.v:2472$671 $flatten\core.$and$tilelink_soc.v:2469$668 $flatten\core.$and$tilelink_soc.v:2468$667 $flatten\core.$reduce_or$tilelink_soc.v:2467$666 $flatten\core.$and$tilelink_soc.v:2466$665 $flatten\core.$or$tilelink_soc.v:2465$664 $flatten\core.$eq$tilelink_soc.v:2464$663 $flatten\core.$eq$tilelink_soc.v:2463$662 $flatten\core.$and$tilelink_soc.v:2462$661 $flatten\core.$and$tilelink_soc.v:2461$660 $flatten\core.$reduce_or$tilelink_soc.v:2460$659
	p_core_2e__24_907 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2))));
	// cells $flatten\core.$or$tilelink_soc.v:2420$619 $flatten\core.$and$tilelink_soc.v:2419$618 $flatten\core.$or$tilelink_soc.v:2418$617 $flatten\core.$eq$tilelink_soc.v:2417$616 $flatten\core.$eq$tilelink_soc.v:2416$615 $flatten\core.$and$tilelink_soc.v:2414$613 $flatten\core.$and$tilelink_soc.v:2413$612 $flatten\core.$reduce_or$tilelink_soc.v:2412$611 $flatten\core.$and$tilelink_soc.v:2411$610 $flatten\core.$or$tilelink_soc.v:2410$609 $flatten\core.$eq$tilelink_soc.v:2409$608 $flatten\core.$eq$tilelink_soc.v:2408$607 $flatten\core.$and$tilelink_soc.v:2407$606 $flatten\core.$and$tilelink_soc.v:2406$605 $flatten\core.$reduce_or$tilelink_soc.v:2405$604
	p_core_2e__24_807 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2))));
	// \src: tilelink_soc.v:28461.8-28480.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:114
	// cell $flatten\core.$and$tilelink_soc.v:2121$318
	i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2121_24_318__Y = and_uu<1>(i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2120_24_317__Y, p_core_2e_f__btb__result____predictor.slice<1>().val());
	// cells $procmux$53865 $procmux$53860 $procmux$53861_CMP0 $procmux$53862_CMP0 $procmux$53863_CMP0 $procmux$53864_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<7,0>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$53857 $procmux$53852 $procmux$53853_CMP0 $procmux$53854_CMP0 $procmux$53855_CMP0 $procmux$53856_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<31,24>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? value<8>{0u} : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$53849 $procmux$53844 $procmux$53845_CMP0 $procmux$53846_CMP0 $procmux$53847_CMP0 $procmux$53848_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<15,8>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? value<8>{0u} : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$53841 $procmux$53836 $procmux$53837_CMP0 $procmux$53838_CMP0 $procmux$53839_CMP0 $procmux$53840_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<23,16>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? value<8>{0u} : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$54927 $procmux$54928_CMP0 $procmux$54929_CMP0 $procmux$54930_CMP0
	p_core_2e_x__alu__right = (eq_uu<1>(p_core_2e_x__control____alu__right__select.curr, value<2>{0x2u}) ? value<32>{0x4u} : (eq_uu<1>(p_core_2e_x__control____alu__right__select.curr, value<2>{0x1u}) ? p_core_2e_x__control____immediate.curr : (logic_not<1>(p_core_2e_x__control____alu__right__select.curr) ? i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_2224_24_421__Y : value<32>{0u})));
	// cells $procmux$54923 $procmux$54924_CMP0 $procmux$54925_CMP0
	p_core_2e_x__alu__left = (eq_uu<1>(p_core_2e_x__control____alu__left__select.curr, value<2>{0x1u}) ? p_core_2e_x__program__counter.curr : (logic_not<1>(p_core_2e_x__control____alu__left__select.curr) ? i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_2223_24_420__Y : value<32>{0u}));
	// connection
	p_core_2e_f__predict__branch__taken = i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2121_24_318__Y;
	// cells $procmux$54266 $procmux$54264 $procmux$54260 $procmux$54258 $procmux$54256 $flatten\core.$add$tilelink_soc.v:2328$527
	i_flatten_5c_core_2e__24_2_5c_mispredict__with__history_24_next_5b_31_3a_0_5d__24_932 = (p_core_2e__24_567 ? (p_core_2e__24_571 ? (p_core_2e__24_567 ? (p_core_2e__24_571 ? (p_core_2e_m__predict__valid.curr ? add_uu<33>(p_core_2e_mispredict__with__history.curr, value<1>{0x1u}).slice<31,0>().val() : p_core_2e_mispredict__with__history.curr) : value<32>{0u}) : value<32>{0u}) : p_core_2e_mispredict__with__history.curr) : value<32>{0u});
	// cells $flatten\core.$and$tilelink_soc.v:2330$529 $flatten\core.$not$tilelink_soc.v:2329$528
	p_core_2e__24_578 = and_uu<1>(not_u<1>(p_core_2e_m__branch__taken.curr), p_core_2e_m__predict__branch__taken.curr);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $procmux$53868
	i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_ = (p_data__master_2e__24_24 ? i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_ : value<32>{0u});
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:5051$1942
	p_data__master_2e__24_26 = eq_uu<1>(p_data__master_2e_data__stream____req__size, value<1>{0x1u});
	// cells $procmux$52802 $procmux$52803_CMP0
	p_tl__instr__decoder_2e_tl__instr__ram____a____valid = (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_instruction__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$52540 $procmux$52537 $procmux$52535 $procmux$52536_CMP0
	i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_2496 = (p_tl__periph_2e__24_11 ? (p_tl__periph_2e__24_11 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8726$2441 $flatten\tl_periph.$and$tilelink_soc.v:8725$2440 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8722$2435 $flatten\tl_periph.$logic_not$tilelink_soc.v:8704$2417 $flatten\tl_periph.$eq$tilelink_soc.v:8714$2427 $flatten\tl_periph.$and$tilelink_soc.v:8687$2400
	p_tl__periph_2e__24_23 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<1>().val());
	// cells $flatten\core.$reduce_or$tilelink_soc.v:2360$559 $flatten\core.$and$tilelink_soc.v:2359$558 $flatten\core.$and$tilelink_soc.v:2358$557 $flatten\core.$not$tilelink_soc.v:2357$556
	p_core_2e__24_653 = reduce_or<1>(and_uu<2>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__control____branch__mode.curr));
	// cells $procmux$53475 $procmux$53469 $procmux$53467
	i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2039 = (p_data__master_2e__24_32 ? (p_data__master_2e__24_32 ? (p_data__master_2e_read__ptr.curr ? value<2>{0u} : i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2035) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2035);
	// cells $procmux$53472 $procmux$53462 $procmux$53460
	i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2040 = (p_data__master_2e__24_32 ? (p_data__master_2e__24_32 ? (p_data__master_2e_read__ptr.curr ? i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_2036 : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_2036);
	// cells $procmux$53274 $procmux$53255 $procmux$53253
	i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2197 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? value<2>{0u} : i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2189) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2189);
	// connection
	p_instruction__master_2e__24_27 = i_procmux_24_54739__Y;
	// cells $procmux$53271 $procmux$53248 $procmux$53246
	i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2198 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_2190 : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_2190);
	// cells $procmux$53268 $procmux$53241 $procmux$53239
	i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2199 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? value<32>{0u} : i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2191) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2191);
	// cells $procmux$53265 $procmux$53262 $procmux$53260
	i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_2200 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_2192 : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_2192);
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:5062$1953
	p_data__master_2e__24_28 = eq_uu<1>(p_data__master_2e_data__stream____req__size, value<2>{0x2u});
	// cells $procmux$52922 $procmux$52923_CMP0
	p_tl__data__decoder_2e_tl__data__ram____a____valid = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$52314 $procmux$52898 $procmux$52899_CMP0 $procmux$52317 $procmux$52778 $procmux$52779_CMP0
	p_tl__ram__arbiter_2e_bus____a____opcode = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____opcode : value<3>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<3>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? value<3>{0x4u} : value<3>{0u})));
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:164
	// cell $flatten\data_master.$eq$tilelink_soc.v:5092$1983
	p_data__master_2e__24_345 = eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr);
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:164
	// cell $flatten\data_master.$eq$tilelink_soc.v:5094$1985
	p_data__master_2e__24_36 = eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr);
	// \src: tilelink_soc.v:28509.22-28531.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:95
	// cell $flatten\instruction_master.$eq$tilelink_soc.v:6425$2162
	p_instruction__master_2e__24_25 = eq_uu<1>(p_instruction__master_2e_bus____d____source, p_instruction__master_2e_read__ptr.curr);
	// cells $procmux$53830 $procmux$53827 $procmux$53829_CMP0
	i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_.slice<31,16>() = (p_data__master_2e__24_26 ? (p_data__master_2e_data__stream____req__addr.slice<1>().val() ? p_core_2e_m__rs2__value.curr.slice<15,0>().val() : (not_u<1>(p_data__master_2e_data__stream____req__addr.slice<1>().val()) ? i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_.slice<31,16>().val() : value<16>{0u})) : value<16>{0u});
	// cells $procmux$53824 $procmux$53821 $procmux$53823_CMP0
	i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_.slice<15,0>() = (p_data__master_2e__24_26 ? (p_data__master_2e_data__stream____req__addr.slice<1>().val() ? i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_.slice<15,0>().val() : (not_u<1>(p_data__master_2e_data__stream____req__addr.slice<1>().val()) ? p_core_2e_m__rs2__value.curr.slice<15,0>().val() : value<16>{0u})) : value<16>{0u});
	// connection
	p_data__master_2e__24_343 = p_data__master_2e_bus____d____valid;
	// connection
	p_data__master_2e__24_34 = p_data__master_2e_bus____d____valid;
	// connection
	p_instruction__master_2e__24_23 = p_instruction__master_2e_bus____d____valid;
	// cells $procmux$52245 $procmux$52248
	p_tl__ram__arbiter_2e_bus____a____valid = (p_tl__ram__arbiter_2e_rr__grant ? p_tl__data__decoder_2e_tl__data__ram____a____valid : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : p_tl__instr__decoder_2e_tl__instr__ram____a____valid));
	// cells $procmux$54950 $procmux$54951_CMP0 $procmux$54952_CMP0 $procmux$54953_CMP0 $procmux$54954_CMP0 $procmux$54955_CMP0 $procmux$54956_CMP0 $procmux$54957_CMP0 $procmux$54958_CMP0 $flatten\core.$and$tilelink_soc.v:2237$436 $flatten\core.$or$tilelink_soc.v:2236$435 $procmux$54936 $procmux$54937_CMP0 $procmux$54934 $flatten\core.$sshr$tilelink_soc.v:2234$433 $flatten\core.$sshr$tilelink_soc.v:2235$434 $flatten\core.$xor$tilelink_soc.v:2233$432 $flatten\core.$pos$tilelink_soc.v:2232$431 $flatten\core.$extend$tilelink_soc.v:2232$430 $flatten\core.$lt$tilelink_soc.v:2231$429 $flatten\core.$pos$tilelink_soc.v:2229$427 $flatten\core.$extend$tilelink_soc.v:2229$426 $flatten\core.$lt$tilelink_soc.v:2228$425 $flatten\core.$sshl$tilelink_soc.v:2227$424 $procmux$54948 $procmux$54949_CMP0 $procmux$54946 $flatten\core.$sub$tilelink_soc.v:2225$422 $flatten\core.$add$tilelink_soc.v:2226$423
	p_core_2e_x__alu__result = (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x7u}) ? and_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x6u}) ? or_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x5u}) ? (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x5u}) ? (p_core_2e_x__control____alu__mode__switch.curr ? sshr_su<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right.slice<4,0>().val()) : sshr_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right.slice<4,0>().val())) : value<32>{0u}) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x4u}) ? xor_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x3u}) ? pos_u<32>(pos_u<32>(lt_uu<1>(p_core_2e_x__alu__left, p_core_2e_x__alu__right))) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x2u}) ? pos_u<32>(pos_u<32>(lt_ss<1>(p_core_2e_x__alu__left, p_core_2e_x__alu__right))) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x1u}) ? sshl_uu<63>(p_core_2e_x__alu__left, p_core_2e_x__alu__right.slice<4,0>().val()).slice<31,0>().val() : (logic_not<1>(p_core_2e_x__control____alu__operation.curr) ? (logic_not<1>(p_core_2e_x__control____alu__operation.curr) ? (p_core_2e_x__control____alu__mode__switch.curr ? sub_uu<33>(p_core_2e_x__alu__left, p_core_2e_x__alu__right).slice<31,0>().val() : add_uu<33>(p_core_2e_x__alu__left, p_core_2e_x__alu__right).slice<31,0>().val()) : value<32>{0u}) : value<32>{0u}))))))));
	// cells $procmux$54703 $flatten\core.$and$tilelink_soc.v:2242$441 $flatten\core.$and$tilelink_soc.v:2230$428 $flatten\core.$not$tilelink_soc.v:2221$418 $flatten\core.$and$tilelink_soc.v:2210$407 $flatten\core.$not$tilelink_soc.v:2199$396 $flatten\core.$add$tilelink_soc.v:2256$455 $procmux$54706 $flatten\core.$and$tilelink_soc.v:2172$369 $flatten\core.$not$tilelink_soc.v:2162$359 $flatten\core.$and$tilelink_soc.v:2151$348 $flatten\core.$not$tilelink_soc.v:2140$337 $flatten\core.$add$tilelink_soc.v:2188$385
	i_flatten_5c_core_2e__24_2_5c_a__program__counter_24_next_5b_31_3a_0_5d__24_1047 = (and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_f__arbitration____valid.curr, not_u<1>(p_core_2e_f__arbitration____halted)), not_u<1>(p_core_2e_f__arbitration____remove)), p_core_2e_f__predict__branch__taken) ? add_uu<33>(p_core_2e_f__btb__result____target, value<3>{0x4u}).slice<31,0>().val() : (and_uu<1>(and_uu<1>(p_core_2e_a__arbitration____valid.curr, not_u<1>(p_core_2e_a__arbitration____halted)), not_u<1>(p_core_2e_a__arbitration____remove)) ? add_uu<33>(p_core_2e_a__program__counter.curr, value<3>{0x4u}).slice<31,0>().val() : p_core_2e_a__program__counter.curr));
	// cells $flatten\core.$and$tilelink_soc.v:2265$464 $flatten\core.$not$tilelink_soc.v:2261$460
	p_core_2e__24_44 = and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted));
	// cells $flatten\core.$and$tilelink_soc.v:2312$511 $flatten\core.$not$tilelink_soc.v:2311$510
	p_core_2e__24_536 = and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted));
	// connection
	p_tl__ram_2e_bus____a____opcode = p_tl__ram__arbiter_2e_bus____a____opcode;
	// cells $procmux$52773 $procmux$52774_CMP0
	p_tl__instr__decoder_2e_tl__instr__rom____a____valid = (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_instruction__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$52531 $procmux$52528 $procmux$52526 $procmux$52527_CMP0
	i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_2498 = (p_tl__periph_2e__24_23 ? (p_tl__periph_2e__24_23 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_2496) : value<1>{0u}) : i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_2496);
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8732$2447 $flatten\tl_periph.$and$tilelink_soc.v:8731$2446 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8730$2445 $flatten\tl_periph.$logic_not$tilelink_soc.v:8728$2443 $flatten\tl_periph.$eq$tilelink_soc.v:8729$2444 $flatten\tl_periph.$and$tilelink_soc.v:8727$2442
	p_tl__periph_2e__24_35 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<2>().val());
	// cells $procmux$52889 $procmux$52890_CMP0
	p_tl__data__decoder_2e_tl__data__rom____a____valid = (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____valid : value<1>{0u});
	// connection
	p_core_2e_x__arbitration____halted = p_core_2e__24_356;
	// cells $procmux$54251 $procmux$54249 $procmux$54245 $procmux$54243 $procmux$54241 $flatten\core.$add$tilelink_soc.v:2332$531
	i_flatten_5c_core_2e__24_4_5c_mispredict__with__history_24_next_5b_31_3a_0_5d__24_934 = (p_core_2e__24_567 ? (p_core_2e__24_578 ? (p_core_2e__24_567 ? (p_core_2e__24_578 ? (p_core_2e_m__predict__valid.curr ? add_uu<33>(p_core_2e_mispredict__with__history.curr, value<1>{0x1u}).slice<31,0>().val() : i_flatten_5c_core_2e__24_2_5c_mispredict__with__history_24_next_5b_31_3a_0_5d__24_932) : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_core_2e__24_2_5c_mispredict__with__history_24_next_5b_31_3a_0_5d__24_932) : value<32>{0u});
	// cells $flatten\core.$and$tilelink_soc.v:2335$534 $flatten\core.$ne$tilelink_soc.v:2334$533 $flatten\core.$and$tilelink_soc.v:2333$532
	p_core_2e__24_587 = and_uu<1>(and_uu<1>(p_core_2e_m__branch__taken.curr, p_core_2e_m__predict__branch__taken.curr), ne_uu<1>(p_core_2e_m__branch__target.curr, p_core_2e_m__predict__branch__target.curr));
	// connection
	p_tl__ram_2e_bus____a____valid = p_tl__ram__arbiter_2e_bus____a____valid;
	// connection
	p_tl__ram_2e_bus____a____ready = i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_17643_24_10834__Y;
	// cells $procmux$52347 $procmux$52913 $procmux$52914_CMP0 $procmux$52350 $procmux$52793 $procmux$52794_CMP0
	p_tl__ram__arbiter_2e_bus____a____mask = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____mask : value<4>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<4>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? value<4>{0xfu} : value<4>{0u})));
	// cells $procmux$54194 $procmux$54179 $procmux$54177 $flatten\core.$and$tilelink_soc.v:2309$508 $flatten\core.$ne$tilelink_soc.v:2308$507 $flatten\core.$and$tilelink_soc.v:2307$506 $procmux$54185 $procmux$54183 $flatten\core.$and$tilelink_soc.v:2306$505 $flatten\core.$not$tilelink_soc.v:2305$504 $procmux$54191 $procmux$54189 $flatten\core.$and$tilelink_soc.v:2304$503 $flatten\core.$not$tilelink_soc.v:2303$502
	p_core_2e_x__arbitration____remove = (p_core_2e__24_514 ? (p_core_2e__24_514 ? (and_uu<1>(and_uu<1>(p_core_2e_m__branch__taken.curr, p_core_2e_m__predict__branch__taken.curr), ne_uu<1>(p_core_2e_m__branch__target.curr, p_core_2e_m__predict__branch__target.curr)) ? value<1>{0x1u} : (p_core_2e__24_514 ? (and_uu<1>(not_u<1>(p_core_2e_m__branch__taken.curr), p_core_2e_m__predict__branch__taken.curr) ? value<1>{0x1u} : (p_core_2e__24_514 ? (and_uu<1>(p_core_2e_m__branch__taken.curr, not_u<1>(p_core_2e_m__predict__branch__taken.curr)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u})) : value<1>{0u})) : value<1>{0u}) : value<1>{0u});
	// connection
	p_core_2e_x__rs1__value = i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_2223_24_420__Y;
	// connection
	p_core_2e_x__rs2__value = i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_2224_24_421__Y;
	// connection
	p_data__master_2e_bus____a____source = p_data__master_2e_send__ptr.curr;
	// connection
	p_data__master_2e_bus____a____size = p_core_2e_m__control____mem__size.curr;
	// cells $procmux$53365 $procmux$53818 $procmux$53815 $procmux$53833
	p_data__master_2e_bus____a____data = (p_data__master_2e_data__stream____req__we ? (p_data__master_2e__24_28 ? (p_data__master_2e__24_28 ? p_core_2e_m__rs2__value.curr : value<32>{0u}) : (p_data__master_2e__24_26 ? i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_ : i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_)) : value<32>{0u});
	// cells $procmux$52022 $procmux$52025
	p_tl__rom__arbiter_2e_bus____a____valid = (p_tl__rom__arbiter_2e_rr__grant ? p_tl__data__decoder_2e_tl__data__rom____a____valid : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : p_tl__instr__decoder_2e_tl__instr__rom____a____valid));
	// connection
	p_tl__ram__arbiter_2e_rr_2e_requests = p_tl__data__decoder_2e_tl__data__ram____a____valid.concat(p_tl__instr__decoder_2e_tl__instr__ram____a____valid).val();
	// connection
	p_tl__rom__arbiter_2e_rr_2e_requests = p_tl__data__decoder_2e_tl__data__rom____a____valid.concat(p_tl__instr__decoder_2e_tl__instr__rom____a____valid).val();
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:5099$1990
	p_data__master_2e__24_47 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:5098$1989
	p_data__master_2e__24_44 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// \src: tilelink_soc.v:28481.15-28508.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:5097$1988
	p_data__master_2e__24_41 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// cells $procmux$52934 $procmux$52935_CMP0
	p_tl__data__decoder_2e_bus____a____source = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____source : value<1>{0u});
	// cells $procmux$52931 $procmux$52932_CMP0
	p_tl__data__decoder_2e_bus____a____size = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____size : value<2>{0u});
	// cells $procmux$52943 $procmux$52944_CMP0
	p_tl__data__decoder_2e_bus____a____data = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____data : value<32>{0u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8698$2411 $flatten\tl_periph.$and$tilelink_soc.v:8697$2410 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8696$2409 $flatten\tl_periph.$logic_not$tilelink_soc.v:8694$2407 $flatten\tl_periph.$eq$tilelink_soc.v:8695$2408 $flatten\tl_periph.$and$tilelink_soc.v:8693$2406
	p_tl__periph_2e__24_158 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8672$2385 $flatten\tl_periph.$and$tilelink_soc.v:8671$2384 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8670$2383 $flatten\tl_periph.$logic_not$tilelink_soc.v:8668$2381 $flatten\tl_periph.$eq$tilelink_soc.v:8669$2382 $flatten\tl_periph.$and$tilelink_soc.v:8667$2380
	p_tl__periph_2e__24_110 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// \src: tilelink_soc.v:28671.13-28694.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:37
	// cell $flatten\tl_periph.$add$tilelink_soc.v:8740$2455
	i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y = add_uu<65>(p_tl__periph_2e_cycle__count.curr, value<1>{0x1u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8746$2461 $flatten\tl_periph.$and$tilelink_soc.v:8745$2460 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8744$2459 $flatten\tl_periph.$logic_not$tilelink_soc.v:8742$2457 $flatten\tl_periph.$eq$tilelink_soc.v:8743$2458 $flatten\tl_periph.$and$tilelink_soc.v:8741$2456
	p_tl__periph_2e__24_62 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8753$2468 $flatten\tl_periph.$and$tilelink_soc.v:8752$2467 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8751$2466 $flatten\tl_periph.$logic_not$tilelink_soc.v:8748$2463 $flatten\tl_periph.$eq$tilelink_soc.v:8750$2465 $flatten\tl_periph.$and$tilelink_soc.v:8747$2462
	p_tl__periph_2e__24_74 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<1>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8760$2475 $flatten\tl_periph.$and$tilelink_soc.v:8759$2474 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8758$2473 $flatten\tl_periph.$logic_not$tilelink_soc.v:8756$2471 $flatten\tl_periph.$eq$tilelink_soc.v:8757$2472 $flatten\tl_periph.$and$tilelink_soc.v:8754$2469
	p_tl__periph_2e__24_86 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<2>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8766$2481 $flatten\tl_periph.$and$tilelink_soc.v:8765$2480 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8764$2479 $flatten\tl_periph.$logic_not$tilelink_soc.v:8762$2477 $flatten\tl_periph.$eq$tilelink_soc.v:8763$2478 $flatten\tl_periph.$and$tilelink_soc.v:8761$2476
	p_tl__periph_2e__24_98 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<3>().val());
	// cells $procmux$52522 $procmux$52519 $procmux$52517 $procmux$52518_CMP0
	i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_2500 = (p_tl__periph_2e__24_35 ? (p_tl__periph_2e__24_35 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_2498) : value<1>{0u}) : i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_2498);
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8738$2453 $flatten\tl_periph.$and$tilelink_soc.v:8737$2452 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8736$2451 $flatten\tl_periph.$logic_not$tilelink_soc.v:8734$2449 $flatten\tl_periph.$eq$tilelink_soc.v:8735$2450 $flatten\tl_periph.$and$tilelink_soc.v:8733$2448
	p_tl__periph_2e__24_47 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<3>().val());
	// connection
	p_tl__ram_2e_bus____a____mask = p_tl__ram__arbiter_2e_bus____a____mask;
	// cells $procmux$52118 $procmux$53045 $procmux$53046_CMP0 $procmux$52121 $procmux$52870 $procmux$52871_CMP0
	p_tl__rom__arbiter_2e_bus____a____address = (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____address.slice<14,0>().val() : value<15>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<15>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_core_2e_f__program__counter.curr.slice<14,0>().val() : value<15>{0u})));
	// cells $procmux$52341 $procmux$52910 $procmux$52911_CMP0 $procmux$52344 $procmux$52790 $procmux$52791_CMP0
	p_tl__ram__arbiter_2e_bus____a____address = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____address.slice<14,0>().val() : value<15>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<15>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_core_2e_f__program__counter.curr.slice<14,0>().val() : value<15>{0u})));
	// cells $procmux$54960 $procmux$54961_CMP0 $procmux$54962_CMP0 $procmux$54963_CMP0 $procmux$54964_CMP0 $flatten\core.$mul$tilelink_soc.v:2241$440 $flatten\core.$mul$tilelink_soc.v:2240$439 $flatten\core.$mul$tilelink_soc.v:2239$438 $flatten\core.$mul$tilelink_soc.v:2238$437
	p_core_2e_x__muldiv__intermediate = (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x3u}) ? mul_uu<64>(p_core_2e_x__rs1__value, p_core_2e_x__rs2__value) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x2u}) ? mul_ss<64>(p_core_2e_x__rs1__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs1__value).val(), p_core_2e_x__rs2__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs2__value).val()) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x1u}) ? mul_ss<64>(p_core_2e_x__rs1__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs1__value).val(), p_core_2e_x__rs2__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs2__value).val()) : (logic_not<1>(p_core_2e_x__control____alu__operation.curr) ? mul_uu<64>(p_core_2e_x__rs1__value, p_core_2e_x__rs2__value) : value<64>{0u,0u}))));
	// connection
	p_tl__rom_2e_bus____a____ready = i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_26828_24_35526__Y;
	// cells $flatten\core.$and$tilelink_soc.v:2195$392 $flatten\core.$not$tilelink_soc.v:2194$391 $flatten\core.$not$tilelink_soc.v:2193$390
	p_core_2e__24_251 = and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove));
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52766_CMP0
	i_procmux_24_52766__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52766_CMP1
	i_procmux_24_52766__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52749_CMP0
	i_procmux_24_52749__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52749_CMP1
	i_procmux_24_52749__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52732_CMP0
	i_procmux_24_52732__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52732_CMP1
	i_procmux_24_52732__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52715_CMP0
	i_procmux_24_52715__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52715_CMP1
	i_procmux_24_52715__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52653_CMP0
	i_procmux_24_52653__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52653_CMP1
	i_procmux_24_52653__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52636_CMP0
	i_procmux_24_52636__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:66
	// cell $procmux$52636_CMP1
	i_procmux_24_52636__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// cells $procmux$52353 $procmux$52916 $procmux$52917_CMP0
	p_tl__ram__arbiter_2e_bus____a____data = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____data : value<32>{0u}) : value<32>{0u});
	// cells $flatten\core.$and$tilelink_soc.v:2403$602 $flatten\core.$and$tilelink_soc.v:2402$601 $flatten\core.$not$tilelink_soc.v:2401$600
	p_core_2e_register__file__w__en = and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, not_u<1>(p_core_2e_w__arbitration____halted)), p_core_2e_w__control____register__write.curr);
	// cells $procmux$54344 $flatten\core.$reduce_or$tilelink_soc.v:2379$578 $flatten\core.$and$tilelink_soc.v:2377$576 $flatten\core.$and$tilelink_soc.v:2376$575 $flatten\core.$not$tilelink_soc.v:2375$574
	p_core_2e_a__btb__w__en = (reduce_or<1>(and_uu<2>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__control____branch__mode.curr)) ? value<1>{0x1u} : value<1>{0u});
	// cells $flatten\tl_ram.$and$tilelink_soc.v:17621$10812 $flatten\tl_ram.$and$tilelink_soc.v:17620$10811 $flatten\tl_ram.$reduce_or$tilelink_soc.v:17619$10810 $flatten\tl_ram.$logic_not$tilelink_soc.v:17644$10835 $flatten\tl_ram.$eq$tilelink_soc.v:17618$10809 $flatten\tl_ram.$and$tilelink_soc.v:17640$10831
	p_tl__ram_2e_memory__w__en.slice<0>() = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__ram_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__ram_2e_bus____a____opcode)).val())), p_tl__ram_2e_bus____a____mask.slice<0>().val());
	// cells $flatten\tl_ram.$and$tilelink_soc.v:17627$10818 $flatten\tl_ram.$and$tilelink_soc.v:17626$10817 $flatten\tl_ram.$reduce_or$tilelink_soc.v:17625$10816 $flatten\tl_ram.$logic_not$tilelink_soc.v:17623$10814 $flatten\tl_ram.$eq$tilelink_soc.v:17624$10815 $flatten\tl_ram.$and$tilelink_soc.v:17622$10813
	p_tl__ram_2e_memory__w__en.slice<1>() = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__ram_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__ram_2e_bus____a____opcode)).val())), p_tl__ram_2e_bus____a____mask.slice<1>().val());
	// cells $flatten\tl_ram.$and$tilelink_soc.v:17634$10825 $flatten\tl_ram.$and$tilelink_soc.v:17633$10824 $flatten\tl_ram.$reduce_or$tilelink_soc.v:17632$10823 $flatten\tl_ram.$logic_not$tilelink_soc.v:17630$10821 $flatten\tl_ram.$eq$tilelink_soc.v:17631$10822 $flatten\tl_ram.$and$tilelink_soc.v:17628$10819
	p_tl__ram_2e_memory__w__en.slice<2>() = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__ram_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__ram_2e_bus____a____opcode)).val())), p_tl__ram_2e_bus____a____mask.slice<2>().val());
	// cells $flatten\tl_ram.$and$tilelink_soc.v:17641$10832 $flatten\tl_ram.$and$tilelink_soc.v:17639$10830 $flatten\tl_ram.$reduce_or$tilelink_soc.v:17638$10829 $flatten\tl_ram.$logic_not$tilelink_soc.v:17636$10827 $flatten\tl_ram.$eq$tilelink_soc.v:17637$10828 $flatten\tl_ram.$and$tilelink_soc.v:17635$10826
	p_tl__ram_2e_memory__w__en.slice<3>() = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__ram_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__ram_2e_bus____a____opcode)).val())), p_tl__ram_2e_bus____a____mask.slice<3>().val());
	// connection
	p_core_2e_rst = p_rst;
	// connection
	p_data__master_2e_rst = p_rst;
	// connection
	p_instruction__master_2e_rst = p_rst;
	// connection
	p_tl__periph_2e_rst = p_rst;
	// connection
	p_tl__ram_2e_rst = p_rst;
	// connection
	p_tl__ram__arbiter_2e_rr_2e_rst = p_rst;
	// connection
	p_tl__rom_2e_rst = p_rst;
	// connection
	p_tl__rom__arbiter_2e_rr_2e_rst = p_rst;
	// \full_case: 1
	// \src: tilelink_soc.v:2098.5-2099.67
	// cell $procmux$53899
	i_procmux_24_53899__Y = (p_core_2e_register__file__w__en ? p_core_2e_w__control____rd.curr : value<5>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:2098.5-2099.67
	// cell $procmux$53896
	i_procmux_24_53896__Y = (p_core_2e_register__file__w__en ? p_core_2e_w__write__data : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:2098.5-2099.67
	// cell $procmux$53893
	i_procmux_24_53893__Y = (p_core_2e_register__file__w__en ? value<32>{0xffffffffu} : value<32>{0u});
	// cells $procmux$53888 $procmux$54338 $flatten\core.$reduce_or$tilelink_soc.v:2369$568 $flatten\core.$and$tilelink_soc.v:2368$567 $flatten\core.$and$tilelink_soc.v:2367$566 $flatten\core.$not$tilelink_soc.v:2366$565
	i_procmux_24_53888__Y = (p_core_2e_a__btb__w__en ? (reduce_or<1>(and_uu<2>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__control____branch__mode.curr)) ? p_core_2e_m__program__counter.curr.slice<9,2>().val() : value<8>{0u}) : value<8>{0u});
	// cells $procmux$53885 $procmux$54341 $flatten\core.$reduce_or$tilelink_soc.v:2374$573 $flatten\core.$and$tilelink_soc.v:2373$572 $flatten\core.$and$tilelink_soc.v:2372$571 $flatten\core.$not$tilelink_soc.v:2370$569 $procmux$54278 $flatten\core.$reduce_or$tilelink_soc.v:2346$545 $flatten\core.$and$tilelink_soc.v:2345$544 $flatten\core.$and$tilelink_soc.v:2344$543 $flatten\core.$not$tilelink_soc.v:2343$542 $procmux$54281 $flatten\core.$reduce_or$tilelink_soc.v:2351$550 $flatten\core.$and$tilelink_soc.v:2350$549 $flatten\core.$and$tilelink_soc.v:2349$548 $flatten\core.$not$tilelink_soc.v:2348$547 $procmux$54284 $flatten\core.$reduce_or$tilelink_soc.v:2356$555 $flatten\core.$and$tilelink_soc.v:2355$554 $flatten\core.$and$tilelink_soc.v:2353$552 $flatten\core.$not$tilelink_soc.v:2352$551 $procmux$54335 $procmux$54332 $procmux$54330 $procmux$54326 $procmux$54324 $procmux$54322 $procmux$54317 $procmux$54315 $procmux$54313 $procmux$54311 $flatten\core.$ne$tilelink_soc.v:2361$560 $flatten\core.$add$tilelink_soc.v:2362$561 $procmux$54305 $procmux$54303 $procmux$54301 $procmux$54298 $flatten\core.$reduce_or$tilelink_soc.v:2364$563 $flatten\core.$sub$tilelink_soc.v:2365$564 $procmux$54293 $procmux$54291 $procmux$54288
	i_procmux_24_53885__Y = (p_core_2e_a__btb__w__en ? (reduce_or<1>(and_uu<2>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__control____branch__mode.curr)) ? (p_core_2e__24_653 ? (p_core_2e__24_653 ? (p_core_2e_m__predict__valid.curr ? (p_core_2e__24_653 ? (p_core_2e_m__predict__valid.curr ? (p_core_2e_m__branch__taken.curr ? (p_core_2e__24_653 ? (p_core_2e_m__predict__valid.curr ? (p_core_2e_m__branch__taken.curr ? (ne_uu<1>(p_core_2e_m__predict__branch__predictor.curr, value<2>{0x3u}) ? add_uu<3>(p_core_2e_m__predict__branch__predictor.curr, value<1>{0x1u}).slice<1,0>().val() : value<2>{0x3u}) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : (p_core_2e__24_653 ? (p_core_2e_m__predict__valid.curr ? (p_core_2e_m__branch__taken.curr ? value<2>{0u} : (reduce_or<1>(p_core_2e_m__predict__branch__predictor.curr) ? sub_uu<3>(p_core_2e_m__predict__branch__predictor.curr, value<1>{0x1u}).slice<1,0>().val() : value<2>{0u})) : value<2>{0u}) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : (p_core_2e__24_653 ? (p_core_2e_m__predict__valid.curr ? value<2>{0u} : (p_core_2e_m__branch__taken.curr ? value<2>{0x2u} : value<2>{0x1u})) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}).concat((reduce_or<1>(and_uu<2>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__control____branch__mode.curr)) ? p_core_2e_m__branch__target.curr : value<32>{0u})).concat((reduce_or<1>(and_uu<2>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__control____branch__mode.curr)) ? p_core_2e_m__program__counter.curr.slice<31,10>().val() : value<22>{0u})).concat((reduce_or<1>(and_uu<2>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__control____branch__mode.curr)) ? value<1>{0x1u} : value<1>{0u})).val() : value<57>{0u,0u}) : value<57>{0u,0u});
	// \full_case: 1
	// \src: tilelink_soc.v:2052.5-2053.43
	// cell $procmux$53882
	i_procmux_24_53882__Y = (p_core_2e_a__btb__w__en ? value<57>{0xffffffffu,0x1ffffffu} : value<57>{0u,0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17602.5-17603.56
	// cell $procmux$52412
	i_procmux_24_52412__Y = (p_tl__ram_2e_memory__w__en.slice<0>().val() ? p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val() : value<13>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17602.5-17603.56
	// cell $procmux$52409
	i_procmux_24_52409__Y = (p_tl__ram_2e_memory__w__en.slice<0>().val() ? value<24>{0u}.concat(p_tl__ram__arbiter_2e_bus____a____data.slice<7,0>()).val() : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17602.5-17603.56
	// cell $procmux$52406
	i_procmux_24_52406__Y = (p_tl__ram_2e_memory__w__en.slice<0>().val() ? value<32>{0xffu} : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17604.5-17605.58
	// cell $procmux$52403
	i_procmux_24_52403__Y = (p_tl__ram_2e_memory__w__en.slice<1>().val() ? p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val() : value<13>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17604.5-17605.58
	// cell $procmux$52400
	i_procmux_24_52400__Y = (p_tl__ram_2e_memory__w__en.slice<1>().val() ? value<16>{0u}.concat(p_tl__ram__arbiter_2e_bus____a____data.slice<15,8>()).concat(value<8>{0u}).val() : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17604.5-17605.58
	// cell $procmux$52397
	i_procmux_24_52397__Y = (p_tl__ram_2e_memory__w__en.slice<1>().val() ? value<32>{0xff00u} : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17606.5-17607.60
	// cell $procmux$52394
	i_procmux_24_52394__Y = (p_tl__ram_2e_memory__w__en.slice<2>().val() ? p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val() : value<13>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17606.5-17607.60
	// cell $procmux$52391
	i_procmux_24_52391__Y = (p_tl__ram_2e_memory__w__en.slice<2>().val() ? value<8>{0u}.concat(p_tl__ram__arbiter_2e_bus____a____data.slice<23,16>()).concat(value<16>{0u}).val() : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17606.5-17607.60
	// cell $procmux$52388
	i_procmux_24_52388__Y = (p_tl__ram_2e_memory__w__en.slice<2>().val() ? value<32>{0xff0000u} : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17608.5-17609.60
	// cell $procmux$52385
	i_procmux_24_52385__Y = (p_tl__ram_2e_memory__w__en.slice<3>().val() ? p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val() : value<13>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17608.5-17609.60
	// cell $procmux$52382
	i_procmux_24_52382__Y = (p_tl__ram_2e_memory__w__en.slice<3>().val() ? p_tl__ram__arbiter_2e_bus____a____data.slice<31,24>().concat(value<24>{0u}).val() : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:17608.5-17609.60
	// cell $procmux$52379
	i_procmux_24_52379__Y = (p_tl__ram_2e_memory__w__en.slice<3>().val() ? value<32>{0xff000000u} : value<32>{0u});
	// \src: tilelink_soc.v:28779.10-28801.4|tilelink_soc.v:26822.14-26822.20
	// memory \tl_rom.memory read port 0
	auto tmp_0 = memory_index(p_tl__rom__arbiter_2e_bus____a____address.slice<14,2>().val(), 0, 8192);
	CXXRTL_ASSERT(tmp_0.valid && "out of bounds read");
	if(tmp_0.valid) {
		i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_26822_24_35523__DATA = memory_p_tl__rom_2e_memory[tmp_0.index];
	} else {
		i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_26822_24_35523__DATA = value<32> {};
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17614.14-17614.20
	// memory \tl_ram.memory read port 0
	auto tmp_1 = memory_index(p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val(), 0, 8192);
	CXXRTL_ASSERT(tmp_1.valid && "out of bounds read");
	if(tmp_1.valid) {
		value<32> tmp_2 = memory_p_tl__ram_2e_memory[tmp_1.index];
		i_flatten_5c_tl__ram_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_17614_24_10808__DATA = tmp_2;
	} else {
		i_flatten_5c_tl__ram_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_17614_24_10808__DATA = value<32> {};
	}
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2058.14-2058.19
	// memory \core.a_btb read port 0
	// cells $procmux$54727 $flatten\core.$and$tilelink_soc.v:2386$585 $flatten\core.$and$tilelink_soc.v:2378$577 $flatten\core.$not$tilelink_soc.v:2371$570 $flatten\core.$and$tilelink_soc.v:2363$562 $flatten\core.$not$tilelink_soc.v:2354$553
	auto tmp_3 = memory_index((and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_f__arbitration____valid.curr, not_u<1>(p_core_2e_f__arbitration____halted)), not_u<1>(p_core_2e_f__arbitration____remove)), p_core_2e_f__predict__branch__taken) ? p_core_2e___0__.curr.slice<54,23>().val() : p_core_2e_a__program__counter.curr).slice<9,2>().val(), 0, 256);
	CXXRTL_ASSERT(tmp_3.valid && "out of bounds read");
	if(tmp_3.valid) {
		value<57> tmp_4 = memory_p_core_2e_a__btb[tmp_3.index];
		i_flatten_5c_core_2e__24_memrd_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2058_24_299__DATA = tmp_4;
	} else {
		i_flatten_5c_core_2e__24_memrd_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2058_24_299__DATA = value<57> {};
	}
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2105.14-2105.27
	// memory \core.register_file read port 1
	auto tmp_5 = memory_index(p_core_2e_d__control____rs1, 0, 32);
	CXXRTL_ASSERT(tmp_5.valid && "out of bounds read");
	if(tmp_5.valid) {
		value<32> tmp_6 = memory_p_core_2e_register__file[tmp_5.index];
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_2105_24_308__DATA = tmp_6;
	} else {
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_2105_24_308__DATA = value<32> {};
	}
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2108.14-2108.27
	// memory \core.register_file read port 0
	auto tmp_7 = memory_index(p_core_2e_d__control____rs2, 0, 32);
	CXXRTL_ASSERT(tmp_7.valid && "out of bounds read");
	if(tmp_7.valid) {
		value<32> tmp_8 = memory_p_core_2e_register__file[tmp_7.index];
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_2108_24_309__DATA = tmp_8;
	} else {
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_2108_24_309__DATA = value<32> {};
	}
	// connection
	p_core_2e_clk = p_clk;
	// connection
	p_tl__ram_2e_clk = p_clk;
	// connection
	p_tl__rom__arbiter_2e_rr_2e_clk = p_clk;
	// connection
	p_tl__rom_2e_clk = p_clk;
	// connection
	p_tl__ram__arbiter_2e_rr_2e_clk = p_clk;
	// connection
	p_tl__periph_2e_clk = p_clk;
	// connection
	p_instruction__master_2e_clk = p_clk;
	// connection
	p_data__master_2e_clk = p_clk;
	// \src: tilelink_soc.v:2099.7-2099.66
	// memory \core.register_file write port 0
	if (posedge_p_clk) {
		auto tmp_9 = memory_index(i_procmux_24_53899__Y, 0, 32);
		CXXRTL_ASSERT(tmp_9.valid && "out of bounds write");
		if (tmp_9.valid) {
			memory_p_core_2e_register__file.update(tmp_9.index, i_procmux_24_53896__Y, i_procmux_24_53893__Y, 0);
		}
	}
	// \src: tilelink_soc.v:2053.7-2053.42
	// memory \core.a_btb write port 0
	if (posedge_p_clk) {
		auto tmp_10 = memory_index(i_procmux_24_53888__Y, 0, 256);
		CXXRTL_ASSERT(tmp_10.valid && "out of bounds write");
		if (tmp_10.valid) {
			memory_p_core_2e_a__btb.update(tmp_10.index, i_procmux_24_53885__Y, i_procmux_24_53882__Y, 0);
		}
	}
	// \src: tilelink_soc.v:17603.7-17603.55
	// memory \tl_ram.memory write port 0
	if (posedge_p_clk) {
		auto tmp_11 = memory_index(i_procmux_24_52412__Y, 0, 8192);
		CXXRTL_ASSERT(tmp_11.valid && "out of bounds write");
		if (tmp_11.valid) {
			memory_p_tl__ram_2e_memory.update(tmp_11.index, i_procmux_24_52409__Y, i_procmux_24_52406__Y, 0);
		}
	}
	// \src: tilelink_soc.v:17605.7-17605.57
	// memory \tl_ram.memory write port 1
	if (posedge_p_clk) {
		auto tmp_12 = memory_index(i_procmux_24_52403__Y, 0, 8192);
		CXXRTL_ASSERT(tmp_12.valid && "out of bounds write");
		if (tmp_12.valid) {
			memory_p_tl__ram_2e_memory.update(tmp_12.index, i_procmux_24_52400__Y, i_procmux_24_52397__Y, 1);
		}
	}
	// \src: tilelink_soc.v:17607.7-17607.59
	// memory \tl_ram.memory write port 2
	if (posedge_p_clk) {
		auto tmp_13 = memory_index(i_procmux_24_52394__Y, 0, 8192);
		CXXRTL_ASSERT(tmp_13.valid && "out of bounds write");
		if (tmp_13.valid) {
			memory_p_tl__ram_2e_memory.update(tmp_13.index, i_procmux_24_52391__Y, i_procmux_24_52388__Y, 2);
		}
	}
	// \src: tilelink_soc.v:17609.7-17609.59
	// memory \tl_ram.memory write port 3
	if (posedge_p_clk) {
		auto tmp_14 = memory_index(i_procmux_24_52385__Y, 0, 8192);
		CXXRTL_ASSERT(tmp_14.valid && "out of bounds write");
		if (tmp_14.valid) {
			memory_p_tl__ram_2e_memory.update(tmp_14.index, i_procmux_24_52382__Y, i_procmux_24_52379__Y, 3);
		}
	}
	// cells $procdff$55225 $procmux$54401 $procmux$54461
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__right__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____alu__right__select.curr : p_core_2e_m__control____alu__right__select.curr));
	}
	// cells $procdff$55226 $procmux$54398 $procmux$54458
	if (posedge_p_clk) {
		p_core_2e_w__control____branch__mode.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____branch__mode.curr : p_core_2e_m__control____branch__mode.curr));
	}
	// cells $procdff$55236 $procmux$54347 $procmux$54350 $procmux$54353
	if (posedge_p_clk) {
		p_core_2e_w__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__arbitration____valid.curr : value<1>{0u}) : p_core_2e_m__arbitration____valid.curr));
	}
	// cells $procdff$55240 $procmux$54107 $procmux$54110
	if (posedge_p_clk) {
		p_core_2e_m__predict__valid.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__predict__valid.curr : p_core_2e_x__predict__valid.curr));
	}
	// cells $procdff$55244 $procmux$54083 $procmux$54086 $procmux$54978 $procmux$54980_CMP0 $flatten\core.$add$tilelink_soc.v:2249$448 $flatten\core.$add$tilelink_soc.v:2248$447
	if (posedge_p_clk) {
		p_core_2e_m__branch__target.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__branch__target.curr : (p_core_2e_x__control____branch__type.curr ? add_uu<33>(p_core_2e_x__rs1__value, p_core_2e_x__control____immediate.curr).slice<31,0>().val() : (not_u<1>(p_core_2e_x__control____branch__type.curr) ? add_uu<33>(p_core_2e_x__program__counter.curr, p_core_2e_x__control____immediate.curr).slice<31,0>().val() : value<32>{0u}))));
	}
	// cells $procdff$55253 $procmux$53984 $procmux$54047
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__operation.next = (p_core_2e_rst ? value<3>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____alu__operation.curr : p_core_2e_x__control____alu__operation.curr));
	}
	// cells $procdff$55257 $procmux$53972 $procmux$54032
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__right__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____alu__right__select.curr : p_core_2e_x__control____alu__right__select.curr));
	}
	// cells $procdff$55223 $procmux$54407 $procmux$54470
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__muldiv.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____alu__muldiv.curr : p_core_2e_m__control____alu__muldiv.curr));
	}
	// cells $procdff$55224 $procmux$54404 $procmux$54473
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__left__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____alu__left__select.curr : p_core_2e_m__control____alu__left__select.curr));
	}
	// cells $procdff$55227 $procmux$54395 $procmux$54455
	if (posedge_p_clk) {
		p_core_2e_w__control____branch__type.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____branch__type.curr : p_core_2e_m__control____branch__type.curr));
	}
	// cells $procdff$55230 $procmux$54386 $procmux$54443
	if (posedge_p_clk) {
		p_core_2e_w__control____mem__size.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____mem__size.curr : p_core_2e_m__control____mem__size.curr));
	}
	// cells $procdff$55231 $procmux$54383 $procmux$54440
	if (posedge_p_clk) {
		p_core_2e_w__control____mem__unsigned.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____mem__unsigned.curr : p_core_2e_m__control____mem__unsigned.curr));
	}
	// cells $procdff$55234 $procmux$54371 $procmux$54374
	if (posedge_p_clk) {
		p_core_2e_w__instruction.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__instruction.curr : p_core_2e_m__instruction.curr));
	}
	// cells $procdff$55238 $procmux$54221 $procmux$54269 $procmux$54236 $procmux$54234 $procmux$54230 $procmux$54228 $procmux$54226 $flatten\core.$add$tilelink_soc.v:2336$535
	if (posedge_p_clk) {
		p_core_2e_mispredict__with__history.next = (p_core_2e_rst ? value<32>{0u} : (p_core_2e__24_567 ? (p_core_2e__24_567 ? (p_core_2e__24_587 ? (p_core_2e__24_567 ? (p_core_2e__24_587 ? (p_core_2e_m__predict__valid.curr ? add_uu<33>(p_core_2e_mispredict__with__history.curr, value<1>{0x1u}).slice<31,0>().val() : i_flatten_5c_core_2e__24_4_5c_mispredict__with__history_24_next_5b_31_3a_0_5d__24_934) : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_core_2e__24_4_5c_mispredict__with__history_24_next_5b_31_3a_0_5d__24_934) : value<32>{0u}) : p_core_2e_mispredict__with__history.curr));
	}
	// cells $procdff$55242 $procmux$54095 $procmux$54098
	if (posedge_p_clk) {
		p_core_2e_m__predict__branch__target.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__predict__branch__target.curr : p_core_2e_x__predict__branch__target.curr));
	}
	// cells $procdff$55251 $procmux$53990 $procmux$54023
	if (posedge_p_clk) {
		p_core_2e_m__control____rd.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____rd.curr : p_core_2e_x__control____rd.curr));
	}
	// cells $procdff$55255 $procmux$53978 $procmux$54041
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__muldiv.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____alu__muldiv.curr : p_core_2e_x__control____alu__muldiv.curr));
	}
	// cells $procdff$55228 $procmux$54392 $procmux$54449
	if (posedge_p_clk) {
		p_core_2e_w__control____mem__enable.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____mem__enable.curr : p_core_2e_m__control____mem__enable.curr));
	}
	// cells $procdff$55229 $procmux$54389 $procmux$54446
	if (posedge_p_clk) {
		p_core_2e_w__control____mem__we.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____mem__we.curr : p_core_2e_m__control____mem__we.curr));
	}
	// cells $procdff$55232 $procmux$54380 $procmux$54434
	if (posedge_p_clk) {
		p_core_2e_w__control____register__write.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____register__write.curr : p_core_2e_m__control____register__write.curr));
	}
	// cells $procdff$55233 $procmux$54377 $procmux$54437
	if (posedge_p_clk) {
		p_core_2e_w__control____writeback__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____writeback__select.curr : p_core_2e_m__control____writeback__select.curr));
	}
	// cells $procdff$55235 $procmux$54365 $procmux$54368
	if (posedge_p_clk) {
		p_core_2e_w__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__program__counter.curr : p_core_2e_m__program__counter.curr));
	}
	// cells $procdff$55237 $procmux$54272 $procmux$54275 $flatten\core.$reduce_or$tilelink_soc.v:2341$540 $flatten\core.$and$tilelink_soc.v:2340$539 $flatten\core.$and$tilelink_soc.v:2338$537 $flatten\core.$not$tilelink_soc.v:2337$536 $flatten\core.$add$tilelink_soc.v:2342$541
	if (posedge_p_clk) {
		p_core_2e_branch__counter.next = (p_core_2e_rst ? value<32>{0u} : (reduce_or<1>(and_uu<2>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__control____branch__mode.curr)) ? add_uu<33>(p_core_2e_branch__counter.curr, value<1>{0x1u}).slice<31,0>().val() : p_core_2e_branch__counter.curr));
	}
	// cells $procdff$55239 $procmux$54197 $procmux$54218 $procmux$54203 $procmux$54201 $flatten\core.$and$tilelink_soc.v:2321$520 $flatten\core.$ne$tilelink_soc.v:2320$519 $flatten\core.$and$tilelink_soc.v:2319$518 $flatten\core.$add$tilelink_soc.v:2323$522 $procmux$54209 $procmux$54207 $flatten\core.$and$tilelink_soc.v:2317$516 $flatten\core.$not$tilelink_soc.v:2316$515 $flatten\core.$add$tilelink_soc.v:2318$517 $procmux$54215 $procmux$54213 $flatten\core.$and$tilelink_soc.v:2314$513 $flatten\core.$not$tilelink_soc.v:2313$512 $flatten\core.$add$tilelink_soc.v:2315$514
	if (posedge_p_clk) {
		p_core_2e_mispredict__counter.next = (p_core_2e_rst ? value<32>{0u} : (p_core_2e__24_536 ? (p_core_2e__24_536 ? (and_uu<1>(and_uu<1>(p_core_2e_m__branch__taken.curr, p_core_2e_m__predict__branch__taken.curr), ne_uu<1>(p_core_2e_m__branch__target.curr, p_core_2e_m__predict__branch__target.curr)) ? add_uu<33>(p_core_2e_mispredict__counter.curr, value<1>{0x1u}).slice<31,0>().val() : (p_core_2e__24_536 ? (and_uu<1>(not_u<1>(p_core_2e_m__branch__taken.curr), p_core_2e_m__predict__branch__taken.curr) ? add_uu<33>(p_core_2e_mispredict__counter.curr, value<1>{0x1u}).slice<31,0>().val() : (p_core_2e__24_536 ? (and_uu<1>(p_core_2e_m__branch__taken.curr, not_u<1>(p_core_2e_m__predict__branch__taken.curr)) ? add_uu<33>(p_core_2e_mispredict__counter.curr, value<1>{0x1u}).slice<31,0>().val() : p_core_2e_mispredict__counter.curr) : value<32>{0u})) : value<32>{0u})) : value<32>{0u}) : p_core_2e_mispredict__counter.curr));
	}
	// cells $procdff$55241 $procmux$54101 $procmux$54104
	if (posedge_p_clk) {
		p_core_2e_m__predict__branch__predictor.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__predict__branch__predictor.curr : p_core_2e_x__predict__branch__predictor.curr));
	}
	// cells $procdff$55243 $procmux$54089 $procmux$54092
	if (posedge_p_clk) {
		p_core_2e_m__predict__branch__taken.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__predict__branch__taken.curr : p_core_2e_x__predict__branch__taken.curr));
	}
	// cells $procdff$55245 $procmux$54077 $procmux$54080 $procmux$54976 $flatten\core.$eq$tilelink_soc.v:2243$442 $procmux$54974 $flatten\core.$eq$tilelink_soc.v:2244$443 $flatten\core.$logic_not$tilelink_soc.v:2246$445 $procmux$54972 $flatten\core.$eq$tilelink_soc.v:2245$444 $flatten\core.$reduce_or$tilelink_soc.v:2247$446
	if (posedge_p_clk) {
		p_core_2e_m__branch__taken.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__branch__taken.curr : (eq_uu<1>(p_core_2e_x__control____branch__mode.curr, value<2>{0x1u}) ? value<1>{0x1u} : (eq_uu<1>(p_core_2e_x__control____branch__mode.curr, value<2>{0x2u}) ? logic_not<1>(p_core_2e_x__alu__result) : (eq_uu<1>(p_core_2e_x__control____branch__mode.curr, value<2>{0x3u}) ? reduce_or<1>(p_core_2e_x__alu__result) : value<1>{0u})))));
	}
	// cells $procdff$55246 $procmux$54071 $procmux$54074
	if (posedge_p_clk) {
		p_core_2e_m__rs2__value.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__rs2__value.curr : i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_2224_24_421__Y));
	}
	// cells $procdff$55247 $procmux$54065 $procmux$54068 $procmux$54966 $procmux$54967_CMP0 $procmux$54968_CMP0 $procmux$54969_CMP0 $procmux$54970_CMP0
	if (posedge_p_clk) {
		p_core_2e_m__muldiv__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__muldiv__result.curr : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x3u}) ? p_core_2e_x__muldiv__intermediate.slice<63,32>().val() : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x2u}) ? p_core_2e_x__muldiv__intermediate.slice<63,32>().val() : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x1u}) ? p_core_2e_x__muldiv__intermediate.slice<63,32>().val() : (logic_not<1>(p_core_2e_x__control____alu__operation.curr) ? p_core_2e_x__muldiv__intermediate.slice<31,0>().val() : value<32>{0u}))))));
	}
	// cells $procdff$55248 $procmux$54059 $procmux$54062
	if (posedge_p_clk) {
		p_core_2e_m__alu__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__alu__result.curr : p_core_2e_x__alu__result));
	}
	// cells $procdff$55249 $procmux$53996 $procmux$54002
	if (posedge_p_clk) {
		p_core_2e_m__control____rs1.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____rs1.curr : p_core_2e_x__control____rs1.curr));
	}
	// cells $procdff$55250 $procmux$53993 $procmux$53999
	if (posedge_p_clk) {
		p_core_2e_m__control____rs2.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____rs2.curr : p_core_2e_x__control____rs2.curr));
	}
	// cells $procdff$55252 $procmux$53987 $procmux$54035
	if (posedge_p_clk) {
		p_core_2e_m__control____immediate.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____immediate.curr : p_core_2e_x__control____immediate.curr));
	}
	// cells $procdff$55254 $procmux$53981 $procmux$54038
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__mode__switch.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____alu__mode__switch.curr : p_core_2e_x__control____alu__mode__switch.curr));
	}
	// cells $procdff$55256 $procmux$53975 $procmux$54044
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__left__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____alu__left__select.curr : p_core_2e_x__control____alu__left__select.curr));
	}
	// cells $procdff$55087 $procmux$52139 $procmux$52152 $procmux$52154_CMP0 $procmux$52144 $procmux$52142 $procmux$52150 $procmux$52148
	if (posedge_p_clk) {
		p_tl__rom__arbiter_2e_rr_2e_grant.next = (p_tl__rom__arbiter_2e_rr_2e_rst ? value<1>{0u} : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? (p_tl__rom__arbiter_2e_rr_2e_requests.slice<0>().val() ? value<1>{0u} : p_tl__rom__arbiter_2e_rr_2e_grant.curr) : value<1>{0u}) : (not_u<1>(p_tl__rom__arbiter_2e_rr_2e_grant.curr) ? (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : (p_tl__rom__arbiter_2e_rr_2e_requests.slice<1>().val() ? value<1>{0x1u} : p_tl__rom__arbiter_2e_rr_2e_grant.curr)) : value<1>{0u})));
	}
	// cells $procdff$55088 $procmux$52136 $flatten\tl_rom_arbiter.\rr.$reduce_or$tilelink_soc.v:6817$2279
	if (posedge_p_clk) {
		p_tl__rom__arbiter_2e_rr_2e_valid.next = (p_tl__rom__arbiter_2e_rr_2e_rst ? value<1>{0u} : reduce_or<1>(p_tl__rom__arbiter_2e_rr_2e_requests));
	}
	// cells $procdff$55089 $procmux$52155 $flatten\tl_rom.$and$tilelink_soc.v:26826$35524
	if (posedge_p_clk) {
		p_tl__rom_2e___0__.next = (and_uu<1>(p_tl__rom__arbiter_2e_bus____a____valid, p_tl__rom_2e_bus____a____ready) ? i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_26822_24_35523__DATA : p_tl__rom_2e___0__.curr);
	}
	// cells $procdff$55090 $procmux$52185 $procmux$52200 $procmux$52091 $procmux$53030 $procmux$53031_CMP0 $procmux$52094 $procmux$52856 $procmux$52857_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____opcode.next = (p_tl__rom_2e_rst ? value<3>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____opcode : value<3>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<3>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? value<3>{0x4u} : value<3>{0u}))) : p_tl__rom_2e_last__a____opcode.curr));
	}
	// cells $procdff$55091 $procmux$52182 $procmux$52197
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____param.next = (p_tl__rom_2e_rst ? value<3>{0u} : (p_tl__rom_2e_bus____a____ready ? value<3>{0u} : p_tl__rom_2e_last__a____param.curr));
	}
	// cells $procdff$55092 $procmux$52179 $procmux$52191 $procmux$52106 $procmux$53039 $procmux$53040_CMP0 $procmux$52109 $procmux$52864 $procmux$52865_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____size.next = (p_tl__rom_2e_rst ? value<2>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____size : value<2>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? value<2>{0x2u} : value<2>{0u}))) : p_tl__rom_2e_last__a____size.curr));
	}
	// cells $procdff$55093 $procmux$52176 $procmux$52188 $procmux$52112 $procmux$53042 $procmux$53043_CMP0 $procmux$52115 $procmux$52867 $procmux$52868_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____source.next = (p_tl__rom_2e_rst ? value<2>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? value<1>{0x1u}.concat((logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____source : value<1>{0u})).val() : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : value<1>{0u}.concat((logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_instruction__master_2e_send__ptr.curr : value<1>{0u})).val())) : p_tl__rom_2e_last__a____source.curr));
	}
	// cells $procdff$55094 $procmux$52173 $procmux$52212
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____address.next = (p_tl__rom_2e_rst ? value<15>{0u} : (p_tl__rom_2e_bus____a____ready ? p_tl__rom__arbiter_2e_bus____a____address : p_tl__rom_2e_last__a____address.curr));
	}
	// cells $procdff$55095 $procmux$52170 $procmux$52203 $procmux$52124 $procmux$53048 $procmux$53049_CMP0 $procmux$52127 $procmux$52873 $procmux$52874_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____mask.next = (p_tl__rom_2e_rst ? value<4>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____mask : value<4>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<4>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? value<4>{0xfu} : value<4>{0u}))) : p_tl__rom_2e_last__a____mask.curr));
	}
	// cells $procdff$55096 $procmux$52167 $procmux$52215 $procmux$52130 $procmux$52892 $procmux$52893_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____data.next = (p_tl__rom_2e_rst ? value<32>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____data : value<32>{0u}) : value<32>{0u}) : p_tl__rom_2e_last__a____data.curr));
	}
	// cells $procdff$55097 $procmux$52164 $procmux$52206
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____corrupt.next = (p_tl__rom_2e_rst ? value<1>{0u} : (p_tl__rom_2e_bus____a____ready ? value<1>{0u} : p_tl__rom_2e_last__a____corrupt.curr));
	}
	// cells $procdff$55098 $procmux$52161 $procmux$52194
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____valid.next = (p_tl__rom_2e_rst ? value<1>{0u} : (p_tl__rom_2e_bus____a____ready ? p_tl__rom__arbiter_2e_bus____a____valid : p_tl__rom_2e_last__a____valid.curr));
	}
	// cells $procdff$55099 $procmux$52158 $procmux$52209
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____ready.next = (p_tl__rom_2e_rst ? value<1>{0u} : (p_tl__rom_2e_bus____a____ready ? i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_26828_24_35526__Y : p_tl__rom_2e_last__a____ready.curr));
	}
	// cells $procdff$55100 $procmux$52362 $procmux$52375 $procmux$52377_CMP0 $procmux$52367 $procmux$52365 $procmux$52373 $procmux$52371
	if (posedge_p_clk) {
		p_tl__ram__arbiter_2e_rr_2e_grant.next = (p_tl__ram__arbiter_2e_rr_2e_rst ? value<1>{0u} : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? (p_tl__ram__arbiter_2e_rr_2e_requests.slice<0>().val() ? value<1>{0u} : p_tl__ram__arbiter_2e_rr_2e_grant.curr) : value<1>{0u}) : (not_u<1>(p_tl__ram__arbiter_2e_rr_2e_grant.curr) ? (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : (p_tl__ram__arbiter_2e_rr_2e_requests.slice<1>().val() ? value<1>{0x1u} : p_tl__ram__arbiter_2e_rr_2e_grant.curr)) : value<1>{0u})));
	}
	// cells $procdff$55101 $procmux$52359 $flatten\tl_ram_arbiter.\rr.$reduce_or$tilelink_soc.v:6883$2294
	if (posedge_p_clk) {
		p_tl__ram__arbiter_2e_rr_2e_valid.next = (p_tl__ram__arbiter_2e_rr_2e_rst ? value<1>{0u} : reduce_or<1>(p_tl__ram__arbiter_2e_rr_2e_requests));
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55102
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17603_24_10778__ADDR.next = i_procmux_24_52412__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55103
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17603_24_10778__DATA.next = i_procmux_24_52409__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55104
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17603_24_10778__EN.next = i_procmux_24_52406__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55105
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17605_24_10779__ADDR.next = i_procmux_24_52403__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55106
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17605_24_10779__DATA.next = i_procmux_24_52400__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55107
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17605_24_10779__EN.next = i_procmux_24_52397__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55108
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17607_24_10780__ADDR.next = i_procmux_24_52394__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55109
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17607_24_10780__DATA.next = i_procmux_24_52391__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55110
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17607_24_10780__EN.next = i_procmux_24_52388__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55111
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17609_24_10781__ADDR.next = i_procmux_24_52385__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55112
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17609_24_10781__DATA.next = i_procmux_24_52382__Y;
	}
	// \src: tilelink_soc.v:28695.10-28717.4|tilelink_soc.v:17601.3-17610.6
	// cell $procdff$55113
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17609_24_10781__EN.next = i_procmux_24_52379__Y;
	}
	// cells $procdff$55114 $procmux$52414 $flatten\tl_ram.$and$tilelink_soc.v:17629$10820
	if (posedge_p_clk) {
		p_tl__ram_2e___0__.next = (and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready) ? i_flatten_5c_tl__ram_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_17614_24_10808__DATA : p_tl__ram_2e___0__.curr);
	}
	// cells $procdff$55115 $procmux$52444 $procmux$52459
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____opcode.next = (p_tl__ram_2e_rst ? value<3>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____opcode : p_tl__ram_2e_last__a____opcode.curr));
	}
	// cells $procdff$55116 $procmux$52441 $procmux$52456
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____param.next = (p_tl__ram_2e_rst ? value<3>{0u} : (p_tl__ram_2e_bus____a____ready ? value<3>{0u} : p_tl__ram_2e_last__a____param.curr));
	}
	// cells $procdff$55117 $procmux$52438 $procmux$52450 $procmux$52329 $procmux$52904 $procmux$52905_CMP0 $procmux$52332 $procmux$52784 $procmux$52785_CMP0
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____size.next = (p_tl__ram_2e_rst ? value<2>{0u} : (p_tl__ram_2e_bus____a____ready ? (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____size : value<2>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? value<2>{0x2u} : value<2>{0u}))) : p_tl__ram_2e_last__a____size.curr));
	}
	// cells $procdff$55118 $procmux$52435 $procmux$52447 $procmux$52335 $procmux$52907 $procmux$52908_CMP0 $procmux$52338 $procmux$52787 $procmux$52788_CMP0
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____source.next = (p_tl__ram_2e_rst ? value<2>{0u} : (p_tl__ram_2e_bus____a____ready ? (p_tl__ram__arbiter_2e_rr__grant ? value<1>{0x1u}.concat((eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____source : value<1>{0u})).val() : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : value<1>{0u}.concat((eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_instruction__master_2e_send__ptr.curr : value<1>{0u})).val())) : p_tl__ram_2e_last__a____source.curr));
	}
	// cells $procdff$55119 $procmux$52432 $procmux$52471
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____address.next = (p_tl__ram_2e_rst ? value<15>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____address : p_tl__ram_2e_last__a____address.curr));
	}
	// cells $procdff$55120 $procmux$52429 $procmux$52462
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____mask.next = (p_tl__ram_2e_rst ? value<4>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____mask : p_tl__ram_2e_last__a____mask.curr));
	}
	// cells $procdff$55121 $procmux$52426 $procmux$52474
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____data.next = (p_tl__ram_2e_rst ? value<32>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____data : p_tl__ram_2e_last__a____data.curr));
	}
	// cells $procdff$55122 $procmux$52423 $procmux$52465
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____corrupt.next = (p_tl__ram_2e_rst ? value<1>{0u} : (p_tl__ram_2e_bus____a____ready ? value<1>{0u} : p_tl__ram_2e_last__a____corrupt.curr));
	}
	// cells $procdff$55123 $procmux$52420 $procmux$52453
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____valid.next = (p_tl__ram_2e_rst ? value<1>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____valid : p_tl__ram_2e_last__a____valid.curr));
	}
	// cells $procdff$55124 $procmux$52417 $procmux$52468
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____ready.next = (p_tl__ram_2e_rst ? value<1>{0u} : (p_tl__ram_2e_bus____a____ready ? i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_17643_24_10834__Y : p_tl__ram_2e_last__a____ready.curr));
	}
	// cells $procdff$55125 $procmux$52639 $procmux$52652 $procmux$52653_ANY $procmux$52654_CMP0 $procmux$52649 $procmux$52650_CMP0 $procmux$52644 $procmux$52645_CMP0 $procmux$52646_CMP0 $procmux$52647_CMP0 $procmux$52648_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____corrupt.next = (p_tl__periph_2e_rst ? value<1>{0u} : (reduce_or<1>(i_procmux_24_52653__CMP) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<1>{0u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0u} : p_tl__periph_2e_bus____d____corrupt.curr)))) : value<1>{0u}) : p_tl__periph_2e_bus____d____corrupt.curr)));
	}
	// cells $procdff$55126 $procmux$52671 $procmux$52680 $procmux$52677 $procmux$52675 $procmux$52676_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_output.next = (p_tl__periph_2e_rst ? value<8>{0u} : (p_tl__periph_2e__24_110 ? (p_tl__periph_2e__24_110 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? p_tl__data__decoder_2e_bus____a____data.slice<7,0>().val() : p_tl__periph_2e_output.curr) : value<8>{0u}) : p_tl__periph_2e_output.curr));
	}
	// cells $procdff$55127 $procmux$52543 $procmux$52619 $procmux$52613 $procmux$52611 $procmux$52612_CMP0 $procmux$52600 $procmux$52594 $procmux$52592 $procmux$52593_CMP0 $procmux$52581 $procmux$52575 $procmux$52573 $procmux$52574_CMP0 $procmux$52562 $procmux$52556 $procmux$52554 $procmux$52555_CMP0 $procmux$52616 $procmux$52606 $procmux$52604 $procmux$52605_CMP0 $procmux$52597 $procmux$52587 $procmux$52585 $procmux$52586_CMP0 $procmux$52578 $procmux$52568 $procmux$52566 $procmux$52567_CMP0 $procmux$52559 $procmux$52549 $procmux$52547 $procmux$52548_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_cycle__count.next = (p_tl__periph_2e_rst ? value<64>{0u,0u} : (p_tl__periph_2e__24_98 ? (p_tl__periph_2e__24_98 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<31,24>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<63,56>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<63,56>().val()).concat((p_tl__periph_2e__24_86 ? (p_tl__periph_2e__24_86 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<23,16>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<55,48>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<55,48>().val())).concat((p_tl__periph_2e__24_74 ? (p_tl__periph_2e__24_74 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<15,8>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<47,40>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<47,40>().val())).concat((p_tl__periph_2e__24_62 ? (p_tl__periph_2e__24_62 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<7,0>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<39,32>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<39,32>().val())).concat((p_tl__periph_2e__24_98 ? (p_tl__periph_2e__24_98 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<31,24>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<31,24>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<31,24>().val())).concat((p_tl__periph_2e__24_86 ? (p_tl__periph_2e__24_86 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<23,16>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<23,16>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<23,16>().val())).concat((p_tl__periph_2e__24_74 ? (p_tl__periph_2e__24_74 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<15,8>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<15,8>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<15,8>().val())).concat((p_tl__periph_2e__24_62 ? (p_tl__periph_2e__24_62 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<7,0>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<7,0>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8740_24_2455__Y.slice<7,0>().val())).val());
	}
	// cells $procdff$55128 $procmux$52504 $procmux$52513 $procmux$52510 $procmux$52508 $procmux$52509_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_output__valid.next = (p_tl__periph_2e_rst ? value<1>{0u} : (p_tl__periph_2e__24_47 ? (p_tl__periph_2e__24_47 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_2500) : value<1>{0u}) : i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_2500));
	}
	// cells $procdff$55129 $procmux$52622 $procmux$52635 $procmux$52636_ANY $procmux$52637_CMP0 $procmux$52632 $procmux$52633_CMP0 $procmux$52627 $procmux$52628_CMP0 $procmux$52629_CMP0 $procmux$52630_CMP0 $procmux$52631_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____denied.next = (p_tl__periph_2e_rst ? value<1>{0u} : (reduce_or<1>(i_procmux_24_52636__CMP) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<1>{0u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0u} : p_tl__periph_2e_bus____d____denied.curr)))) : value<1>{0u}) : p_tl__periph_2e_bus____d____denied.curr)));
	}
	// cells $procdff$55130 $procmux$52656 $procmux$52668 $procmux$52669_CMP0 $procmux$52665 $procmux$52666_CMP0 $procmux$52660 $procmux$52661_CMP0 $procmux$52662_CMP0 $procmux$52663_CMP0 $procmux$52664_CMP0 $flatten\tl_periph.$pos$tilelink_soc.v:8724$2439 $flatten\tl_periph.$extend$tilelink_soc.v:8724$2438 $flatten\tl_periph.$pos$tilelink_soc.v:8723$2437 $flatten\tl_periph.$extend$tilelink_soc.v:8723$2436
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____data.next = (p_tl__periph_2e_rst ? value<32>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__periph_2e_cycle__count.curr.slice<63,32>().val() : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__periph_2e_cycle__count.curr.slice<31,0>().val() : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? pos_u<32>(pos_u<32>(p_tl__periph_2e_halt__simulator.curr)) : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? pos_u<32>(pos_u<32>(p_tl__periph_2e_output.curr)) : p_tl__periph_2e_bus____d____data.curr)))) : value<32>{0u}) : p_tl__periph_2e_bus____d____data.curr));
	}
	// cells $procdff$55131 $procmux$52752 $procmux$52765 $procmux$52766_ANY $procmux$52767_CMP0 $procmux$52762 $procmux$52763_CMP0 $procmux$52757 $procmux$52758_CMP0 $procmux$52759_CMP0 $procmux$52760_CMP0 $procmux$52761_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____source.next = (p_tl__periph_2e_rst ? value<1>{0u} : (reduce_or<1>(i_procmux_24_52766__CMP) ? p_tl__data__decoder_2e_bus____a____source : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____source : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____source : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? p_tl__data__decoder_2e_bus____a____source : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? p_tl__data__decoder_2e_bus____a____source : p_tl__periph_2e_bus____d____source.curr)))) : value<1>{0u}) : p_tl__periph_2e_bus____d____source.curr)));
	}
	// cells $procdff$55132 $procmux$52735 $procmux$52748 $procmux$52749_ANY $procmux$52750_CMP0 $procmux$52745 $procmux$52746_CMP0 $procmux$52740 $procmux$52741_CMP0 $procmux$52742_CMP0 $procmux$52743_CMP0 $procmux$52744_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____size.next = (p_tl__periph_2e_rst ? value<2>{0u} : (reduce_or<1>(i_procmux_24_52749__CMP) ? p_tl__data__decoder_2e_bus____a____size : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____size : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____size : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? p_tl__data__decoder_2e_bus____a____size : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? p_tl__data__decoder_2e_bus____a____size : p_tl__periph_2e_bus____d____size.curr)))) : value<2>{0u}) : p_tl__periph_2e_bus____d____size.curr)));
	}
	// cells $procdff$55133 $procmux$52718 $procmux$52731 $procmux$52732_ANY $procmux$52733_CMP0 $procmux$52728 $procmux$52729_CMP0 $procmux$52723 $procmux$52724_CMP0 $procmux$52725_CMP0 $procmux$52726_CMP0 $procmux$52727_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____param.next = (p_tl__periph_2e_rst ? value<2>{0u} : (reduce_or<1>(i_procmux_24_52732__CMP) ? value<2>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<2>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<2>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<2>{0u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<2>{0u} : p_tl__periph_2e_bus____d____param.curr)))) : value<2>{0u}) : p_tl__periph_2e_bus____d____param.curr)));
	}
	// cells $procdff$55134 $procmux$52701 $procmux$52714 $procmux$52715_ANY $procmux$52716_CMP0 $procmux$52711 $procmux$52712_CMP0 $procmux$52706 $procmux$52707_CMP0 $procmux$52708_CMP0 $procmux$52709_CMP0 $procmux$52710_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____opcode.next = (p_tl__periph_2e_rst ? value<3>{0u} : (reduce_or<1>(i_procmux_24_52715__CMP) ? value<3>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<3>{0x1u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<3>{0x1u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<3>{0x1u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<3>{0x1u} : p_tl__periph_2e_bus____d____opcode.curr)))) : value<3>{0u}) : p_tl__periph_2e_bus____d____opcode.curr)));
	}
	// cells $procdff$55135 $procmux$52695 $procmux$52698
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____valid.next = (p_tl__periph_2e_rst ? value<1>{0u} : (p_tl__periph_2e_bus____a____ready ? p_tl__data__decoder_2e_bus____a____valid : p_tl__periph_2e_bus____d____valid.curr));
	}
	// cells $procdff$55136 $procmux$52683 $procmux$52692 $procmux$52689 $procmux$52687 $procmux$52688_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_halt__simulator.next = (p_tl__periph_2e_rst ? value<1>{0u} : (p_tl__periph_2e__24_158 ? (p_tl__periph_2e__24_158 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? p_tl__data__decoder_2e_bus____a____data.slice<0>().val() : p_tl__periph_2e_halt__simulator.curr) : value<1>{0u}) : p_tl__periph_2e_halt__simulator.curr));
	}
	// cells $procdff$55137 $procmux$52878 $procmux$52881 $flatten\tl_instr_decoder.\rr.$reduce_or$tilelink_soc.v:6700$2253
	if (posedge_p_clk) {
		p_tl__instr__decoder_2e_rr_2e_last__grant.next = (p_rst ? value<2>{0x1u} : (reduce_or<1>(p_tl__instr__decoder_2e_rr_2e_requests) ? i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6699_24_2252__Y.slice<1,0>().val() : p_tl__instr__decoder_2e_rr_2e_last__grant.curr));
	}
	// cells $procdff$55138 $procmux$53051 $procmux$53054 $flatten\tl_data_decoder.\rr.$reduce_or$tilelink_soc.v:6769$2268
	if (posedge_p_clk) {
		p_tl__data__decoder_2e_rr_2e_last__grant.next = (p_rst ? value<3>{0x1u} : (reduce_or<1>(p_tl__data__decoder_2e_rr_2e_requests) ? i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6768_24_2267__Y.slice<2,0>().val() : p_tl__data__decoder_2e_rr_2e_last__grant.curr));
	}
	// cells $procdff$55139 $procmux$53349 $procmux$53352 $flatten\instruction_master.$and$tilelink_soc.v:6434$2171 $flatten\instruction_master.$add$tilelink_soc.v:6435$2172
	if (posedge_p_clk) {
		p_instruction__master_2e_read__ptr.next = (p_instruction__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_instruction__master_2e_instruction__stream____rsp__valid, p_instruction__master_2e_instruction__stream____rsp__ready) ? add_uu<2>(p_instruction__master_2e_read__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_instruction__master_2e_read__ptr.curr));
	}
	// cells $procdff$55140 $procmux$53317 $procmux$53320 $flatten\instruction_master.$and$tilelink_soc.v:6427$2164 $flatten\instruction_master.$add$tilelink_soc.v:6428$2165
	if (posedge_p_clk) {
		p_instruction__master_2e_send__ptr.next = (p_instruction__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_instruction__master_2e_bus____a____valid, p_instruction__master_2e_bus____a____ready) ? add_uu<2>(p_instruction__master_2e_send__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_instruction__master_2e_send__ptr.curr));
	}
	// cells $procdff$55141 $procmux$53070 $procmux$53231 $procmux$53216 $procmux$53214 $procmux$53189 $procmux$53187 $procmux$53185 $procmux$53149 $procmux$53147 $procmux$53145 $procmux$53143 $procmux$53100 $procmux$53098 $procmux$53095
	if (posedge_p_clk) {
		p_instruction__master_2e_state.next = (p_instruction__master_2e_rst ? value<2>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_52832__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2198 : value<2>{0x2u}) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2198) : value<2>{0u}) : value<2>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<2>{0u} : (i_procmux_24_52832__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2198 : value<2>{0x2u})) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2198));
	}
	// cells $procdff$55142 $procmux$53067 $procmux$53225 $procmux$53204 $procmux$53202 $procmux$53171 $procmux$53169 $procmux$53167 $procmux$53123 $procmux$53121 $procmux$53119 $procmux$53117 $procmux$53080 $procmux$53078 $procmux$53075
	if (posedge_p_clk) {
		p_instruction__master_2e_data.next = (p_instruction__master_2e_rst ? value<32>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_52832__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_2200 : p_tl__instr__decoder_2e___bus____d____data) : value<32>{0u}) : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_2200) : value<32>{0u}) : value<32>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<32>{0u} : (i_procmux_24_52832__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_2200 : p_tl__instr__decoder_2e___bus____d____data)) : value<32>{0u})) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_2200));
	}
	// cells $procdff$55143 $procmux$53064 $procmux$53234 $procmux$53222 $procmux$53220 $procmux$53198 $procmux$53196 $procmux$53194 $procmux$53162 $procmux$53160 $procmux$53158 $procmux$53156 $procmux$53110 $procmux$53108 $procmux$53105
	if (posedge_p_clk) {
		p_instruction__master_2e_state_24_5.next = (p_instruction__master_2e_rst ? value<2>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_52832__Y ? value<2>{0x2u} : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2197) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2197) : value<2>{0u}) : value<2>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<2>{0u} : (i_procmux_24_52832__Y ? value<2>{0x2u} : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2197)) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2197));
	}
	// cells $procdff$55144 $procmux$53061 $procmux$53228 $procmux$53210 $procmux$53208 $procmux$53180 $procmux$53178 $procmux$53176 $procmux$53136 $procmux$53134 $procmux$53132 $procmux$53130 $procmux$53090 $procmux$53088 $procmux$53085
	if (posedge_p_clk) {
		p_instruction__master_2e_data_24_18.next = (p_instruction__master_2e_rst ? value<32>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_52832__Y ? p_tl__instr__decoder_2e___bus____d____data : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2199) : value<32>{0u}) : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2199) : value<32>{0u}) : value<32>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<32>{0u} : (i_procmux_24_52832__Y ? p_tl__instr__decoder_2e___bus____d____data : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2199)) : value<32>{0u})) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_2199));
	}
	// cells $procdff$55145 $procmux$53700 $procmux$53782 $procmux$53776 $procmux$53774 $procmux$53764 $procmux$53762 $procmux$53760 $procmux$53733 $procmux$53731 $procmux$53729 $procmux$53727 $procmux$53710 $procmux$53708 $procmux$53705
	if (posedge_p_clk) {
		p_data__master_2e_data_24_62.next = (p_data__master_2e_rst ? value<32>{0u} : (p_data__master_2e__24_343 ? (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y ? p_data__master_2e_data_24_62.curr : (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y ? value<32>{0u} : (i_procmux_24_52991__Y ? p_data__master_2e_data_24_62.curr : p_data__master_2e_read__data)) : value<32>{0u}) : value<32>{0u})) : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? value<32>{0u} : (i_procmux_24_52991__Y ? p_data__master_2e_data_24_62.curr : p_data__master_2e_read__data)) : value<32>{0u})) : value<32>{0u}) : p_data__master_2e_data_24_62.curr));
	}
	// cells $procdff$55146 $procmux$53697 $procmux$53779 $procmux$53770 $procmux$53768 $procmux$53755 $procmux$53753 $procmux$53751 $procmux$53746 $procmux$53744 $procmux$53742 $procmux$53740 $procmux$53720 $procmux$53718 $procmux$53715
	if (posedge_p_clk) {
		p_data__master_2e_data_24_63.next = (p_data__master_2e_rst ? value<32>{0u} : (p_data__master_2e__24_343 ? (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y ? p_data__master_2e_data_24_63.curr : (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y ? value<32>{0u} : (i_procmux_24_52991__Y ? p_data__master_2e_read__data : p_data__master_2e_data_24_63.curr)) : value<32>{0u}) : value<32>{0u})) : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? value<32>{0u} : (i_procmux_24_52991__Y ? p_data__master_2e_read__data : p_data__master_2e_data_24_63.curr)) : value<32>{0u})) : value<32>{0u}) : p_data__master_2e_data_24_63.curr));
	}
	// cells $procdff$55147 $procmux$53612 $procmux$53615 $flatten\data_master.$and$tilelink_soc.v:5106$1997 $flatten\data_master.$add$tilelink_soc.v:5108$1999
	if (posedge_p_clk) {
		p_data__master_2e_read__ptr.next = (p_data__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_data__master_2e_data__stream____rsp__valid, p_data__master_2e_data__stream____rsp__ready) ? add_uu<2>(p_data__master_2e_read__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_data__master_2e_read__ptr.curr));
	}
	// cells $procdff$55148 $procmux$53580 $procmux$53583 $flatten\data_master.$and$tilelink_soc.v:5100$1991 $flatten\data_master.$add$tilelink_soc.v:5101$1992
	if (posedge_p_clk) {
		p_data__master_2e_send__ptr.next = (p_data__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready) ? add_uu<2>(p_data__master_2e_send__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_data__master_2e_send__ptr.curr));
	}
	// cells $procdff$55149 $procmux$53553 $procmux$53570 $procmux$53560 $procmux$53558
	if (posedge_p_clk) {
		p_data__master_2e_addr__low.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_47 ? (p_data__master_2e__24_47 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_addr__low.curr : p_core_2e_m__alu__result.curr.slice<1,0>().val()) : value<2>{0u}) : p_data__master_2e_addr__low.curr));
	}
	// cells $procdff$55150 $procmux$53550 $procmux$53573 $procmux$53567 $procmux$53565
	if (posedge_p_clk) {
		p_data__master_2e_addr__low_24_46.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_47 ? (p_data__master_2e__24_47 ? (p_data__master_2e_send__ptr.curr ? p_core_2e_m__alu__result.curr.slice<1,0>().val() : p_data__master_2e_addr__low_24_46.curr) : value<2>{0u}) : p_data__master_2e_addr__low_24_46.curr));
	}
	// cells $procdff$55151 $procmux$53527 $procmux$53544 $procmux$53534 $procmux$53532
	if (posedge_p_clk) {
		p_data__master_2e_unsigned.next = (p_data__master_2e_rst ? value<1>{0u} : (p_data__master_2e__24_44 ? (p_data__master_2e__24_44 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_unsigned.curr : p_core_2e_m__control____mem__unsigned.curr) : value<1>{0u}) : p_data__master_2e_unsigned.curr));
	}
	// cells $procdff$55152 $procmux$53524 $procmux$53547 $procmux$53541 $procmux$53539
	if (posedge_p_clk) {
		p_data__master_2e_unsigned_24_43.next = (p_data__master_2e_rst ? value<1>{0u} : (p_data__master_2e__24_44 ? (p_data__master_2e__24_44 ? (p_data__master_2e_send__ptr.curr ? p_core_2e_m__control____mem__unsigned.curr : p_data__master_2e_unsigned_24_43.curr) : value<1>{0u}) : p_data__master_2e_unsigned_24_43.curr));
	}
	// cells $procdff$55153 $procmux$53501 $procmux$53518 $procmux$53508 $procmux$53506
	if (posedge_p_clk) {
		p_data__master_2e_size.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_41 ? (p_data__master_2e__24_41 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_size.curr : p_core_2e_m__control____mem__size.curr) : value<2>{0u}) : p_data__master_2e_size.curr));
	}
	// cells $procdff$55154 $procmux$53498 $procmux$53521 $procmux$53515 $procmux$53513
	if (posedge_p_clk) {
		p_data__master_2e_size_24_40.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_41 ? (p_data__master_2e__24_41 ? (p_data__master_2e_send__ptr.curr ? p_core_2e_m__control____mem__size.curr : p_data__master_2e_size_24_40.curr) : value<2>{0u}) : p_data__master_2e_size_24_40.curr));
	}
	// cells $procdff$55155 $procmux$53373 $procmux$53452 $procmux$53443 $procmux$53441 $procmux$53428 $procmux$53426 $procmux$53424 $procmux$53406 $procmux$53404 $procmux$53402 $procmux$53400 $procmux$53383 $procmux$53381 $procmux$53378
	if (posedge_p_clk) {
		p_data__master_2e_state.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_34 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2040 : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y ? value<2>{0u} : (i_procmux_24_52991__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2040 : value<2>{0x2u})) : value<2>{0u}) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? value<2>{0u} : (i_procmux_24_52991__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2040 : value<2>{0x2u})) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_2040));
	}
	// cells $procdff$55156 $procmux$53370 $procmux$53455 $procmux$53449 $procmux$53447 $procmux$53437 $procmux$53435 $procmux$53433 $procmux$53419 $procmux$53417 $procmux$53415 $procmux$53413 $procmux$53393 $procmux$53391 $procmux$53388
	if (posedge_p_clk) {
		p_data__master_2e_state_24_5.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_34 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2039 : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2397_24_596__Y ? value<2>{0u} : (i_procmux_24_52991__Y ? value<2>{0x2u} : i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2039)) : value<2>{0u}) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? value<2>{0u} : (i_procmux_24_52991__Y ? value<2>{0x2u} : i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2039)) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_2039));
	}
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2051.3-2054.6
	// cell $procdff$55157
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2053_24_257__ADDR.next = i_procmux_24_53888__Y;
	}
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2051.3-2054.6
	// cell $procdff$55158
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2053_24_257__DATA.next = i_procmux_24_53885__Y;
	}
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2051.3-2054.6
	// cell $procdff$55159
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2053_24_257__EN.next = i_procmux_24_53882__Y;
	}
	// cells $procdff$55160 $procmux$53890 $flatten\core.$and$tilelink_soc.v:2404$603 $flatten\core.$not$tilelink_soc.v:2396$595 $flatten\core.$not$tilelink_soc.v:2392$591
	if (posedge_p_clk) {
		p_core_2e___0__.next = (and_uu<1>(not_u<1>(p_core_2e_a__arbitration____halted), not_u<1>(p_core_2e_a__arbitration____remove)) ? i_flatten_5c_core_2e__24_memrd_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2058_24_299__DATA : p_core_2e___0__.curr);
	}
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2097.3-2100.6
	// cell $procdff$55161
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_2099_24_290__ADDR.next = i_procmux_24_53899__Y;
	}
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2097.3-2100.6
	// cell $procdff$55162
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_2099_24_290__DATA.next = i_procmux_24_53896__Y;
	}
	// \src: tilelink_soc.v:28461.8-28480.4|tilelink_soc.v:2097.3-2100.6
	// cell $procdff$55163
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_2099_24_290__EN.next = i_procmux_24_53893__Y;
	}
	// cells $procdff$55164 $procmux$53903 $flatten\core.$and$tilelink_soc.v:2159$356 $flatten\core.$not$tilelink_soc.v:2158$355 $flatten\core.$not$tilelink_soc.v:2157$354
	if (posedge_p_clk) {
		p_core_2e___1__.next = (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_2105_24_308__DATA : p_core_2e___1__.curr);
	}
	// cells $procdff$55165 $procmux$53901 $flatten\core.$and$tilelink_soc.v:2163$360 $flatten\core.$not$tilelink_soc.v:2161$358 $flatten\core.$not$tilelink_soc.v:2160$357
	if (posedge_p_clk) {
		p_core_2e___2__.next = (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_2108_24_309__DATA : p_core_2e___2__.curr);
	}
	// cells $procdff$55166 $procmux$53969 $procmux$54029
	if (posedge_p_clk) {
		p_core_2e_m__control____branch__mode.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____branch__mode.curr : p_core_2e_x__control____branch__mode.curr));
	}
	// cells $procdff$55167 $procmux$53966 $procmux$54026
	if (posedge_p_clk) {
		p_core_2e_m__control____branch__type.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____branch__type.curr : p_core_2e_x__control____branch__type.curr));
	}
	// cells $procdff$55168 $procmux$53963 $procmux$54020
	if (posedge_p_clk) {
		p_core_2e_m__control____mem__enable.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____mem__enable.curr : p_core_2e_x__control____mem__enable.curr));
	}
	// cells $procdff$55169 $procmux$53960 $procmux$54017
	if (posedge_p_clk) {
		p_core_2e_m__control____mem__we.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____mem__we.curr : p_core_2e_x__control____mem__we.curr));
	}
	// cells $procdff$55170 $procmux$53957 $procmux$54014
	if (posedge_p_clk) {
		p_core_2e_m__control____mem__size.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____mem__size.curr : p_core_2e_x__control____mem__size.curr));
	}
	// cells $procdff$55171 $procmux$53954 $procmux$54011
	if (posedge_p_clk) {
		p_core_2e_m__control____mem__unsigned.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____mem__unsigned.curr : p_core_2e_x__control____mem__unsigned.curr));
	}
	// cells $procdff$55172 $procmux$53951 $procmux$54005
	if (posedge_p_clk) {
		p_core_2e_m__control____register__write.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____register__write.curr : p_core_2e_x__control____register__write.curr));
	}
	// cells $procdff$55173 $procmux$53948 $procmux$54008
	if (posedge_p_clk) {
		p_core_2e_m__control____writeback__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__control____writeback__select.curr : p_core_2e_x__control____writeback__select.curr));
	}
	// cells $procdff$55174 $procmux$53942 $procmux$53945
	if (posedge_p_clk) {
		p_core_2e_m__instruction.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__instruction.curr : p_core_2e_x__instruction.curr));
	}
	// cells $procdff$55175 $procmux$53936 $procmux$53939
	if (posedge_p_clk) {
		p_core_2e_m__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__program__counter.curr : p_core_2e_x__program__counter.curr));
	}
	// cells $procdff$55176 $procmux$53918 $procmux$53921 $flatten\core.$and$tilelink_soc.v:2254$453 $flatten\core.$not$tilelink_soc.v:2253$452 $flatten\core.$not$tilelink_soc.v:2252$451 $procmux$53924
	if (posedge_p_clk) {
		p_core_2e_m__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_x__arbitration____valid.curr : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_2250_24_449__Y ? p_core_2e_m__arbitration____valid.curr : value<1>{0u})));
	}
	// cells $procdff$55177 $procmux$54916 $procmux$54919 $flatten\core.$and$tilelink_soc.v:2222$419 $flatten\core.$not$tilelink_soc.v:2220$417 $flatten\core.$not$tilelink_soc.v:2219$416 $procmux$54637 $procmux$54634 $procmux$54631 $procmux$54610 $procmux$54607 $procmux$54605 $flatten\core.$and$tilelink_soc.v:2514$713 $flatten\core.$eq$tilelink_soc.v:2513$712 $flatten\core.$and$tilelink_soc.v:2512$711 $procmux$54619 $procmux$54616 $procmux$54614 $flatten\core.$and$tilelink_soc.v:2511$710 $flatten\core.$eq$tilelink_soc.v:2510$709 $flatten\core.$and$tilelink_soc.v:2509$708 $procmux$54628 $procmux$54625 $procmux$54623 $flatten\core.$and$tilelink_soc.v:2508$707 $flatten\core.$eq$tilelink_soc.v:2507$706 $flatten\core.$and$tilelink_soc.v:2506$705
	if (posedge_p_clk) {
		p_core_2e_x__rs2__is__forwarded.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_957 ? value<1>{0u} : (p_core_2e__24_957 ? value<1>{0u} : (p_core_2e__24_959 ? (p_core_2e__24_957 ? value<1>{0u} : (p_core_2e__24_959 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_x__control____register__write.curr), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2)) ? value<1>{0x1u} : (p_core_2e__24_957 ? value<1>{0u} : (p_core_2e__24_959 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_m__control____register__write.curr), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2)) ? value<1>{0x1u} : (p_core_2e__24_957 ? value<1>{0u} : (p_core_2e__24_959 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____register__write.curr), eq_uu<1>(p_core_2e_w__control____rd.curr, p_core_2e_d__control____rs2)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}))) : value<1>{0u}))) : value<1>{0u})) : value<1>{0u}))) : p_core_2e_x__rs2__is__forwarded.curr));
	}
	// cells $procdff$55178 $procmux$54910 $procmux$54913 $flatten\core.$and$tilelink_soc.v:2218$415 $flatten\core.$not$tilelink_soc.v:2217$414 $flatten\core.$not$tilelink_soc.v:2216$413 $procmux$54565 $procmux$54562 $procmux$54559 $procmux$54538 $procmux$54535 $procmux$54533 $flatten\core.$and$tilelink_soc.v:2458$657 $flatten\core.$eq$tilelink_soc.v:2457$656 $flatten\core.$and$tilelink_soc.v:2456$655 $procmux$54547 $procmux$54544 $procmux$54542 $flatten\core.$and$tilelink_soc.v:2455$654 $flatten\core.$eq$tilelink_soc.v:2454$653 $flatten\core.$and$tilelink_soc.v:2453$652 $procmux$54556 $procmux$54553 $procmux$54551 $flatten\core.$and$tilelink_soc.v:2452$651 $flatten\core.$eq$tilelink_soc.v:2451$650 $flatten\core.$and$tilelink_soc.v:2450$649
	if (posedge_p_clk) {
		p_core_2e_x__rs1__is__forwarded.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_857 ? value<1>{0u} : (p_core_2e__24_857 ? value<1>{0u} : (p_core_2e__24_859 ? (p_core_2e__24_857 ? value<1>{0u} : (p_core_2e__24_859 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_x__control____register__write.curr), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1)) ? value<1>{0x1u} : (p_core_2e__24_857 ? value<1>{0u} : (p_core_2e__24_859 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_m__control____register__write.curr), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1)) ? value<1>{0x1u} : (p_core_2e__24_857 ? value<1>{0u} : (p_core_2e__24_859 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____register__write.curr), eq_uu<1>(p_core_2e_w__control____rd.curr, p_core_2e_d__control____rs1)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}))) : value<1>{0u}))) : value<1>{0u})) : value<1>{0u}))) : p_core_2e_x__rs1__is__forwarded.curr));
	}
	// cells $procdff$55179 $procmux$54904 $procmux$54907 $flatten\core.$and$tilelink_soc.v:2215$412 $flatten\core.$not$tilelink_soc.v:2214$411 $flatten\core.$not$tilelink_soc.v:2213$410 $procmux$54601 $procmux$54598 $procmux$54595 $procmux$54574 $procmux$54571 $procmux$54569 $flatten\core.$and$tilelink_soc.v:2487$686 $flatten\core.$eq$tilelink_soc.v:2486$685 $flatten\core.$and$tilelink_soc.v:2485$684 $procmux$54583 $procmux$54580 $procmux$54578 $flatten\core.$and$tilelink_soc.v:2484$683 $flatten\core.$eq$tilelink_soc.v:2483$682 $flatten\core.$and$tilelink_soc.v:2481$680 $procmux$54592 $procmux$54589 $procmux$54587 $flatten\core.$and$tilelink_soc.v:2480$679 $flatten\core.$eq$tilelink_soc.v:2479$678 $flatten\core.$and$tilelink_soc.v:2478$677
	if (posedge_p_clk) {
		p_core_2e_x__rs2__value__forwarded.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_907 ? value<32>{0u} : (p_core_2e__24_907 ? value<32>{0u} : (p_core_2e__24_909 ? (p_core_2e__24_907 ? value<32>{0u} : (p_core_2e__24_909 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_x__control____register__write.curr), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2)) ? p_core_2e_x__alu__result : (p_core_2e__24_907 ? value<32>{0u} : (p_core_2e__24_909 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_m__control____register__write.curr), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2)) ? p_core_2e_m__alu__result.curr : (p_core_2e__24_907 ? value<32>{0u} : (p_core_2e__24_909 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____register__write.curr), eq_uu<1>(p_core_2e_w__control____rd.curr, p_core_2e_d__control____rs2)) ? p_core_2e_w__write__data : value<32>{0u}) : value<32>{0u}))) : value<32>{0u}))) : value<32>{0u})) : value<32>{0u}))) : p_core_2e_x__rs2__value__forwarded.curr));
	}
	// cells $procdff$55180 $procmux$54898 $procmux$54901 $flatten\core.$and$tilelink_soc.v:2212$409 $flatten\core.$not$tilelink_soc.v:2211$408 $flatten\core.$not$tilelink_soc.v:2209$406 $procmux$54529 $procmux$54526 $procmux$54523 $procmux$54502 $procmux$54499 $procmux$54497 $flatten\core.$and$tilelink_soc.v:2431$630 $flatten\core.$eq$tilelink_soc.v:2430$629 $flatten\core.$and$tilelink_soc.v:2429$628 $procmux$54511 $procmux$54508 $procmux$54506 $flatten\core.$and$tilelink_soc.v:2428$627 $flatten\core.$eq$tilelink_soc.v:2427$626 $flatten\core.$and$tilelink_soc.v:2425$624 $procmux$54520 $procmux$54517 $procmux$54515 $flatten\core.$and$tilelink_soc.v:2424$623 $flatten\core.$eq$tilelink_soc.v:2423$622 $flatten\core.$and$tilelink_soc.v:2422$621
	if (posedge_p_clk) {
		p_core_2e_x__rs1__value__forwarded.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_807 ? value<32>{0u} : (p_core_2e__24_807 ? value<32>{0u} : (p_core_2e__24_809 ? (p_core_2e__24_807 ? value<32>{0u} : (p_core_2e__24_809 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_x__control____register__write.curr), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1)) ? p_core_2e_x__alu__result : (p_core_2e__24_807 ? value<32>{0u} : (p_core_2e__24_809 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_m__control____register__write.curr), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1)) ? p_core_2e_m__alu__result.curr : (p_core_2e__24_807 ? value<32>{0u} : (p_core_2e__24_809 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____register__write.curr), eq_uu<1>(p_core_2e_w__control____rd.curr, p_core_2e_d__control____rs1)) ? p_core_2e_w__write__data : value<32>{0u}) : value<32>{0u}))) : value<32>{0u}))) : value<32>{0u})) : value<32>{0u}))) : p_core_2e_x__rs1__value__forwarded.curr));
	}
	// cells $procdff$55181 $procmux$54892 $procmux$54895 $flatten\core.$and$tilelink_soc.v:2208$405 $flatten\core.$not$tilelink_soc.v:2207$404 $flatten\core.$not$tilelink_soc.v:2206$403
	if (posedge_p_clk) {
		p_core_2e_x__predict__branch__predictor.next = (p_core_2e_rst ? value<2>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_d__predict__branch__predictor.curr : p_core_2e_x__predict__branch__predictor.curr));
	}
	// cells $procdff$55182 $procmux$54886 $procmux$54889 $flatten\core.$and$tilelink_soc.v:2205$402 $flatten\core.$not$tilelink_soc.v:2204$401 $flatten\core.$not$tilelink_soc.v:2203$400
	if (posedge_p_clk) {
		p_core_2e_x__predict__branch__target.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_d__predict__branch__target.curr : p_core_2e_x__predict__branch__target.curr));
	}
	// cells $procdff$55183 $procmux$54880 $procmux$54883 $flatten\core.$and$tilelink_soc.v:2202$399 $flatten\core.$not$tilelink_soc.v:2201$398 $flatten\core.$not$tilelink_soc.v:2200$397
	if (posedge_p_clk) {
		p_core_2e_x__predict__branch__taken.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_d__predict__branch__taken.curr : p_core_2e_x__predict__branch__taken.curr));
	}
	// cells $procdff$55184 $procmux$54874 $procmux$54877 $flatten\core.$and$tilelink_soc.v:2198$395 $flatten\core.$not$tilelink_soc.v:2197$394 $flatten\core.$not$tilelink_soc.v:2196$393
	if (posedge_p_clk) {
		p_core_2e_x__predict__valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_d__predict__valid.curr : p_core_2e_x__predict__valid.curr));
	}
	// cells $procdff$55185 $procmux$54811 $procmux$54817
	if (posedge_p_clk) {
		p_core_2e_x__control____rs1.next = (p_core_2e_rst ? value<5>{0u} : (p_core_2e__24_251 ? p_instruction__master_2e_instruction__stream____rsp__data.slice<19,15>().val() : p_core_2e_x__control____rs1.curr));
	}
	// cells $procdff$55186 $procmux$54808 $procmux$54814
	if (posedge_p_clk) {
		p_core_2e_x__control____rs2.next = (p_core_2e_rst ? value<5>{0u} : (p_core_2e__24_251 ? p_instruction__master_2e_instruction__stream____rsp__data.slice<24,20>().val() : p_core_2e_x__control____rs2.curr));
	}
	// cells $procdff$55187 $procmux$54805 $procmux$54838
	if (posedge_p_clk) {
		p_core_2e_x__control____rd.next = (p_core_2e_rst ? value<5>{0u} : (p_core_2e__24_251 ? p_instruction__master_2e_instruction__stream____rsp__data.slice<11,7>().val() : p_core_2e_x__control____rd.curr));
	}
	// cells $procdff$55188 $procmux$54802 $procmux$54850
	if (posedge_p_clk) {
		p_core_2e_x__control____immediate.next = (p_core_2e_rst ? value<32>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____immediate : p_core_2e_x__control____immediate.curr));
	}
	// cells $procdff$55189 $procmux$54799 $procmux$54862
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__operation.next = (p_core_2e_rst ? value<3>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____alu__operation : p_core_2e_x__control____alu__operation.curr));
	}
	// cells $procdff$55190 $procmux$54796 $procmux$54853
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__mode__switch.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____alu__mode__switch : p_core_2e_x__control____alu__mode__switch.curr));
	}
	// cells $procdff$55191 $procmux$54793 $procmux$54856
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__muldiv.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_251 ? value<1>{0u} : p_core_2e_x__control____alu__muldiv.curr));
	}
	// cells $procdff$55192 $procmux$54790 $procmux$54859
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__left__select.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____alu__left__select : p_core_2e_x__control____alu__left__select.curr));
	}
	// cells $procdff$55193 $procmux$54787 $procmux$54847
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__right__select.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____alu__right__select : p_core_2e_x__control____alu__right__select.curr));
	}
	// cells $procdff$55194 $procmux$54784 $procmux$54844
	if (posedge_p_clk) {
		p_core_2e_x__control____branch__mode.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____branch__mode : p_core_2e_x__control____branch__mode.curr));
	}
	// cells $procdff$55195 $procmux$54781 $procmux$54841
	if (posedge_p_clk) {
		p_core_2e_x__control____branch__type.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____branch__type : p_core_2e_x__control____branch__type.curr));
	}
	// cells $procdff$55196 $procmux$54778 $procmux$54835
	if (posedge_p_clk) {
		p_core_2e_x__control____mem__enable.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____mem__enable : p_core_2e_x__control____mem__enable.curr));
	}
	// cells $procdff$55197 $procmux$54775 $procmux$54832
	if (posedge_p_clk) {
		p_core_2e_x__control____mem__we.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____mem__we : p_core_2e_x__control____mem__we.curr));
	}
	// cells $procdff$55198 $procmux$54772 $procmux$54829
	if (posedge_p_clk) {
		p_core_2e_x__control____mem__size.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____mem__size : p_core_2e_x__control____mem__size.curr));
	}
	// cells $procdff$55199 $procmux$54769 $procmux$54826
	if (posedge_p_clk) {
		p_core_2e_x__control____mem__unsigned.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____mem__unsigned : p_core_2e_x__control____mem__unsigned.curr));
	}
	// cells $procdff$55200 $procmux$54766 $procmux$54820
	if (posedge_p_clk) {
		p_core_2e_x__control____register__write.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____register__write : p_core_2e_x__control____register__write.curr));
	}
	// cells $procdff$55201 $procmux$54763 $procmux$54823
	if (posedge_p_clk) {
		p_core_2e_x__control____writeback__select.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_251 ? p_core_2e_decoder_2e_control____writeback__select : p_core_2e_x__control____writeback__select.curr));
	}
	// cells $procdff$55202 $procmux$54757 $procmux$54760 $flatten\core.$and$tilelink_soc.v:2192$389 $flatten\core.$not$tilelink_soc.v:2191$388 $flatten\core.$not$tilelink_soc.v:2190$387
	if (posedge_p_clk) {
		p_core_2e_x__instruction.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_instruction__master_2e_instruction__stream____rsp__data : p_core_2e_x__instruction.curr));
	}
	// cells $procdff$55203 $procmux$54751 $procmux$54754 $flatten\core.$and$tilelink_soc.v:2189$386 $flatten\core.$not$tilelink_soc.v:2187$384 $flatten\core.$not$tilelink_soc.v:2186$383
	if (posedge_p_clk) {
		p_core_2e_x__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_d__program__counter.curr : p_core_2e_x__program__counter.curr));
	}
	// cells $procdff$55204 $procmux$54730 $procmux$54733 $flatten\core.$and$tilelink_soc.v:2168$365 $flatten\core.$not$tilelink_soc.v:2167$364 $flatten\core.$not$tilelink_soc.v:2166$363 $procmux$54736 $flatten\core.$or$tilelink_soc.v:2165$362 $flatten\core.$not$tilelink_soc.v:2164$361
	if (posedge_p_clk) {
		p_core_2e_x__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? p_core_2e_d__arbitration____valid.curr : (or_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), p_core_2e_x__arbitration____remove) ? value<1>{0u} : p_core_2e_x__arbitration____valid.curr)));
	}
	// cells $procdff$55205 $procmux$54721 $procmux$54724 $flatten\core.$and$tilelink_soc.v:2152$349 $flatten\core.$not$tilelink_soc.v:2150$347 $flatten\core.$not$tilelink_soc.v:2149$346
	if (posedge_p_clk) {
		p_core_2e_d__predict__branch__predictor.next = (p_core_2e_rst ? value<2>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? p_core_2e___0__.curr.slice<56,55>().val() : p_core_2e_d__predict__branch__predictor.curr));
	}
	// cells $procdff$55206 $procmux$54715 $procmux$54718 $flatten\core.$and$tilelink_soc.v:2148$345 $flatten\core.$not$tilelink_soc.v:2147$344 $flatten\core.$not$tilelink_soc.v:2146$343
	if (posedge_p_clk) {
		p_core_2e_d__predict__branch__target.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? p_core_2e___0__.curr.slice<54,23>().val() : p_core_2e_d__predict__branch__target.curr));
	}
	// cells $procdff$55207 $procmux$54709 $procmux$54712 $flatten\core.$and$tilelink_soc.v:2145$342 $flatten\core.$not$tilelink_soc.v:2144$341 $flatten\core.$not$tilelink_soc.v:2143$340
	if (posedge_p_clk) {
		p_core_2e_d__predict__branch__taken.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2121_24_318__Y : p_core_2e_d__predict__branch__taken.curr));
	}
	// cells $procdff$55208 $procmux$54673 $procmux$54676 $flatten\core.$and$tilelink_soc.v:2142$339 $flatten\core.$not$tilelink_soc.v:2141$338 $flatten\core.$not$tilelink_soc.v:2139$336
	if (posedge_p_clk) {
		p_core_2e_d__predict__valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2120_24_317__Y : p_core_2e_d__predict__valid.curr));
	}
	// cells $procdff$55209 $procmux$54667 $procmux$54670 $flatten\core.$and$tilelink_soc.v:2138$335 $flatten\core.$not$tilelink_soc.v:2137$334 $flatten\core.$not$tilelink_soc.v:2136$333
	if (posedge_p_clk) {
		p_core_2e_d__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? p_core_2e_f__program__counter.curr : p_core_2e_d__program__counter.curr));
	}
	// cells $procdff$55210 $procmux$54649 $procmux$54652 $flatten\core.$and$tilelink_soc.v:2134$331 $flatten\core.$not$tilelink_soc.v:2133$330 $flatten\core.$not$tilelink_soc.v:2132$329 $procmux$54655 $flatten\core.$or$tilelink_soc.v:2131$328 $flatten\core.$not$tilelink_soc.v:2130$327
	if (posedge_p_clk) {
		p_core_2e_d__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_f__arbitration____halted), not_u<1>(p_core_2e_f__arbitration____remove)) ? p_core_2e_f__arbitration____valid.curr : (or_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), p_core_2e_d__arbitration____remove) ? value<1>{0u} : p_core_2e_d__arbitration____valid.curr)));
	}
	// cells $procdff$55211 $procmux$54050 $procmux$54053 $flatten\core.$and$tilelink_soc.v:2117$314 $flatten\core.$and$tilelink_soc.v:2116$313 $flatten\core.$not$tilelink_soc.v:2115$312 $flatten\core.$and$tilelink_soc.v:2114$311 $flatten\core.$not$tilelink_soc.v:2113$310 $procmux$54056 $flatten\core.$and$tilelink_soc.v:2515$714 $flatten\core.$not$tilelink_soc.v:2504$703 $flatten\core.$not$tilelink_soc.v:2493$692
	if (posedge_p_clk) {
		p_core_2e_f__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_f__arbitration____valid.curr, not_u<1>(p_core_2e_f__arbitration____halted)), not_u<1>(p_core_2e_f__arbitration____remove)), p_core_2e_f__predict__branch__taken) ? p_core_2e___0__.curr.slice<54,23>().val() : (and_uu<1>(not_u<1>(p_core_2e_f__arbitration____halted), not_u<1>(p_core_2e_f__arbitration____remove)) ? p_core_2e_a__program__counter.curr : p_core_2e_f__program__counter.curr)));
	}
	// cells $procdff$55212 $procmux$54865 $procmux$54868 $flatten\core.$and$tilelink_soc.v:2471$670 $flatten\core.$not$tilelink_soc.v:2459$658 $flatten\core.$not$tilelink_soc.v:2448$647 $procmux$54871 $flatten\core.$or$tilelink_soc.v:2437$636 $flatten\core.$not$tilelink_soc.v:2426$625
	if (posedge_p_clk) {
		p_core_2e_f__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_a__arbitration____halted), not_u<1>(p_core_2e_a__arbitration____remove)) ? p_core_2e_a__arbitration____valid.curr : (or_uu<1>(not_u<1>(p_core_2e_f__arbitration____halted), p_core_2e_f__arbitration____remove) ? value<1>{0u} : p_core_2e_f__arbitration____valid.curr)));
	}
	// cells $procdff$55213 $procmux$54679 $procmux$54700 $procmux$54685 $procmux$54683 $flatten\core.$and$tilelink_soc.v:2347$546 $flatten\core.$ne$tilelink_soc.v:2339$538 $flatten\core.$and$tilelink_soc.v:2331$530 $procmux$54691 $procmux$54689 $flatten\core.$and$tilelink_soc.v:2310$509 $flatten\core.$not$tilelink_soc.v:2301$500 $flatten\core.$add$tilelink_soc.v:2322$521 $procmux$54697 $procmux$54695 $flatten\core.$and$tilelink_soc.v:2292$491 $flatten\core.$not$tilelink_soc.v:2282$481
	if (posedge_p_clk) {
		p_core_2e_a__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (p_core_2e__24_44 ? (p_core_2e__24_44 ? (and_uu<1>(and_uu<1>(p_core_2e_m__branch__taken.curr, p_core_2e_m__predict__branch__taken.curr), ne_uu<1>(p_core_2e_m__branch__target.curr, p_core_2e_m__predict__branch__target.curr)) ? p_core_2e_m__branch__target.curr : (p_core_2e__24_44 ? (and_uu<1>(not_u<1>(p_core_2e_m__branch__taken.curr), p_core_2e_m__predict__branch__taken.curr) ? add_uu<33>(p_core_2e_m__program__counter.curr, value<3>{0x4u}).slice<31,0>().val() : (p_core_2e__24_44 ? (and_uu<1>(p_core_2e_m__branch__taken.curr, not_u<1>(p_core_2e_m__predict__branch__taken.curr)) ? p_core_2e_m__branch__target.curr : i_flatten_5c_core_2e__24_2_5c_a__program__counter_24_next_5b_31_3a_0_5d__24_1047) : value<32>{0u})) : value<32>{0u})) : value<32>{0u}) : i_flatten_5c_core_2e__24_2_5c_a__program__counter_24_next_5b_31_3a_0_5d__24_1047));
	}
	// cells $procdff$55214 $procmux$53906
	if (posedge_p_clk) {
		p_core_2e_a__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : value<1>{0x1u});
	}
	// cells $procdff$55215 $procmux$54485 $procmux$54488
	if (posedge_p_clk) {
		p_core_2e_w__muldiv__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__muldiv__result.curr : p_core_2e_m__muldiv__result.curr));
	}
	// cells $procdff$55216 $procmux$54479 $procmux$54482
	if (posedge_p_clk) {
		p_core_2e_w__alu__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__alu__result.curr : p_core_2e_m__alu__result.curr));
	}
	// cells $procdff$55217 $procmux$54425 $procmux$54431
	if (posedge_p_clk) {
		p_core_2e_w__control____rs1.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____rs1.curr : p_core_2e_m__control____rs1.curr));
	}
	// cells $procdff$55218 $procmux$54422 $procmux$54428
	if (posedge_p_clk) {
		p_core_2e_w__control____rs2.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____rs2.curr : p_core_2e_m__control____rs2.curr));
	}
	// cells $procdff$55219 $procmux$54419 $procmux$54452
	if (posedge_p_clk) {
		p_core_2e_w__control____rd.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____rd.curr : p_core_2e_m__control____rd.curr));
	}
	// cells $procdff$55220 $procmux$54416 $procmux$54464
	if (posedge_p_clk) {
		p_core_2e_w__control____immediate.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____immediate.curr : p_core_2e_m__control____immediate.curr));
	}
	// cells $procdff$55221 $procmux$54413 $procmux$54476
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__operation.next = (p_core_2e_rst ? value<3>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____alu__operation.curr : p_core_2e_m__control____alu__operation.curr));
	}
	// cells $procdff$55222 $procmux$54410 $procmux$54467
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__mode__switch.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_2400_24_599__Y ? p_core_2e_w__control____alu__mode__switch.curr : p_core_2e_m__control____alu__mode__switch.curr));
	}
	// connection
	p_output = p_tl__periph_2e_output.curr;
	// connection
	p_output__valid = p_tl__periph_2e_output__valid.curr;
	// connection
	p_halt__simulator = p_tl__periph_2e_halt__simulator.curr;
	return converged;
}

bool p_top::commit() {
	bool changed = false;
	if (p_tl__rom__arbiter_2e_rr_2e_valid.commit()) changed = true;
	if (p_tl__rom__arbiter_2e_rr_2e_grant.commit()) changed = true;
	if (p_tl__rom_2e_last__a____address.commit()) changed = true;
	if (p_tl__rom_2e_last__a____corrupt.commit()) changed = true;
	if (p_tl__rom_2e_last__a____data.commit()) changed = true;
	if (p_tl__rom_2e_last__a____mask.commit()) changed = true;
	if (p_tl__rom_2e_last__a____opcode.commit()) changed = true;
	if (p_tl__rom_2e_last__a____param.commit()) changed = true;
	if (p_tl__rom_2e_last__a____ready.commit()) changed = true;
	if (p_tl__rom_2e_last__a____size.commit()) changed = true;
	if (p_tl__rom_2e_last__a____source.commit()) changed = true;
	if (p_tl__rom_2e_last__a____valid.commit()) changed = true;
	if (p_tl__rom_2e___0__.commit()) changed = true;
	if (p_tl__ram__arbiter_2e_rr_2e_valid.commit()) changed = true;
	if (p_tl__ram__arbiter_2e_rr_2e_grant.commit()) changed = true;
	if (p_tl__ram_2e_last__a____address.commit()) changed = true;
	if (p_tl__ram_2e_last__a____corrupt.commit()) changed = true;
	if (p_tl__ram_2e_last__a____data.commit()) changed = true;
	if (p_tl__ram_2e_last__a____mask.commit()) changed = true;
	if (p_tl__ram_2e_last__a____opcode.commit()) changed = true;
	if (p_tl__ram_2e_last__a____param.commit()) changed = true;
	if (p_tl__ram_2e_last__a____ready.commit()) changed = true;
	if (p_tl__ram_2e_last__a____size.commit()) changed = true;
	if (p_tl__ram_2e_last__a____source.commit()) changed = true;
	if (p_tl__ram_2e_last__a____valid.commit()) changed = true;
	if (p_tl__ram_2e___0__.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17603_24_10778__ADDR.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17603_24_10778__DATA.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17603_24_10778__EN.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17605_24_10779__ADDR.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17605_24_10779__DATA.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17605_24_10779__EN.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17607_24_10780__ADDR.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17607_24_10780__DATA.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17607_24_10780__EN.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17609_24_10781__ADDR.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17609_24_10781__DATA.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_17609_24_10781__EN.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____corrupt.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____data.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____denied.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____opcode.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____param.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____size.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____source.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____valid.commit()) changed = true;
	if (p_tl__periph_2e_cycle__count.commit()) changed = true;
	if (p_tl__periph_2e_halt__simulator.commit()) changed = true;
	if (p_tl__periph_2e_output.commit()) changed = true;
	if (p_tl__periph_2e_output__valid.commit()) changed = true;
	if (p_tl__instr__decoder_2e_rr_2e_last__grant.commit()) changed = true;
	if (p_tl__data__decoder_2e_rr_2e_last__grant.commit()) changed = true;
	if (p_instruction__master_2e_data.commit()) changed = true;
	if (p_instruction__master_2e_data_24_18.commit()) changed = true;
	if (p_instruction__master_2e_read__ptr.commit()) changed = true;
	if (p_instruction__master_2e_send__ptr.commit()) changed = true;
	if (p_instruction__master_2e_state.commit()) changed = true;
	if (p_instruction__master_2e_state_24_5.commit()) changed = true;
	if (p_data__master_2e_addr__low.commit()) changed = true;
	if (p_data__master_2e_addr__low_24_46.commit()) changed = true;
	if (p_data__master_2e_data_24_62.commit()) changed = true;
	if (p_data__master_2e_data_24_63.commit()) changed = true;
	if (p_data__master_2e_read__ptr.commit()) changed = true;
	if (p_data__master_2e_send__ptr.commit()) changed = true;
	if (p_data__master_2e_size.commit()) changed = true;
	if (p_data__master_2e_size_24_40.commit()) changed = true;
	if (p_data__master_2e_state.commit()) changed = true;
	if (p_data__master_2e_state_24_5.commit()) changed = true;
	if (p_data__master_2e_unsigned.commit()) changed = true;
	if (p_data__master_2e_unsigned_24_43.commit()) changed = true;
	if (p_core_2e_a__arbitration____valid.commit()) changed = true;
	if (p_core_2e_a__program__counter.commit()) changed = true;
	if (p_core_2e_branch__counter.commit()) changed = true;
	if (p_core_2e_d__arbitration____valid.commit()) changed = true;
	if (p_core_2e_d__predict__branch__predictor.commit()) changed = true;
	if (p_core_2e_d__predict__branch__taken.commit()) changed = true;
	if (p_core_2e_d__predict__branch__target.commit()) changed = true;
	if (p_core_2e_d__predict__valid.commit()) changed = true;
	if (p_core_2e_d__program__counter.commit()) changed = true;
	if (p_core_2e_f__arbitration____valid.commit()) changed = true;
	if (p_core_2e_f__program__counter.commit()) changed = true;
	if (p_core_2e_m__alu__result.commit()) changed = true;
	if (p_core_2e_m__arbitration____valid.commit()) changed = true;
	if (p_core_2e_m__branch__taken.commit()) changed = true;
	if (p_core_2e_m__branch__target.commit()) changed = true;
	if (p_core_2e_m__control____alu__left__select.commit()) changed = true;
	if (p_core_2e_m__control____alu__mode__switch.commit()) changed = true;
	if (p_core_2e_m__control____alu__muldiv.commit()) changed = true;
	if (p_core_2e_m__control____alu__operation.commit()) changed = true;
	if (p_core_2e_m__control____alu__right__select.commit()) changed = true;
	if (p_core_2e_m__control____branch__mode.commit()) changed = true;
	if (p_core_2e_m__control____branch__type.commit()) changed = true;
	if (p_core_2e_m__control____immediate.commit()) changed = true;
	if (p_core_2e_m__control____mem__enable.commit()) changed = true;
	if (p_core_2e_m__control____mem__size.commit()) changed = true;
	if (p_core_2e_m__control____mem__unsigned.commit()) changed = true;
	if (p_core_2e_m__control____mem__we.commit()) changed = true;
	if (p_core_2e_m__control____rd.commit()) changed = true;
	if (p_core_2e_m__control____register__write.commit()) changed = true;
	if (p_core_2e_m__control____rs1.commit()) changed = true;
	if (p_core_2e_m__control____rs2.commit()) changed = true;
	if (p_core_2e_m__control____writeback__select.commit()) changed = true;
	if (p_core_2e_m__instruction.commit()) changed = true;
	if (p_core_2e_m__muldiv__result.commit()) changed = true;
	if (p_core_2e_m__predict__branch__predictor.commit()) changed = true;
	if (p_core_2e_m__predict__branch__taken.commit()) changed = true;
	if (p_core_2e_m__predict__branch__target.commit()) changed = true;
	if (p_core_2e_m__predict__valid.commit()) changed = true;
	if (p_core_2e_m__program__counter.commit()) changed = true;
	if (p_core_2e_m__rs2__value.commit()) changed = true;
	if (p_core_2e_mispredict__counter.commit()) changed = true;
	if (p_core_2e_mispredict__with__history.commit()) changed = true;
	if (p_core_2e_w__alu__result.commit()) changed = true;
	if (p_core_2e_w__arbitration____valid.commit()) changed = true;
	if (p_core_2e_w__control____alu__left__select.commit()) changed = true;
	if (p_core_2e_w__control____alu__mode__switch.commit()) changed = true;
	if (p_core_2e_w__control____alu__muldiv.commit()) changed = true;
	if (p_core_2e_w__control____alu__operation.commit()) changed = true;
	if (p_core_2e_w__control____alu__right__select.commit()) changed = true;
	if (p_core_2e_w__control____branch__mode.commit()) changed = true;
	if (p_core_2e_w__control____branch__type.commit()) changed = true;
	if (p_core_2e_w__control____immediate.commit()) changed = true;
	if (p_core_2e_w__control____mem__enable.commit()) changed = true;
	if (p_core_2e_w__control____mem__size.commit()) changed = true;
	if (p_core_2e_w__control____mem__unsigned.commit()) changed = true;
	if (p_core_2e_w__control____mem__we.commit()) changed = true;
	if (p_core_2e_w__control____rd.commit()) changed = true;
	if (p_core_2e_w__control____register__write.commit()) changed = true;
	if (p_core_2e_w__control____rs1.commit()) changed = true;
	if (p_core_2e_w__control____rs2.commit()) changed = true;
	if (p_core_2e_w__control____writeback__select.commit()) changed = true;
	if (p_core_2e_w__instruction.commit()) changed = true;
	if (p_core_2e_w__muldiv__result.commit()) changed = true;
	if (p_core_2e_w__program__counter.commit()) changed = true;
	if (p_core_2e_x__arbitration____valid.commit()) changed = true;
	if (p_core_2e_x__control____alu__left__select.commit()) changed = true;
	if (p_core_2e_x__control____alu__mode__switch.commit()) changed = true;
	if (p_core_2e_x__control____alu__muldiv.commit()) changed = true;
	if (p_core_2e_x__control____alu__operation.commit()) changed = true;
	if (p_core_2e_x__control____alu__right__select.commit()) changed = true;
	if (p_core_2e_x__control____branch__mode.commit()) changed = true;
	if (p_core_2e_x__control____branch__type.commit()) changed = true;
	if (p_core_2e_x__control____immediate.commit()) changed = true;
	if (p_core_2e_x__control____mem__enable.commit()) changed = true;
	if (p_core_2e_x__control____mem__size.commit()) changed = true;
	if (p_core_2e_x__control____mem__unsigned.commit()) changed = true;
	if (p_core_2e_x__control____mem__we.commit()) changed = true;
	if (p_core_2e_x__control____rd.commit()) changed = true;
	if (p_core_2e_x__control____register__write.commit()) changed = true;
	if (p_core_2e_x__control____rs1.commit()) changed = true;
	if (p_core_2e_x__control____rs2.commit()) changed = true;
	if (p_core_2e_x__control____writeback__select.commit()) changed = true;
	if (p_core_2e_x__instruction.commit()) changed = true;
	if (p_core_2e_x__predict__branch__predictor.commit()) changed = true;
	if (p_core_2e_x__predict__branch__taken.commit()) changed = true;
	if (p_core_2e_x__predict__branch__target.commit()) changed = true;
	if (p_core_2e_x__predict__valid.commit()) changed = true;
	if (p_core_2e_x__program__counter.commit()) changed = true;
	if (p_core_2e_x__rs1__is__forwarded.commit()) changed = true;
	if (p_core_2e_x__rs1__value__forwarded.commit()) changed = true;
	if (p_core_2e_x__rs2__is__forwarded.commit()) changed = true;
	if (p_core_2e_x__rs2__value__forwarded.commit()) changed = true;
	if (p_core_2e___0__.commit()) changed = true;
	if (p_core_2e___1__.commit()) changed = true;
	if (p_core_2e___2__.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2053_24_257__ADDR.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2053_24_257__DATA.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_a__btb_24_tilelink__soc_2e_v_3a_2053_24_257__EN.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_2099_24_290__ADDR.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_2099_24_290__DATA.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_2099_24_290__EN.commit()) changed = true;
	prev_p_clk = p_clk;
	if (memory_p_tl__ram_2e_memory.commit()) changed = true;
	if (memory_p_core_2e_a__btb.commit()) changed = true;
	if (memory_p_core_2e_register__file.commit()) changed = true;
	return changed;
}

CXXRTL_EXTREMELY_COLD
void p_top::debug_info(debug_items &items, std::string path) {
	assert(path.empty() || path[path.size() - 1] == ' ');
	static const value<1> const_p_tl__rom__arbiter_2e_initial = value<1>{0u};
	items.add(path + "tl_rom_arbiter initial", debug_item(const_p_tl__rom__arbiter_2e_initial, 0));
	items.add(path + "tl_rom_arbiter $13", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $17", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $23", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $29", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $3", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $33", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $37", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $41", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $43", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $9", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter bus__a__corrupt", debug_item(const_p_tl__rom__arbiter_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__rom__arbiter_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_rom_arbiter bus__a__param", debug_item(const_p_tl__rom__arbiter_2e_bus____a____param, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter bus__d__corrupt", debug_item(const_p_tl__rom__arbiter_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_bus____d____denied = value<1>{0u};
	items.add(path + "tl_rom_arbiter bus__d__denied", debug_item(const_p_tl__rom__arbiter_2e_bus____d____denied, 0));
	static const value<2> const_p_tl__rom__arbiter_2e_bus____d____param = value<2>{0u};
	items.add(path + "tl_rom_arbiter bus__d__param", debug_item(const_p_tl__rom__arbiter_2e_bus____d____param, 0));
	items.add(path + "tl_rom_arbiter clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_rom_arbiter rr_grant", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__data__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__a__corrupt", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____a____corrupt, 0));
	static const value<3> const_p_tl__rom__arbiter_2e_tl__data__rom____a____param = value<3>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__a__param", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____a____param, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__data__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__d__corrupt", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____d____corrupt, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__data__rom____d____denied = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__d__denied", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____d____denied, 0));
	static const value<2> const_p_tl__rom__arbiter_2e_tl__data__rom____d____param = value<2>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__d__param", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____d____param, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__instr__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__a__corrupt", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____a____corrupt, 0));
	static const value<32> const_p_tl__rom__arbiter_2e_tl__instr__rom____a____data = value<32>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__a__data", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____a____data, 0));
	static const value<3> const_p_tl__rom__arbiter_2e_tl__instr__rom____a____param = value<3>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__a__param", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____a____param, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__instr__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__d__corrupt", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____d____corrupt, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__instr__rom____d____denied = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__d__denied", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____d____denied, 0));
	static const value<2> const_p_tl__rom__arbiter_2e_tl__instr__rom____d____param = value<2>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__d__param", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____d____param, 0));
	items.add(path + "tl_rom_arbiter rr valid", debug_item(p_tl__rom__arbiter_2e_rr_2e_valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom_arbiter rr rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_rom_arbiter rr grant", debug_item(p_tl__rom__arbiter_2e_rr_2e_grant, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom_arbiter rr clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_rr_2e_initial = value<1>{0u};
	items.add(path + "tl_rom_arbiter rr initial", debug_item(const_p_tl__rom__arbiter_2e_rr_2e_initial, 0));
	static const value<1> const_p_tl__rom_2e_initial = value<1>{0u};
	items.add(path + "tl_rom initial", debug_item(const_p_tl__rom_2e_initial, 0));
	static const value<1> const_p_tl__rom_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom bus__a__corrupt", debug_item(const_p_tl__rom_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__rom_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_rom bus__a__param", debug_item(const_p_tl__rom_2e_bus____a____param, 0));
	static const value<1> const_p_tl__rom_2e_bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom bus__d__corrupt", debug_item(const_p_tl__rom_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__rom_2e_bus____d____denied = value<1>{0u};
	items.add(path + "tl_rom bus__d__denied", debug_item(const_p_tl__rom_2e_bus____d____denied, 0));
	static const value<2> const_p_tl__rom_2e_bus____d____param = value<2>{0u};
	items.add(path + "tl_rom bus__d__param", debug_item(const_p_tl__rom_2e_bus____d____param, 0));
	items.add(path + "tl_rom clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_rom last_a__address", debug_item(p_tl__rom_2e_last__a____address, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__corrupt", debug_item(p_tl__rom_2e_last__a____corrupt, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__data", debug_item(p_tl__rom_2e_last__a____data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__mask", debug_item(p_tl__rom_2e_last__a____mask, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__opcode", debug_item(p_tl__rom_2e_last__a____opcode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__param", debug_item(p_tl__rom_2e_last__a____param, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__ready", debug_item(p_tl__rom_2e_last__a____ready, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__size", debug_item(p_tl__rom_2e_last__a____size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__source", debug_item(p_tl__rom_2e_last__a____source, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__valid", debug_item(p_tl__rom_2e_last__a____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom memory_r_data", debug_item(debug_alias(), p_tl__rom_2e___0__, 0));
	items.add(path + "tl_rom rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_rom _0_", debug_item(p_tl__rom_2e___0__, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_tl__ram__arbiter_2e_initial = value<1>{0u};
	items.add(path + "tl_ram_arbiter initial", debug_item(const_p_tl__ram__arbiter_2e_initial, 0));
	items.add(path + "tl_ram_arbiter $13", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $17", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $23", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $29", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $3", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $33", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $37", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $41", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $43", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $9", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter bus__a__corrupt", debug_item(const_p_tl__ram__arbiter_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__ram__arbiter_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_ram_arbiter bus__a__param", debug_item(const_p_tl__ram__arbiter_2e_bus____a____param, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter bus__d__corrupt", debug_item(const_p_tl__ram__arbiter_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram_arbiter bus__d__denied", debug_item(const_p_tl__ram__arbiter_2e_bus____d____denied, 0));
	static const value<2> const_p_tl__ram__arbiter_2e_bus____d____param = value<2>{0u};
	items.add(path + "tl_ram_arbiter bus__d__param", debug_item(const_p_tl__ram__arbiter_2e_bus____d____param, 0));
	items.add(path + "tl_ram_arbiter clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_ram_arbiter rr_grant", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__data__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__a__corrupt", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____a____corrupt, 0));
	static const value<3> const_p_tl__ram__arbiter_2e_tl__data__ram____a____param = value<3>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__a__param", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____a____param, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__data__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__d__corrupt", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____d____corrupt, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__data__ram____d____denied = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__d__denied", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____d____denied, 0));
	static const value<2> const_p_tl__ram__arbiter_2e_tl__data__ram____d____param = value<2>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__d__param", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____d____param, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__instr__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__a__corrupt", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____a____corrupt, 0));
	static const value<32> const_p_tl__ram__arbiter_2e_tl__instr__ram____a____data = value<32>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__a__data", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____a____data, 0));
	static const value<3> const_p_tl__ram__arbiter_2e_tl__instr__ram____a____param = value<3>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__a__param", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____a____param, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__instr__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__d__corrupt", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____d____corrupt, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__instr__ram____d____denied = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__d__denied", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____d____denied, 0));
	static const value<2> const_p_tl__ram__arbiter_2e_tl__instr__ram____d____param = value<2>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__d__param", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____d____param, 0));
	items.add(path + "tl_ram_arbiter rr valid", debug_item(p_tl__ram__arbiter_2e_rr_2e_valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram_arbiter rr rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_ram_arbiter rr grant", debug_item(p_tl__ram__arbiter_2e_rr_2e_grant, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram_arbiter rr clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_rr_2e_initial = value<1>{0u};
	items.add(path + "tl_ram_arbiter rr initial", debug_item(const_p_tl__ram__arbiter_2e_rr_2e_initial, 0));
	static const value<1> const_p_tl__ram_2e_initial = value<1>{0u};
	items.add(path + "tl_ram initial", debug_item(const_p_tl__ram_2e_initial, 0));
	static const value<1> const_p_tl__ram_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram bus__a__corrupt", debug_item(const_p_tl__ram_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__ram_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_ram bus__a__param", debug_item(const_p_tl__ram_2e_bus____a____param, 0));
	static const value<1> const_p_tl__ram_2e_bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram bus__d__corrupt", debug_item(const_p_tl__ram_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__ram_2e_bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram bus__d__denied", debug_item(const_p_tl__ram_2e_bus____d____denied, 0));
	static const value<2> const_p_tl__ram_2e_bus____d____param = value<2>{0u};
	items.add(path + "tl_ram bus__d__param", debug_item(const_p_tl__ram_2e_bus____d____param, 0));
	items.add(path + "tl_ram clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_ram last_a__address", debug_item(p_tl__ram_2e_last__a____address, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__corrupt", debug_item(p_tl__ram_2e_last__a____corrupt, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__data", debug_item(p_tl__ram_2e_last__a____data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__mask", debug_item(p_tl__ram_2e_last__a____mask, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__opcode", debug_item(p_tl__ram_2e_last__a____opcode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__param", debug_item(p_tl__ram_2e_last__a____param, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__ready", debug_item(p_tl__ram_2e_last__a____ready, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__size", debug_item(p_tl__ram_2e_last__a____size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__source", debug_item(p_tl__ram_2e_last__a____source, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__valid", debug_item(p_tl__ram_2e_last__a____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram memory_r_data", debug_item(debug_alias(), p_tl__ram_2e___0__, 0));
	items.add(path + "tl_ram rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_ram _0_", debug_item(p_tl__ram_2e___0__, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_tl__periph_2e_initial = value<1>{0u};
	items.add(path + "tl_periph initial", debug_item(const_p_tl__periph_2e_initial, 0));
	items.add(path + "tl_periph bus__d__corrupt", debug_item(p_tl__periph_2e_bus____d____corrupt, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__data", debug_item(p_tl__periph_2e_bus____d____data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__denied", debug_item(p_tl__periph_2e_bus____d____denied, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__opcode", debug_item(p_tl__periph_2e_bus____d____opcode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__param", debug_item(p_tl__periph_2e_bus____d____param, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__size", debug_item(p_tl__periph_2e_bus____d____size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__source", debug_item(p_tl__periph_2e_bus____d____source, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__valid", debug_item(p_tl__periph_2e_bus____d____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_periph cycle_count", debug_item(p_tl__periph_2e_cycle__count, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph halt_simulator", debug_item(p_tl__periph_2e_halt__simulator, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph output", debug_item(p_tl__periph_2e_output, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph output_valid", debug_item(p_tl__periph_2e_output__valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__instr__decoder_2e_initial = value<1>{0u};
	items.add(path + "tl_instr_decoder initial", debug_item(const_p_tl__instr__decoder_2e_initial, 0));
	items.add(path + "tl_instr_decoder _bus__a__address", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	static const value<1> const_p_tl__instr__decoder_2e___bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder _bus__a__corrupt", debug_item(const_p_tl__instr__decoder_2e___bus____a____corrupt, 0));
	static const value<32> const_p_tl__instr__decoder_2e___bus____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder _bus__a__data", debug_item(const_p_tl__instr__decoder_2e___bus____a____data, 0));
	static const value<4> const_p_tl__instr__decoder_2e___bus____a____mask = value<4>{0xfu};
	items.add(path + "tl_instr_decoder _bus__a__mask", debug_item(const_p_tl__instr__decoder_2e___bus____a____mask, 0));
	static const value<3> const_p_tl__instr__decoder_2e___bus____a____opcode = value<3>{0x4u};
	items.add(path + "tl_instr_decoder _bus__a__opcode", debug_item(const_p_tl__instr__decoder_2e___bus____a____opcode, 0));
	static const value<3> const_p_tl__instr__decoder_2e___bus____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder _bus__a__param", debug_item(const_p_tl__instr__decoder_2e___bus____a____param, 0));
	static const value<2> const_p_tl__instr__decoder_2e___bus____a____size = value<2>{0x2u};
	items.add(path + "tl_instr_decoder _bus__a__size", debug_item(const_p_tl__instr__decoder_2e___bus____a____size, 0));
	items.add(path + "tl_instr_decoder _bus__a__source", debug_item(debug_alias(), p_instruction__master_2e_send__ptr, 0));
	static const value<1> const_p_tl__instr__decoder_2e___bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder _bus__d__corrupt", debug_item(const_p_tl__instr__decoder_2e___bus____d____corrupt, 0));
	static const value<1> const_p_tl__instr__decoder_2e___bus____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder _bus__d__denied", debug_item(const_p_tl__instr__decoder_2e___bus____d____denied, 0));
	static const value<2> const_p_tl__instr__decoder_2e___bus____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder _bus__d__param", debug_item(const_p_tl__instr__decoder_2e___bus____d____param, 0));
	static const value<1> const_p_tl__instr__decoder_2e___bus____d____ready = value<1>{0x1u};
	items.add(path + "tl_instr_decoder _bus__d__ready", debug_item(const_p_tl__instr__decoder_2e___bus____d____ready, 0));
	items.add(path + "tl_instr_decoder clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_instr_decoder rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__a__corrupt", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____a____corrupt, 0));
	static const value<32> const_p_tl__instr__decoder_2e_tl__instr__ram____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__a__data", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____a____data, 0));
	static const value<3> const_p_tl__instr__decoder_2e_tl__instr__ram____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__a__param", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____a____param, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__d__corrupt", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____d____corrupt, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__ram____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__d__denied", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____d____denied, 0));
	static const value<2> const_p_tl__instr__decoder_2e_tl__instr__ram____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__d__param", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____d____param, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__a__corrupt", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____a____corrupt, 0));
	static const value<32> const_p_tl__instr__decoder_2e_tl__instr__rom____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__a__data", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____a____data, 0));
	static const value<3> const_p_tl__instr__decoder_2e_tl__instr__rom____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__a__param", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____a____param, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__d__corrupt", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____d____corrupt, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__rom____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__d__denied", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____d____denied, 0));
	static const value<2> const_p_tl__instr__decoder_2e_tl__instr__rom____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__d__param", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____d____param, 0));
	items.add(path + "tl_instr_decoder rr rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_instr_decoder rr last_grant", debug_item(p_tl__instr__decoder_2e_rr_2e_last__grant, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_instr_decoder rr clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__instr__decoder_2e_rr_2e_initial = value<1>{0u};
	items.add(path + "tl_instr_decoder rr initial", debug_item(const_p_tl__instr__decoder_2e_rr_2e_initial, 0));
	static const value<1> const_p_tl__data__decoder_2e_initial = value<1>{0u};
	items.add(path + "tl_data_decoder initial", debug_item(const_p_tl__data__decoder_2e_initial, 0));
	items.add(path + "tl_data_decoder _bus__a__address", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	static const value<1> const_p_tl__data__decoder_2e___bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder _bus__a__corrupt", debug_item(const_p_tl__data__decoder_2e___bus____a____corrupt, 0));
	static const value<3> const_p_tl__data__decoder_2e___bus____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder _bus__a__param", debug_item(const_p_tl__data__decoder_2e___bus____a____param, 0));
	items.add(path + "tl_data_decoder _bus__a__size", debug_item(debug_alias(), p_core_2e_m__control____mem__size, 0));
	items.add(path + "tl_data_decoder _bus__a__source", debug_item(debug_alias(), p_data__master_2e_send__ptr, 0));
	static const value<1> const_p_tl__data__decoder_2e___bus____d____ready = value<1>{0x1u};
	items.add(path + "tl_data_decoder _bus__d__ready", debug_item(const_p_tl__data__decoder_2e___bus____d____ready, 0));
	static const value<1> const_p_tl__data__decoder_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder bus__a__corrupt", debug_item(const_p_tl__data__decoder_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__data__decoder_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder bus__a__param", debug_item(const_p_tl__data__decoder_2e_bus____a____param, 0));
	items.add(path + "tl_data_decoder bus__d__corrupt", debug_item(debug_alias(), p_tl__periph_2e_bus____d____corrupt, 0));
	items.add(path + "tl_data_decoder bus__d__data", debug_item(debug_alias(), p_tl__periph_2e_bus____d____data, 0));
	items.add(path + "tl_data_decoder bus__d__denied", debug_item(debug_alias(), p_tl__periph_2e_bus____d____denied, 0));
	items.add(path + "tl_data_decoder bus__d__opcode", debug_item(debug_alias(), p_tl__periph_2e_bus____d____opcode, 0));
	items.add(path + "tl_data_decoder bus__d__param", debug_item(debug_alias(), p_tl__periph_2e_bus____d____param, 0));
	items.add(path + "tl_data_decoder bus__d__size", debug_item(debug_alias(), p_tl__periph_2e_bus____d____size, 0));
	items.add(path + "tl_data_decoder bus__d__source", debug_item(debug_alias(), p_tl__periph_2e_bus____d____source, 0));
	items.add(path + "tl_data_decoder bus__d__valid", debug_item(debug_alias(), p_tl__periph_2e_bus____d____valid, 0));
	items.add(path + "tl_data_decoder clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_data_decoder rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__a__corrupt", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____a____corrupt, 0));
	static const value<3> const_p_tl__data__decoder_2e_tl__data__ram____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__a__param", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____a____param, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__d__corrupt", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____d____corrupt, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__ram____d____denied = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__d__denied", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____d____denied, 0));
	static const value<2> const_p_tl__data__decoder_2e_tl__data__ram____d____param = value<2>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__d__param", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____d____param, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__a__corrupt", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____a____corrupt, 0));
	static const value<3> const_p_tl__data__decoder_2e_tl__data__rom____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__a__param", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____a____param, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__d__corrupt", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____d____corrupt, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__rom____d____denied = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__d__denied", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____d____denied, 0));
	static const value<2> const_p_tl__data__decoder_2e_tl__data__rom____d____param = value<2>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__d__param", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____d____param, 0));
	items.add(path + "tl_data_decoder rr rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_data_decoder rr last_grant", debug_item(p_tl__data__decoder_2e_rr_2e_last__grant, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_data_decoder rr clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__data__decoder_2e_rr_2e_initial = value<1>{0u};
	items.add(path + "tl_data_decoder rr initial", debug_item(const_p_tl__data__decoder_2e_rr_2e_initial, 0));
	static const value<1> const_p_instruction__master_2e_initial = value<1>{0u};
	items.add(path + "instruction_master initial", debug_item(const_p_instruction__master_2e_initial, 0));
	items.add(path + "instruction_master bus__a__address", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	static const value<1> const_p_instruction__master_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "instruction_master bus__a__corrupt", debug_item(const_p_instruction__master_2e_bus____a____corrupt, 0));
	static const value<4> const_p_instruction__master_2e_bus____a____mask = value<4>{0xfu};
	items.add(path + "instruction_master bus__a__mask", debug_item(const_p_instruction__master_2e_bus____a____mask, 0));
	static const value<3> const_p_instruction__master_2e_bus____a____opcode = value<3>{0x4u};
	items.add(path + "instruction_master bus__a__opcode", debug_item(const_p_instruction__master_2e_bus____a____opcode, 0));
	static const value<3> const_p_instruction__master_2e_bus____a____param = value<3>{0u};
	items.add(path + "instruction_master bus__a__param", debug_item(const_p_instruction__master_2e_bus____a____param, 0));
	static const value<2> const_p_instruction__master_2e_bus____a____size = value<2>{0x2u};
	items.add(path + "instruction_master bus__a__size", debug_item(const_p_instruction__master_2e_bus____a____size, 0));
	items.add(path + "instruction_master bus__a__source", debug_item(debug_alias(), p_instruction__master_2e_send__ptr, 0));
	static const value<1> const_p_instruction__master_2e_bus____d____ready = value<1>{0x1u};
	items.add(path + "instruction_master bus__d__ready", debug_item(const_p_instruction__master_2e_bus____d____ready, 0));
	items.add(path + "instruction_master clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "instruction_master data", debug_item(p_instruction__master_2e_data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master data$18", debug_item(p_instruction__master_2e_data_24_18, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master instruction_stream__req_addr", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	items.add(path + "instruction_master read_ptr", debug_item(p_instruction__master_2e_read__ptr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "instruction_master send_ptr", debug_item(p_instruction__master_2e_send__ptr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master state", debug_item(p_instruction__master_2e_state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master state$5", debug_item(p_instruction__master_2e_state_24_5, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_data__master_2e_initial = value<1>{0u};
	items.add(path + "data_master initial", debug_item(const_p_data__master_2e_initial, 0));
	items.add(path + "data_master addr_low", debug_item(p_data__master_2e_addr__low, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master addr_low$46", debug_item(p_data__master_2e_addr__low_24_46, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master bus__a__address", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	static const value<1> const_p_data__master_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "data_master bus__a__corrupt", debug_item(const_p_data__master_2e_bus____a____corrupt, 0));
	static const value<3> const_p_data__master_2e_bus____a____param = value<3>{0u};
	items.add(path + "data_master bus__a__param", debug_item(const_p_data__master_2e_bus____a____param, 0));
	items.add(path + "data_master bus__a__size", debug_item(debug_alias(), p_core_2e_m__control____mem__size, 0));
	items.add(path + "data_master bus__a__source", debug_item(debug_alias(), p_data__master_2e_send__ptr, 0));
	static const value<1> const_p_data__master_2e_bus____d____ready = value<1>{0x1u};
	items.add(path + "data_master bus__d__ready", debug_item(const_p_data__master_2e_bus____d____ready, 0));
	items.add(path + "data_master clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "data_master data$62", debug_item(p_data__master_2e_data_24_62, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master data$63", debug_item(p_data__master_2e_data_24_63, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master data_stream__req_addr", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "data_master data_stream__req_data", debug_item(debug_alias(), p_core_2e_m__rs2__value, 0));
	items.add(path + "data_master data_stream__req_size", debug_item(debug_alias(), p_core_2e_m__control____mem__size, 0));
	items.add(path + "data_master data_stream__req_unsigned", debug_item(debug_alias(), p_core_2e_m__control____mem__unsigned, 0));
	items.add(path + "data_master data_stream__req_we", debug_item(debug_alias(), p_core_2e_m__control____mem__we, 0));
	items.add(path + "data_master read_ptr", debug_item(p_data__master_2e_read__ptr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "data_master send_ptr", debug_item(p_data__master_2e_send__ptr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master size", debug_item(p_data__master_2e_size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master size$40", debug_item(p_data__master_2e_size_24_40, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master state", debug_item(p_data__master_2e_state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master state$5", debug_item(p_data__master_2e_state_24_5, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master unsigned", debug_item(p_data__master_2e_unsigned, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master unsigned$43", debug_item(p_data__master_2e_unsigned_24_43, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_initial = value<1>{0u};
	items.add(path + "core initial", debug_item(const_p_core_2e_initial, 0));
	static const value<1> const_p_core_2e__24_372 = value<1>{0x1u};
	items.add(path + "core $372", debug_item(const_p_core_2e__24_372, 0));
	static const value<1> const_p_core_2e__24_378 = value<1>{0x1u};
	items.add(path + "core $378", debug_item(const_p_core_2e__24_378, 0));
	static const value<1> const_p_core_2e__24_384 = value<1>{0x1u};
	items.add(path + "core $384", debug_item(const_p_core_2e__24_384, 0));
	static const value<1> const_p_core_2e__24_390 = value<1>{0x1u};
	items.add(path + "core $390", debug_item(const_p_core_2e__24_390, 0));
	static const value<1> const_p_core_2e__24_396 = value<1>{0x1u};
	items.add(path + "core $396", debug_item(const_p_core_2e__24_396, 0));
	static const value<1> const_p_core_2e__24_402 = value<1>{0x1u};
	items.add(path + "core $402", debug_item(const_p_core_2e__24_402, 0));
	static const value<1> const_p_core_2e__24_408 = value<1>{0x1u};
	items.add(path + "core $408", debug_item(const_p_core_2e__24_408, 0));
	static const value<1> const_p_core_2e__24_414 = value<1>{0x1u};
	items.add(path + "core $414", debug_item(const_p_core_2e__24_414, 0));
	static const value<1> const_p_core_2e__24_42 = value<1>{0x1u};
	items.add(path + "core $42", debug_item(const_p_core_2e__24_42, 0));
	static const value<1> const_p_core_2e__24_420 = value<1>{0x1u};
	items.add(path + "core $420", debug_item(const_p_core_2e__24_420, 0));
	static const value<1> const_p_core_2e__24_426 = value<1>{0x1u};
	items.add(path + "core $426", debug_item(const_p_core_2e__24_426, 0));
	static const value<1> const_p_core_2e__24_432 = value<1>{0x1u};
	items.add(path + "core $432", debug_item(const_p_core_2e__24_432, 0));
	static const value<1> const_p_core_2e__24_438 = value<1>{0x1u};
	items.add(path + "core $438", debug_item(const_p_core_2e__24_438, 0));
	static const value<1> const_p_core_2e__24_446 = value<1>{0x1u};
	items.add(path + "core $446", debug_item(const_p_core_2e__24_446, 0));
	static const value<1> const_p_core_2e__24_468 = value<1>{0x1u};
	items.add(path + "core $468", debug_item(const_p_core_2e__24_468, 0));
	static const value<1> const_p_core_2e__24_490 = value<1>{0x1u};
	items.add(path + "core $490", debug_item(const_p_core_2e__24_490, 0));
	static const value<1> const_p_core_2e__24_512 = value<1>{0x1u};
	items.add(path + "core $512", debug_item(const_p_core_2e__24_512, 0));
	static const value<1> const_p_core_2e__24_534 = value<1>{0x1u};
	items.add(path + "core $534", debug_item(const_p_core_2e__24_534, 0));
	static const value<1> const_p_core_2e__24_565 = value<1>{0x1u};
	items.add(path + "core $565", debug_item(const_p_core_2e__24_565, 0));
	static const value<1> const_p_core_2e__24_596 = value<1>{0x1u};
	items.add(path + "core $596", debug_item(const_p_core_2e__24_596, 0));
	static const value<1> const_p_core_2e__24_611 = value<1>{0x1u};
	items.add(path + "core $611", debug_item(const_p_core_2e__24_611, 0));
	static const value<1> const_p_core_2e__24_623 = value<1>{0x1u};
	items.add(path + "core $623", debug_item(const_p_core_2e__24_623, 0));
	static const value<1> const_p_core_2e__24_635 = value<1>{0x1u};
	items.add(path + "core $635", debug_item(const_p_core_2e__24_635, 0));
	static const value<1> const_p_core_2e__24_647 = value<1>{0x1u};
	items.add(path + "core $647", debug_item(const_p_core_2e__24_647, 0));
	static const value<1> const_p_core_2e__24_669 = value<1>{0x1u};
	items.add(path + "core $669", debug_item(const_p_core_2e__24_669, 0));
	static const value<1> const_p_core_2e__24_681 = value<1>{0x1u};
	items.add(path + "core $681", debug_item(const_p_core_2e__24_681, 0));
	static const value<1> const_p_core_2e__24_693 = value<1>{0x1u};
	items.add(path + "core $693", debug_item(const_p_core_2e__24_693, 0));
	static const value<1> const_p_core_2e__24_705 = value<1>{0x1u};
	items.add(path + "core $705", debug_item(const_p_core_2e__24_705, 0));
	static const value<1> const_p_core_2e__24_725 = value<1>{0x1u};
	items.add(path + "core $725", debug_item(const_p_core_2e__24_725, 0));
	static const value<1> const_p_core_2e__24_733 = value<1>{0x1u};
	items.add(path + "core $733", debug_item(const_p_core_2e__24_733, 0));
	static const value<1> const_p_core_2e__24_739 = value<1>{0x1u};
	items.add(path + "core $739", debug_item(const_p_core_2e__24_739, 0));
	static const value<1> const_p_core_2e__24_745 = value<1>{0x1u};
	items.add(path + "core $745", debug_item(const_p_core_2e__24_745, 0));
	static const value<1> const_p_core_2e__24_751 = value<1>{0x1u};
	items.add(path + "core $751", debug_item(const_p_core_2e__24_751, 0));
	static const value<1> const_p_core_2e__24_757 = value<1>{0x1u};
	items.add(path + "core $757", debug_item(const_p_core_2e__24_757, 0));
	static const value<1> const_p_core_2e__24_773 = value<1>{0x1u};
	items.add(path + "core $773", debug_item(const_p_core_2e__24_773, 0));
	static const value<1> const_p_core_2e_a__arbitration____halted__by__self = value<1>{0u};
	items.add(path + "core a_arbitration__halted_by_self", debug_item(const_p_core_2e_a__arbitration____halted__by__self, 0));
	items.add(path + "core a_arbitration__valid", debug_item(p_core_2e_a__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core a_btb_r_data", debug_item(debug_alias(), p_core_2e___0__, 0));
	items.add(path + "core a_program_counter", debug_item(p_core_2e_a__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core branch_counter", debug_item(p_core_2e_branch__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core d_arbitration__valid", debug_item(p_core_2e_d__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core d_predict_branch_predictor", debug_item(p_core_2e_d__predict__branch__predictor, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core d_predict_branch_taken", debug_item(p_core_2e_d__predict__branch__taken, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core d_predict_branch_target", debug_item(p_core_2e_d__predict__branch__target, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core d_predict_valid", debug_item(p_core_2e_d__predict__valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core d_program_counter", debug_item(p_core_2e_d__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core data_stream__req_addr", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "core data_stream__req_data", debug_item(debug_alias(), p_core_2e_m__rs2__value, 0));
	items.add(path + "core data_stream__req_size", debug_item(debug_alias(), p_core_2e_m__control____mem__size, 0));
	items.add(path + "core data_stream__req_unsigned", debug_item(debug_alias(), p_core_2e_m__control____mem__unsigned, 0));
	items.add(path + "core data_stream__req_we", debug_item(debug_alias(), p_core_2e_m__control____mem__we, 0));
	static const value<1> const_p_core_2e_decoder__control____alu__muldiv = value<1>{0u};
	items.add(path + "core decoder_control__alu_muldiv", debug_item(const_p_core_2e_decoder__control____alu__muldiv, 0));
	items.add(path + "core f_arbitration__valid", debug_item(p_core_2e_f__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core f_program_counter", debug_item(p_core_2e_f__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core instruction_stream__req_addr", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	items.add(path + "core m_alu_result", debug_item(p_core_2e_m__alu__result, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_m__arbitration____remove = value<1>{0u};
	items.add(path + "core m_arbitration__remove", debug_item(const_p_core_2e_m__arbitration____remove, 0));
	items.add(path + "core m_arbitration__valid", debug_item(p_core_2e_m__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_branch_taken", debug_item(p_core_2e_m__branch__taken, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_branch_target", debug_item(p_core_2e_m__branch__target, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__alu_left_select", debug_item(p_core_2e_m__control____alu__left__select, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__alu_mode_switch", debug_item(p_core_2e_m__control____alu__mode__switch, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__alu_muldiv", debug_item(p_core_2e_m__control____alu__muldiv, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__alu_operation", debug_item(p_core_2e_m__control____alu__operation, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__alu_right_select", debug_item(p_core_2e_m__control____alu__right__select, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__branch_mode", debug_item(p_core_2e_m__control____branch__mode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__branch_type", debug_item(p_core_2e_m__control____branch__type, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__immediate", debug_item(p_core_2e_m__control____immediate, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__mem_enable", debug_item(p_core_2e_m__control____mem__enable, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__mem_size", debug_item(p_core_2e_m__control____mem__size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__mem_unsigned", debug_item(p_core_2e_m__control____mem__unsigned, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__mem_we", debug_item(p_core_2e_m__control____mem__we, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__rd", debug_item(p_core_2e_m__control____rd, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__register_write", debug_item(p_core_2e_m__control____register__write, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__rs1", debug_item(p_core_2e_m__control____rs1, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__rs2", debug_item(p_core_2e_m__control____rs2, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_control__writeback_select", debug_item(p_core_2e_m__control____writeback__select, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_instruction", debug_item(p_core_2e_m__instruction, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_muldiv_result", debug_item(p_core_2e_m__muldiv__result, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_predict_branch_predictor", debug_item(p_core_2e_m__predict__branch__predictor, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_predict_branch_taken", debug_item(p_core_2e_m__predict__branch__taken, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_predict_branch_target", debug_item(p_core_2e_m__predict__branch__target, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_predict_valid", debug_item(p_core_2e_m__predict__valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_program_counter", debug_item(p_core_2e_m__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_rs2_value", debug_item(p_core_2e_m__rs2__value, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mispredict_counter", debug_item(p_core_2e_mispredict__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mispredict_with_history", debug_item(p_core_2e_mispredict__with__history, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core register_file_r_data", debug_item(debug_alias(), p_core_2e___1__, 0));
	items.add(path + "core register_file_r_data$5", debug_item(debug_alias(), p_core_2e___2__, 0));
	items.add(path + "core register_file_w_addr", debug_item(debug_alias(), p_core_2e_w__control____rd, 0));
	items.add(path + "core rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core w_alu_result", debug_item(p_core_2e_w__alu__result, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_w__arbitration____halted__by__next = value<1>{0u};
	items.add(path + "core w_arbitration__halted_by_next", debug_item(const_p_core_2e_w__arbitration____halted__by__next, 0));
	static const value<1> const_p_core_2e_w__arbitration____remove = value<1>{0u};
	items.add(path + "core w_arbitration__remove", debug_item(const_p_core_2e_w__arbitration____remove, 0));
	items.add(path + "core w_arbitration__valid", debug_item(p_core_2e_w__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__alu_left_select", debug_item(p_core_2e_w__control____alu__left__select, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__alu_mode_switch", debug_item(p_core_2e_w__control____alu__mode__switch, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__alu_muldiv", debug_item(p_core_2e_w__control____alu__muldiv, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__alu_operation", debug_item(p_core_2e_w__control____alu__operation, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__alu_right_select", debug_item(p_core_2e_w__control____alu__right__select, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__branch_mode", debug_item(p_core_2e_w__control____branch__mode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__branch_type", debug_item(p_core_2e_w__control____branch__type, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__immediate", debug_item(p_core_2e_w__control____immediate, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__mem_enable", debug_item(p_core_2e_w__control____mem__enable, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__mem_size", debug_item(p_core_2e_w__control____mem__size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__mem_unsigned", debug_item(p_core_2e_w__control____mem__unsigned, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__mem_we", debug_item(p_core_2e_w__control____mem__we, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__rd", debug_item(p_core_2e_w__control____rd, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__register_write", debug_item(p_core_2e_w__control____register__write, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__rs1", debug_item(p_core_2e_w__control____rs1, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__rs2", debug_item(p_core_2e_w__control____rs2, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_control__writeback_select", debug_item(p_core_2e_w__control____writeback__select, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_instruction", debug_item(p_core_2e_w__instruction, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_muldiv_result", debug_item(p_core_2e_w__muldiv__result, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_program_counter", debug_item(p_core_2e_w__program__counter, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_x__arbitration____halted__by__self = value<1>{0u};
	items.add(path + "core x_arbitration__halted_by_self", debug_item(const_p_core_2e_x__arbitration____halted__by__self, 0));
	items.add(path + "core x_arbitration__valid", debug_item(p_core_2e_x__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__alu_left_select", debug_item(p_core_2e_x__control____alu__left__select, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__alu_mode_switch", debug_item(p_core_2e_x__control____alu__mode__switch, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__alu_muldiv", debug_item(p_core_2e_x__control____alu__muldiv, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__alu_operation", debug_item(p_core_2e_x__control____alu__operation, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__alu_right_select", debug_item(p_core_2e_x__control____alu__right__select, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__branch_mode", debug_item(p_core_2e_x__control____branch__mode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__branch_type", debug_item(p_core_2e_x__control____branch__type, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__immediate", debug_item(p_core_2e_x__control____immediate, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__mem_enable", debug_item(p_core_2e_x__control____mem__enable, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__mem_size", debug_item(p_core_2e_x__control____mem__size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__mem_unsigned", debug_item(p_core_2e_x__control____mem__unsigned, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__mem_we", debug_item(p_core_2e_x__control____mem__we, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__rd", debug_item(p_core_2e_x__control____rd, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__register_write", debug_item(p_core_2e_x__control____register__write, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__rs1", debug_item(p_core_2e_x__control____rs1, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__rs2", debug_item(p_core_2e_x__control____rs2, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_control__writeback_select", debug_item(p_core_2e_x__control____writeback__select, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_instruction", debug_item(p_core_2e_x__instruction, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_predict_branch_predictor", debug_item(p_core_2e_x__predict__branch__predictor, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_predict_branch_taken", debug_item(p_core_2e_x__predict__branch__taken, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_predict_branch_target", debug_item(p_core_2e_x__predict__branch__target, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_predict_valid", debug_item(p_core_2e_x__predict__valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_program_counter", debug_item(p_core_2e_x__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs1_is_forwarded", debug_item(p_core_2e_x__rs1__is__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs1_value_forwarded", debug_item(p_core_2e_x__rs1__value__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs1_value_read", debug_item(debug_alias(), p_core_2e___1__, 0));
	items.add(path + "core x_rs2_is_forwarded", debug_item(p_core_2e_x__rs2__is__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs2_value_forwarded", debug_item(p_core_2e_x__rs2__value__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs2_value_read", debug_item(debug_alias(), p_core_2e___2__, 0));
	items.add(path + "core _0_", debug_item(p_core_2e___0__, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core _1_", debug_item(p_core_2e___1__, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core _2_", debug_item(p_core_2e___2__, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_decoder_2e_control____alu__muldiv = value<1>{0u};
	items.add(path + "core decoder control__alu_muldiv", debug_item(const_p_core_2e_decoder_2e_control____alu__muldiv, 0));
	static const value<1> const_p_core_2e_decoder_2e_initial = value<1>{0u};
	items.add(path + "core decoder initial", debug_item(const_p_core_2e_decoder_2e_initial, 0));
	static const value<2> const_p_tl__rom__bus____d____param = value<2>{0u};
	items.add(path + "tl_rom_bus__d__param", debug_item(const_p_tl__rom__bus____d____param, 0));
	static const value<1> const_p_tl__rom__bus____d____denied = value<1>{0u};
	items.add(path + "tl_rom_bus__d__denied", debug_item(const_p_tl__rom__bus____d____denied, 0));
	static const value<1> const_p_tl__rom__bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_bus__d__corrupt", debug_item(const_p_tl__rom__bus____d____corrupt, 0));
	static const value<3> const_p_tl__rom__bus____a____param = value<3>{0u};
	items.add(path + "tl_rom_bus__a__param", debug_item(const_p_tl__rom__bus____a____param, 0));
	static const value<1> const_p_tl__rom__bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_bus__a__corrupt", debug_item(const_p_tl__rom__bus____a____corrupt, 0));
	static const value<2> const_p_tl__rom__arbiter__bus____d____param = value<2>{0u};
	items.add(path + "tl_rom_arbiter_bus__d__param", debug_item(const_p_tl__rom__arbiter__bus____d____param, 0));
	static const value<1> const_p_tl__rom__arbiter__bus____d____denied = value<1>{0u};
	items.add(path + "tl_rom_arbiter_bus__d__denied", debug_item(const_p_tl__rom__arbiter__bus____d____denied, 0));
	static const value<1> const_p_tl__rom__arbiter__bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter_bus__d__corrupt", debug_item(const_p_tl__rom__arbiter__bus____d____corrupt, 0));
	static const value<3> const_p_tl__rom__arbiter__bus____a____param = value<3>{0u};
	items.add(path + "tl_rom_arbiter_bus__a__param", debug_item(const_p_tl__rom__arbiter__bus____a____param, 0));
	static const value<1> const_p_tl__rom__arbiter__bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter_bus__a__corrupt", debug_item(const_p_tl__rom__arbiter__bus____a____corrupt, 0));
	static const value<2> const_p_tl__ram__bus____d____param = value<2>{0u};
	items.add(path + "tl_ram_bus__d__param", debug_item(const_p_tl__ram__bus____d____param, 0));
	static const value<1> const_p_tl__ram__bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram_bus__d__denied", debug_item(const_p_tl__ram__bus____d____denied, 0));
	static const value<1> const_p_tl__ram__bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_bus__d__corrupt", debug_item(const_p_tl__ram__bus____d____corrupt, 0));
	static const value<3> const_p_tl__ram__bus____a____param = value<3>{0u};
	items.add(path + "tl_ram_bus__a__param", debug_item(const_p_tl__ram__bus____a____param, 0));
	static const value<1> const_p_tl__ram__bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_bus__a__corrupt", debug_item(const_p_tl__ram__bus____a____corrupt, 0));
	static const value<2> const_p_tl__ram__arbiter__bus____d____param = value<2>{0u};
	items.add(path + "tl_ram_arbiter_bus__d__param", debug_item(const_p_tl__ram__arbiter__bus____d____param, 0));
	static const value<1> const_p_tl__ram__arbiter__bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram_arbiter_bus__d__denied", debug_item(const_p_tl__ram__arbiter__bus____d____denied, 0));
	static const value<1> const_p_tl__ram__arbiter__bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter_bus__d__corrupt", debug_item(const_p_tl__ram__arbiter__bus____d____corrupt, 0));
	static const value<3> const_p_tl__ram__arbiter__bus____a____param = value<3>{0u};
	items.add(path + "tl_ram_arbiter_bus__a__param", debug_item(const_p_tl__ram__arbiter__bus____a____param, 0));
	static const value<1> const_p_tl__ram__arbiter__bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter_bus__a__corrupt", debug_item(const_p_tl__ram__arbiter__bus____a____corrupt, 0));
	items.add(path + "tl_periph_output_valid", debug_item(debug_alias(), p_tl__periph_2e_output__valid, 0));
	items.add(path + "tl_periph_output", debug_item(debug_alias(), p_tl__periph_2e_output, 0));
	items.add(path + "tl_periph_halt_simulator", debug_item(debug_alias(), p_tl__periph_2e_halt__simulator, 0));
	static const value<2> const_p_tl__instr__decoder__tl__instr__rom____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__d__param", debug_item(const_p_tl__instr__decoder__tl__instr__rom____d____param, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__rom____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__d__denied", debug_item(const_p_tl__instr__decoder__tl__instr__rom____d____denied, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__d__corrupt", debug_item(const_p_tl__instr__decoder__tl__instr__rom____d____corrupt, 0));
	static const value<3> const_p_tl__instr__decoder__tl__instr__rom____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__a__param", debug_item(const_p_tl__instr__decoder__tl__instr__rom____a____param, 0));
	static const value<32> const_p_tl__instr__decoder__tl__instr__rom____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__a__data", debug_item(const_p_tl__instr__decoder__tl__instr__rom____a____data, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__a__corrupt", debug_item(const_p_tl__instr__decoder__tl__instr__rom____a____corrupt, 0));
	static const value<2> const_p_tl__instr__decoder__tl__instr__ram____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__d__param", debug_item(const_p_tl__instr__decoder__tl__instr__ram____d____param, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__ram____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__d__denied", debug_item(const_p_tl__instr__decoder__tl__instr__ram____d____denied, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__d__corrupt", debug_item(const_p_tl__instr__decoder__tl__instr__ram____d____corrupt, 0));
	static const value<3> const_p_tl__instr__decoder__tl__instr__ram____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__a__param", debug_item(const_p_tl__instr__decoder__tl__instr__ram____a____param, 0));
	static const value<32> const_p_tl__instr__decoder__tl__instr__ram____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__a__data", debug_item(const_p_tl__instr__decoder__tl__instr__ram____a____data, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__a__corrupt", debug_item(const_p_tl__instr__decoder__tl__instr__ram____a____corrupt, 0));
	static const value<1> const_p_tl__instr__decoder____bus____d____ready = value<1>{0x1u};
	items.add(path + "tl_instr_decoder__bus__d__ready", debug_item(const_p_tl__instr__decoder____bus____d____ready, 0));
	static const value<2> const_p_tl__instr__decoder____bus____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder__bus__d__param", debug_item(const_p_tl__instr__decoder____bus____d____param, 0));
	static const value<1> const_p_tl__instr__decoder____bus____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder__bus__d__denied", debug_item(const_p_tl__instr__decoder____bus____d____denied, 0));
	static const value<1> const_p_tl__instr__decoder____bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder__bus__d__corrupt", debug_item(const_p_tl__instr__decoder____bus____d____corrupt, 0));
	items.add(path + "tl_instr_decoder__bus__a__source", debug_item(debug_alias(), p_instruction__master_2e_send__ptr, 0));
	static const value<2> const_p_tl__instr__decoder____bus____a____size = value<2>{0x2u};
	items.add(path + "tl_instr_decoder__bus__a__size", debug_item(const_p_tl__instr__decoder____bus____a____size, 0));
	static const value<3> const_p_tl__instr__decoder____bus____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder__bus__a__param", debug_item(const_p_tl__instr__decoder____bus____a____param, 0));
	static const value<3> const_p_tl__instr__decoder____bus____a____opcode = value<3>{0x4u};
	items.add(path + "tl_instr_decoder__bus__a__opcode", debug_item(const_p_tl__instr__decoder____bus____a____opcode, 0));
	static const value<4> const_p_tl__instr__decoder____bus____a____mask = value<4>{0xfu};
	items.add(path + "tl_instr_decoder__bus__a__mask", debug_item(const_p_tl__instr__decoder____bus____a____mask, 0));
	static const value<32> const_p_tl__instr__decoder____bus____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder__bus__a__data", debug_item(const_p_tl__instr__decoder____bus____a____data, 0));
	static const value<1> const_p_tl__instr__decoder____bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder__bus__a__corrupt", debug_item(const_p_tl__instr__decoder____bus____a____corrupt, 0));
	items.add(path + "tl_instr_decoder__bus__a__address", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	static const value<2> const_p_tl__data__decoder__tl__data__rom____d____param = value<2>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__d__param", debug_item(const_p_tl__data__decoder__tl__data__rom____d____param, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__rom____d____denied = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__d__denied", debug_item(const_p_tl__data__decoder__tl__data__rom____d____denied, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__d__corrupt", debug_item(const_p_tl__data__decoder__tl__data__rom____d____corrupt, 0));
	static const value<3> const_p_tl__data__decoder__tl__data__rom____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__a__param", debug_item(const_p_tl__data__decoder__tl__data__rom____a____param, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__a__corrupt", debug_item(const_p_tl__data__decoder__tl__data__rom____a____corrupt, 0));
	static const value<2> const_p_tl__data__decoder__tl__data__ram____d____param = value<2>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__d__param", debug_item(const_p_tl__data__decoder__tl__data__ram____d____param, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__ram____d____denied = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__d__denied", debug_item(const_p_tl__data__decoder__tl__data__ram____d____denied, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__d__corrupt", debug_item(const_p_tl__data__decoder__tl__data__ram____d____corrupt, 0));
	static const value<3> const_p_tl__data__decoder__tl__data__ram____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__a__param", debug_item(const_p_tl__data__decoder__tl__data__ram____a____param, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__a__corrupt", debug_item(const_p_tl__data__decoder__tl__data__ram____a____corrupt, 0));
	items.add(path + "tl_data_decoder_bus__d__valid", debug_item(debug_alias(), p_tl__periph_2e_bus____d____valid, 0));
	items.add(path + "tl_data_decoder_bus__d__source", debug_item(debug_alias(), p_tl__periph_2e_bus____d____source, 0));
	items.add(path + "tl_data_decoder_bus__d__size", debug_item(debug_alias(), p_tl__periph_2e_bus____d____size, 0));
	items.add(path + "tl_data_decoder_bus__d__param", debug_item(debug_alias(), p_tl__periph_2e_bus____d____param, 0));
	items.add(path + "tl_data_decoder_bus__d__opcode", debug_item(debug_alias(), p_tl__periph_2e_bus____d____opcode, 0));
	items.add(path + "tl_data_decoder_bus__d__denied", debug_item(debug_alias(), p_tl__periph_2e_bus____d____denied, 0));
	items.add(path + "tl_data_decoder_bus__d__data", debug_item(debug_alias(), p_tl__periph_2e_bus____d____data, 0));
	items.add(path + "tl_data_decoder_bus__d__corrupt", debug_item(debug_alias(), p_tl__periph_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__data__decoder____bus____d____ready = value<1>{0x1u};
	items.add(path + "tl_data_decoder__bus__d__ready", debug_item(const_p_tl__data__decoder____bus____d____ready, 0));
	items.add(path + "tl_data_decoder__bus__a__source", debug_item(debug_alias(), p_data__master_2e_send__ptr, 0));
	items.add(path + "tl_data_decoder__bus__a__size", debug_item(debug_alias(), p_core_2e_m__control____mem__size, 0));
	static const value<3> const_p_tl__data__decoder____bus____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder__bus__a__param", debug_item(const_p_tl__data__decoder____bus____a____param, 0));
	static const value<1> const_p_tl__data__decoder____bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder__bus__a__corrupt", debug_item(const_p_tl__data__decoder____bus____a____corrupt, 0));
	items.add(path + "tl_data_decoder__bus__a__address", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "rst", debug_item(p_rst, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "output_valid", debug_item(debug_alias(), p_tl__periph_2e_output__valid, 0));
	items.add(path + "output", debug_item(debug_alias(), p_tl__periph_2e_output, 0));
	items.add(path + "instruction_master_instruction_stream__req_addr", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	static const value<1> const_p_instruction__master__bus____d____ready = value<1>{0x1u};
	items.add(path + "instruction_master_bus__d__ready", debug_item(const_p_instruction__master__bus____d____ready, 0));
	items.add(path + "instruction_master_bus__a__source", debug_item(debug_alias(), p_instruction__master_2e_send__ptr, 0));
	static const value<2> const_p_instruction__master__bus____a____size = value<2>{0x2u};
	items.add(path + "instruction_master_bus__a__size", debug_item(const_p_instruction__master__bus____a____size, 0));
	static const value<3> const_p_instruction__master__bus____a____param = value<3>{0u};
	items.add(path + "instruction_master_bus__a__param", debug_item(const_p_instruction__master__bus____a____param, 0));
	static const value<3> const_p_instruction__master__bus____a____opcode = value<3>{0x4u};
	items.add(path + "instruction_master_bus__a__opcode", debug_item(const_p_instruction__master__bus____a____opcode, 0));
	static const value<4> const_p_instruction__master__bus____a____mask = value<4>{0xfu};
	items.add(path + "instruction_master_bus__a__mask", debug_item(const_p_instruction__master__bus____a____mask, 0));
	static const value<1> const_p_instruction__master__bus____a____corrupt = value<1>{0u};
	items.add(path + "instruction_master_bus__a__corrupt", debug_item(const_p_instruction__master__bus____a____corrupt, 0));
	items.add(path + "instruction_master_bus__a__address", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	items.add(path + "halt_simulator", debug_item(debug_alias(), p_tl__periph_2e_halt__simulator, 0));
	items.add(path + "data_master_data_stream__req_we", debug_item(debug_alias(), p_core_2e_m__control____mem__we, 0));
	items.add(path + "data_master_data_stream__req_unsigned", debug_item(debug_alias(), p_core_2e_m__control____mem__unsigned, 0));
	items.add(path + "data_master_data_stream__req_size", debug_item(debug_alias(), p_core_2e_m__control____mem__size, 0));
	items.add(path + "data_master_data_stream__req_data", debug_item(debug_alias(), p_core_2e_m__rs2__value, 0));
	items.add(path + "data_master_data_stream__req_addr", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	static const value<1> const_p_data__master__bus____d____ready = value<1>{0x1u};
	items.add(path + "data_master_bus__d__ready", debug_item(const_p_data__master__bus____d____ready, 0));
	items.add(path + "data_master_bus__a__source", debug_item(debug_alias(), p_data__master_2e_send__ptr, 0));
	items.add(path + "data_master_bus__a__size", debug_item(debug_alias(), p_core_2e_m__control____mem__size, 0));
	static const value<3> const_p_data__master__bus____a____param = value<3>{0u};
	items.add(path + "data_master_bus__a__param", debug_item(const_p_data__master__bus____a____param, 0));
	static const value<1> const_p_data__master__bus____a____corrupt = value<1>{0u};
	items.add(path + "data_master_bus__a__corrupt", debug_item(const_p_data__master__bus____a____corrupt, 0));
	items.add(path + "data_master_bus__a__address", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "core_instruction_stream__req_addr", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	items.add(path + "core_data_stream__req_we", debug_item(debug_alias(), p_core_2e_m__control____mem__we, 0));
	items.add(path + "core_data_stream__req_unsigned", debug_item(debug_alias(), p_core_2e_m__control____mem__unsigned, 0));
	items.add(path + "core_data_stream__req_size", debug_item(debug_alias(), p_core_2e_m__control____mem__size, 0));
	items.add(path + "core_data_stream__req_data", debug_item(debug_alias(), p_core_2e_m__rs2__value, 0));
	items.add(path + "core_data_stream__req_addr", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "clk", debug_item(p_clk, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	static const value<2> const_p_bus____d____param = value<2>{0u};
	items.add(path + "bus__d__param", debug_item(const_p_bus____d____param, 0));
	static const value<1> const_p_bus____d____denied = value<1>{0u};
	items.add(path + "bus__d__denied", debug_item(const_p_bus____d____denied, 0));
	static const value<1> const_p_bus____d____corrupt = value<1>{0u};
	items.add(path + "bus__d__corrupt", debug_item(const_p_bus____d____corrupt, 0));
	static const value<32> const_p_bus____a____data = value<32>{0u};
	items.add(path + "bus__a__data", debug_item(const_p_bus____a____data, 0));
	items.add(path + "tl_rom memory", debug_item(memory_p_tl__rom_2e_memory, 0));
	items.add(path + "tl_ram memory", debug_item(memory_p_tl__ram_2e_memory, 0));
	items.add(path + "core a_btb", debug_item(memory_p_core_2e_a__btb, 0));
	items.add(path + "core register_file", debug_item(memory_p_core_2e_register__file, 0));
}

} // namespace cxxrtl_design

extern "C"
cxxrtl_toplevel cxxrtl_design_create() {
	return new _cxxrtl_toplevel { std::unique_ptr<cxxrtl_design::p_top>(new cxxrtl_design::p_top) };
}
