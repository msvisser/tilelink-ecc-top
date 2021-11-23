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
	bool converged = false;
	bool posedge_p_clk = this->posedge_p_clk();
	value<2> i_procmux_24_29677__CMP;
	value<2> i_procmux_24_29676__CMP;
	value<2> i_procmux_24_29662__CMP;
	value<3> i_procmux_24_29632__CMP;
	value<3> i_procmux_24_29631__CMP;
	value<1> i_procmux_24_29259__Y;
	value<5> i_procmux_24_28854__Y;
	value<32> i_procmux_24_28851__Y;
	value<32> i_procmux_24_28848__Y;
	value<1> i_procmux_24_27957__Y;
	value<1> i_procmux_24_27798__Y;
	value<2> i_procmux_24_27732__CMP;
	value<2> i_procmux_24_27715__CMP;
	value<2> i_procmux_24_27698__CMP;
	value<2> i_procmux_24_27681__CMP;
	value<2> i_procmux_24_27619__CMP;
	value<2> i_procmux_24_27602__CMP;
	value<2> i_procmux_24_27206__Y;
	value<2> i_procmux_24_27207__CMP;
	value<2> i_procmux_24_26988__Y;
	value<2> i_procmux_24_26989__CMP;
	// \hdlname: tl_rom_arbiter bus__a__address
	// \src: tilelink_soc.v:20854.18-20914.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<15> p_tl__rom__arbiter_2e_bus____a____address;
	// \hdlname: tl_rom_arbiter bus__a__valid
	// \src: tilelink_soc.v:20854.18-20914.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<1> p_tl__rom__arbiter_2e_bus____a____valid;
	// \hdlname: tl_rom_arbiter bus__d__source
	// \src: tilelink_soc.v:20854.18-20914.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<2> p_tl__rom__arbiter_2e_bus____d____source;
	// \hdlname: tl_rom_arbiter rr_grant
	// \src: tilelink_soc.v:20854.18-20914.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:42
	value<1> p_tl__rom__arbiter_2e_rr__grant;
	// \hdlname: tl_rom_arbiter tl_data_rom__d__valid
	// \src: tilelink_soc.v:20854.18-20914.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:114
	value<1> p_tl__rom__arbiter_2e_tl__data__rom____d____valid;
	// \hdlname: tl_rom_arbiter tl_instr_rom__d__valid
	// \src: tilelink_soc.v:20854.18-20914.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:112
	value<1> p_tl__rom__arbiter_2e_tl__instr__rom____d____valid;
	// \hdlname: tl_rom_arbiter rr rst
	// \src: tilelink_soc.v:20854.18-20914.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:19360.10-19365.4
	value<1> p_tl__rom__arbiter_2e_rr_2e_rst;
	// \hdlname: tl_rom_arbiter rr requests
	// \src: tilelink_soc.v:20854.18-20914.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:41|tilelink_soc.v:19360.10-19365.4
	value<2> p_tl__rom__arbiter_2e_rr_2e_requests;
	// \hdlname: tl_rom_arbiter rr clk
	// \src: tilelink_soc.v:20854.18-20914.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:19360.10-19365.4
	value<1> p_tl__rom__arbiter_2e_rr_2e_clk;
	// \hdlname: tl_rom bus__a__ready
	// \src: tilelink_soc.v:20831.10-20853.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<1> p_tl__rom_2e_bus____a____ready;
	// \hdlname: tl_rom bus__d__data
	// \src: tilelink_soc.v:20831.10-20853.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<32> p_tl__rom_2e_bus____d____data;
	// \hdlname: tl_rom bus__d__source
	// \src: tilelink_soc.v:20831.10-20853.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<2> p_tl__rom_2e_bus____d____source;
	// \hdlname: tl_rom bus__d__valid
	// \src: tilelink_soc.v:20831.10-20853.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:18
	value<1> p_tl__rom_2e_bus____d____valid;
	// \hdlname: tl_rom clk
	// \src: tilelink_soc.v:20831.10-20853.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__rom_2e_clk;
	// \hdlname: tl_rom rst
	// \src: tilelink_soc.v:20831.10-20853.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__rom_2e_rst;
	// \src: tilelink_soc.v:20831.10-20853.4|tilelink_soc.v:18874.14-18874.20
	value<32> i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_18874_24_10214__DATA;
	// \src: tilelink_soc.v:20831.10-20853.4|tilelink_soc.v:18880.17-18880.126
	value<1> i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_18880_24_10217__Y;
	// \hdlname: tl_ram_arbiter bus__a__address
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<15> p_tl__ram__arbiter_2e_bus____a____address;
	// \hdlname: tl_ram_arbiter bus__a__data
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<32> p_tl__ram__arbiter_2e_bus____a____data;
	// \hdlname: tl_ram_arbiter bus__a__mask
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
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
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<3> p_tl__ram__arbiter_2e_bus____a____opcode;
	// \hdlname: tl_ram_arbiter bus__a__valid
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<1> p_tl__ram__arbiter_2e_bus____a____valid;
	// \hdlname: tl_ram_arbiter bus__d__source
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:30
	value<2> p_tl__ram__arbiter_2e_bus____d____source;
	// \hdlname: tl_ram_arbiter rr_grant
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:42
	value<1> p_tl__ram__arbiter_2e_rr__grant;
	// \hdlname: tl_ram_arbiter tl_data_ram__d__valid
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:115
	value<1> p_tl__ram__arbiter_2e_tl__data__ram____d____valid;
	// \hdlname: tl_ram_arbiter tl_instr_ram__d__valid
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:113
	value<1> p_tl__ram__arbiter_2e_tl__instr__ram____d____valid;
	// \hdlname: tl_ram_arbiter rr rst
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:10182.10-10187.4
	value<1> p_tl__ram__arbiter_2e_rr_2e_rst;
	// \hdlname: tl_ram_arbiter rr requests
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:41|tilelink_soc.v:10182.10-10187.4
	value<2> p_tl__ram__arbiter_2e_rr_2e_requests;
	// \hdlname: tl_ram_arbiter rr clk
	// \src: tilelink_soc.v:20770.18-20830.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:10182.10-10187.4
	value<1> p_tl__ram__arbiter_2e_rr_2e_clk;
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
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/ecc_memory.py:18
	value<3> p_tl__ram_2e_bus____a____opcode;
	// \hdlname: tl_ram bus__a__ready
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/ecc_memory.py:18
	value<1> p_tl__ram_2e_bus____a____ready;
	// \hdlname: tl_ram bus__d__data
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/ecc_memory.py:18
	value<32> p_tl__ram_2e_bus____d____data;
	// \hdlname: tl_ram bus__d__source
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/ecc_memory.py:18
	value<2> p_tl__ram_2e_bus____d____source;
	// \hdlname: tl_ram clk
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__ram_2e_clk;
	// \hdlname: tl_ram controller_sram__read_data
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/generic.py:19
	value<39> p_tl__ram_2e_controller__sram____read__data;
	// \hdlname: tl_ram rst
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__ram_2e_rst;
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:9643.17-9643.144
	value<1> i_flatten_5c_tl__ram_2e__24_reduce__or_24_tilelink__soc_2e_v_3a_9643_24_1912__Y;
	// \hdlname: tl_ram controller encoder data_in
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:156.11-159.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:154|tilelink_soc.v:9664.14-9682.4
	value<32> p_tl__ram_2e_controller_2e_encoder_2e_data__in;
	// \hdlname: tl_ram controller decoder enc_in
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:196|tilelink_soc.v:9664.14-9682.4
	value<39> p_tl__ram_2e_controller_2e_decoder_2e_enc__in;
	// \hdlname: tl_ram controller decoder syndrome_signal
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:216|tilelink_soc.v:9664.14-9682.4
	value<7> p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal;
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|tilelink_soc.v:5599.19-5599.158|tilelink_soc.v:9664.14-9682.4
	value<39> i_flatten_5c_tl__ram_2e__5c_controller_2e__5c_decoder_2e__24_xor_24_tilelink__soc_2e_v_3a_5599_24_1288__Y;
	// \hdlname: tl_ram controller decoder error_calculator syndrome
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:334|tilelink_soc.v:5637.20-5641.4|tilelink_soc.v:9664.14-9682.4
	value<7> p_tl__ram_2e_controller_2e_decoder_2e_error__calculator_2e_syndrome;
	// \hdlname: tl_ram controller decoder error_calculator error
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:339|tilelink_soc.v:5637.20-5641.4|tilelink_soc.v:9664.14-9682.4
	value<1> p_tl__ram_2e_controller_2e_decoder_2e_error__calculator_2e_error;
	// \hdlname: tl_ram controller decoder flip_calculator syndrome
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:284|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	value<7> p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome;
	// \hdlname: tl_ram controller decoder flip_calculator flips
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:286|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	value<39> p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips;
	// \hdlname: tl_ram controller rst
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:9664.14-9682.4
	value<1> p_tl__ram_2e_controller_2e_rst;
	// \hdlname: tl_ram controller rsp__ready
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/generic.py:16|tilelink_soc.v:9664.14-9682.4
	value<1> p_tl__ram_2e_controller_2e_rsp____ready;
	// \hdlname: tl_ram controller rsp__read_data
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/generic.py:16|tilelink_soc.v:9664.14-9682.4
	value<32> p_tl__ram_2e_controller_2e_rsp____read__data;
	// \hdlname: tl_ram controller req__valid
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/generic.py:15|tilelink_soc.v:9664.14-9682.4
	value<1> p_tl__ram_2e_controller_2e_req____valid;
	// \hdlname: tl_ram controller req__ready
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/generic.py:15|tilelink_soc.v:9664.14-9682.4
	value<1> p_tl__ram_2e_controller_2e_req____ready;
	// \hdlname: tl_ram controller decoder_uncorrectable_error
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:204|tilelink_soc.v:9664.14-9682.4
	value<1> p_tl__ram_2e_controller_2e_decoder__uncorrectable__error;
	// \hdlname: tl_ram controller decoder_error
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:202|tilelink_soc.v:9664.14-9682.4
	value<1> p_tl__ram_2e_controller_2e_decoder__error;
	// \hdlname: tl_ram controller clk
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:9664.14-9682.4
	value<1> p_tl__ram_2e_controller_2e_clk;
	// \hdlname: tl_ram wrapper write_data
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:62|tilelink_soc.v:9694.11-9717.4
	value<32> p_tl__ram_2e_wrapper_2e_write__data;
	// \hdlname: tl_ram wrapper rst
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e_rst;
	// \hdlname: tl_ram wrapper rsp_out__valid
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:14|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e_rsp__out____valid;
	// \hdlname: tl_ram wrapper rsp_in__valid
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:17|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e_rsp__in____valid;
	// \hdlname: tl_ram wrapper req_out__write_en
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:16|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e_req__out____write__en;
	// \hdlname: tl_ram wrapper req_out__write_data
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:16|tilelink_soc.v:9694.11-9717.4
	value<32> p_tl__ram_2e_wrapper_2e_req__out____write__data;
	// \hdlname: tl_ram wrapper req_out__ready
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:16|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e_req__out____ready;
	// \hdlname: tl_ram wrapper req_out__addr
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:16|tilelink_soc.v:9694.11-9717.4
	value<13> p_tl__ram_2e_wrapper_2e_req__out____addr;
	// \hdlname: tl_ram wrapper req_in__write_mask
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:13|tilelink_soc.v:9694.11-9717.4
	value<4> p_tl__ram_2e_wrapper_2e_req__in____write__mask;
	// \hdlname: tl_ram wrapper req_in__write_en
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:13|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e_req__in____write__en;
	// \hdlname: tl_ram wrapper req_in__valid
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:13|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e_req__in____valid;
	// \hdlname: tl_ram wrapper req_in__ready
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:13|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e_req__in____ready;
	// \hdlname: tl_ram wrapper clk
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e_clk;
	// \hdlname: tl_ram wrapper $35
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:37|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e__24_35;
	// \hdlname: tl_ram wrapper $27
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:37|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e__24_27;
	// \hdlname: tl_ram wrapper $19
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:37|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e__24_19;
	// \hdlname: tl_ram wrapper $11
	// \src: tilelink_soc.v:20747.10-20769.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/controller/partial_wrapper.py:37|tilelink_soc.v:9694.11-9717.4
	value<1> p_tl__ram_2e_wrapper_2e__24_11;
	// \hdlname: tl_periph $11
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_11;
	// \hdlname: tl_periph $110
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_110;
	// \hdlname: tl_periph $158
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_158;
	// \hdlname: tl_periph $23
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_23;
	// \hdlname: tl_periph $35
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_35;
	// \hdlname: tl_periph $47
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_47;
	// \hdlname: tl_periph $62
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_62;
	// \hdlname: tl_periph $74
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_74;
	// \hdlname: tl_periph $86
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_86;
	// \hdlname: tl_periph $98
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:45
	value<1> p_tl__periph_2e__24_98;
	// \hdlname: tl_periph bus__a__address
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:21
	value<4> p_tl__periph_2e_bus____a____address;
	// \hdlname: tl_periph bus__a__mask
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:21
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
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:21
	value<3> p_tl__periph_2e_bus____a____opcode;
	// \hdlname: tl_periph bus__a__ready
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:21
	value<1> p_tl__periph_2e_bus____a____ready;
	// \hdlname: tl_periph bus__a__valid
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:21
	value<1> p_tl__periph_2e_bus____a____valid;
	// \hdlname: tl_periph clk
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__periph_2e_clk;
	// \hdlname: tl_periph rst
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__periph_2e_rst;
	// \src: tilelink_soc.v:20723.13-20746.4|tilelink_soc.v:8946.19-8946.116
	value<1> i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_8946_24_1757__Y;
	// \src: tilelink_soc.v:20723.13-20746.4|tilelink_soc.v:8966.18-8966.111
	value<65> i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y;
	// \src: tilelink_soc.v:20723.13-20746.4|tilelink_soc.v:9017.3-9069.6
	value<1> i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_1820;
	// \src: tilelink_soc.v:20723.13-20746.4|tilelink_soc.v:9017.3-9069.6
	value<1> i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_1822;
	// \src: tilelink_soc.v:20723.13-20746.4|tilelink_soc.v:9017.3-9069.6
	value<1> i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_1824;
	// \hdlname: tl_instr_decoder _bus__a__address
	// \src: tilelink_soc.v:20662.20-20722.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:42
	value<32> p_tl__instr__decoder_2e___bus____a____address;
	// \hdlname: tl_instr_decoder _bus__d__data
	// \src: tilelink_soc.v:20662.20-20722.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:42
	value<32> p_tl__instr__decoder_2e___bus____d____data;
	// \hdlname: tl_instr_decoder rr_grant
	// \src: tilelink_soc.v:20662.20-20722.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:11
	value<2> p_tl__instr__decoder_2e_rr__grant;
	// \hdlname: tl_instr_decoder tl_instr_ram__a__valid
	// \src: tilelink_soc.v:20662.20-20722.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:113
	value<1> p_tl__instr__decoder_2e_tl__instr__ram____a____valid;
	// \hdlname: tl_instr_decoder tl_instr_rom__a__valid
	// \src: tilelink_soc.v:20662.20-20722.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:112
	value<1> p_tl__instr__decoder_2e_tl__instr__rom____a____valid;
	// \src: tilelink_soc.v:20662.20-20722.4|tilelink_soc.v:6925.18-6925.118|tilelink_soc.v:8209.6-8214.4
	value<3> i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6925_24_1576__Y;
	// \hdlname: tl_instr_decoder rr requests
	// \src: tilelink_soc.v:20662.20-20722.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:10|tilelink_soc.v:8209.6-8214.4
	value<2> p_tl__instr__decoder_2e_rr_2e_requests;
	// \hdlname: tl_data_decoder _bus__a__address
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:42
	value<32> p_tl__data__decoder_2e___bus____a____address;
	// \hdlname: tl_data_decoder _bus__d__data
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:42
	value<32> p_tl__data__decoder_2e___bus____d____data;
	// \hdlname: tl_data_decoder bus__a__data
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:21
	value<32> p_tl__data__decoder_2e_bus____a____data;
	// \hdlname: tl_data_decoder bus__a__size
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:21
	value<2> p_tl__data__decoder_2e_bus____a____size;
	// \hdlname: tl_data_decoder bus__a__source
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:21
	value<1> p_tl__data__decoder_2e_bus____a____source;
	// \hdlname: tl_data_decoder bus__a__valid
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:21
	value<1> p_tl__data__decoder_2e_bus____a____valid;
	// \hdlname: tl_data_decoder rr_grant
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:11
	value<3> p_tl__data__decoder_2e_rr__grant;
	// \hdlname: tl_data_decoder tl_data_ram__a__valid
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:115
	value<1> p_tl__data__decoder_2e_tl__data__ram____a____valid;
	// \hdlname: tl_data_decoder tl_data_rom__a__valid
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:114
	value<1> p_tl__data__decoder_2e_tl__data__rom____a____valid;
	// \src: tilelink_soc.v:20584.19-20661.4|tilelink_soc.v:6994.18-6994.118|tilelink_soc.v:7422.10-7427.4
	value<4> i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6994_24_1591__Y;
	// \hdlname: tl_data_decoder rr requests
	// \src: tilelink_soc.v:20584.19-20661.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/decoder.py:10|tilelink_soc.v:7422.10-7427.4
	value<3> p_tl__data__decoder_2e_rr_2e_requests;
	// \hdlname: instruction_master $19
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:70
	value<1> p_instruction__master_2e__24_19;
	// \hdlname: instruction_master $21
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:84
	value<1> p_instruction__master_2e__24_21;
	// \hdlname: instruction_master $23
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:93
	value<1> p_instruction__master_2e__24_23;
	// \hdlname: instruction_master $25
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:95
	value<1> p_instruction__master_2e__24_25;
	// \hdlname: instruction_master $27
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:102
	value<1> p_instruction__master_2e__24_27;
	// \hdlname: instruction_master $38
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:93
	value<1> p_instruction__master_2e__24_38;
	// \hdlname: instruction_master $42
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:93
	value<1> p_instruction__master_2e__24_42;
	// \hdlname: instruction_master bus__a__ready
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____a____ready;
	// \hdlname: instruction_master bus__a__valid
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____a____valid;
	// \hdlname: instruction_master bus__d__source
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____d____source;
	// \hdlname: instruction_master bus__d__valid
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____d____valid;
	// \hdlname: instruction_master clk
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_instruction__master_2e_clk;
	// \hdlname: instruction_master instruction_stream__req_valid
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:20
	value<1> p_instruction__master_2e_instruction__stream____req__valid;
	// \hdlname: instruction_master instruction_stream__rsp_data
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:20
	value<32> p_instruction__master_2e_instruction__stream____rsp__data;
	// \hdlname: instruction_master instruction_stream__rsp_ready
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:20
	value<1> p_instruction__master_2e_instruction__stream____rsp__ready;
	// \hdlname: instruction_master instruction_stream__rsp_valid
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:20
	value<1> p_instruction__master_2e_instruction__stream____rsp__valid;
	// \hdlname: instruction_master rst
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_instruction__master_2e_rst;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6687.3-6783.6
	value<2> i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1513;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6687.3-6783.6
	value<2> i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1514;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6687.3-6783.6
	value<32> i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1515;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6687.3-6783.6
	value<32> i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_1516;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6687.3-6783.6
	value<2> i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1521;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6687.3-6783.6
	value<2> i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1522;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6687.3-6783.6
	value<32> i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1523;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6687.3-6783.6
	value<32> i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1524;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6799.3-6820.6
	value<1> i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__valid_5b_0_3a_0_5d_;
	// \src: tilelink_soc.v:20561.22-20583.4|tilelink_soc.v:6821.3-6842.6
	value<32> i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__data_5b_31_3a_0_5d_;
	// \hdlname: data_master $18
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_18;
	// \hdlname: data_master $20
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_20;
	// \hdlname: data_master $22
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_22;
	// \hdlname: data_master $24
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_24;
	// \hdlname: data_master $26
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_26;
	// \hdlname: data_master $275
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	value<1> p_data__master_2e__24_275;
	// \hdlname: data_master $28
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_28;
	// \hdlname: data_master $30
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_30;
	// \hdlname: data_master $32
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:125
	value<1> p_data__master_2e__24_32;
	// \hdlname: data_master $34
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_34;
	// \hdlname: data_master $341
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	value<1> p_data__master_2e__24_341;
	// \hdlname: data_master $343
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_343;
	// \hdlname: data_master $345
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:164
	value<1> p_data__master_2e__24_345;
	// \hdlname: data_master $36
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:164
	value<1> p_data__master_2e__24_36;
	// \hdlname: data_master $41
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_41;
	// \hdlname: data_master $44
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_44;
	// \hdlname: data_master $47
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_47;
	// \hdlname: data_master $58
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_58;
	// \hdlname: data_master $64
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_64;
	// \hdlname: data_master $73
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_73;
	// \hdlname: data_master $75
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_75;
	// \hdlname: data_master $77
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_77;
	// \hdlname: data_master $79
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_79;
	// \hdlname: data_master $81
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	value<1> p_data__master_2e__24_81;
	// \hdlname: data_master addr_local_bits
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:138
	value<2> p_data__master_2e_addr__local__bits;
	// \hdlname: data_master bus__a__address
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<32> p_data__master_2e_bus____a____address;
	// \hdlname: data_master bus__a__data
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<32> p_data__master_2e_bus____a____data;
	// \hdlname: data_master bus__a__mask
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
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
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<3> p_data__master_2e_bus____a____opcode;
	// \hdlname: data_master bus__a__ready
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____a____ready;
	// \hdlname: data_master bus__a__size
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<2> p_data__master_2e_bus____a____size;
	// \hdlname: data_master bus__a__source
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____a____source;
	// \hdlname: data_master bus__a__valid
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____a____valid;
	// \hdlname: data_master bus__d__data
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<32> p_data__master_2e_bus____d____data;
	// \hdlname: data_master bus__d__source
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____d____source;
	// \hdlname: data_master bus__d__valid
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____d____valid;
	// \hdlname: data_master clk
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_data__master_2e_clk;
	// \hdlname: data_master data_stream__req_addr
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<32> p_data__master_2e_data__stream____req__addr;
	// \hdlname: data_master data_stream__req_size
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<2> p_data__master_2e_data__stream____req__size;
	// \hdlname: data_master data_stream__req_valid
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<1> p_data__master_2e_data__stream____req__valid;
	// \hdlname: data_master data_stream__req_we
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<1> p_data__master_2e_data__stream____req__we;
	// \hdlname: data_master data_stream__rsp_ready
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<1> p_data__master_2e_data__stream____rsp__ready;
	// \hdlname: data_master data_stream__rsp_valid
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:20
	value<1> p_data__master_2e_data__stream____rsp__valid;
	// \hdlname: data_master is_unsigned
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:137
	value<1> p_data__master_2e_is__unsigned;
	// \hdlname: data_master read_data
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:135
	value<32> p_data__master_2e_read__data;
	// \hdlname: data_master req_size
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:136
	value<2> p_data__master_2e_req__size;
	// \hdlname: data_master rst
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_data__master_2e_rst;
	// \src: tilelink_soc.v:20533.15-20560.4|tilelink_soc.v:4123.3-4195.6
	value<2> i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1077;
	// \src: tilelink_soc.v:20533.15-20560.4|tilelink_soc.v:4123.3-4195.6
	value<2> i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1078;
	// \src: tilelink_soc.v:20533.15-20560.4|tilelink_soc.v:4123.3-4195.6
	value<2> i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1081;
	// \src: tilelink_soc.v:20533.15-20560.4|tilelink_soc.v:4123.3-4195.6
	value<2> i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1082;
	// \src: tilelink_soc.v:20533.15-20560.4|tilelink_soc.v:4300.3-4321.6
	value<1> i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__valid_5b_0_3a_0_5d_;
	// \src: tilelink_soc.v:20533.15-20560.4|tilelink_soc.v:4322.3-4343.6
	value<32> i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__data_5b_31_3a_0_5d_;
	// \src: tilelink_soc.v:20533.15-20560.4|tilelink_soc.v:4568.3-4619.6
	value<32> i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_;
	// \src: tilelink_soc.v:20533.15-20560.4|tilelink_soc.v:4568.3-4619.6
	value<32> i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_;
	// \src: tilelink_soc.v:20533.15-20560.4|tilelink_soc.v:4568.3-4619.6
	value<32> i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_;
	// \hdlname: core $237
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:51
	value<1> p_core_2e__24_237;
	// \hdlname: core $320
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:25
	value<1> p_core_2e__24_320;
	// \hdlname: core $508
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:382
	value<1> p_core_2e__24_508;
	// \hdlname: core $510
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:392
	value<1> p_core_2e__24_510;
	// \hdlname: core $53
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:25
	value<1> p_core_2e__24_53;
	// \hdlname: core $558
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:382
	value<1> p_core_2e__24_558;
	// \hdlname: core $560
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:392
	value<1> p_core_2e__24_560;
	// \hdlname: core $608
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:382
	value<1> p_core_2e__24_608;
	// \hdlname: core $610
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:399
	value<1> p_core_2e__24_610;
	// \hdlname: core $658
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:382
	value<1> p_core_2e__24_658;
	// \hdlname: core $660
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:399
	value<1> p_core_2e__24_660;
	// \hdlname: core a_arbitration__halted
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_a__arbitration____halted;
	// \hdlname: core a_arbitration__remove
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_a__arbitration____remove;
	// \hdlname: core clk
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_core_2e_clk;
	// \hdlname: core d_arbitration__halted
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_d__arbitration____halted;
	// \hdlname: core d_arbitration__halted_by_next
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_d__arbitration____halted__by__next;
	// \hdlname: core d_arbitration__remove
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_d__arbitration____remove;
	// \hdlname: core d_control__branch_mode
	// \enum_value_11: COND_ONE
	// \enum_value_10: COND_ZERO
	// \enum_value_01: ALWAYS
	// \enum_value_00: NEVER
	// \enum_base_type: BranchMode
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:109
	value<2> p_core_2e_d__control____branch__mode;
	// \hdlname: core d_control__branch_type
	// \enum_value_1: REG_REL
	// \enum_value_0: PC_REL
	// \enum_base_type: BranchType
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:109
	value<1> p_core_2e_d__control____branch__type;
	// \hdlname: core d_control__immediate
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:109
	value<32> p_core_2e_d__control____immediate;
	// \hdlname: core d_control__rs1
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:109
	value<5> p_core_2e_d__control____rs1;
	// \hdlname: core d_control__rs2
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:109
	value<5> p_core_2e_d__control____rs2;
	// \hdlname: core f_arbitration__halted
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_f__arbitration____halted;
	// \hdlname: core f_arbitration__halted_by_next
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_f__arbitration____halted__by__next;
	// \hdlname: core f_arbitration__remove
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_f__arbitration____remove;
	// \hdlname: core m_arbitration__halted
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_m__arbitration____halted;
	// \hdlname: core m_arbitration__halted_by_next
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_m__arbitration____halted__by__next;
	// \hdlname: core register_file_w_en
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:367
	value<1> p_core_2e_register__file__w__en;
	// \hdlname: core rst
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_core_2e_rst;
	// \hdlname: core w_arbitration__halted
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_w__arbitration____halted;
	// \hdlname: core w_write_data
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:357
	value<32> p_core_2e_w__write__data;
	// \hdlname: core x_alu_left
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:190
	value<32> p_core_2e_x__alu__left;
	// \hdlname: core x_alu_result
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:210
	value<32> p_core_2e_x__alu__result;
	// \hdlname: core x_alu_right
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:191
	value<32> p_core_2e_x__alu__right;
	// \hdlname: core x_arbitration__halted
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_x__arbitration____halted;
	// \hdlname: core x_arbitration__remove
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/arbitration.py:22
	value<1> p_core_2e_x__arbitration____remove;
	// \hdlname: core x_muldiv_intermediate
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:237
	value<64> p_core_2e_x__muldiv__intermediate;
	// \hdlname: core x_rs1_value
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:182
	value<32> p_core_2e_x__rs1__value;
	// \hdlname: core x_rs2_value
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:183
	value<32> p_core_2e_x__rs2__value;
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1722.14-1722.27
	value<32> i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1722_24_91__DATA;
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1725.14-1725.27
	value<32> i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1725_24_92__DATA;
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1815.19-1815.153
	value<32> i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1815_24_178__Y;
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1816.19-1816.153
	value<32> i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1816_24_179__Y;
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1843.19-1843.159
	value<1> i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y;
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1884.19-1884.136
	value<1> i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y;
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1887.19-1887.106
	value<1> i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y;
	// \hdlname: core decoder instruction
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:79|tilelink_soc.v:2170.11-2189.4
	value<32> p_core_2e_decoder_2e_instruction;
	// \hdlname: core decoder control__writeback_select
	// \enum_value_10: MULDIV
	// \enum_value_01: MEMORY
	// \enum_value_00: ALU
	// \enum_base_type: WritebackSelect
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<2> p_core_2e_decoder_2e_control____writeback__select;
	// \hdlname: core decoder control__register_write
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<1> p_core_2e_decoder_2e_control____register__write;
	// \hdlname: core decoder control__rd
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<5> p_core_2e_decoder_2e_control____rd;
	// \hdlname: core decoder control__mem_we
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<1> p_core_2e_decoder_2e_control____mem__we;
	// \hdlname: core decoder control__mem_unsigned
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<1> p_core_2e_decoder_2e_control____mem__unsigned;
	// \hdlname: core decoder control__mem_size
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<2> p_core_2e_decoder_2e_control____mem__size;
	// \hdlname: core decoder control__mem_enable
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<1> p_core_2e_decoder_2e_control____mem__enable;
	// \hdlname: core decoder control__immediate
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<32> p_core_2e_decoder_2e_control____immediate;
	// \hdlname: core decoder control__branch_type
	// \enum_value_1: REG_REL
	// \enum_value_0: PC_REL
	// \enum_base_type: BranchType
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<1> p_core_2e_decoder_2e_control____branch__type;
	// \hdlname: core decoder control__branch_mode
	// \enum_value_11: COND_ONE
	// \enum_value_10: COND_ZERO
	// \enum_value_01: ALWAYS
	// \enum_value_00: NEVER
	// \enum_base_type: BranchMode
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<2> p_core_2e_decoder_2e_control____branch__mode;
	// \hdlname: core decoder control__alu_right_select
	// \enum_value_10: FOUR
	// \enum_value_01: IMM
	// \enum_value_00: RS2
	// \enum_base_type: ALURight
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
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
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<3> p_core_2e_decoder_2e_control____alu__operation;
	// \hdlname: core decoder control__alu_mode_switch
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<1> p_core_2e_decoder_2e_control____alu__mode__switch;
	// \hdlname: core decoder control__alu_left_select
	// \enum_value_10: ZERO
	// \enum_value_01: PC
	// \enum_value_00: RS1
	// \enum_base_type: ALULeft
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:80|tilelink_soc.v:2170.11-2189.4
	value<2> p_core_2e_decoder_2e_control____alu__left__select;
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/ecc_memory.py:91
	// cell $procmux$27207_CMP1
	i_procmux_24_27207__CMP.slice<1>() = eq_uu<1>(p_tl__ram_2e_last__a____opcode.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/ecc_memory.py:91
	// cell $procmux$27207_CMP0
	i_procmux_24_27207__CMP.slice<0>() = logic_not<1>(p_tl__ram_2e_last__a____opcode.curr);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:81
	// cell $procmux$26989_CMP1
	i_procmux_24_26989__CMP.slice<1>() = eq_uu<1>(p_tl__rom_2e_last__a____opcode.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:81
	// cell $procmux$26989_CMP0
	i_procmux_24_26989__CMP.slice<0>() = logic_not<1>(p_tl__rom_2e_last__a____opcode.curr);
	// connection
	p_tl__ram_2e_clk = p_clk;
	// connection
	p_tl__ram_2e_rst = p_rst;
	// connection
	p_tl__ram__arbiter_2e_rr__grant = p_tl__ram__arbiter_2e_rr_2e_grant.curr;
	// connection
	p_tl__rom__arbiter_2e_rr__grant = p_tl__rom__arbiter_2e_rr_2e_grant.curr;
	// connection
	p_data__master_2e_bus____a____address = p_core_2e_m__alu__result.curr;
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:79
	// cell $procmux$28312
	i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__data_5b_31_3a_0_5d_ = (p_instruction__master_2e_read__ptr.curr ? p_instruction__master_2e_data_24_18.curr : p_instruction__master_2e_data.curr);
	// connection
	p_tl__ram_2e_wrapper_2e_rsp__in____valid = p_tl__ram_2e_controller_2e_rsp____valid.curr;
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/peripheral/memory.py:77
	// cell $procmux$26974
	p_tl__rom_2e_bus____d____valid = (p_tl__rom_2e_last__a____ready.curr ? p_tl__rom_2e_last__a____valid.curr : value<1>{0u});
	// cells $procmux$27264 $procmux$27265_CMP0
	p_tl__ram_2e_wrapper_2e_rsp__out____valid = (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? value<1>{0u} : p_tl__ram_2e_controller_2e_rsp____valid.curr);
	// cells $procmux$27206 $procmux$27207_ANY $procmux$27208_CMP0
	i_procmux_24_27206__Y = (reduce_or<1>(i_procmux_24_27207__CMP) ? p_tl__ram_2e_last__a____source.curr : (eq_uu<1>(p_tl__ram_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__ram_2e_last__a____source.curr : value<2>{0u}));
	// cells $procmux$26998 $procmux$26999_CMP0
	p_tl__rom_2e_bus____d____data = (eq_uu<1>(p_tl__rom_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__rom_2e___0__.curr : value<32>{0u});
	// cells $procmux$26988 $procmux$26989_ANY $procmux$26990_CMP0
	i_procmux_24_26988__Y = (reduce_or<1>(i_procmux_24_26989__CMP) ? p_tl__rom_2e_last__a____source.curr : (eq_uu<1>(p_tl__rom_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__rom_2e_last__a____source.curr : value<2>{0u}));
	// cells $procmux$28562 $flatten\data_master.$eq$tilelink_soc.v:4036$1036 $flatten\data_master.$eq$tilelink_soc.v:4035$1035
	i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__valid_5b_0_3a_0_5d_ = (p_data__master_2e_read__ptr.curr ? eq_uu<1>(p_data__master_2e_state_24_5.curr, value<2>{0x2u}) : eq_uu<1>(p_data__master_2e_state.curr, value<2>{0x2u}));
	// cells $procmux$28299 $flatten\instruction_master.$eq$tilelink_soc.v:6656$1491 $flatten\instruction_master.$eq$tilelink_soc.v:6655$1490
	i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__valid_5b_0_3a_0_5d_ = (p_instruction__master_2e_read__ptr.curr ? eq_uu<1>(p_instruction__master_2e_state_24_5.curr, value<2>{0x2u}) : eq_uu<1>(p_instruction__master_2e_state.curr, value<2>{0x2u}));
	// connection
	p_data__master_2e_data__stream____req__we = p_core_2e_m__control____mem__we.curr;
	// connection
	p_data__master_2e_data__stream____req__size = p_core_2e_m__control____mem__size.curr;
	// connection
	p_data__master_2e_data__stream____req__addr = p_core_2e_m__alu__result.curr;
	// connection
	p_tl__ram_2e_bus____d____source = i_procmux_24_27206__Y;
	// connection
	p_tl__rom_2e_bus____d____source = i_procmux_24_26988__Y;
	// connection
	p_tl__data__decoder_2e___bus____a____address = p_data__master_2e_bus____a____address;
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:66
	// cell $procmux$27022
	p_tl__ram__arbiter_2e_tl__instr__ram____d____valid = (i_procmux_24_27206__Y.slice<1>().val() ? value<1>{0u} : p_tl__ram_2e_wrapper_2e_rsp__out____valid);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:66
	// cell $procmux$26799
	p_tl__rom__arbiter_2e_tl__instr__rom____d____valid = (i_procmux_24_26988__Y.slice<1>().val() ? value<1>{0u} : p_tl__rom_2e_bus____d____valid);
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$logic_not$tilelink_soc.v:3939$939
	p_data__master_2e__24_18 = logic_not<1>(p_data__master_2e_data__stream____req__size);
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:3951$951
	p_data__master_2e__24_20 = eq_uu<1>(p_data__master_2e_data__stream____req__size, value<1>{0x1u});
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:3962$962
	p_data__master_2e__24_22 = eq_uu<1>(p_data__master_2e_data__stream____req__size, value<2>{0x2u});
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$logic_not$tilelink_soc.v:3973$973
	p_data__master_2e__24_24 = logic_not<1>(p_data__master_2e_data__stream____req__size);
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:3984$984
	p_data__master_2e__24_26 = eq_uu<1>(p_data__master_2e_data__stream____req__size, value<1>{0x1u});
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:3995$995
	p_data__master_2e__24_28 = eq_uu<1>(p_data__master_2e_data__stream____req__size, value<2>{0x2u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:95
	// cell $procmux$28837
	p_data__master_2e_bus____a____opcode = (p_data__master_2e_data__stream____req__we ? value<3>{0u} : value<3>{0x4u});
	// connection
	p_tl__ram__arbiter_2e_bus____d____source = p_tl__ram_2e_bus____d____source;
	// connection
	p_tl__rom__arbiter_2e_bus____d____source = p_tl__rom_2e_bus____d____source;
	// connection
	p_tl__instr__decoder_2e___bus____a____address = p_core_2e_f__program__counter.curr;
	// cells $procmux$28807 $procmux$28802 $procmux$28803_CMP0 $procmux$28804_CMP0 $procmux$28805_CMP0 $procmux$28806_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<23,16>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? value<8>{0u} : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$28815 $procmux$28810 $procmux$28811_CMP0 $procmux$28812_CMP0 $procmux$28813_CMP0 $procmux$28814_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<15,8>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? value<8>{0u} : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$28823 $procmux$28818 $procmux$28819_CMP0 $procmux$28820_CMP0 $procmux$28821_CMP0 $procmux$28822_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<31,24>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? value<8>{0u} : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$28831 $procmux$28826 $procmux$28827_CMP0 $procmux$28828_CMP0 $procmux$28829_CMP0 $procmux$28830_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<7,0>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : value<8>{0u})))) : value<8>{0u});
	// connection
	p_tl__instr__decoder_2e_rr_2e_requests = p_tl__ram__arbiter_2e_tl__instr__ram____d____valid.concat(p_tl__rom__arbiter_2e_tl__instr__rom____d____valid).val();
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:78
	// cell $procmux$28834
	i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_ = (p_data__master_2e__24_24 ? i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_ : value<32>{0u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:66
	// cell $procmux$27049
	p_tl__ram__arbiter_2e_tl__data__ram____d____valid = (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__ram_2e_wrapper_2e_rsp__out____valid : value<1>{0u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/arbiter.py:66
	// cell $procmux$26826
	p_tl__rom__arbiter_2e_tl__data__rom____d____valid = (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__rom_2e_bus____d____valid : value<1>{0u});
	// cells $procmux$28796 $procmux$28793 $procmux$28795_CMP0
	i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_.slice<31,16>() = (p_data__master_2e__24_26 ? (p_data__master_2e_data__stream____req__addr.slice<1>().val() ? p_core_2e_m__rs2__value.curr.slice<15,0>().val() : (not_u<1>(p_data__master_2e_data__stream____req__addr.slice<1>().val()) ? i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_.slice<31,16>().val() : value<16>{0u})) : value<16>{0u});
	// cells $procmux$28790 $procmux$28787 $procmux$28789_CMP0
	i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_.slice<15,0>() = (p_data__master_2e__24_26 ? (p_data__master_2e_data__stream____req__addr.slice<1>().val() ? i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_.slice<15,0>().val() : (not_u<1>(p_data__master_2e_data__stream____req__addr.slice<1>().val()) ? p_core_2e_m__rs2__value.curr.slice<15,0>().val() : value<16>{0u})) : value<16>{0u});
	// cells $procmux$27070 $procmux$27864 $procmux$27865_CMP0 $procmux$27073 $procmux$27744 $procmux$27745_CMP0
	p_tl__ram__arbiter_2e_bus____a____opcode = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____opcode : value<3>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<3>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? value<3>{0x4u} : value<3>{0u})));
	// cells $procmux$27097 $procmux$27876 $procmux$27877_CMP0 $procmux$27100 $procmux$27756 $procmux$27757_CMP0
	p_tl__ram__arbiter_2e_bus____a____address = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____address.slice<14,0>().val() : value<15>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<15>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_core_2e_f__program__counter.curr.slice<14,0>().val() : value<15>{0u})));
	// connection
	p_tl__data__decoder_2e_rr_2e_requests = p_tl__periph_2e_bus____d____valid.curr.concat(p_tl__ram__arbiter_2e_tl__data__ram____d____valid).concat(p_tl__rom__arbiter_2e_tl__data__rom____d____valid).val();
	// cells $procmux$28756 $procmux$28753 $procmux$28765 $procmux$28762 $procmux$28759 $procmux$28761_CMP0 $procmux$28776 $procmux$28773 $procmux$28768 $procmux$28769_CMP0 $procmux$28770_CMP0 $procmux$28771_CMP0 $procmux$28772_CMP0
	p_data__master_2e_bus____a____mask = (p_data__master_2e__24_22 ? (p_data__master_2e__24_22 ? value<4>{0xfu} : value<4>{0u}) : (p_data__master_2e__24_20 ? (p_data__master_2e__24_20 ? (p_data__master_2e_data__stream____req__addr.slice<1>().val() ? value<4>{0xcu} : (not_u<1>(p_data__master_2e_data__stream____req__addr.slice<1>().val()) ? value<4>{0x3u} : value<4>{0u})) : value<4>{0u}) : (p_data__master_2e__24_18 ? (p_data__master_2e__24_18 ? (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<4>{0x8u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<4>{0x4u} : (eq_uu<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<4>{0x2u} : (logic_not<1>(p_data__master_2e_data__stream____req__addr.slice<1,0>().val()) ? value<4>{0x1u} : value<4>{0u})))) : value<4>{0u}) : value<4>{0u})));
	// cells $procmux$27284 $procmux$27285_CMP0 $procmux$27286_CMP0
	p_tl__ram_2e_wrapper_2e_req__out____addr = (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x2u}) ? p_tl__ram_2e_wrapper_2e_tmp__req__addr.curr : (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? p_tl__ram_2e_wrapper_2e_tmp__req__addr.curr : p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val()));
	// cells $flatten\tl_instr_decoder.\rr.$or$tilelink_soc.v:6925$1576 $flatten\tl_instr_decoder.\rr.$and$tilelink_soc.v:6924$1575 $flatten\tl_instr_decoder.\rr.$not$tilelink_soc.v:6923$1574 $flatten\tl_instr_decoder.\rr.$sub$tilelink_soc.v:6922$1573 $flatten\tl_instr_decoder.\rr.$and$tilelink_soc.v:6929$1580 $flatten\tl_instr_decoder.\rr.$not$tilelink_soc.v:6928$1579 $flatten\tl_instr_decoder.\rr.$sub$tilelink_soc.v:6927$1578
	i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6925_24_1576__Y = or_uu<3>(and_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), not_u<5>(sub_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), value<3>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<0>()).concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<1>()).val()))).slice<1,0>().val(), and_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), not_u<5>(sub_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), value<3>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<0>()).concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<1>()).val()))).slice<4,2>().val());
	// connection
	p_tl__ram_2e_bus____a____opcode = p_tl__ram__arbiter_2e_bus____a____opcode;
	// cells $procmux$27103 $procmux$27879 $procmux$27880_CMP0 $procmux$27106 $procmux$27759 $procmux$27760_CMP0
	p_tl__ram__arbiter_2e_bus____a____mask = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____mask : value<4>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<4>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? value<4>{0xfu} : value<4>{0u})));
	// cells $procmux$28331 $procmux$28784 $procmux$28781 $procmux$28799
	p_data__master_2e_bus____a____data = (p_data__master_2e_data__stream____req__we ? (p_data__master_2e__24_28 ? (p_data__master_2e__24_28 ? p_core_2e_m__rs2__value.curr : value<32>{0u}) : (p_data__master_2e__24_26 ? i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_ : i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_)) : value<32>{0u});
	// connection
	p_tl__instr__decoder_2e_rr__grant = i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6925_24_1576__Y.slice<1,0>().val();
	// cells $flatten\tl_ram.$reduce_or$tilelink_soc.v:9643$1912 $flatten\tl_ram.$logic_not$tilelink_soc.v:9641$1910 $flatten\tl_ram.$eq$tilelink_soc.v:9642$1911
	i_flatten_5c_tl__ram_2e__24_reduce__or_24_tilelink__soc_2e_v_3a_9643_24_1912__Y = reduce_or<1>(eq_uu<1>(p_tl__ram_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__ram_2e_bus____a____opcode)).val());
	// cells $flatten\tl_data_decoder.\rr.$or$tilelink_soc.v:6994$1591 $flatten\tl_data_decoder.\rr.$and$tilelink_soc.v:6993$1590 $flatten\tl_data_decoder.\rr.$not$tilelink_soc.v:6992$1589 $flatten\tl_data_decoder.\rr.$sub$tilelink_soc.v:6991$1588 $flatten\tl_data_decoder.\rr.$and$tilelink_soc.v:6998$1595 $flatten\tl_data_decoder.\rr.$not$tilelink_soc.v:6997$1594 $flatten\tl_data_decoder.\rr.$sub$tilelink_soc.v:6996$1593
	i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6994_24_1591__Y = or_uu<4>(and_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), not_u<7>(sub_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), value<4>{0u}.concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<1,0>()).concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<2>()).val()))).slice<2,0>().val(), and_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), not_u<7>(sub_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), value<4>{0u}.concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<1,0>()).concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<2>()).val()))).slice<6,3>().val());
	// cells $procmux$27109 $procmux$27882 $procmux$27883_CMP0
	p_tl__ram__arbiter_2e_bus____a____data = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____data : value<32>{0u}) : value<32>{0u});
	// connection
	p_tl__ram_2e_wrapper_2e_req__in____write__en = i_flatten_5c_tl__ram_2e__24_reduce__or_24_tilelink__soc_2e_v_3a_9643_24_1912__Y;
	// cells $procmux$27798 $procmux$27034 $procmux$27801 $procmux$26811
	i_procmux_24_27798__Y = (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? (i_procmux_24_27206__Y.slice<1>().val() ? value<1>{0u} : p_tl__ram_2e_bus____d____source.slice<0>().val()) : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? (i_procmux_24_26988__Y.slice<1>().val() ? value<1>{0u} : p_tl__rom_2e_bus____d____source.slice<0>().val()) : value<1>{0u}));
	// connection
	p_tl__ram_2e_wrapper_2e_req__in____write__mask = p_tl__ram__arbiter_2e_bus____a____mask;
	// connection
	p_tl__data__decoder_2e_rr__grant = i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6994_24_1591__Y.slice<2,0>().val();
	// connection
	p_instruction__master_2e_bus____d____source = i_procmux_24_27798__Y;
	// cells $procmux$27771 $procmux$27774
	p_instruction__master_2e_bus____d____valid = (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? p_tl__ram__arbiter_2e_tl__instr__ram____d____valid : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? p_tl__rom__arbiter_2e_tl__instr__rom____d____valid : value<1>{0u}));
	// connection
	p_instruction__master_2e__24_38 = p_instruction__master_2e_bus____d____valid;
	// connection
	p_instruction__master_2e__24_42 = p_instruction__master_2e_bus____d____valid;
	// cells $procmux$27957 $procmux$27960 $procmux$27061 $procmux$27963 $procmux$26838
	i_procmux_24_27957__Y = (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? p_tl__periph_2e_bus____d____source.curr : (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__ram_2e_bus____d____source.slice<0>().val() : value<1>{0u}) : (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__rom_2e_bus____d____source.slice<0>().val() : value<1>{0u}) : value<1>{0u})));
	// cells $flatten\tl_periph.$or$tilelink_soc.v:8946$1757 $procmux$27999 $flatten\tl_periph.$not$tilelink_soc.v:8945$1756
	i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_8946_24_1757__Y = or_uu<1>(not_u<1>(p_tl__periph_2e_bus____d____valid.curr), (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? value<1>{0x1u} : value<1>{0u}));
	// cells $flatten\tl_rom.$or$tilelink_soc.v:18880$10217 $procmux$26793 $procmux$27927 $procmux$26796 $procmux$27777 $flatten\tl_rom.$not$tilelink_soc.v:18879$10216
	i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_18880_24_10217__Y = or_uu<1>(not_u<1>(p_tl__rom_2e_bus____d____valid), (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? value<1>{0x1u} : value<1>{0u}) : (i_procmux_24_26988__Y.slice<1>().val() ? value<1>{0u} : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? value<1>{0x1u} : value<1>{0u}))));
	// connection
	p_data__master_2e_bus____d____source = i_procmux_24_27957__Y;
	// cells $procmux$27915 $procmux$27918 $procmux$27921
	p_data__master_2e_bus____d____valid = (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? p_tl__periph_2e_bus____d____valid.curr : (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? p_tl__ram__arbiter_2e_tl__data__ram____d____valid : (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? p_tl__rom__arbiter_2e_tl__data__rom____d____valid : value<1>{0u})));
	// cells $procmux$27261 $procmux$27262_CMP0 $procmux$27016 $procmux$27993 $procmux$27019 $procmux$27825
	p_tl__ram_2e_controller_2e_rsp____ready = (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? value<1>{0x1u} : (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? value<1>{0x1u} : value<1>{0u}) : (i_procmux_24_27206__Y.slice<1>().val() ? value<1>{0u} : (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? value<1>{0x1u} : value<1>{0u}))));
	// cells $procmux$28295 $procmux$28292 $procmux$28290 $flatten\instruction_master.$eq$tilelink_soc.v:6658$1493
	p_instruction__master_2e_instruction__stream____rsp__valid = (p_instruction__master_2e__24_38 ? (p_instruction__master_2e__24_38 ? (eq_uu<1>(p_instruction__master_2e_bus____d____source, p_instruction__master_2e_read__ptr.curr) ? value<1>{0x1u} : i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__valid_5b_0_3a_0_5d_) : value<1>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__valid_5b_0_3a_0_5d_);
	// cells $procmux$27279 $procmux$27280_CMP0 $procmux$27281_CMP0 $procmux$27282_CMP0 $procmux$27276 $procmux$27277_CMP0 $procmux$27274 $flatten\tl_ram.\wrapper.$and$tilelink_soc.v:21144$26729 $flatten\tl_ram.\wrapper.$not$tilelink_soc.v:21143$26728 $flatten\tl_ram.\wrapper.$reduce_and$tilelink_soc.v:21137$26722
	p_tl__ram_2e_wrapper_2e_req__out____write__en = (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x2u}) ? value<1>{0x1u} : (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? value<1>{0x1u} : (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (and_uu<1>(p_tl__ram_2e_wrapper_2e_req__in____write__en, not_u<1>(reduce_and<1>(p_tl__ram_2e_wrapper_2e_req__in____write__mask))) ? value<1>{0u} : i_flatten_5c_tl__ram_2e__24_reduce__or_24_tilelink__soc_2e_v_3a_9643_24_1912__Y) : value<1>{0u}) : i_flatten_5c_tl__ram_2e__24_reduce__or_24_tilelink__soc_2e_v_3a_9643_24_1912__Y)));
	// connection
	p_data__master_2e__24_58 = p_data__master_2e_bus____d____valid;
	// cells $procmux$28558 $procmux$28555 $procmux$28553 $flatten\data_master.$eq$tilelink_soc.v:4037$1037
	p_data__master_2e_data__stream____rsp__valid = (p_data__master_2e__24_58 ? (p_data__master_2e__24_58 ? (eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr) ? value<1>{0x1u} : i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__valid_5b_0_3a_0_5d_) : value<1>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__valid_5b_0_3a_0_5d_);
	// cells $flatten\core.$and$tilelink_soc.v:1887$252 $flatten\core.$not$tilelink_soc.v:1886$251 $flatten\core.$and$tilelink_soc.v:1885$250
	i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y = and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____mem__enable.curr), not_u<1>(p_data__master_2e_data__stream____rsp__valid));
	// connection
	p_core_2e_w__arbitration____halted = i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y;
	// connection
	p_core_2e_m__arbitration____halted__by__next = p_core_2e_w__arbitration____halted;
	// cells $flatten\core.$and$tilelink_soc.v:1869$234 $flatten\core.$and$tilelink_soc.v:1868$233 $flatten\core.$not$tilelink_soc.v:1867$232
	p_data__master_2e_data__stream____req__valid = and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted__by__next)), p_core_2e_m__control____mem__enable.curr);
	// cells $procmux$28543 $flatten\data_master.$and$tilelink_soc.v:3928$928 $flatten\data_master.$logic_not$tilelink_soc.v:3917$917 $flatten\data_master.$and$tilelink_soc.v:3906$906 $flatten\data_master.$logic_not$tilelink_soc.v:3895$895
	p_data__master_2e_bus____a____valid = (p_data__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_data__master_2e_state_24_5.curr), p_data__master_2e_data__stream____req__valid) : and_uu<1>(logic_not<1>(p_data__master_2e_state.curr), p_data__master_2e_data__stream____req__valid));
	// cells $procmux$27888 $procmux$27889_CMP0
	p_tl__data__decoder_2e_tl__data__ram____a____valid = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____valid : value<1>{0u});
	// connection
	p_tl__ram_2e_controller_2e_decoder_2e_enc__in = p_tl__ram_2e_controller_2e_decoder__enc__in.curr;
	// cells $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5605$1294 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5604$1293 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5603$1292 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5602$1291 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5601$1290 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5600$1289 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5592$1281 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5581$1270 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5570$1259 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5559$1248 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5550$1239 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5539$1228 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5529$1218 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5518$1207 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5508$1197 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5626$1315 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5616$1305 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5606$1295
	p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal.slice<0>() = xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<0>().val(), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<2>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<4>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<6>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<8>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<10>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<12>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<14>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<16>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<18>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<20>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<22>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<24>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<26>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<28>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<30>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<32>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<34>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<36>().val());
	// cells $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5625$1314 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5624$1313 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5623$1312 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5622$1311 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5621$1310 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5620$1309 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5619$1308 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5618$1307 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5617$1306 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5615$1304 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5614$1303 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5613$1302 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5612$1301 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5611$1300 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5610$1299 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5609$1298 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5608$1297 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5607$1296
	p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal.slice<1>() = xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<1>().val(), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<2>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<5>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<6>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<9>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<10>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<13>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<14>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<17>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<18>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<21>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<22>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<25>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<26>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<29>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<30>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<33>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<34>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<37>().val());
	// cells $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5516$1205 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5515$1204 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5514$1203 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5513$1202 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5512$1201 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5511$1200 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5510$1199 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5509$1198 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5636$1325 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5635$1324 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5634$1323 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5633$1322 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5632$1321 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5631$1320 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5630$1319 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5629$1318 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5628$1317 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5627$1316
	p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal.slice<2>() = xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<3>().val(), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<4>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<5>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<6>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<11>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<12>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<13>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<14>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<19>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<20>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<21>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<22>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<27>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<28>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<29>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<30>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<35>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<36>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<37>().val());
	// cells $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5533$1222 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5532$1221 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5531$1220 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5530$1219 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5528$1217 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5527$1216 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5526$1215 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5525$1214 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5524$1213 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5523$1212 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5522$1211 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5521$1210 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5520$1209 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5519$1208 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5517$1206
	p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal.slice<3>() = xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<7>().val(), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<8>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<9>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<10>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<11>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<12>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<13>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<14>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<23>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<24>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<25>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<26>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<27>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<28>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<29>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<30>().val());
	// cells $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5549$1238 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5548$1237 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5547$1236 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5546$1235 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5545$1234 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5544$1233 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5543$1232 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5542$1231 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5541$1230 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5540$1229 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5538$1227 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5537$1226 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5536$1225 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5535$1224 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5534$1223
	p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal.slice<4>() = xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<15>().val(), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<16>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<17>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<18>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<19>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<20>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<21>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<22>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<23>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<24>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<25>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<26>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<27>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<28>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<29>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<30>().val());
	// cells $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5556$1245 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5555$1244 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5554$1243 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5553$1242 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5552$1241 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5551$1240
	p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal.slice<5>() = xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<31>().val(), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<32>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<33>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<34>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<35>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<36>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<37>().val());
	// cells $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5598$1287 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5597$1286 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5596$1285 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5595$1284 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5594$1283 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5593$1282 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5591$1280 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5590$1279 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5589$1278 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5588$1277 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5587$1276 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5586$1275 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5585$1274 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5584$1273 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5583$1272 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5582$1271 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5580$1269 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5579$1268 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5578$1267 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5577$1266 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5576$1265 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5575$1264 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5574$1263 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5573$1262 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5572$1261 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5571$1260 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5569$1258 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5568$1257 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5567$1256 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5566$1255 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5565$1254 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5564$1253 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5563$1252 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5562$1251 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5561$1250 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5560$1249 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5558$1247 $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5557$1246
	p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal.slice<6>() = xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<0>().val(), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<1>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<2>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<3>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<4>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<5>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<6>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<7>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<8>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<9>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<10>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<11>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<12>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<13>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<14>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<15>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<16>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<17>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<18>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<19>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<20>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<21>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<22>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<23>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<24>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<25>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<26>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<27>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<28>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<29>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<30>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<31>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<32>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<33>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<34>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<35>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<36>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<37>().val()), p_tl__ram_2e_controller_2e_decoder_2e_enc__in.slice<38>().val());
	// connection
	p_tl__ram_2e_controller_2e_decoder_2e_error__calculator_2e_syndrome = p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal;
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/hamming.py:108|tilelink_soc.v:5637.20-5641.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\error_calculator.$reduce_or$tilelink_soc.v:6213$1437
	p_tl__ram_2e_controller_2e_decoder_2e_error__calculator_2e_error = reduce_or<1>(p_tl__ram_2e_controller_2e_decoder_2e_error__calculator_2e_syndrome);
	// cells $flatten\tl_ram.\controller.\decoder.\error_calculator.$and$tilelink_soc.v:6215$1439 $flatten\tl_ram.\controller.\decoder.\error_calculator.$not$tilelink_soc.v:6214$1438
	p_tl__ram_2e_controller_2e_decoder__uncorrectable__error = and_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_error__calculator_2e_error, not_u<1>(p_tl__ram_2e_controller_2e_decoder_2e_error__calculator_2e_syndrome.slice<6>().val()));
	// connection
	p_tl__ram_2e_controller_2e_decoder__error = p_tl__ram_2e_controller_2e_decoder_2e_error__calculator_2e_error;
	// connection
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome = p_tl__ram_2e_controller_2e_decoder_2e_syndrome__signal;
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6400$1457
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<0>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x41u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6411$1468
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<1>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x42u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6383$1440
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<2>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x43u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6394$1451
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<3>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x44u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6399$1456
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<4>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x45u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6401$1458
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<5>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x46u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6402$1459
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<6>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x47u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6403$1460
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<7>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x48u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6404$1461
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<8>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x49u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6405$1462
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<9>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x4au});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6406$1463
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<10>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x4bu});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6407$1464
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<11>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x4cu});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6408$1465
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<12>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x4du});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6409$1466
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<13>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x4eu});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6410$1467
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<14>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x4fu});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6412$1469
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<15>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x50u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6413$1470
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<16>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x51u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6414$1471
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<17>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x52u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6415$1472
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<18>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x53u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6416$1473
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<19>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x54u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6417$1474
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<20>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x55u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6418$1475
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<21>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x56u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6419$1476
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<22>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x57u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6420$1477
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<23>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x58u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6421$1478
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<24>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x59u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6384$1441
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<25>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x5au});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6385$1442
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<26>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x5bu});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6386$1443
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<27>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x5cu});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6387$1444
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<28>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x5du});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6388$1445
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<29>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x5eu});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6389$1446
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<30>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x5fu});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6390$1447
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<31>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x60u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6391$1448
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<32>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x61u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6392$1449
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<33>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x62u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6393$1450
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<34>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x63u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6395$1452
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<35>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x64u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6396$1453
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<36>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x65u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6397$1454
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<37>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x66u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:306|tilelink_soc.v:5642.19-5645.4|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.\flip_calculator.$eq$tilelink_soc.v:6398$1455
	p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips.slice<38>() = eq_uu<1>(p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_syndrome, value<7>{0x40u});
	// \src: tilelink_soc.v:20747.10-20769.4|tilelink_soc.v:149.15-155.4|/home/michiel/tue/Thesis/memory-controller-generator/generator/error_correction/generic.py:229|tilelink_soc.v:9664.14-9682.4
	// cell $flatten\tl_ram.\controller.\decoder.$xor$tilelink_soc.v:5599$1288
	i_flatten_5c_tl__ram_2e__5c_controller_2e__5c_decoder_2e__24_xor_24_tilelink__soc_2e_v_3a_5599_24_1288__Y = xor_uu<39>(p_tl__ram_2e_controller_2e_decoder_2e_enc__in, p_tl__ram_2e_controller_2e_decoder_2e_flip__calculator_2e_flips);
	// cells $procmux$27226 $flatten\tl_ram.\controller.$and$tilelink_soc.v:135$16 $flatten\tl_ram.\controller.$not$tilelink_soc.v:134$15 $flatten\tl_ram.\controller.$and$tilelink_soc.v:133$14 $flatten\tl_ram.\controller.$or$tilelink_soc.v:132$13 $flatten\tl_ram.\controller.$not$tilelink_soc.v:131$12 $flatten\tl_ram.\controller.$and$tilelink_soc.v:130$11
	p_tl__ram_2e_controller_2e_req____ready = (and_uu<1>(and_uu<1>(p_tl__ram_2e_controller_2e_response__writeback__valid.curr, p_tl__ram_2e_controller_2e_decoder__error), not_u<1>(p_tl__ram_2e_controller_2e_decoder__uncorrectable__error)) ? value<1>{0u} : or_uu<1>(and_uu<1>(p_tl__ram_2e_controller_2e_rsp____valid.curr, p_tl__ram_2e_controller_2e_rsp____ready), not_u<1>(p_tl__ram_2e_controller_2e_rsp____valid.curr)));
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/memory-controller-generator/generator/controller/write_back.py:33
	// cell $procmux$27223
	p_tl__ram_2e_controller_2e_rsp____read__data = (p_tl__ram_2e_controller_2e_rsp____valid.curr ? i_flatten_5c_tl__ram_2e__5c_controller_2e__5c_decoder_2e__24_xor_24_tilelink__soc_2e_v_3a_5599_24_1288__Y.slice<31>().concat(i_flatten_5c_tl__ram_2e__5c_controller_2e__5c_decoder_2e__24_xor_24_tilelink__soc_2e_v_3a_5599_24_1288__Y.slice<33>()).concat(i_flatten_5c_tl__ram_2e__5c_controller_2e__5c_decoder_2e__24_xor_24_tilelink__soc_2e_v_3a_5599_24_1288__Y.slice<29,23>()).concat(i_flatten_5c_tl__ram_2e__5c_controller_2e__5c_decoder_2e__24_xor_24_tilelink__soc_2e_v_3a_5599_24_1288__Y.slice<32>()).concat(i_flatten_5c_tl__ram_2e__5c_controller_2e__5c_decoder_2e__24_xor_24_tilelink__soc_2e_v_3a_5599_24_1288__Y.slice<21,0>()).val() : value<32>{0u});
	// cells $procmux$27455 $procmux$27456_CMP0 $procmux$27457_CMP0
	p_tl__ram_2e_wrapper_2e_req__in____ready = (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x2u}) ? value<1>{0u} : (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? value<1>{0u} : p_tl__ram_2e_controller_2e_req____ready));
	// cells $procmux$27217 $procmux$27218_CMP0
	p_tl__ram_2e_bus____d____data = (eq_uu<1>(p_tl__ram_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__ram_2e_controller_2e_rsp____read__data : value<32>{0u});
	// cells $procmux$27816 $procmux$27046 $procmux$27819 $procmux$26823
	p_tl__instr__decoder_2e___bus____d____data = (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? (i_procmux_24_27206__Y.slice<1>().val() ? value<32>{0u} : p_tl__ram_2e_bus____d____data) : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? (i_procmux_24_26988__Y.slice<1>().val() ? value<32>{0u} : p_tl__rom_2e_bus____d____data) : value<32>{0u}));
	// cells $procmux$27850 $procmux$27851_CMP0 $procmux$27852_CMP0 $procmux$27853_CMP0 $procmux$27013 $procmux$26790
	p_data__master_2e_bus____a____ready = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_8946_24_1757__Y : (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? (p_tl__ram__arbiter_2e_rr__grant ? p_tl__ram_2e_wrapper_2e_req__in____ready : value<1>{0u}) : (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? (p_tl__rom__arbiter_2e_rr__grant ? i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_18880_24_10217__Y : value<1>{0u}) : value<1>{0u})));
	// cells $procmux$28308 $procmux$28305 $procmux$28303 $flatten\instruction_master.$eq$tilelink_soc.v:6659$1494
	p_instruction__master_2e_instruction__stream____rsp__data = (p_instruction__master_2e__24_42 ? (p_instruction__master_2e__24_42 ? (eq_uu<1>(p_instruction__master_2e_bus____d____source, p_instruction__master_2e_read__ptr.curr) ? p_tl__instr__decoder_2e___bus____d____data : i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__data_5b_31_3a_0_5d_) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_instruction__stream____rsp__data_5b_31_3a_0_5d_);
	// connection
	p_core_2e_decoder_2e_instruction = p_instruction__master_2e_instruction__stream____rsp__data;
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$29662_CMP0
	i_procmux_24_29662__CMP.slice<0>() = logic_not<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val());
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$29662_CMP1
	i_procmux_24_29662__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$29676_CMP0
	i_procmux_24_29676__CMP.slice<0>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x6u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$29676_CMP1
	i_procmux_24_29676__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x7u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$29677_CMP0
	i_procmux_24_29677__CMP.slice<0>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x4u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:156
	// cell $procmux$29677_CMP1
	i_procmux_24_29677__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x5u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$29631_CMP0
	i_procmux_24_29631__CMP.slice<0>() = logic_not<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val());
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$29631_CMP1
	i_procmux_24_29631__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x5u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$29631_CMP2
	i_procmux_24_29631__CMP.slice<2>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x7u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$29632_CMP0
	i_procmux_24_29632__CMP.slice<0>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$29632_CMP1
	i_procmux_24_29632__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x4u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/core/decoder.py:172
	// cell $procmux$29632_CMP2
	i_procmux_24_29632__CMP.slice<2>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x6u});
	// cells $flatten\core.$or$tilelink_soc.v:1843$208 $flatten\core.$and$tilelink_soc.v:1872$237 $flatten\core.$and$tilelink_soc.v:1871$236 $flatten\core.$not$tilelink_soc.v:1870$235 $procmux$28326 $flatten\data_master.$and$tilelink_soc.v:4046$1046 $flatten\data_master.$logic_not$tilelink_soc.v:4040$1040 $flatten\data_master.$and$tilelink_soc.v:4029$1029 $flatten\data_master.$logic_not$tilelink_soc.v:3945$945
	i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y = or_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>((p_data__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_data__master_2e_state_24_5.curr), p_data__master_2e_bus____a____ready) : and_uu<1>(logic_not<1>(p_data__master_2e_state.curr), p_data__master_2e_bus____a____ready)))), p_core_2e_m__control____mem__enable.curr), p_core_2e_m__arbitration____halted__by__next);
	// connection
	p_core_2e_decoder_2e_control____rd = p_core_2e_decoder_2e_instruction.slice<11,7>().val();
	// connection
	p_core_2e__24_320 = i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y;
	// connection
	p_core_2e_m__arbitration____halted = p_core_2e__24_320;
	// cells $procmux$29711 $procmux$29712_CMP0 $procmux$29713_CMP0 $procmux$29714_CMP0 $procmux$29715_CMP0
	p_core_2e_decoder_2e_control____alu__left__select = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x17u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x37u}) ? value<2>{0x2u} : value<2>{0u}))));
	// cells $procmux$29666 $procmux$29667_CMP0 $procmux$29668_CMP0 $flatten\core.\decoder.$eq$tilelink_soc.v:4786$1180 $procmux$29663 $procmux$29664_CMP0 $procmux$29661 $procmux$29662_ANY
	p_core_2e_decoder_2e_control____alu__mode__switch = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<31,25>().val(), value<6>{0x20u}) : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (reduce_or<1>(i_procmux_24_29662__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}));
	// cells $procmux$29647 $procmux$29648_CMP0 $procmux$29649_CMP0 $procmux$29644 $procmux$29645_CMP0 $procmux$29642 $flatten\core.\decoder.$eq$tilelink_soc.v:4788$1182
	p_core_2e_decoder_2e_control____writeback__select = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<31,25>().val(), value<6>{0x1u}) ? value<2>{0x2u} : value<2>{0u}) : value<2>{0u}) : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? value<2>{0x1u} : value<2>{0u}));
	// cells $procmux$29681 $procmux$29682_CMP0 $procmux$29683_CMP0 $procmux$29684_CMP0 $procmux$29678 $procmux$29679_CMP0 $procmux$29675 $procmux$29676_ANY $procmux$29677_ANY
	p_core_2e_decoder_2e_control____alu__operation = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x13u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<14,12>().val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<14,12>().val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (reduce_or<1>(i_procmux_24_29676__CMP) ? value<3>{0x3u} : (reduce_or<1>(i_procmux_24_29677__CMP) ? value<3>{0x2u} : value<3>{0u})) : value<3>{0u}) : value<3>{0u})));
	// cells $procmux$29697 $procmux$29698_CMP0 $procmux$29699_CMP0 $procmux$29700_CMP0 $procmux$29701_CMP0 $procmux$29702_CMP0 $procmux$29703_CMP0 $procmux$29704_CMP0
	p_core_2e_decoder_2e_control____alu__right__select = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x13u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<2>{0x2u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? value<2>{0x2u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x17u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x37u}) ? value<2>{0x1u} : value<2>{0u})))))));
	// cells $procmux$29636 $procmux$29637_CMP0 $procmux$29638_CMP0 $procmux$29639_CMP0 $procmux$29633 $procmux$29634_CMP0 $procmux$29630 $procmux$29631_ANY $procmux$29632_ANY
	p_core_2e_decoder_2e_control____branch__mode = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (reduce_or<1>(i_procmux_24_29631__CMP) ? value<2>{0x2u} : (reduce_or<1>(i_procmux_24_29632__CMP) ? value<2>{0x3u} : value<2>{0u})) : value<2>{0u}) : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? value<2>{0x1u} : value<2>{0u})));
	// cells $procmux$29626 $procmux$29627_CMP0
	p_core_2e_decoder_2e_control____branch__type = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<1>{0x1u} : value<1>{0u});
	// cells $procmux$29686 $procmux$29687_CMP0 $procmux$29688_CMP0 $procmux$29689_CMP0 $procmux$29690_CMP0 $procmux$29691_CMP0 $procmux$29692_CMP0 $procmux$29693_CMP0 $procmux$29694_CMP0 $procmux$29695_CMP0
	p_core_2e_decoder_2e_control____immediate = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x13u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,25>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<11,7>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<7>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<30,25>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<11,8>()).concat(value<1>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31>().val().repeat<12>().concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<19,12>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<20>()).concat(p_instruction__master_2e_instruction__stream____rsp__data.slice<30,21>()).concat(value<1>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x17u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31,12>().concat(value<12>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x37u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<31,12>().concat(value<12>{0u}).val() : value<32>{0u})))))))));
	// cells $procmux$29727 $procmux$29728_CMP0 $procmux$29729_CMP0
	p_core_2e_decoder_2e_control____mem__enable = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<1>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? value<1>{0x1u} : value<1>{0u}));
	// cells $procmux$29720 $procmux$29721_CMP0 $procmux$29722_CMP0
	p_core_2e_decoder_2e_control____mem__size = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<13,12>().val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<13,12>().val() : value<2>{0u}));
	// cells $procmux$29717 $procmux$29718_CMP0
	p_core_2e_decoder_2e_control____mem__unsigned = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? p_instruction__master_2e_instruction__stream____rsp__data.slice<14>().val() : value<1>{0u});
	// cells $procmux$29724 $procmux$29725_CMP0
	p_core_2e_decoder_2e_control____mem__we = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<1>{0x1u} : value<1>{0u});
	// cells $procmux$29651 $procmux$29652_CMP0 $procmux$29653_CMP0 $flatten\core.\decoder.$reduce_or$tilelink_soc.v:4787$1181
	p_core_2e_decoder_2e_control____register__write = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<1>{0u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? value<1>{0u} : reduce_or<1>(p_core_2e_decoder_2e_control____rd)));
	// connection
	value<2>().concat(value<1>()).concat(value<1>()).concat(value<2>()).concat(value<1>()).concat(value<1>()).concat(p_core_2e_d__control____branch__type).concat(p_core_2e_d__control____branch__mode).concat(value<2>()).concat(value<2>()).concat(value<1>()).concat(value<1>()).concat(value<3>()).concat(p_core_2e_d__control____immediate).concat(value<5>()).concat(p_core_2e_d__control____rs2).concat(p_core_2e_d__control____rs1) = p_core_2e_decoder_2e_control____writeback__select.concat(p_core_2e_decoder_2e_control____register__write).concat(p_core_2e_decoder_2e_control____mem__unsigned).concat(p_core_2e_decoder_2e_control____mem__size).concat(p_core_2e_decoder_2e_control____mem__we).concat(p_core_2e_decoder_2e_control____mem__enable).concat(p_core_2e_decoder_2e_control____branch__type).concat(p_core_2e_decoder_2e_control____branch__mode).concat(p_core_2e_decoder_2e_control____alu__right__select).concat(p_core_2e_decoder_2e_control____alu__left__select).concat(value<1>{0u}).concat(p_core_2e_decoder_2e_control____alu__mode__switch).concat(p_core_2e_decoder_2e_control____alu__operation).concat(p_core_2e_decoder_2e_control____immediate).concat(p_core_2e_decoder_2e_control____rd).concat(p_core_2e_decoder_2e_instruction.slice<24,20>()).concat(p_core_2e_decoder_2e_instruction.slice<19,15>()).val();
	// cells $procmux$28894 $flatten\core.$and$tilelink_soc.v:1863$228 $flatten\core.$and$tilelink_soc.v:1861$226 $flatten\core.$not$tilelink_soc.v:1860$225
	p_core_2e_d__arbitration____remove = (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? value<1>{0x1u} : value<1>{0u});
	// cells $procmux$27315 $procmux$27316_CMP0 $procmux$27306 $procmux$27307_CMP0 $procmux$27304 $procmux$27312 $procmux$27313_CMP0 $procmux$27300 $procmux$27301_CMP0 $procmux$27298 $procmux$27309 $procmux$27310_CMP0 $procmux$27294 $procmux$27295_CMP0 $procmux$27292 $procmux$27288 $procmux$27289_CMP0 $procmux$27321 $procmux$27322_CMP0 $procmux$27319
	p_tl__ram_2e_wrapper_2e_write__data = (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (p_tl__ram_2e_wrapper_2e_tmp__req__mask.curr.slice<3>().val() ? p_tl__ram_2e_wrapper_2e_tmp__req__data.curr.slice<31,24>().val() : p_tl__ram_2e_controller_2e_rsp____read__data.slice<31,24>().val()) : value<8>{0u}) : value<8>{0u}).concat((eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (p_tl__ram_2e_wrapper_2e_tmp__req__mask.curr.slice<2>().val() ? p_tl__ram_2e_wrapper_2e_tmp__req__data.curr.slice<23,16>().val() : p_tl__ram_2e_controller_2e_rsp____read__data.slice<23,16>().val()) : value<8>{0u}) : value<8>{0u})).concat((eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (p_tl__ram_2e_wrapper_2e_tmp__req__mask.curr.slice<1>().val() ? p_tl__ram_2e_wrapper_2e_tmp__req__data.curr.slice<15,8>().val() : p_tl__ram_2e_controller_2e_rsp____read__data.slice<15,8>().val()) : value<8>{0u}) : value<8>{0u})).concat((eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (p_tl__ram_2e_wrapper_2e_tmp__req__mask.curr.slice<0>().val() ? p_tl__ram_2e_wrapper_2e_tmp__req__data.curr.slice<7,0>().val() : p_tl__ram_2e_controller_2e_rsp____read__data.slice<7,0>().val()) : value<8>{0u}) : value<8>{0u})).val();
	// cells $procmux$29259 $flatten\core.$or$tilelink_soc.v:1790$153 $flatten\core.$and$tilelink_soc.v:1789$152 $flatten\core.$or$tilelink_soc.v:1788$151 $flatten\core.$eq$tilelink_soc.v:1787$150 $flatten\core.$eq$tilelink_soc.v:1786$149 $flatten\core.$and$tilelink_soc.v:1785$148 $flatten\core.$and$tilelink_soc.v:1784$147 $flatten\core.$reduce_or$tilelink_soc.v:1783$146 $flatten\core.$and$tilelink_soc.v:1782$145 $flatten\core.$or$tilelink_soc.v:1781$144 $flatten\core.$eq$tilelink_soc.v:1779$142 $flatten\core.$eq$tilelink_soc.v:1778$141 $flatten\core.$and$tilelink_soc.v:1777$140 $flatten\core.$and$tilelink_soc.v:1776$139 $flatten\core.$reduce_or$tilelink_soc.v:1775$138
	i_procmux_24_29259__Y = (or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2)))) ? value<1>{0x1u} : i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y);
	// cells $procmux$27267 $procmux$27268_CMP0 $procmux$27269_CMP0
	p_tl__ram_2e_wrapper_2e_req__out____write__data = (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x2u}) ? p_tl__ram_2e_wrapper_2e_tmp__req__data.curr : (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? p_tl__ram_2e_wrapper_2e_write__data : p_tl__ram__arbiter_2e_bus____a____data));
	// connection
	p_core_2e_d__arbitration____halted__by__next = i_procmux_24_29259__Y;
	// cells $flatten\core.$or$tilelink_soc.v:2009$374 $flatten\core.$and$tilelink_soc.v:1737$100 $flatten\core.$not$tilelink_soc.v:1736$99 $flatten\core.$or$tilelink_soc.v:1735$98
	p_core_2e_d__arbitration____halted = or_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_d__arbitration____valid.curr, p_core_2e_d__arbitration____remove), not_u<1>(p_instruction__master_2e_instruction__stream____rsp__valid)), p_core_2e_d__arbitration____halted__by__next);
	// connection
	p_tl__ram_2e_controller_2e_encoder_2e_data__in = p_tl__ram_2e_wrapper_2e_req__out____write__data;
	// connection
	p_core_2e_f__arbitration____halted__by__next = p_core_2e_d__arbitration____halted;
	// cells $procmux$29244 $flatten\core.$and$tilelink_soc.v:1762$125 $flatten\core.$and$tilelink_soc.v:1760$123 $flatten\core.$not$tilelink_soc.v:1759$122 $procmux$29247 $flatten\core.$and$tilelink_soc.v:1758$121 $flatten\core.$not$tilelink_soc.v:1757$120 $flatten\core.$and$tilelink_soc.v:1756$119 $flatten\core.$eq$tilelink_soc.v:1755$118 $flatten\core.$and$tilelink_soc.v:1754$117 $flatten\core.$not$tilelink_soc.v:1753$116 $flatten\core.$and$tilelink_soc.v:1752$115 $flatten\core.$not$tilelink_soc.v:1751$114
	p_core_2e_f__arbitration____remove = (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? value<1>{0x1u} : (and_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_d__arbitration____valid.curr, not_u<1>(p_core_2e_d__arbitration____halted)), not_u<1>(p_core_2e_d__arbitration____remove)), eq_uu<1>(p_core_2e_d__control____branch__mode, value<2>{0x1u})), not_u<1>(p_core_2e_d__control____branch__type)) ? value<1>{0x1u} : value<1>{0u}));
	// cells $flatten\core.$and$tilelink_soc.v:2006$371 $flatten\core.$not$tilelink_soc.v:2004$369 $flatten\core.$and$tilelink_soc.v:2003$368 $flatten\core.$not$tilelink_soc.v:2002$367
	p_instruction__master_2e_instruction__stream____req__valid = and_uu<1>(and_uu<1>(p_core_2e_f__arbitration____valid.curr, not_u<1>(p_core_2e_f__arbitration____halted__by__next)), not_u<1>(p_core_2e_f__arbitration____remove));
	// cells $procmux$28322 $flatten\instruction_master.$and$tilelink_soc.v:6647$1482 $flatten\instruction_master.$logic_not$tilelink_soc.v:6646$1481 $flatten\instruction_master.$and$tilelink_soc.v:6645$1480 $flatten\instruction_master.$logic_not$tilelink_soc.v:6644$1479
	p_instruction__master_2e_bus____a____valid = (p_instruction__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_instruction__master_2e_state_24_5.curr), p_instruction__master_2e_instruction__stream____req__valid) : and_uu<1>(logic_not<1>(p_instruction__master_2e_state.curr), p_instruction__master_2e_instruction__stream____req__valid));
	// cells $procmux$27768 $procmux$27769_CMP0
	p_tl__instr__decoder_2e_tl__instr__ram____a____valid = (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_instruction__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$27001 $procmux$27004
	p_tl__ram__arbiter_2e_bus____a____valid = (p_tl__ram__arbiter_2e_rr__grant ? p_tl__data__decoder_2e_tl__data__ram____a____valid : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : p_tl__instr__decoder_2e_tl__instr__ram____a____valid));
	// cells $procmux$27466 $procmux$27467_CMP0 $procmux$27468_CMP0 $procmux$27463 $procmux$27464_CMP0 $procmux$27461
	p_tl__ram_2e_controller_2e_req____valid = (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x2u}) ? value<1>{0x1u} : (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (p_tl__ram_2e_wrapper_2e_rsp__in____valid ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : p_tl__ram__arbiter_2e_bus____a____valid));
	// cells \tl_ram.memory $procmux$27232 $flatten\tl_ram.\controller.$and$tilelink_soc.v:126$7 $flatten\tl_ram.\controller.$not$tilelink_soc.v:124$5 $flatten\tl_ram.\controller.$and$tilelink_soc.v:123$4 $procmux$27229 $flatten\tl_ram.\controller.$and$tilelink_soc.v:129$10 $flatten\tl_ram.\controller.$not$tilelink_soc.v:128$9 $flatten\tl_ram.\controller.$and$tilelink_soc.v:127$8 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6113$1432 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6112$1431 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6111$1430 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6110$1429 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6109$1428 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6108$1427 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6107$1426 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6106$1425 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6105$1424 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6104$1423 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6103$1422 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6102$1421 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6101$1420 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6100$1419 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6016$1335 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6015$1334 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6014$1333 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6013$1332 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6012$1331 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6011$1330 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6010$1329 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6009$1328 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6008$1327 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6007$1326 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6117$1436 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6116$1435 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6115$1434 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6114$1433 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6034$1353 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6033$1352 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6032$1351 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6031$1350 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6030$1349 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6029$1348 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6028$1347 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6027$1346 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6026$1345 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6025$1344 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6024$1343 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6023$1342 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6022$1341 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6021$1340 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6020$1339 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6019$1338 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6018$1337 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6017$1336 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6051$1370 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6050$1369 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6049$1368 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6048$1367 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6047$1366 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6046$1365 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6045$1364 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6044$1363 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6043$1362 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6042$1361 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6041$1360 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6040$1359 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6039$1358 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6038$1357 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6037$1356 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6036$1355 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6035$1354 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6068$1387 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6067$1386 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6066$1385 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6065$1384 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6064$1383 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6063$1382 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6062$1381 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6061$1380 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6060$1379 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6059$1378 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6058$1377 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6057$1376 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6056$1375 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6055$1374 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6054$1373 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6053$1372 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6052$1371 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6085$1404 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6084$1403 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6083$1402 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6082$1401 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6081$1400 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6080$1399 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6079$1398 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6078$1397 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6077$1396 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6076$1395 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6075$1394 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6074$1393 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6073$1392 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6072$1391 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6071$1390 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6070$1389 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6069$1388 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6099$1418 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6098$1417 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6097$1416 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6096$1415 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6095$1414 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6094$1413 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6093$1412 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6092$1411 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6091$1410 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6090$1409 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6089$1408 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6088$1407 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6087$1406 $flatten\tl_ram.\controller.\encoder.$xor$tilelink_soc.v:6086$1405 $procmux$27255 $flatten\tl_ram.\controller.$and$tilelink_soc.v:142$23 $flatten\tl_ram.\controller.$not$tilelink_soc.v:141$22 $flatten\tl_ram.\controller.$and$tilelink_soc.v:136$17 $flatten\tl_ram.\controller.$and$tilelink_soc.v:125$6 $procmux$27235 $flatten\tl_ram.\controller.$and$tilelink_soc.v:122$3 $flatten\tl_ram.\controller.$not$tilelink_soc.v:121$2 $flatten\tl_ram.\controller.$and$tilelink_soc.v:120$1
	cell_p_tl__ram_2e_memory->p_write__en = (and_uu<1>(and_uu<1>(p_tl__ram_2e_controller_2e_response__writeback__valid.curr, p_tl__ram_2e_controller_2e_decoder__error), not_u<1>(p_tl__ram_2e_controller_2e_decoder__uncorrectable__error)) ? value<1>{0x1u} : p_tl__ram_2e_wrapper_2e_req__out____write__en);
	cell_p_tl__ram_2e_memory->p_write__data = (and_uu<1>(and_uu<1>(p_tl__ram_2e_controller_2e_response__writeback__valid.curr, p_tl__ram_2e_controller_2e_decoder__error), not_u<1>(p_tl__ram_2e_controller_2e_decoder__uncorrectable__error)) ? i_flatten_5c_tl__ram_2e__5c_controller_2e__5c_decoder_2e__24_xor_24_tilelink__soc_2e_v_3a_5599_24_1288__Y : xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<0>().val(), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<1>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<2>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<3>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<4>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<5>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<6>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<7>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<8>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<9>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<10>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<11>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<12>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<13>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<14>().val()).concat(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<1>().val(), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<2>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<3>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<4>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<9>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<10>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<11>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<12>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<17>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<18>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<19>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<20>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<22>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<25>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<26>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<27>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<28>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<31>().val())).concat(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<0>().val(), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<2>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<3>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<5>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<8>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<10>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<11>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<13>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<16>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<18>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<19>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<21>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<24>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<26>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<27>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<29>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<30>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<31>().val())).concat(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<0>().val(), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<1>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<3>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<6>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<8>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<9>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<11>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<14>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<15>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<18>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<20>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<21>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<22>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<23>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<26>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<28>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<29>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<30>().val())).concat(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<3>().val(), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<4>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<5>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<6>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<11>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<12>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<13>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<14>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<15>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<16>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<17>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<18>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<22>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<23>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<24>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<25>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<26>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<30>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<31>().val())).concat(p_tl__ram_2e_wrapper_2e_req__out____write__data.slice<30>()).concat(p_tl__ram_2e_wrapper_2e_req__out____write__data.slice<22>()).concat(p_tl__ram_2e_wrapper_2e_req__out____write__data.slice<31>()).concat(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<7>().val(), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<8>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<9>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<10>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<11>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<12>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<13>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<14>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<23>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<24>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<25>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<26>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<27>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<28>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<29>().val())).concat(p_tl__ram_2e_wrapper_2e_req__out____write__data.slice<29,23>()).concat(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(xor_uu<1>(p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<7>().val(), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<8>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<9>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<10>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<11>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<12>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<13>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<14>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<15>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<16>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<17>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<18>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<19>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<20>().val()), p_tl__ram_2e_controller_2e_encoder_2e_data__in.slice<21>().val())).concat(p_tl__ram_2e_wrapper_2e_req__out____write__data.slice<21,0>()).val());
	cell_p_tl__ram_2e_memory->p_rst = p_tl__ram_2e_rst;
	cell_p_tl__ram_2e_memory->p_clk__en = (and_uu<1>(and_uu<1>(p_tl__ram_2e_controller_2e_response__writeback__valid.curr, p_tl__ram_2e_controller_2e_decoder__error), not_u<1>(p_tl__ram_2e_controller_2e_decoder__uncorrectable__error)) ? value<1>{0x1u} : and_uu<1>(p_tl__ram_2e_controller_2e_req____valid, p_tl__ram_2e_controller_2e_req____ready));
	cell_p_tl__ram_2e_memory->p_clk = p_tl__ram_2e_clk;
	cell_p_tl__ram_2e_memory->p_addr = (and_uu<1>(and_uu<1>(p_tl__ram_2e_controller_2e_response__writeback__valid.curr, p_tl__ram_2e_controller_2e_decoder__error), not_u<1>(p_tl__ram_2e_controller_2e_decoder__uncorrectable__error)) ? p_tl__ram_2e_controller_2e_last__req__addr.curr : p_tl__ram_2e_wrapper_2e_req__out____addr);
	if (cell_p_tl__ram_2e_memory->eval()) {
		p_tl__ram_2e_controller__sram____read__data = cell_p_tl__ram_2e_memory->p_read__data.curr;
	} else {
		converged = false;
		p_tl__ram_2e_controller__sram____read__data = cell_p_tl__ram_2e_memory->p_read__data.curr;
	}
	// connection
	p_tl__ram_2e_controller_2e_decoder__enc__in.next = p_tl__ram_2e_controller__sram____read__data;
	// connection
	p_data__master_2e__24_73 = p_data__master_2e_bus____d____valid;
	// connection
	p_data__master_2e__24_75 = p_data__master_2e_bus____d____valid;
	// connection
	p_data__master_2e__24_77 = p_data__master_2e_bus____d____valid;
	// cells $procmux$27984 $procmux$27987 $procmux$27076 $procmux$27990 $procmux$26853
	p_tl__data__decoder_2e___bus____d____data = (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? p_tl__periph_2e_bus____d____data.curr : (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__ram_2e_bus____d____data : value<32>{0u}) : (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__rom_2e_bus____d____data : value<32>{0u}) : value<32>{0u})));
	// cells $procmux$28591 $procmux$28588 $procmux$28586
	p_data__master_2e_req__size = (p_data__master_2e__24_73 ? (p_data__master_2e__24_73 ? (i_procmux_24_27957__Y ? p_data__master_2e_size_24_40.curr : p_data__master_2e_size.curr) : value<2>{0u}) : value<2>{0u});
	// cells $procmux$28601 $procmux$28598 $procmux$28596
	p_data__master_2e_is__unsigned = (p_data__master_2e__24_75 ? (p_data__master_2e__24_75 ? (i_procmux_24_27957__Y ? p_data__master_2e_unsigned_24_43.curr : p_data__master_2e_unsigned.curr) : value<1>{0u}) : value<1>{0u});
	// connection
	p_data__master_2e_bus____d____data = p_tl__data__decoder_2e___bus____d____data;
	// cells $procmux$28611 $procmux$28608 $procmux$28606
	p_data__master_2e_addr__local__bits = (p_data__master_2e__24_77 ? (p_data__master_2e__24_77 ? (i_procmux_24_27957__Y ? p_data__master_2e_addr__low_24_46.curr : p_data__master_2e_addr__low.curr) : value<2>{0u}) : value<2>{0u});
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	// cell $flatten\data_master.$logic_not$tilelink_soc.v:4042$1042
	p_data__master_2e__24_81 = logic_not<1>(p_data__master_2e_req__size);
	// connection
	p_data__master_2e__24_79 = p_data__master_2e_bus____d____valid;
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	// cell $flatten\data_master.$eq$tilelink_soc.v:3988$988
	p_data__master_2e__24_275 = eq_uu<1>(p_data__master_2e_req__size, value<1>{0x1u});
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:149
	// cell $flatten\data_master.$eq$tilelink_soc.v:4024$1024
	p_data__master_2e__24_341 = eq_uu<1>(p_data__master_2e_req__size, value<2>{0x2u});
	// cells $procmux$27735 $procmux$27736_CMP0 $procmux$27737_CMP0 $procmux$27040 $procmux$26817
	p_instruction__master_2e_bus____a____ready = (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : p_tl__ram_2e_wrapper_2e_req__in____ready) : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_18880_24_10217__Y) : value<1>{0u}));
	// cells $procmux$27891 $procmux$27892_CMP0
	p_tl__periph_2e_bus____a____opcode = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____opcode : value<3>{0u});
	// cells $procmux$27924 $procmux$27925_CMP0
	p_tl__data__decoder_2e_bus____a____valid = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$28660 $procmux$28625 $procmux$28623 $procmux$28619 $procmux$28617 $procmux$28640 $procmux$28638 $procmux$28634 $procmux$28632 $procmux$28629 $procmux$28631_CMP0 $flatten\data_master.$ternary$tilelink_soc.v:4023$1023 $flatten\data_master.$ternary$tilelink_soc.v:4022$1022 $flatten\data_master.$ternary$tilelink_soc.v:4021$1021 $flatten\data_master.$ternary$tilelink_soc.v:4020$1020 $flatten\data_master.$ternary$tilelink_soc.v:4019$1019 $flatten\data_master.$ternary$tilelink_soc.v:4018$1018 $flatten\data_master.$ternary$tilelink_soc.v:4016$1016 $flatten\data_master.$ternary$tilelink_soc.v:4015$1015 $flatten\data_master.$ternary$tilelink_soc.v:4014$1014 $flatten\data_master.$ternary$tilelink_soc.v:4013$1013 $flatten\data_master.$ternary$tilelink_soc.v:4012$1012 $flatten\data_master.$ternary$tilelink_soc.v:4011$1011 $flatten\data_master.$ternary$tilelink_soc.v:4010$1010 $flatten\data_master.$ternary$tilelink_soc.v:4009$1009 $flatten\data_master.$ternary$tilelink_soc.v:4008$1008 $flatten\data_master.$ternary$tilelink_soc.v:4007$1007 $flatten\data_master.$ternary$tilelink_soc.v:4005$1005 $flatten\data_master.$ternary$tilelink_soc.v:4004$1004 $flatten\data_master.$ternary$tilelink_soc.v:4003$1003 $flatten\data_master.$ternary$tilelink_soc.v:4002$1002 $flatten\data_master.$ternary$tilelink_soc.v:4001$1001 $flatten\data_master.$ternary$tilelink_soc.v:4000$1000 $flatten\data_master.$ternary$tilelink_soc.v:3999$999 $flatten\data_master.$ternary$tilelink_soc.v:3998$998 $flatten\data_master.$ternary$tilelink_soc.v:3997$997 $flatten\data_master.$ternary$tilelink_soc.v:3996$996 $flatten\data_master.$ternary$tilelink_soc.v:3994$994 $flatten\data_master.$ternary$tilelink_soc.v:3993$993 $flatten\data_master.$ternary$tilelink_soc.v:3992$992 $flatten\data_master.$ternary$tilelink_soc.v:3991$991 $flatten\data_master.$ternary$tilelink_soc.v:3990$990 $flatten\data_master.$ternary$tilelink_soc.v:3989$989 $procmux$28657 $procmux$28655 $procmux$28651 $procmux$28649 $procmux$28644 $procmux$28645_CMP0 $procmux$28646_CMP0 $procmux$28647_CMP0 $procmux$28648_CMP0 $flatten\data_master.$ternary$tilelink_soc.v:3987$987 $flatten\data_master.$ternary$tilelink_soc.v:3986$986 $flatten\data_master.$ternary$tilelink_soc.v:3985$985 $flatten\data_master.$ternary$tilelink_soc.v:3983$983 $flatten\data_master.$ternary$tilelink_soc.v:3982$982 $flatten\data_master.$ternary$tilelink_soc.v:3981$981 $flatten\data_master.$ternary$tilelink_soc.v:3980$980 $flatten\data_master.$ternary$tilelink_soc.v:3979$979 $flatten\data_master.$ternary$tilelink_soc.v:3978$978 $flatten\data_master.$ternary$tilelink_soc.v:3977$977 $flatten\data_master.$ternary$tilelink_soc.v:3976$976 $flatten\data_master.$ternary$tilelink_soc.v:3975$975 $flatten\data_master.$ternary$tilelink_soc.v:3974$974 $flatten\data_master.$ternary$tilelink_soc.v:3972$972 $flatten\data_master.$ternary$tilelink_soc.v:3971$971 $flatten\data_master.$ternary$tilelink_soc.v:3970$970 $flatten\data_master.$ternary$tilelink_soc.v:3969$969 $flatten\data_master.$ternary$tilelink_soc.v:3968$968 $flatten\data_master.$ternary$tilelink_soc.v:3967$967 $flatten\data_master.$ternary$tilelink_soc.v:3966$966 $flatten\data_master.$ternary$tilelink_soc.v:3965$965 $flatten\data_master.$ternary$tilelink_soc.v:3964$964 $flatten\data_master.$ternary$tilelink_soc.v:3963$963 $flatten\data_master.$ternary$tilelink_soc.v:3961$961 $flatten\data_master.$ternary$tilelink_soc.v:3960$960 $flatten\data_master.$ternary$tilelink_soc.v:3959$959 $flatten\data_master.$ternary$tilelink_soc.v:3958$958 $flatten\data_master.$ternary$tilelink_soc.v:3957$957 $flatten\data_master.$ternary$tilelink_soc.v:3956$956 $flatten\data_master.$ternary$tilelink_soc.v:3955$955 $flatten\data_master.$ternary$tilelink_soc.v:3954$954 $flatten\data_master.$ternary$tilelink_soc.v:3953$953 $flatten\data_master.$ternary$tilelink_soc.v:3952$952 $flatten\data_master.$ternary$tilelink_soc.v:3950$950 $flatten\data_master.$ternary$tilelink_soc.v:3949$949 $flatten\data_master.$ternary$tilelink_soc.v:3948$948 $flatten\data_master.$ternary$tilelink_soc.v:3947$947 $flatten\data_master.$ternary$tilelink_soc.v:3946$946 $flatten\data_master.$ternary$tilelink_soc.v:3944$944 $flatten\data_master.$ternary$tilelink_soc.v:3943$943 $flatten\data_master.$ternary$tilelink_soc.v:3942$942 $flatten\data_master.$ternary$tilelink_soc.v:3941$941 $flatten\data_master.$ternary$tilelink_soc.v:3940$940 $flatten\data_master.$ternary$tilelink_soc.v:3938$938 $flatten\data_master.$ternary$tilelink_soc.v:3937$937 $flatten\data_master.$ternary$tilelink_soc.v:3936$936 $flatten\data_master.$ternary$tilelink_soc.v:3935$935 $flatten\data_master.$ternary$tilelink_soc.v:3934$934 $flatten\data_master.$ternary$tilelink_soc.v:3933$933 $flatten\data_master.$ternary$tilelink_soc.v:3932$932 $flatten\data_master.$ternary$tilelink_soc.v:3931$931 $flatten\data_master.$ternary$tilelink_soc.v:3930$930 $flatten\data_master.$ternary$tilelink_soc.v:3929$929 $flatten\data_master.$ternary$tilelink_soc.v:3927$927 $flatten\data_master.$ternary$tilelink_soc.v:3926$926 $flatten\data_master.$ternary$tilelink_soc.v:3925$925 $flatten\data_master.$ternary$tilelink_soc.v:3924$924 $flatten\data_master.$ternary$tilelink_soc.v:3923$923 $flatten\data_master.$ternary$tilelink_soc.v:3922$922 $flatten\data_master.$ternary$tilelink_soc.v:3921$921 $flatten\data_master.$ternary$tilelink_soc.v:3920$920 $flatten\data_master.$ternary$tilelink_soc.v:3919$919 $flatten\data_master.$ternary$tilelink_soc.v:3918$918 $flatten\data_master.$ternary$tilelink_soc.v:3916$916 $flatten\data_master.$ternary$tilelink_soc.v:3915$915 $flatten\data_master.$ternary$tilelink_soc.v:3914$914 $flatten\data_master.$ternary$tilelink_soc.v:3913$913 $flatten\data_master.$ternary$tilelink_soc.v:3912$912 $flatten\data_master.$ternary$tilelink_soc.v:3911$911 $flatten\data_master.$ternary$tilelink_soc.v:3910$910 $flatten\data_master.$ternary$tilelink_soc.v:3909$909 $flatten\data_master.$ternary$tilelink_soc.v:3908$908 $flatten\data_master.$ternary$tilelink_soc.v:3907$907 $flatten\data_master.$ternary$tilelink_soc.v:3905$905 $flatten\data_master.$ternary$tilelink_soc.v:3904$904 $flatten\data_master.$ternary$tilelink_soc.v:3903$903 $flatten\data_master.$ternary$tilelink_soc.v:3902$902 $flatten\data_master.$ternary$tilelink_soc.v:3901$901 $flatten\data_master.$ternary$tilelink_soc.v:3900$900 $flatten\data_master.$ternary$tilelink_soc.v:3899$899 $flatten\data_master.$ternary$tilelink_soc.v:3898$898 $flatten\data_master.$ternary$tilelink_soc.v:3897$897 $flatten\data_master.$ternary$tilelink_soc.v:3896$896 $flatten\data_master.$ternary$tilelink_soc.v:3894$894 $flatten\data_master.$ternary$tilelink_soc.v:3893$893 $flatten\data_master.$ternary$tilelink_soc.v:3892$892 $flatten\data_master.$ternary$tilelink_soc.v:3891$891 $flatten\data_master.$ternary$tilelink_soc.v:3890$890 $flatten\data_master.$ternary$tilelink_soc.v:4051$1051 $flatten\data_master.$ternary$tilelink_soc.v:4050$1050 $flatten\data_master.$ternary$tilelink_soc.v:4049$1049 $flatten\data_master.$ternary$tilelink_soc.v:4048$1048 $flatten\data_master.$ternary$tilelink_soc.v:4047$1047 $flatten\data_master.$ternary$tilelink_soc.v:4045$1045 $flatten\data_master.$ternary$tilelink_soc.v:4044$1044 $flatten\data_master.$ternary$tilelink_soc.v:4043$1043
	p_data__master_2e_read__data = (p_data__master_2e__24_79 ? (p_data__master_2e__24_79 ? (p_data__master_2e__24_341 ? (p_data__master_2e__24_79 ? (p_data__master_2e__24_341 ? p_tl__data__decoder_2e___bus____d____data : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_79 ? (p_data__master_2e__24_275 ? (p_data__master_2e__24_79 ? (p_data__master_2e__24_275 ? (p_data__master_2e_addr__local__bits.slice<1>().val() ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<31,16>()).val() : (not_u<1>(p_data__master_2e_addr__local__bits.slice<1>().val()) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<15,0>()).val() : value<32>{0u})) : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_79 ? (p_data__master_2e__24_81 ? (p_data__master_2e__24_79 ? (p_data__master_2e__24_81 ? (eq_uu<1>(p_data__master_2e_addr__local__bits, value<2>{0x3u}) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<31,24>()).val() : (eq_uu<1>(p_data__master_2e_addr__local__bits, value<2>{0x2u}) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<23,16>()).val() : (eq_uu<1>(p_data__master_2e_addr__local__bits, value<2>{0x1u}) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<15,8>()).val() : (logic_not<1>(p_data__master_2e_addr__local__bits) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<7,0>()).val() : value<32>{0u})))) : value<32>{0u}) : value<32>{0u}) : value<32>{0u}) : value<32>{0u})) : value<32>{0u})) : value<32>{0u}) : value<32>{0u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:120
	// cell $procmux$28575
	i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__data_5b_31_3a_0_5d_ = (p_data__master_2e_read__ptr.curr ? p_data__master_2e_data_24_63.curr : p_data__master_2e_data_24_62.curr);
	// connection
	p_data__master_2e__24_64 = p_data__master_2e_bus____d____valid;
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:352
	// cell $flatten\core.$and$tilelink_soc.v:1884$249
	i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y = and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____mem__enable.curr);
	// connection
	p_tl__periph_2e_bus____a____valid = p_tl__data__decoder_2e_bus____a____valid;
	// connection
	p_tl__periph_2e_bus____a____ready = i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_8946_24_1757__Y;
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:4006$1006
	p_data__master_2e__24_30 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:70
	// cell $flatten\instruction_master.$and$tilelink_soc.v:6649$1484
	p_instruction__master_2e__24_19 = and_uu<1>(p_instruction__master_2e_bus____a____valid, p_instruction__master_2e_bus____a____ready);
	// cells $procmux$27906 $procmux$27907_CMP0
	p_tl__periph_2e_bus____a____mask = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____mask : value<4>{0u});
	// connection
	p_data__master_2e_data__stream____rsp__ready = i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y;
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:99
	// cell $flatten\core.$not$tilelink_soc.v:1734$97
	p_instruction__master_2e_instruction__stream____rsp__ready = not_u<1>(p_core_2e_d__arbitration____halted__by__next);
	// cells $procmux$27903 $procmux$27904_CMP0
	p_tl__periph_2e_bus____a____address = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____address.slice<3,0>().val() : value<4>{0u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8903$1714 $flatten\tl_periph.$and$tilelink_soc.v:8892$1703 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8981$1794 $flatten\tl_periph.$logic_not$tilelink_soc.v:8965$1778 $flatten\tl_periph.$eq$tilelink_soc.v:8975$1788 $flatten\tl_periph.$and$tilelink_soc.v:8947$1758
	p_tl__periph_2e__24_11 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:399
	// cell $flatten\core.$reduce_or$tilelink_soc.v:1989$354
	p_core_2e__24_660 = reduce_or<1>(p_core_2e_d__control____rs2);
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:392
	// cell $flatten\core.$reduce_or$tilelink_soc.v:1934$299
	p_core_2e__24_560 = reduce_or<1>(p_core_2e_d__control____rs1);
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:186
	// cell $flatten\core.$ternary$tilelink_soc.v:1816$179
	i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1816_24_179__Y = (p_core_2e_x__rs2__is__forwarded.curr ? p_core_2e_x__rs2__value__forwarded.curr : p_core_2e___1__.curr);
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:185
	// cell $flatten\core.$ternary$tilelink_soc.v:1815$178
	i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1815_24_178__Y = (p_core_2e_x__rs1__is__forwarded.curr ? p_core_2e_x__rs1__value__forwarded.curr : p_core_2e___0__.curr);
	// cells $procmux$29053 $procmux$29054_CMP0 $procmux$29055_CMP0 $procmux$29056_CMP0 $procmux$28571 $procmux$28568 $procmux$28566 $flatten\data_master.$eq$tilelink_soc.v:4038$1038
	p_core_2e_w__write__data = (eq_uu<1>(p_core_2e_w__control____writeback__select.curr, value<2>{0x2u}) ? p_core_2e_w__muldiv__result.curr : (eq_uu<1>(p_core_2e_w__control____writeback__select.curr, value<2>{0x1u}) ? (p_data__master_2e__24_64 ? (p_data__master_2e__24_64 ? (eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr) ? p_data__master_2e_read__data : i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__data_5b_31_3a_0_5d_) : value<32>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_data__stream____rsp__data_5b_31_3a_0_5d_) : (logic_not<1>(p_core_2e_w__control____writeback__select.curr) ? p_core_2e_w__alu__result.curr : value<32>{0u})));
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:399
	// cell $flatten\core.$reduce_or$tilelink_soc.v:1961$326
	p_core_2e__24_610 = reduce_or<1>(p_core_2e_d__control____rs2);
	// \src: tilelink_soc.v:20513.8-20532.4|/home/michiel/tue/Thesis/tilelink-ecc-top/core/core.py:392
	// cell $flatten\core.$reduce_or$tilelink_soc.v:1906$271
	p_core_2e__24_510 = reduce_or<1>(p_core_2e_d__control____rs1);
	// cells $procmux$28461 $procmux$28455 $procmux$28453
	i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1077 = (p_data__master_2e__24_30 ? (p_data__master_2e__24_30 ? (p_data__master_2e_send__ptr.curr ? value<2>{0x1u} : p_data__master_2e_state_24_5.curr) : value<2>{0u}) : p_data__master_2e_state_24_5.curr);
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:125
	// cell $flatten\data_master.$and$tilelink_soc.v:4017$1017
	p_data__master_2e__24_32 = and_uu<1>(p_data__master_2e_data__stream____rsp__valid, p_data__master_2e_data__stream____rsp__ready);
	// cells $procmux$28458 $procmux$28448 $procmux$28446
	i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1078 = (p_data__master_2e__24_30 ? (p_data__master_2e__24_30 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_state.curr : value<2>{0x1u}) : value<2>{0u}) : p_data__master_2e_state.curr);
	// cells $procmux$28280 $procmux$28261 $procmux$28259
	i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1513 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? value<2>{0x1u} : p_instruction__master_2e_state_24_5.curr) : value<2>{0u}) : p_instruction__master_2e_state_24_5.curr);
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:84
	// cell $flatten\instruction_master.$and$tilelink_soc.v:6650$1485
	p_instruction__master_2e__24_21 = and_uu<1>(p_instruction__master_2e_instruction__stream____rsp__valid, p_instruction__master_2e_instruction__stream____rsp__ready);
	// cells $procmux$28277 $procmux$28254 $procmux$28252
	i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1514 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? p_instruction__master_2e_state.curr : value<2>{0x1u}) : value<2>{0u}) : p_instruction__master_2e_state.curr);
	// cells $procmux$28274 $procmux$28247 $procmux$28245
	i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1515 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? value<32>{0u} : p_instruction__master_2e_data_24_18.curr) : value<32>{0u}) : p_instruction__master_2e_data_24_18.curr);
	// cells $procmux$28271 $procmux$28268 $procmux$28266
	i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_1516 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? p_instruction__master_2e_data.curr : value<32>{0u}) : value<32>{0u}) : p_instruction__master_2e_data.curr);
	// cells $flatten\core.$or$tilelink_soc.v:1987$352 $flatten\core.$and$tilelink_soc.v:1986$351 $flatten\core.$or$tilelink_soc.v:1985$350 $flatten\core.$eq$tilelink_soc.v:1984$349 $flatten\core.$eq$tilelink_soc.v:1983$348 $flatten\core.$and$tilelink_soc.v:1982$347 $flatten\core.$and$tilelink_soc.v:1981$346 $flatten\core.$reduce_or$tilelink_soc.v:1980$345 $flatten\core.$and$tilelink_soc.v:1979$344 $flatten\core.$or$tilelink_soc.v:1978$343 $flatten\core.$eq$tilelink_soc.v:1976$341 $flatten\core.$eq$tilelink_soc.v:1975$340 $flatten\core.$and$tilelink_soc.v:1974$339 $flatten\core.$and$tilelink_soc.v:1973$338 $flatten\core.$reduce_or$tilelink_soc.v:1972$337
	p_core_2e__24_658 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2))));
	// cells $flatten\core.$or$tilelink_soc.v:1932$297 $flatten\core.$and$tilelink_soc.v:1931$296 $flatten\core.$or$tilelink_soc.v:1930$295 $flatten\core.$eq$tilelink_soc.v:1929$294 $flatten\core.$eq$tilelink_soc.v:1928$293 $flatten\core.$and$tilelink_soc.v:1927$292 $flatten\core.$and$tilelink_soc.v:1926$291 $flatten\core.$reduce_or$tilelink_soc.v:1925$290 $flatten\core.$and$tilelink_soc.v:1924$289 $flatten\core.$or$tilelink_soc.v:1923$288 $flatten\core.$eq$tilelink_soc.v:1921$286 $flatten\core.$eq$tilelink_soc.v:1920$285 $flatten\core.$and$tilelink_soc.v:1919$284 $flatten\core.$and$tilelink_soc.v:1918$283 $flatten\core.$reduce_or$tilelink_soc.v:1917$282
	p_core_2e__24_558 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2))));
	// cells $flatten\core.$or$tilelink_soc.v:1960$325 $flatten\core.$and$tilelink_soc.v:1959$324 $flatten\core.$or$tilelink_soc.v:1958$323 $flatten\core.$eq$tilelink_soc.v:1957$322 $flatten\core.$eq$tilelink_soc.v:1956$321 $flatten\core.$and$tilelink_soc.v:1954$319 $flatten\core.$and$tilelink_soc.v:1953$318 $flatten\core.$reduce_or$tilelink_soc.v:1952$317 $flatten\core.$and$tilelink_soc.v:1951$316 $flatten\core.$or$tilelink_soc.v:1950$315 $flatten\core.$eq$tilelink_soc.v:1949$314 $flatten\core.$eq$tilelink_soc.v:1948$313 $flatten\core.$and$tilelink_soc.v:1947$312 $flatten\core.$and$tilelink_soc.v:1946$311 $flatten\core.$reduce_or$tilelink_soc.v:1945$310
	p_core_2e__24_608 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2))));
	// cells $flatten\core.$or$tilelink_soc.v:1905$270 $flatten\core.$and$tilelink_soc.v:1904$269 $flatten\core.$or$tilelink_soc.v:1903$268 $flatten\core.$eq$tilelink_soc.v:1902$267 $flatten\core.$eq$tilelink_soc.v:1901$266 $flatten\core.$and$tilelink_soc.v:1900$265 $flatten\core.$and$tilelink_soc.v:1899$264 $flatten\core.$reduce_or$tilelink_soc.v:1898$263 $flatten\core.$and$tilelink_soc.v:1897$262 $flatten\core.$or$tilelink_soc.v:1896$261 $flatten\core.$eq$tilelink_soc.v:1895$260 $flatten\core.$eq$tilelink_soc.v:1894$259 $flatten\core.$and$tilelink_soc.v:1893$258 $flatten\core.$and$tilelink_soc.v:1892$257 $flatten\core.$reduce_or$tilelink_soc.v:1891$256
	p_core_2e__24_508 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_x__control____writeback__select.curr)), p_core_2e_x__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_m__control____writeback__select.curr)), p_core_2e_m__control____register__write.curr), or_uu<1>(eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2))));
	// cells $procmux$29432 $procmux$29433_CMP0 $procmux$29434_CMP0 $procmux$29435_CMP0
	p_core_2e_x__alu__right = (eq_uu<1>(p_core_2e_x__control____alu__right__select.curr, value<2>{0x2u}) ? value<32>{0x4u} : (eq_uu<1>(p_core_2e_x__control____alu__right__select.curr, value<2>{0x1u}) ? p_core_2e_x__control____immediate.curr : (logic_not<1>(p_core_2e_x__control____alu__right__select.curr) ? i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1816_24_179__Y : value<32>{0u})));
	// cells $procmux$29428 $procmux$29429_CMP0 $procmux$29430_CMP0
	p_core_2e_x__alu__left = (eq_uu<1>(p_core_2e_x__control____alu__left__select.curr, value<2>{0x1u}) ? p_core_2e_x__program__counter.curr : (logic_not<1>(p_core_2e_x__control____alu__left__select.curr) ? i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1815_24_178__Y : value<32>{0u}));
	// cells $flatten\core.$or$tilelink_soc.v:1922$287 $flatten\core.$and$tilelink_soc.v:2008$373 $flatten\core.$not$tilelink_soc.v:2007$372 $procmux$28024 $flatten\instruction_master.$and$tilelink_soc.v:6663$1498 $flatten\instruction_master.$logic_not$tilelink_soc.v:6662$1497 $flatten\instruction_master.$and$tilelink_soc.v:6657$1492 $flatten\instruction_master.$logic_not$tilelink_soc.v:6648$1483
	p_core_2e__24_53 = or_uu<1>(and_uu<1>(p_core_2e_f__arbitration____valid.curr, not_u<1>((p_instruction__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_instruction__master_2e_state_24_5.curr), p_instruction__master_2e_bus____a____ready) : and_uu<1>(logic_not<1>(p_instruction__master_2e_state.curr), p_instruction__master_2e_bus____a____ready)))), p_core_2e_f__arbitration____halted__by__next);
	// cells $procmux$27506 $procmux$27503 $procmux$27501 $procmux$27502_CMP0
	i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_1820 = (p_tl__periph_2e__24_11 ? (p_tl__periph_2e__24_11 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8952$1765 $flatten\tl_periph.$and$tilelink_soc.v:8951$1764 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8948$1759 $flatten\tl_periph.$logic_not$tilelink_soc.v:8930$1741 $flatten\tl_periph.$eq$tilelink_soc.v:8940$1751 $flatten\tl_periph.$and$tilelink_soc.v:8913$1724
	p_tl__periph_2e__24_23 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<1>().val());
	// cells $procmux$28441 $procmux$28435 $procmux$28433
	i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1081 = (p_data__master_2e__24_32 ? (p_data__master_2e__24_32 ? (p_data__master_2e_read__ptr.curr ? value<2>{0u} : i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1077) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1077);
	// cells $procmux$28438 $procmux$28428 $procmux$28426
	i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1082 = (p_data__master_2e__24_32 ? (p_data__master_2e__24_32 ? (p_data__master_2e_read__ptr.curr ? i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1078 : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1078);
	// cells $procmux$28240 $procmux$28221 $procmux$28219
	i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1521 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? value<2>{0u} : i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1513) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1513);
	// connection
	p_instruction__master_2e__24_27 = i_procmux_24_29259__Y;
	// cells $procmux$28237 $procmux$28214 $procmux$28212
	i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1522 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1514 : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1514);
	// cells $procmux$28234 $procmux$28207 $procmux$28205
	i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1523 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? value<32>{0u} : i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1515) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1515);
	// cells $procmux$28231 $procmux$28228 $procmux$28226
	i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1524 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_1516 : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_1516);
	// connection
	p_core_2e_a__arbitration____halted = p_core_2e__24_53;
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:164
	// cell $flatten\data_master.$eq$tilelink_soc.v:4025$1025
	p_data__master_2e__24_345 = eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr);
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:164
	// cell $flatten\data_master.$eq$tilelink_soc.v:4027$1027
	p_data__master_2e__24_36 = eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr);
	// \src: tilelink_soc.v:20561.22-20583.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/instruction_master.py:95
	// cell $flatten\instruction_master.$eq$tilelink_soc.v:6651$1486
	p_instruction__master_2e__24_25 = eq_uu<1>(p_instruction__master_2e_bus____d____source, p_instruction__master_2e_read__ptr.curr);
	// connection
	p_data__master_2e__24_343 = p_data__master_2e_bus____d____valid;
	// connection
	p_data__master_2e__24_34 = p_data__master_2e_bus____d____valid;
	// connection
	p_instruction__master_2e__24_23 = p_instruction__master_2e_bus____d____valid;
	// connection
	p_tl__ram_2e_wrapper_2e_req__in____valid = p_tl__ram__arbiter_2e_bus____a____valid;
	// cells $procmux$29455 $procmux$29456_CMP0 $procmux$29457_CMP0 $procmux$29458_CMP0 $procmux$29459_CMP0 $procmux$29460_CMP0 $procmux$29461_CMP0 $procmux$29462_CMP0 $procmux$29463_CMP0 $flatten\core.$and$tilelink_soc.v:1830$195 $flatten\core.$or$tilelink_soc.v:1829$194 $procmux$29441 $procmux$29442_CMP0 $procmux$29439 $flatten\core.$sshr$tilelink_soc.v:1826$191 $flatten\core.$sshr$tilelink_soc.v:1827$192 $flatten\core.$xor$tilelink_soc.v:1825$190 $flatten\core.$pos$tilelink_soc.v:1824$189 $flatten\core.$extend$tilelink_soc.v:1824$188 $flatten\core.$lt$tilelink_soc.v:1823$187 $flatten\core.$pos$tilelink_soc.v:1822$186 $flatten\core.$extend$tilelink_soc.v:1822$185 $flatten\core.$lt$tilelink_soc.v:1821$184 $flatten\core.$sshl$tilelink_soc.v:1820$183 $procmux$29453 $procmux$29454_CMP0 $procmux$29451 $flatten\core.$sub$tilelink_soc.v:1817$180 $flatten\core.$add$tilelink_soc.v:1819$182
	p_core_2e_x__alu__result = (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x7u}) ? and_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x6u}) ? or_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x5u}) ? (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x5u}) ? (p_core_2e_x__control____alu__mode__switch.curr ? sshr_su<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right.slice<4,0>().val()) : sshr_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right.slice<4,0>().val())) : value<32>{0u}) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x4u}) ? xor_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x3u}) ? pos_u<32>(pos_u<32>(lt_uu<1>(p_core_2e_x__alu__left, p_core_2e_x__alu__right))) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x2u}) ? pos_u<32>(pos_u<32>(lt_ss<1>(p_core_2e_x__alu__left, p_core_2e_x__alu__right))) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x1u}) ? sshl_uu<63>(p_core_2e_x__alu__left, p_core_2e_x__alu__right.slice<4,0>().val()).slice<31,0>().val() : (logic_not<1>(p_core_2e_x__control____alu__operation.curr) ? (logic_not<1>(p_core_2e_x__control____alu__operation.curr) ? (p_core_2e_x__control____alu__mode__switch.curr ? sub_uu<33>(p_core_2e_x__alu__left, p_core_2e_x__alu__right).slice<31,0>().val() : add_uu<33>(p_core_2e_x__alu__left, p_core_2e_x__alu__right).slice<31,0>().val()) : value<32>{0u}) : value<32>{0u}))))))));
	// cells $procmux$29238 $flatten\core.$and$tilelink_soc.v:1749$112 $flatten\core.$and$tilelink_soc.v:1748$111 $flatten\core.$not$tilelink_soc.v:1747$110 $procmux$29241 $flatten\core.$and$tilelink_soc.v:1746$109 $flatten\core.$not$tilelink_soc.v:1745$108 $flatten\core.$and$tilelink_soc.v:1744$107 $flatten\core.$eq$tilelink_soc.v:1743$106 $flatten\core.$and$tilelink_soc.v:1742$105 $flatten\core.$not$tilelink_soc.v:1740$103 $flatten\core.$and$tilelink_soc.v:1739$102 $flatten\core.$not$tilelink_soc.v:1738$101
	p_core_2e_a__arbitration____remove = (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? value<1>{0x1u} : (and_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_d__arbitration____valid.curr, not_u<1>(p_core_2e_d__arbitration____halted)), not_u<1>(p_core_2e_d__arbitration____remove)), eq_uu<1>(p_core_2e_d__control____branch__mode, value<2>{0x1u})), not_u<1>(p_core_2e_d__control____branch__type)) ? value<1>{0x1u} : value<1>{0u}));
	// cells $procmux$27739 $procmux$27740_CMP0
	p_tl__instr__decoder_2e_tl__instr__rom____a____valid = (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_instruction__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$27497 $procmux$27494 $procmux$27492 $procmux$27493_CMP0
	i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_1822 = (p_tl__periph_2e__24_23 ? (p_tl__periph_2e__24_23 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_1820) : value<1>{0u}) : i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_1820);
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8958$1771 $flatten\tl_periph.$and$tilelink_soc.v:8957$1770 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8956$1769 $flatten\tl_periph.$logic_not$tilelink_soc.v:8954$1767 $flatten\tl_periph.$eq$tilelink_soc.v:8955$1768 $flatten\tl_periph.$and$tilelink_soc.v:8953$1766
	p_tl__periph_2e__24_35 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<2>().val());
	// connection
	p_tl__ram_2e_wrapper_2e_req__out____ready = p_tl__ram_2e_controller_2e_req____ready;
	// cells $procmux$27855 $procmux$27856_CMP0
	p_tl__data__decoder_2e_tl__data__rom____a____valid = (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____valid : value<1>{0u});
	// connection
	p_core_2e_f__arbitration____halted = p_core_2e__24_53;
	// connection
	p_core_2e_x__arbitration____halted = p_core_2e__24_320;
	// cells $flatten\tl_ram.\wrapper.$and$tilelink_soc.v:21141$26726 $flatten\tl_ram.\wrapper.$not$tilelink_soc.v:21140$26725 $flatten\tl_ram.\wrapper.$reduce_and$tilelink_soc.v:21139$26724
	p_tl__ram_2e_wrapper_2e__24_35 = and_uu<1>(p_tl__ram_2e_wrapper_2e_req__in____write__en, not_u<1>(reduce_and<1>(p_tl__ram_2e_wrapper_2e_req__in____write__mask)));
	// cells $flatten\tl_ram.\wrapper.$and$tilelink_soc.v:21136$26721 $flatten\tl_ram.\wrapper.$not$tilelink_soc.v:21135$26720 $flatten\tl_ram.\wrapper.$reduce_and$tilelink_soc.v:21134$26719
	p_tl__ram_2e_wrapper_2e__24_27 = and_uu<1>(p_tl__ram_2e_wrapper_2e_req__in____write__en, not_u<1>(reduce_and<1>(p_tl__ram_2e_wrapper_2e_req__in____write__mask)));
	// cells $flatten\tl_ram.\wrapper.$and$tilelink_soc.v:21132$26717 $flatten\tl_ram.\wrapper.$not$tilelink_soc.v:21131$26716 $flatten\tl_ram.\wrapper.$reduce_and$tilelink_soc.v:21130$26715
	p_tl__ram_2e_wrapper_2e__24_19 = and_uu<1>(p_tl__ram_2e_wrapper_2e_req__in____write__en, not_u<1>(reduce_and<1>(p_tl__ram_2e_wrapper_2e_req__in____write__mask)));
	// cells $flatten\tl_ram.\wrapper.$and$tilelink_soc.v:21128$26713 $flatten\tl_ram.\wrapper.$not$tilelink_soc.v:21127$26712 $flatten\tl_ram.\wrapper.$reduce_and$tilelink_soc.v:21145$26730
	p_tl__ram_2e_wrapper_2e__24_11 = and_uu<1>(p_tl__ram_2e_wrapper_2e_req__in____write__en, not_u<1>(reduce_and<1>(p_tl__ram_2e_wrapper_2e_req__in____write__mask)));
	// cells $procmux$28897 $flatten\core.$and$tilelink_soc.v:1866$231 $flatten\core.$and$tilelink_soc.v:1865$230 $flatten\core.$not$tilelink_soc.v:1864$229
	p_core_2e_x__arbitration____remove = (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? value<1>{0x1u} : value<1>{0u});
	// connection
	p_core_2e_x__rs1__value = i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1815_24_178__Y;
	// connection
	p_core_2e_x__rs2__value = i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1816_24_179__Y;
	// connection
	p_data__master_2e_bus____a____source = p_data__master_2e_send__ptr.curr;
	// connection
	p_data__master_2e_bus____a____size = p_core_2e_m__control____mem__size.curr;
	// cells $procmux$26778 $procmux$26781
	p_tl__rom__arbiter_2e_bus____a____valid = (p_tl__rom__arbiter_2e_rr__grant ? p_tl__data__decoder_2e_tl__data__rom____a____valid : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : p_tl__instr__decoder_2e_tl__instr__rom____a____valid));
	// connection
	p_tl__ram__arbiter_2e_rr_2e_requests = p_tl__data__decoder_2e_tl__data__ram____a____valid.concat(p_tl__instr__decoder_2e_tl__instr__ram____a____valid).val();
	// connection
	p_tl__rom__arbiter_2e_rr_2e_requests = p_tl__data__decoder_2e_tl__data__rom____a____valid.concat(p_tl__instr__decoder_2e_tl__instr__rom____a____valid).val();
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:4032$1032
	p_data__master_2e__24_47 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:4031$1031
	p_data__master_2e__24_44 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// \src: tilelink_soc.v:20533.15-20560.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:4030$1030
	p_data__master_2e__24_41 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// cells $procmux$27900 $procmux$27901_CMP0
	p_tl__data__decoder_2e_bus____a____source = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____source : value<1>{0u});
	// cells $procmux$27897 $procmux$27898_CMP0
	p_tl__data__decoder_2e_bus____a____size = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____size : value<2>{0u});
	// cells $procmux$27909 $procmux$27910_CMP0
	p_tl__data__decoder_2e_bus____a____data = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____data : value<32>{0u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8924$1735 $flatten\tl_periph.$and$tilelink_soc.v:8923$1734 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8922$1733 $flatten\tl_periph.$logic_not$tilelink_soc.v:8920$1731 $flatten\tl_periph.$eq$tilelink_soc.v:8921$1732 $flatten\tl_periph.$and$tilelink_soc.v:8919$1730
	p_tl__periph_2e__24_158 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8898$1709 $flatten\tl_periph.$and$tilelink_soc.v:8897$1708 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8896$1707 $flatten\tl_periph.$logic_not$tilelink_soc.v:8894$1705 $flatten\tl_periph.$eq$tilelink_soc.v:8895$1706 $flatten\tl_periph.$and$tilelink_soc.v:8893$1704
	p_tl__periph_2e__24_110 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// \src: tilelink_soc.v:20723.13-20746.4|/home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:38
	// cell $flatten\tl_periph.$add$tilelink_soc.v:8966$1779
	i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y = add_uu<65>(p_tl__periph_2e_cycle__count.curr, value<1>{0x1u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8972$1785 $flatten\tl_periph.$and$tilelink_soc.v:8971$1784 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8970$1783 $flatten\tl_periph.$logic_not$tilelink_soc.v:8968$1781 $flatten\tl_periph.$eq$tilelink_soc.v:8969$1782 $flatten\tl_periph.$and$tilelink_soc.v:8967$1780
	p_tl__periph_2e__24_62 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8979$1792 $flatten\tl_periph.$and$tilelink_soc.v:8978$1791 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8977$1790 $flatten\tl_periph.$logic_not$tilelink_soc.v:8974$1787 $flatten\tl_periph.$eq$tilelink_soc.v:8976$1789 $flatten\tl_periph.$and$tilelink_soc.v:8973$1786
	p_tl__periph_2e__24_74 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<1>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8986$1799 $flatten\tl_periph.$and$tilelink_soc.v:8985$1798 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8984$1797 $flatten\tl_periph.$logic_not$tilelink_soc.v:8982$1795 $flatten\tl_periph.$eq$tilelink_soc.v:8983$1796 $flatten\tl_periph.$and$tilelink_soc.v:8980$1793
	p_tl__periph_2e__24_86 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<2>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8992$1805 $flatten\tl_periph.$and$tilelink_soc.v:8991$1804 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8990$1803 $flatten\tl_periph.$logic_not$tilelink_soc.v:8988$1801 $flatten\tl_periph.$eq$tilelink_soc.v:8989$1802 $flatten\tl_periph.$and$tilelink_soc.v:8987$1800
	p_tl__periph_2e__24_98 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<3>().val());
	// cells $procmux$27488 $procmux$27485 $procmux$27483 $procmux$27484_CMP0
	i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_1824 = (p_tl__periph_2e__24_35 ? (p_tl__periph_2e__24_35 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_1822) : value<1>{0u}) : i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_1822);
	// cells $flatten\tl_periph.$and$tilelink_soc.v:8964$1777 $flatten\tl_periph.$and$tilelink_soc.v:8963$1776 $flatten\tl_periph.$reduce_or$tilelink_soc.v:8962$1775 $flatten\tl_periph.$logic_not$tilelink_soc.v:8960$1773 $flatten\tl_periph.$eq$tilelink_soc.v:8961$1774 $flatten\tl_periph.$and$tilelink_soc.v:8959$1772
	p_tl__periph_2e__24_47 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<3>().val());
	// cells $procmux$26874 $procmux$28011 $procmux$28012_CMP0 $procmux$26877 $procmux$27836 $procmux$27837_CMP0
	p_tl__rom__arbiter_2e_bus____a____address = (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____address.slice<14,0>().val() : value<15>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<15>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_core_2e_f__program__counter.curr.slice<14,0>().val() : value<15>{0u})));
	// cells $procmux$29465 $procmux$29466_CMP0 $procmux$29467_CMP0 $procmux$29468_CMP0 $procmux$29469_CMP0 $flatten\core.$mul$tilelink_soc.v:1834$199 $flatten\core.$mul$tilelink_soc.v:1833$198 $flatten\core.$mul$tilelink_soc.v:1832$197 $flatten\core.$mul$tilelink_soc.v:1831$196
	p_core_2e_x__muldiv__intermediate = (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x3u}) ? mul_uu<64>(p_core_2e_x__rs1__value, p_core_2e_x__rs2__value) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x2u}) ? mul_ss<64>(p_core_2e_x__rs1__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs1__value).val(), p_core_2e_x__rs2__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs2__value).val()) : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x1u}) ? mul_ss<64>(p_core_2e_x__rs1__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs1__value).val(), p_core_2e_x__rs2__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs2__value).val()) : (logic_not<1>(p_core_2e_x__control____alu__operation.curr) ? mul_uu<64>(p_core_2e_x__rs1__value, p_core_2e_x__rs2__value) : value<64>{0u,0u}))));
	// connection
	p_tl__rom_2e_bus____a____ready = i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_18880_24_10217__Y;
	// cells $flatten\core.$and$tilelink_soc.v:1801$164 $flatten\core.$not$tilelink_soc.v:1800$163 $flatten\core.$not$tilelink_soc.v:1799$162
	p_core_2e__24_237 = and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove));
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27732_CMP0
	i_procmux_24_27732__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27732_CMP1
	i_procmux_24_27732__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27715_CMP0
	i_procmux_24_27715__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27715_CMP1
	i_procmux_24_27715__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27698_CMP0
	i_procmux_24_27698__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27698_CMP1
	i_procmux_24_27698__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27681_CMP0
	i_procmux_24_27681__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27681_CMP1
	i_procmux_24_27681__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27619_CMP0
	i_procmux_24_27619__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27619_CMP1
	i_procmux_24_27619__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27602_CMP0
	i_procmux_24_27602__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/tue/Thesis/tilelink-ecc-top/tilelink_soc.py:67
	// cell $procmux$27602_CMP1
	i_procmux_24_27602__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// connection
	p_tl__ram_2e_bus____a____ready = p_tl__ram_2e_wrapper_2e_req__in____ready;
	// cells $flatten\core.$and$tilelink_soc.v:1890$255 $flatten\core.$and$tilelink_soc.v:1889$254 $flatten\core.$not$tilelink_soc.v:1888$253
	p_core_2e_register__file__w__en = and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, not_u<1>(p_core_2e_w__arbitration____halted)), p_core_2e_w__control____register__write.curr);
	// connection
	p_core_2e_rst = p_rst;
	// connection
	p_data__master_2e_rst = p_rst;
	// connection
	p_instruction__master_2e_rst = p_rst;
	// connection
	p_tl__periph_2e_rst = p_rst;
	// connection
	p_tl__ram_2e_wrapper_2e_rst = p_tl__ram_2e_rst;
	// connection
	p_tl__ram_2e_controller_2e_rst = p_tl__ram_2e_rst;
	// connection
	p_tl__ram__arbiter_2e_rr_2e_rst = p_rst;
	// connection
	p_tl__rom_2e_rst = p_rst;
	// connection
	p_tl__rom__arbiter_2e_rr_2e_rst = p_rst;
	// \full_case: 1
	// \src: tilelink_soc.v:1715.5-1716.67
	// cell $procmux$28854
	i_procmux_24_28854__Y = (p_core_2e_register__file__w__en ? p_core_2e_w__control____rd.curr : value<5>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:1715.5-1716.67
	// cell $procmux$28851
	i_procmux_24_28851__Y = (p_core_2e_register__file__w__en ? p_core_2e_w__write__data : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:1715.5-1716.67
	// cell $procmux$28848
	i_procmux_24_28848__Y = (p_core_2e_register__file__w__en ? value<32>{0xffffffffu} : value<32>{0u});
	// \src: tilelink_soc.v:20831.10-20853.4|tilelink_soc.v:18874.14-18874.20
	// memory \tl_rom.memory read port 0
	auto tmp_0 = memory_index(p_tl__rom__arbiter_2e_bus____a____address.slice<14,2>().val(), 0, 8192);
	CXXRTL_ASSERT(tmp_0.valid && "out of bounds read");
	if(tmp_0.valid) {
		i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_18874_24_10214__DATA = memory_p_tl__rom_2e_memory[tmp_0.index];
	} else {
		i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_18874_24_10214__DATA = value<32> {};
	}
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1722.14-1722.27
	// memory \core.register_file read port 0
	auto tmp_1 = memory_index(p_core_2e_d__control____rs1, 0, 32);
	CXXRTL_ASSERT(tmp_1.valid && "out of bounds read");
	if(tmp_1.valid) {
		value<32> tmp_2 = memory_p_core_2e_register__file[tmp_1.index];
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1722_24_91__DATA = tmp_2;
	} else {
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1722_24_91__DATA = value<32> {};
	}
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1725.14-1725.27
	// memory \core.register_file read port 1
	auto tmp_3 = memory_index(p_core_2e_d__control____rs2, 0, 32);
	CXXRTL_ASSERT(tmp_3.valid && "out of bounds read");
	if(tmp_3.valid) {
		value<32> tmp_4 = memory_p_core_2e_register__file[tmp_3.index];
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1725_24_92__DATA = tmp_4;
	} else {
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1725_24_92__DATA = value<32> {};
	}
	// connection
	p_core_2e_clk = p_clk;
	// connection
	p_tl__rom__arbiter_2e_rr_2e_clk = p_clk;
	// connection
	p_tl__rom_2e_clk = p_clk;
	// connection
	p_tl__ram__arbiter_2e_rr_2e_clk = p_clk;
	// connection
	p_tl__ram_2e_controller_2e_clk = p_tl__ram_2e_clk;
	// connection
	p_tl__ram_2e_wrapper_2e_clk = p_tl__ram_2e_clk;
	// connection
	p_tl__periph_2e_clk = p_clk;
	// connection
	p_instruction__master_2e_clk = p_clk;
	// connection
	p_data__master_2e_clk = p_clk;
	// \src: tilelink_soc.v:1716.7-1716.66
	// memory \core.register_file write port 0
	if (posedge_p_clk) {
		auto tmp_5 = memory_index(i_procmux_24_28854__Y, 0, 32);
		CXXRTL_ASSERT(tmp_5.valid && "out of bounds write");
		if (tmp_5.valid) {
			memory_p_core_2e_register__file.update(tmp_5.index, i_procmux_24_28851__Y, i_procmux_24_28848__Y, 0);
		}
	}
	// cells $procdff$29842 $procmux$28978 $procmux$28984
	if (posedge_p_clk) {
		p_core_2e_w__control____rs1.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____rs1.curr : p_core_2e_m__control____rs1.curr));
	}
	// cells $procdff$29843 $procmux$28975 $procmux$28981
	if (posedge_p_clk) {
		p_core_2e_w__control____rs2.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____rs2.curr : p_core_2e_m__control____rs2.curr));
	}
	// cells $procdff$29852 $procmux$28948 $procmux$29008
	if (posedge_p_clk) {
		p_core_2e_w__control____branch__type.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____branch__type.curr : p_core_2e_m__control____branch__type.curr));
	}
	// cells $procdff$29856 $procmux$28936 $procmux$28993
	if (posedge_p_clk) {
		p_core_2e_w__control____mem__unsigned.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____mem__unsigned.curr : p_core_2e_m__control____mem__unsigned.curr));
	}
	// cells $procdff$29858 $procmux$28930 $procmux$28990
	if (posedge_p_clk) {
		p_core_2e_w__control____writeback__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____writeback__select.curr : p_core_2e_m__control____writeback__select.curr));
	}
	// cells $procdff$29868 $procmux$29568 $procmux$29574
	if (posedge_p_clk) {
		p_core_2e_m__control____rs2.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____rs2.curr : p_core_2e_x__control____rs2.curr));
	}
	// cells $procdff$29872 $procmux$29556 $procmux$29613
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__mode__switch.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____alu__mode__switch.curr : p_core_2e_x__control____alu__mode__switch.curr));
	}
	// cells $procdff$29874 $procmux$29550 $procmux$29619
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__left__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____alu__left__select.curr : p_core_2e_x__control____alu__left__select.curr));
	}
	// cells $procdff$29840 $procmux$29047 $procmux$29050
	if (posedge_p_clk) {
		p_core_2e_w__muldiv__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__muldiv__result.curr : p_core_2e_m__muldiv__result.curr));
	}
	// cells $procdff$29841 $procmux$29041 $procmux$29044
	if (posedge_p_clk) {
		p_core_2e_w__alu__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__alu__result.curr : p_core_2e_m__alu__result.curr));
	}
	// cells $procdff$29844 $procmux$28972 $procmux$29005
	if (posedge_p_clk) {
		p_core_2e_w__control____rd.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____rd.curr : p_core_2e_m__control____rd.curr));
	}
	// cells $procdff$29847 $procmux$28963 $procmux$29020
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__mode__switch.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____alu__mode__switch.curr : p_core_2e_m__control____alu__mode__switch.curr));
	}
	// cells $procdff$29848 $procmux$28960 $procmux$29023
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__muldiv.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____alu__muldiv.curr : p_core_2e_m__control____alu__muldiv.curr));
	}
	// cells $procdff$29850 $procmux$28954 $procmux$29014
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__right__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____alu__right__select.curr : p_core_2e_m__control____alu__right__select.curr));
	}
	// cells $procdff$29854 $procmux$28942 $procmux$28999
	if (posedge_p_clk) {
		p_core_2e_w__control____mem__we.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____mem__we.curr : p_core_2e_m__control____mem__we.curr));
	}
	// cells $procdff$29866 $procmux$28864 $procmux$28867
	if (posedge_p_clk) {
		p_core_2e_m__alu__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__alu__result.curr : p_core_2e_x__alu__result));
	}
	// cells $procdff$29870 $procmux$29562 $procmux$29610
	if (posedge_p_clk) {
		p_core_2e_m__control____immediate.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____immediate.curr : p_core_2e_x__control____immediate.curr));
	}
	// cells $procdff$29845 $procmux$28969 $procmux$29017
	if (posedge_p_clk) {
		p_core_2e_w__control____immediate.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____immediate.curr : p_core_2e_m__control____immediate.curr));
	}
	// cells $procdff$29846 $procmux$28966 $procmux$29029
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__operation.next = (p_core_2e_rst ? value<3>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____alu__operation.curr : p_core_2e_m__control____alu__operation.curr));
	}
	// cells $procdff$29859 $procmux$28924 $procmux$28927
	if (posedge_p_clk) {
		p_core_2e_w__instruction.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__instruction.curr : p_core_2e_m__instruction.curr));
	}
	// cells $procdff$29849 $procmux$28957 $procmux$29026
	if (posedge_p_clk) {
		p_core_2e_w__control____alu__left__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____alu__left__select.curr : p_core_2e_m__control____alu__left__select.curr));
	}
	// cells $procdff$29851 $procmux$28951 $procmux$29011
	if (posedge_p_clk) {
		p_core_2e_w__control____branch__mode.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____branch__mode.curr : p_core_2e_m__control____branch__mode.curr));
	}
	// cells $procdff$29853 $procmux$28945 $procmux$29002
	if (posedge_p_clk) {
		p_core_2e_w__control____mem__enable.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____mem__enable.curr : p_core_2e_m__control____mem__enable.curr));
	}
	// cells $procdff$29855 $procmux$28939 $procmux$28996
	if (posedge_p_clk) {
		p_core_2e_w__control____mem__size.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____mem__size.curr : p_core_2e_m__control____mem__size.curr));
	}
	// cells $procdff$29857 $procmux$28933 $procmux$28987
	if (posedge_p_clk) {
		p_core_2e_w__control____register__write.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__control____register__write.curr : p_core_2e_m__control____register__write.curr));
	}
	// cells $procdff$29860 $procmux$28918 $procmux$28921
	if (posedge_p_clk) {
		p_core_2e_w__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__program__counter.curr : p_core_2e_m__program__counter.curr));
	}
	// cells $procdff$29861 $procmux$28900 $procmux$28903 $procmux$28906
	if (posedge_p_clk) {
		p_core_2e_w__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1887_24_252__Y ? p_core_2e_w__arbitration____valid.curr : value<1>{0u}) : p_core_2e_m__arbitration____valid.curr));
	}
	// cells $procdff$29862 $procmux$28888 $procmux$28891 $procmux$29489 $procmux$29491_CMP0 $flatten\core.$add$tilelink_soc.v:1842$207 $flatten\core.$add$tilelink_soc.v:1841$206
	if (posedge_p_clk) {
		p_core_2e_m__branch__target.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__branch__target.curr : (p_core_2e_x__control____branch__type.curr ? add_uu<33>(p_core_2e_x__rs1__value, p_core_2e_x__control____immediate.curr).slice<31,0>().val() : (not_u<1>(p_core_2e_x__control____branch__type.curr) ? add_uu<33>(p_core_2e_x__program__counter.curr, p_core_2e_x__control____immediate.curr).slice<31,0>().val() : value<32>{0u}))));
	}
	// cells $procdff$29863 $procmux$28882 $procmux$28885 $procmux$29487 $flatten\core.$eq$tilelink_soc.v:1835$200 $procmux$29485 $flatten\core.$eq$tilelink_soc.v:1836$201 $flatten\core.$logic_not$tilelink_soc.v:1839$204 $procmux$29483 $flatten\core.$eq$tilelink_soc.v:1837$202 $flatten\core.$reduce_or$tilelink_soc.v:1840$205
	if (posedge_p_clk) {
		p_core_2e_m__branch__taken.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__branch__taken.curr : (eq_uu<1>(p_core_2e_x__control____branch__mode.curr, value<2>{0x1u}) ? p_core_2e_x__control____branch__type.curr : (eq_uu<1>(p_core_2e_x__control____branch__mode.curr, value<2>{0x2u}) ? logic_not<1>(p_core_2e_x__alu__result) : (eq_uu<1>(p_core_2e_x__control____branch__mode.curr, value<2>{0x3u}) ? reduce_or<1>(p_core_2e_x__alu__result) : value<1>{0u})))));
	}
	// cells $procdff$29864 $procmux$28876 $procmux$28879
	if (posedge_p_clk) {
		p_core_2e_m__rs2__value.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__rs2__value.curr : i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1816_24_179__Y));
	}
	// cells $procdff$29865 $procmux$28870 $procmux$28873 $procmux$29471 $procmux$29472_CMP0 $procmux$29473_CMP0 $procmux$29474_CMP0 $procmux$29475_CMP0
	if (posedge_p_clk) {
		p_core_2e_m__muldiv__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__muldiv__result.curr : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x3u}) ? p_core_2e_x__muldiv__intermediate.slice<63,32>().val() : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x2u}) ? p_core_2e_x__muldiv__intermediate.slice<63,32>().val() : (eq_uu<1>(p_core_2e_x__control____alu__operation.curr, value<3>{0x1u}) ? p_core_2e_x__muldiv__intermediate.slice<63,32>().val() : (logic_not<1>(p_core_2e_x__control____alu__operation.curr) ? p_core_2e_x__muldiv__intermediate.slice<31,0>().val() : value<32>{0u}))))));
	}
	// cells $procdff$29867 $procmux$29571 $procmux$29577
	if (posedge_p_clk) {
		p_core_2e_m__control____rs1.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____rs1.curr : p_core_2e_x__control____rs1.curr));
	}
	// cells $procdff$29869 $procmux$29565 $procmux$29598
	if (posedge_p_clk) {
		p_core_2e_m__control____rd.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____rd.curr : p_core_2e_x__control____rd.curr));
	}
	// cells $procdff$29871 $procmux$29559 $procmux$29622
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__operation.next = (p_core_2e_rst ? value<3>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____alu__operation.curr : p_core_2e_x__control____alu__operation.curr));
	}
	// cells $procdff$29873 $procmux$29553 $procmux$29616
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__muldiv.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____alu__muldiv.curr : p_core_2e_x__control____alu__muldiv.curr));
	}
	// cells $procdff$29875 $procmux$29547 $procmux$29607
	if (posedge_p_clk) {
		p_core_2e_m__control____alu__right__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____alu__right__select.curr : p_core_2e_x__control____alu__right__select.curr));
	}
	// cells $procdff$29730 $procmux$26895 $procmux$26908 $procmux$26910_CMP0 $procmux$26900 $procmux$26898 $procmux$26906 $procmux$26904
	if (posedge_p_clk) {
		p_tl__rom__arbiter_2e_rr_2e_grant.next = (p_tl__rom__arbiter_2e_rr_2e_rst ? value<1>{0u} : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? (p_tl__rom__arbiter_2e_rr_2e_requests.slice<0>().val() ? value<1>{0u} : p_tl__rom__arbiter_2e_rr_2e_grant.curr) : value<1>{0u}) : (not_u<1>(p_tl__rom__arbiter_2e_rr_2e_grant.curr) ? (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : (p_tl__rom__arbiter_2e_rr_2e_requests.slice<1>().val() ? value<1>{0x1u} : p_tl__rom__arbiter_2e_rr_2e_grant.curr)) : value<1>{0u})));
	}
	// cells $procdff$29731 $procmux$26892 $flatten\tl_rom_arbiter.\rr.$reduce_or$tilelink_soc.v:7043$1603
	if (posedge_p_clk) {
		p_tl__rom__arbiter_2e_rr_2e_valid.next = (p_tl__rom__arbiter_2e_rr_2e_rst ? value<1>{0u} : reduce_or<1>(p_tl__rom__arbiter_2e_rr_2e_requests));
	}
	// cells $procdff$29732 $procmux$26911 $flatten\tl_rom.$and$tilelink_soc.v:18878$10215
	if (posedge_p_clk) {
		p_tl__rom_2e___0__.next = (and_uu<1>(p_tl__rom__arbiter_2e_bus____a____valid, p_tl__rom_2e_bus____a____ready) ? i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_18874_24_10214__DATA : p_tl__rom_2e___0__.curr);
	}
	// cells $procdff$29733 $procmux$26941 $procmux$26956 $procmux$26847 $procmux$27996 $procmux$27997_CMP0 $procmux$26850 $procmux$27822 $procmux$27823_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____opcode.next = (p_tl__rom_2e_rst ? value<3>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____opcode : value<3>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<3>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? value<3>{0x4u} : value<3>{0u}))) : p_tl__rom_2e_last__a____opcode.curr));
	}
	// cells $procdff$29734 $procmux$26938 $procmux$26953
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____param.next = (p_tl__rom_2e_rst ? value<3>{0u} : (p_tl__rom_2e_bus____a____ready ? value<3>{0u} : p_tl__rom_2e_last__a____param.curr));
	}
	// cells $procdff$29735 $procmux$26935 $procmux$26947 $procmux$26862 $procmux$28005 $procmux$28006_CMP0 $procmux$26865 $procmux$27830 $procmux$27831_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____size.next = (p_tl__rom_2e_rst ? value<2>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____size : value<2>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? value<2>{0x2u} : value<2>{0u}))) : p_tl__rom_2e_last__a____size.curr));
	}
	// cells $procdff$29736 $procmux$26932 $procmux$26944 $procmux$26868 $procmux$28008 $procmux$28009_CMP0 $procmux$26871 $procmux$27833 $procmux$27834_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____source.next = (p_tl__rom_2e_rst ? value<2>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? value<1>{0x1u}.concat((logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____source : value<1>{0u})).val() : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : value<1>{0u}.concat((logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_instruction__master_2e_send__ptr.curr : value<1>{0u})).val())) : p_tl__rom_2e_last__a____source.curr));
	}
	// cells $procdff$29737 $procmux$26929 $procmux$26968
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____address.next = (p_tl__rom_2e_rst ? value<15>{0u} : (p_tl__rom_2e_bus____a____ready ? p_tl__rom__arbiter_2e_bus____a____address : p_tl__rom_2e_last__a____address.curr));
	}
	// cells $procdff$29738 $procmux$26926 $procmux$26959 $procmux$26880 $procmux$28014 $procmux$28015_CMP0 $procmux$26883 $procmux$27839 $procmux$27840_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____mask.next = (p_tl__rom_2e_rst ? value<4>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____mask : value<4>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<4>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? value<4>{0xfu} : value<4>{0u}))) : p_tl__rom_2e_last__a____mask.curr));
	}
	// cells $procdff$29739 $procmux$26923 $procmux$26971 $procmux$26886 $procmux$27858 $procmux$27859_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____data.next = (p_tl__rom_2e_rst ? value<32>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____data : value<32>{0u}) : value<32>{0u}) : p_tl__rom_2e_last__a____data.curr));
	}
	// cells $procdff$29740 $procmux$26920 $procmux$26962
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____corrupt.next = (p_tl__rom_2e_rst ? value<1>{0u} : (p_tl__rom_2e_bus____a____ready ? value<1>{0u} : p_tl__rom_2e_last__a____corrupt.curr));
	}
	// cells $procdff$29741 $procmux$26917 $procmux$26950
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____valid.next = (p_tl__rom_2e_rst ? value<1>{0u} : (p_tl__rom_2e_bus____a____ready ? p_tl__rom__arbiter_2e_bus____a____valid : p_tl__rom_2e_last__a____valid.curr));
	}
	// cells $procdff$29742 $procmux$26914 $procmux$26965
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____ready.next = (p_tl__rom_2e_rst ? value<1>{0u} : (p_tl__rom_2e_bus____a____ready ? i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_18880_24_10217__Y : p_tl__rom_2e_last__a____ready.curr));
	}
	// cells $procdff$29743 $procmux$27118 $procmux$27131 $procmux$27133_CMP0 $procmux$27123 $procmux$27121 $procmux$27129 $procmux$27127
	if (posedge_p_clk) {
		p_tl__ram__arbiter_2e_rr_2e_grant.next = (p_tl__ram__arbiter_2e_rr_2e_rst ? value<1>{0u} : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? (p_tl__ram__arbiter_2e_rr_2e_requests.slice<0>().val() ? value<1>{0u} : p_tl__ram__arbiter_2e_rr_2e_grant.curr) : value<1>{0u}) : (not_u<1>(p_tl__ram__arbiter_2e_rr_2e_grant.curr) ? (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : (p_tl__ram__arbiter_2e_rr_2e_requests.slice<1>().val() ? value<1>{0x1u} : p_tl__ram__arbiter_2e_rr_2e_grant.curr)) : value<1>{0u})));
	}
	// cells $procdff$29744 $procmux$27115 $flatten\tl_ram_arbiter.\rr.$reduce_or$tilelink_soc.v:7109$1618
	if (posedge_p_clk) {
		p_tl__ram__arbiter_2e_rr_2e_valid.next = (p_tl__ram__arbiter_2e_rr_2e_rst ? value<1>{0u} : reduce_or<1>(p_tl__ram__arbiter_2e_rr_2e_requests));
	}
	// cells $procdff$29745 $procmux$27162 $procmux$27177
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____opcode.next = (p_tl__ram_2e_rst ? value<3>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____opcode : p_tl__ram_2e_last__a____opcode.curr));
	}
	// cells $procdff$29746 $procmux$27159 $procmux$27174
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____param.next = (p_tl__ram_2e_rst ? value<3>{0u} : (p_tl__ram_2e_bus____a____ready ? value<3>{0u} : p_tl__ram_2e_last__a____param.curr));
	}
	// cells $procdff$29747 $procmux$27156 $procmux$27168 $procmux$27085 $procmux$27870 $procmux$27871_CMP0 $procmux$27088 $procmux$27750 $procmux$27751_CMP0
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____size.next = (p_tl__ram_2e_rst ? value<2>{0u} : (p_tl__ram_2e_bus____a____ready ? (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____size : value<2>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? value<2>{0x2u} : value<2>{0u}))) : p_tl__ram_2e_last__a____size.curr));
	}
	// cells $procdff$29748 $procmux$27153 $procmux$27165 $procmux$27091 $procmux$27873 $procmux$27874_CMP0 $procmux$27094 $procmux$27753 $procmux$27754_CMP0
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____source.next = (p_tl__ram_2e_rst ? value<2>{0u} : (p_tl__ram_2e_bus____a____ready ? (p_tl__ram__arbiter_2e_rr__grant ? value<1>{0x1u}.concat((eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____source : value<1>{0u})).val() : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : value<1>{0u}.concat((eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_instruction__master_2e_send__ptr.curr : value<1>{0u})).val())) : p_tl__ram_2e_last__a____source.curr));
	}
	// cells $procdff$29749 $procmux$27150 $procmux$27189
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____address.next = (p_tl__ram_2e_rst ? value<15>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____address : p_tl__ram_2e_last__a____address.curr));
	}
	// cells $procdff$29750 $procmux$27147 $procmux$27180
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____mask.next = (p_tl__ram_2e_rst ? value<4>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____mask : p_tl__ram_2e_last__a____mask.curr));
	}
	// cells $procdff$29751 $procmux$27144 $procmux$27192
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____data.next = (p_tl__ram_2e_rst ? value<32>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____data : p_tl__ram_2e_last__a____data.curr));
	}
	// cells $procdff$29752 $procmux$27141 $procmux$27183
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____corrupt.next = (p_tl__ram_2e_rst ? value<1>{0u} : (p_tl__ram_2e_bus____a____ready ? value<1>{0u} : p_tl__ram_2e_last__a____corrupt.curr));
	}
	// cells $procdff$29753 $procmux$27138 $procmux$27171
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____valid.next = (p_tl__ram_2e_rst ? value<1>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____valid : p_tl__ram_2e_last__a____valid.curr));
	}
	// cells $procdff$29754 $procmux$27135 $procmux$27186
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____ready.next = (p_tl__ram_2e_rst ? value<1>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram_2e_wrapper_2e_req__in____ready : p_tl__ram_2e_last__a____ready.curr));
	}
	// cells $procdff$29755 $procmux$27258
	if (posedge_p_clk) {
		p_tl__ram_2e_controller_2e_last__req__addr.next = (p_tl__ram_2e_controller_2e_rst ? value<13>{0u} : p_tl__ram_2e_wrapper_2e_req__out____addr);
	}
	// cells $procdff$29756 $procmux$27244 $procmux$27249 $flatten\tl_ram.\controller.$and$tilelink_soc.v:137$18 $procmux$27247 $flatten\tl_ram.\controller.$and$tilelink_soc.v:138$19
	if (posedge_p_clk) {
		p_tl__ram_2e_controller_2e_rsp____valid.next = (p_tl__ram_2e_controller_2e_rst ? value<1>{0u} : (and_uu<1>(p_tl__ram_2e_controller_2e_req____valid, p_tl__ram_2e_controller_2e_req____ready) ? value<1>{0x1u} : (and_uu<1>(p_tl__ram_2e_controller_2e_rsp____valid.curr, p_tl__ram_2e_controller_2e_rsp____ready) ? value<1>{0u} : p_tl__ram_2e_controller_2e_rsp____valid.curr)));
	}
	// cells $procdff$29757 $procmux$27238 $procmux$27241 $flatten\tl_ram.\controller.$and$tilelink_soc.v:139$20 $flatten\tl_ram.\controller.$not$tilelink_soc.v:140$21
	if (posedge_p_clk) {
		p_tl__ram_2e_controller_2e_response__writeback__valid.next = (p_tl__ram_2e_controller_2e_rst ? value<1>{0u} : (and_uu<1>(p_tl__ram_2e_controller_2e_req____valid, p_tl__ram_2e_controller_2e_req____ready) ? not_u<1>(p_tl__ram_2e_wrapper_2e_req__out____write__en) : value<1>{0u}));
	}
	// cells $procdff$29758 $procmux$27434 $procmux$27452 $procmux$27453_CMP0 $procmux$27449 $procmux$27450_CMP0 $procmux$27447 $procmux$27443 $procmux$27444_CMP0 $procmux$27441 $procmux$27439 $flatten\tl_ram.\wrapper.$and$tilelink_soc.v:21129$26714
	if (posedge_p_clk) {
		p_tl__ram_2e_wrapper_2e_tmp__req__addr.next = (p_tl__ram_2e_wrapper_2e_rst ? value<13>{0u} : (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (p_tl__ram_2e_wrapper_2e__24_11 ? (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (p_tl__ram_2e_wrapper_2e__24_11 ? (and_uu<1>(p_tl__ram_2e_wrapper_2e_req__in____valid, p_tl__ram_2e_wrapper_2e_req__in____ready) ? p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val() : p_tl__ram_2e_wrapper_2e_tmp__req__addr.curr) : value<13>{0u}) : value<13>{0u}) : p_tl__ram_2e_wrapper_2e_tmp__req__addr.curr) : value<13>{0u}) : p_tl__ram_2e_wrapper_2e_tmp__req__addr.curr));
	}
	// cells $procdff$29759 $procmux$27395 $procmux$27430 $procmux$27431_CMP0 $procmux$27432_CMP0 $procmux$27410 $procmux$27411_CMP0 $procmux$27408 $procmux$27404 $procmux$27405_CMP0 $procmux$27402 $procmux$27400 $procmux$27427 $procmux$27428_CMP0 $procmux$27425 $procmux$27420 $procmux$27421_CMP0 $procmux$27418 $procmux$27416 $flatten\tl_ram.\wrapper.$and$tilelink_soc.v:21133$26718
	if (posedge_p_clk) {
		p_tl__ram_2e_wrapper_2e_tmp__req__data.next = (p_tl__ram_2e_wrapper_2e_rst ? value<32>{0u} : (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (p_tl__ram_2e_wrapper_2e_rsp__in____valid ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (p_tl__ram_2e_wrapper_2e_rsp__in____valid ? (p_tl__ram_2e_wrapper_2e_req__out____ready ? p_tl__ram_2e_wrapper_2e_tmp__req__data.curr : p_tl__ram_2e_wrapper_2e_write__data) : value<32>{0u}) : value<32>{0u}) : p_tl__ram_2e_wrapper_2e_tmp__req__data.curr) : value<32>{0u}) : (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (p_tl__ram_2e_wrapper_2e__24_19 ? (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (p_tl__ram_2e_wrapper_2e__24_19 ? (and_uu<1>(p_tl__ram_2e_wrapper_2e_req__in____valid, p_tl__ram_2e_wrapper_2e_req__in____ready) ? p_tl__ram__arbiter_2e_bus____a____data : p_tl__ram_2e_wrapper_2e_tmp__req__data.curr) : value<32>{0u}) : value<32>{0u}) : p_tl__ram_2e_wrapper_2e_tmp__req__data.curr) : value<32>{0u}) : p_tl__ram_2e_wrapper_2e_tmp__req__data.curr)));
	}
	// cells $procdff$29760 $procmux$27374 $procmux$27392 $procmux$27393_CMP0 $procmux$27389 $procmux$27390_CMP0 $procmux$27387 $procmux$27383 $procmux$27384_CMP0 $procmux$27381 $procmux$27379 $flatten\tl_ram.\wrapper.$and$tilelink_soc.v:21138$26723
	if (posedge_p_clk) {
		p_tl__ram_2e_wrapper_2e_tmp__req__mask.next = (p_tl__ram_2e_wrapper_2e_rst ? value<4>{0u} : (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (p_tl__ram_2e_wrapper_2e__24_27 ? (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (p_tl__ram_2e_wrapper_2e__24_27 ? (and_uu<1>(p_tl__ram_2e_wrapper_2e_req__in____valid, p_tl__ram_2e_wrapper_2e_req__in____ready) ? p_tl__ram__arbiter_2e_bus____a____mask : p_tl__ram_2e_wrapper_2e_tmp__req__mask.curr) : value<4>{0u}) : value<4>{0u}) : p_tl__ram_2e_wrapper_2e_tmp__req__mask.curr) : value<4>{0u}) : p_tl__ram_2e_wrapper_2e_tmp__req__mask.curr));
	}
	// cells $procdff$29761 $procmux$27324 $procmux$27369 $procmux$27370_CMP0 $procmux$27371_CMP0 $procmux$27372_CMP0 $procmux$27330 $procmux$27331_CMP0 $procmux$27328 $procmux$27347 $procmux$27348_CMP0 $procmux$27345 $procmux$27340 $procmux$27341_CMP0 $procmux$27338 $procmux$27336 $procmux$27366 $procmux$27367_CMP0 $procmux$27364 $procmux$27358 $procmux$27359_CMP0 $procmux$27356 $procmux$27354 $flatten\tl_ram.\wrapper.$and$tilelink_soc.v:21142$26727
	if (posedge_p_clk) {
		p_tl__ram_2e_wrapper_2e_fsm__state.next = (p_tl__ram_2e_wrapper_2e_rst ? value<2>{0u} : (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x2u}) ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x2u}) ? (p_tl__ram_2e_wrapper_2e_req__out____ready ? value<2>{0u} : p_tl__ram_2e_wrapper_2e_fsm__state.curr) : value<2>{0u}) : (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (p_tl__ram_2e_wrapper_2e_rsp__in____valid ? (eq_uu<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr, value<2>{0x1u}) ? (p_tl__ram_2e_wrapper_2e_rsp__in____valid ? (p_tl__ram_2e_wrapper_2e_req__out____ready ? value<2>{0u} : value<2>{0x2u}) : value<2>{0u}) : value<2>{0u}) : p_tl__ram_2e_wrapper_2e_fsm__state.curr) : value<2>{0u}) : (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (p_tl__ram_2e_wrapper_2e__24_35 ? (logic_not<1>(p_tl__ram_2e_wrapper_2e_fsm__state.curr) ? (p_tl__ram_2e_wrapper_2e__24_35 ? (and_uu<1>(p_tl__ram_2e_wrapper_2e_req__in____valid, p_tl__ram_2e_wrapper_2e_req__in____ready) ? value<2>{0x1u} : p_tl__ram_2e_wrapper_2e_fsm__state.curr) : value<2>{0u}) : value<2>{0u}) : p_tl__ram_2e_wrapper_2e_fsm__state.curr) : value<2>{0u}) : p_tl__ram_2e_wrapper_2e_fsm__state.curr))));
	}
	// cells $procdff$29762 $procmux$27605 $procmux$27618 $procmux$27619_ANY $procmux$27620_CMP0 $procmux$27615 $procmux$27616_CMP0 $procmux$27610 $procmux$27611_CMP0 $procmux$27612_CMP0 $procmux$27613_CMP0 $procmux$27614_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____corrupt.next = (p_tl__periph_2e_rst ? value<1>{0u} : (reduce_or<1>(i_procmux_24_27619__CMP) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<1>{0u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0u} : p_tl__periph_2e_bus____d____corrupt.curr)))) : value<1>{0u}) : p_tl__periph_2e_bus____d____corrupt.curr)));
	}
	// cells $procdff$29763 $procmux$27637 $procmux$27646 $procmux$27643 $procmux$27641 $procmux$27642_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_output.next = (p_tl__periph_2e_rst ? value<8>{0u} : (p_tl__periph_2e__24_110 ? (p_tl__periph_2e__24_110 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? p_tl__data__decoder_2e_bus____a____data.slice<7,0>().val() : p_tl__periph_2e_output.curr) : value<8>{0u}) : p_tl__periph_2e_output.curr));
	}
	// cells $procdff$29764 $procmux$27509 $procmux$27585 $procmux$27579 $procmux$27577 $procmux$27578_CMP0 $procmux$27566 $procmux$27560 $procmux$27558 $procmux$27559_CMP0 $procmux$27547 $procmux$27541 $procmux$27539 $procmux$27540_CMP0 $procmux$27528 $procmux$27522 $procmux$27520 $procmux$27521_CMP0 $procmux$27582 $procmux$27572 $procmux$27570 $procmux$27571_CMP0 $procmux$27563 $procmux$27553 $procmux$27551 $procmux$27552_CMP0 $procmux$27544 $procmux$27534 $procmux$27532 $procmux$27533_CMP0 $procmux$27525 $procmux$27515 $procmux$27513 $procmux$27514_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_cycle__count.next = (p_tl__periph_2e_rst ? value<64>{0u,0u} : (p_tl__periph_2e__24_98 ? (p_tl__periph_2e__24_98 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<31,24>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<63,56>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<63,56>().val()).concat((p_tl__periph_2e__24_86 ? (p_tl__periph_2e__24_86 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<23,16>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<55,48>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<55,48>().val())).concat((p_tl__periph_2e__24_74 ? (p_tl__periph_2e__24_74 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<15,8>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<47,40>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<47,40>().val())).concat((p_tl__periph_2e__24_62 ? (p_tl__periph_2e__24_62 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<7,0>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<39,32>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<39,32>().val())).concat((p_tl__periph_2e__24_98 ? (p_tl__periph_2e__24_98 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<31,24>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<31,24>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<31,24>().val())).concat((p_tl__periph_2e__24_86 ? (p_tl__periph_2e__24_86 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<23,16>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<23,16>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<23,16>().val())).concat((p_tl__periph_2e__24_74 ? (p_tl__periph_2e__24_74 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<15,8>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<15,8>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<15,8>().val())).concat((p_tl__periph_2e__24_62 ? (p_tl__periph_2e__24_62 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<7,0>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<7,0>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_8966_24_1779__Y.slice<7,0>().val())).val());
	}
	// cells $procdff$29765 $procmux$27470 $procmux$27479 $procmux$27476 $procmux$27474 $procmux$27475_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_output__valid.next = (p_tl__periph_2e_rst ? value<1>{0u} : (p_tl__periph_2e__24_47 ? (p_tl__periph_2e__24_47 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_1824) : value<1>{0u}) : i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_1824));
	}
	// cells $procdff$29766 $procmux$27588 $procmux$27601 $procmux$27602_ANY $procmux$27603_CMP0 $procmux$27598 $procmux$27599_CMP0 $procmux$27593 $procmux$27594_CMP0 $procmux$27595_CMP0 $procmux$27596_CMP0 $procmux$27597_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____denied.next = (p_tl__periph_2e_rst ? value<1>{0u} : (reduce_or<1>(i_procmux_24_27602__CMP) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<1>{0u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0u} : p_tl__periph_2e_bus____d____denied.curr)))) : value<1>{0u}) : p_tl__periph_2e_bus____d____denied.curr)));
	}
	// cells $procdff$29767 $procmux$27622 $procmux$27634 $procmux$27635_CMP0 $procmux$27631 $procmux$27632_CMP0 $procmux$27626 $procmux$27627_CMP0 $procmux$27628_CMP0 $procmux$27629_CMP0 $procmux$27630_CMP0 $flatten\tl_periph.$pos$tilelink_soc.v:8950$1763 $flatten\tl_periph.$extend$tilelink_soc.v:8950$1762 $flatten\tl_periph.$pos$tilelink_soc.v:8949$1761 $flatten\tl_periph.$extend$tilelink_soc.v:8949$1760
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____data.next = (p_tl__periph_2e_rst ? value<32>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__periph_2e_cycle__count.curr.slice<63,32>().val() : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__periph_2e_cycle__count.curr.slice<31,0>().val() : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? pos_u<32>(pos_u<32>(p_tl__periph_2e_halt__simulator.curr)) : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? pos_u<32>(pos_u<32>(p_tl__periph_2e_output.curr)) : p_tl__periph_2e_bus____d____data.curr)))) : value<32>{0u}) : p_tl__periph_2e_bus____d____data.curr));
	}
	// cells $procdff$29768 $procmux$27718 $procmux$27731 $procmux$27732_ANY $procmux$27733_CMP0 $procmux$27728 $procmux$27729_CMP0 $procmux$27723 $procmux$27724_CMP0 $procmux$27725_CMP0 $procmux$27726_CMP0 $procmux$27727_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____source.next = (p_tl__periph_2e_rst ? value<1>{0u} : (reduce_or<1>(i_procmux_24_27732__CMP) ? p_tl__data__decoder_2e_bus____a____source : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____source : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____source : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? p_tl__data__decoder_2e_bus____a____source : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? p_tl__data__decoder_2e_bus____a____source : p_tl__periph_2e_bus____d____source.curr)))) : value<1>{0u}) : p_tl__periph_2e_bus____d____source.curr)));
	}
	// cells $procdff$29769 $procmux$27701 $procmux$27714 $procmux$27715_ANY $procmux$27716_CMP0 $procmux$27711 $procmux$27712_CMP0 $procmux$27706 $procmux$27707_CMP0 $procmux$27708_CMP0 $procmux$27709_CMP0 $procmux$27710_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____size.next = (p_tl__periph_2e_rst ? value<2>{0u} : (reduce_or<1>(i_procmux_24_27715__CMP) ? p_tl__data__decoder_2e_bus____a____size : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____size : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____size : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? p_tl__data__decoder_2e_bus____a____size : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? p_tl__data__decoder_2e_bus____a____size : p_tl__periph_2e_bus____d____size.curr)))) : value<2>{0u}) : p_tl__periph_2e_bus____d____size.curr)));
	}
	// cells $procdff$29770 $procmux$27684 $procmux$27697 $procmux$27698_ANY $procmux$27699_CMP0 $procmux$27694 $procmux$27695_CMP0 $procmux$27689 $procmux$27690_CMP0 $procmux$27691_CMP0 $procmux$27692_CMP0 $procmux$27693_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____param.next = (p_tl__periph_2e_rst ? value<2>{0u} : (reduce_or<1>(i_procmux_24_27698__CMP) ? value<2>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<2>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<2>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<2>{0u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<2>{0u} : p_tl__periph_2e_bus____d____param.curr)))) : value<2>{0u}) : p_tl__periph_2e_bus____d____param.curr)));
	}
	// cells $procdff$29771 $procmux$27667 $procmux$27680 $procmux$27681_ANY $procmux$27682_CMP0 $procmux$27677 $procmux$27678_CMP0 $procmux$27672 $procmux$27673_CMP0 $procmux$27674_CMP0 $procmux$27675_CMP0 $procmux$27676_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____opcode.next = (p_tl__periph_2e_rst ? value<3>{0u} : (reduce_or<1>(i_procmux_24_27681__CMP) ? value<3>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<3>{0x1u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<3>{0x1u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<3>{0x1u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<3>{0x1u} : p_tl__periph_2e_bus____d____opcode.curr)))) : value<3>{0u}) : p_tl__periph_2e_bus____d____opcode.curr)));
	}
	// cells $procdff$29772 $procmux$27661 $procmux$27664
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____valid.next = (p_tl__periph_2e_rst ? value<1>{0u} : (p_tl__periph_2e_bus____a____ready ? p_tl__data__decoder_2e_bus____a____valid : p_tl__periph_2e_bus____d____valid.curr));
	}
	// cells $procdff$29773 $procmux$27649 $procmux$27658 $procmux$27655 $procmux$27653 $procmux$27654_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_halt__simulator.next = (p_tl__periph_2e_rst ? value<1>{0u} : (p_tl__periph_2e__24_158 ? (p_tl__periph_2e__24_158 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? p_tl__data__decoder_2e_bus____a____data.slice<0>().val() : p_tl__periph_2e_halt__simulator.curr) : value<1>{0u}) : p_tl__periph_2e_halt__simulator.curr));
	}
	// cells $procdff$29774 $procmux$27844 $procmux$27847 $flatten\tl_instr_decoder.\rr.$reduce_or$tilelink_soc.v:6926$1577
	if (posedge_p_clk) {
		p_tl__instr__decoder_2e_rr_2e_last__grant.next = (p_rst ? value<2>{0x1u} : (reduce_or<1>(p_tl__instr__decoder_2e_rr_2e_requests) ? i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6925_24_1576__Y.slice<1,0>().val() : p_tl__instr__decoder_2e_rr_2e_last__grant.curr));
	}
	// cells $procdff$29775 $procmux$28017 $procmux$28020 $flatten\tl_data_decoder.\rr.$reduce_or$tilelink_soc.v:6995$1592
	if (posedge_p_clk) {
		p_tl__data__decoder_2e_rr_2e_last__grant.next = (p_rst ? value<3>{0x1u} : (reduce_or<1>(p_tl__data__decoder_2e_rr_2e_requests) ? i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_6994_24_1591__Y.slice<2,0>().val() : p_tl__data__decoder_2e_rr_2e_last__grant.curr));
	}
	// cells $procdff$29776 $procmux$28315 $procmux$28318 $flatten\instruction_master.$and$tilelink_soc.v:6660$1495 $flatten\instruction_master.$add$tilelink_soc.v:6661$1496
	if (posedge_p_clk) {
		p_instruction__master_2e_read__ptr.next = (p_instruction__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_instruction__master_2e_instruction__stream____rsp__valid, p_instruction__master_2e_instruction__stream____rsp__ready) ? add_uu<2>(p_instruction__master_2e_read__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_instruction__master_2e_read__ptr.curr));
	}
	// cells $procdff$29777 $procmux$28283 $procmux$28286 $flatten\instruction_master.$and$tilelink_soc.v:6653$1488 $flatten\instruction_master.$add$tilelink_soc.v:6654$1489
	if (posedge_p_clk) {
		p_instruction__master_2e_send__ptr.next = (p_instruction__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_instruction__master_2e_bus____a____valid, p_instruction__master_2e_bus____a____ready) ? add_uu<2>(p_instruction__master_2e_send__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_instruction__master_2e_send__ptr.curr));
	}
	// cells $procdff$29778 $procmux$28036 $procmux$28197 $procmux$28182 $procmux$28180 $procmux$28155 $procmux$28153 $procmux$28151 $procmux$28115 $procmux$28113 $procmux$28111 $procmux$28109 $procmux$28066 $procmux$28064 $procmux$28061
	if (posedge_p_clk) {
		p_instruction__master_2e_state.next = (p_instruction__master_2e_rst ? value<2>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_27798__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1522 : value<2>{0x2u}) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1522) : value<2>{0u}) : value<2>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<2>{0u} : (i_procmux_24_27798__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1522 : value<2>{0x2u})) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1522));
	}
	// cells $procdff$29779 $procmux$28033 $procmux$28191 $procmux$28170 $procmux$28168 $procmux$28137 $procmux$28135 $procmux$28133 $procmux$28089 $procmux$28087 $procmux$28085 $procmux$28083 $procmux$28046 $procmux$28044 $procmux$28041
	if (posedge_p_clk) {
		p_instruction__master_2e_data.next = (p_instruction__master_2e_rst ? value<32>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_27798__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1524 : p_tl__instr__decoder_2e___bus____d____data) : value<32>{0u}) : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1524) : value<32>{0u}) : value<32>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<32>{0u} : (i_procmux_24_27798__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1524 : p_tl__instr__decoder_2e___bus____d____data)) : value<32>{0u})) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1524));
	}
	// cells $procdff$29780 $procmux$28030 $procmux$28200 $procmux$28188 $procmux$28186 $procmux$28164 $procmux$28162 $procmux$28160 $procmux$28128 $procmux$28126 $procmux$28124 $procmux$28122 $procmux$28076 $procmux$28074 $procmux$28071
	if (posedge_p_clk) {
		p_instruction__master_2e_state_24_5.next = (p_instruction__master_2e_rst ? value<2>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_27798__Y ? value<2>{0x2u} : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1521) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1521) : value<2>{0u}) : value<2>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<2>{0u} : (i_procmux_24_27798__Y ? value<2>{0x2u} : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1521)) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1521));
	}
	// cells $procdff$29781 $procmux$28027 $procmux$28194 $procmux$28176 $procmux$28174 $procmux$28146 $procmux$28144 $procmux$28142 $procmux$28102 $procmux$28100 $procmux$28098 $procmux$28096 $procmux$28056 $procmux$28054 $procmux$28051
	if (posedge_p_clk) {
		p_instruction__master_2e_data_24_18.next = (p_instruction__master_2e_rst ? value<32>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_27798__Y ? p_tl__instr__decoder_2e___bus____d____data : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1523) : value<32>{0u}) : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1523) : value<32>{0u}) : value<32>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<32>{0u} : (i_procmux_24_27798__Y ? p_tl__instr__decoder_2e___bus____d____data : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1523)) : value<32>{0u})) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1523));
	}
	// cells $procdff$29782 $procmux$28666 $procmux$28748 $procmux$28742 $procmux$28740 $procmux$28730 $procmux$28728 $procmux$28726 $procmux$28699 $procmux$28697 $procmux$28695 $procmux$28693 $procmux$28676 $procmux$28674 $procmux$28671
	if (posedge_p_clk) {
		p_data__master_2e_data_24_62.next = (p_data__master_2e_rst ? value<32>{0u} : (p_data__master_2e__24_343 ? (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y ? p_data__master_2e_data_24_62.curr : (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y ? value<32>{0u} : (i_procmux_24_27957__Y ? p_data__master_2e_data_24_62.curr : p_data__master_2e_read__data)) : value<32>{0u}) : value<32>{0u})) : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? value<32>{0u} : (i_procmux_24_27957__Y ? p_data__master_2e_data_24_62.curr : p_data__master_2e_read__data)) : value<32>{0u})) : value<32>{0u}) : p_data__master_2e_data_24_62.curr));
	}
	// cells $procdff$29783 $procmux$28663 $procmux$28745 $procmux$28736 $procmux$28734 $procmux$28721 $procmux$28719 $procmux$28717 $procmux$28712 $procmux$28710 $procmux$28708 $procmux$28706 $procmux$28686 $procmux$28684 $procmux$28681
	if (posedge_p_clk) {
		p_data__master_2e_data_24_63.next = (p_data__master_2e_rst ? value<32>{0u} : (p_data__master_2e__24_343 ? (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y ? p_data__master_2e_data_24_63.curr : (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y ? value<32>{0u} : (i_procmux_24_27957__Y ? p_data__master_2e_read__data : p_data__master_2e_data_24_63.curr)) : value<32>{0u}) : value<32>{0u})) : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_343 ? (p_data__master_2e__24_345 ? value<32>{0u} : (i_procmux_24_27957__Y ? p_data__master_2e_read__data : p_data__master_2e_data_24_63.curr)) : value<32>{0u})) : value<32>{0u}) : p_data__master_2e_data_24_63.curr));
	}
	// cells $procdff$29784 $procmux$28578 $procmux$28581 $flatten\data_master.$and$tilelink_soc.v:4039$1039 $flatten\data_master.$add$tilelink_soc.v:4041$1041
	if (posedge_p_clk) {
		p_data__master_2e_read__ptr.next = (p_data__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_data__master_2e_data__stream____rsp__valid, p_data__master_2e_data__stream____rsp__ready) ? add_uu<2>(p_data__master_2e_read__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_data__master_2e_read__ptr.curr));
	}
	// cells $procdff$29785 $procmux$28546 $procmux$28549 $flatten\data_master.$and$tilelink_soc.v:4033$1033 $flatten\data_master.$add$tilelink_soc.v:4034$1034
	if (posedge_p_clk) {
		p_data__master_2e_send__ptr.next = (p_data__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready) ? add_uu<2>(p_data__master_2e_send__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_data__master_2e_send__ptr.curr));
	}
	// cells $procdff$29786 $procmux$28519 $procmux$28536 $procmux$28526 $procmux$28524
	if (posedge_p_clk) {
		p_data__master_2e_addr__low.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_47 ? (p_data__master_2e__24_47 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_addr__low.curr : p_core_2e_m__alu__result.curr.slice<1,0>().val()) : value<2>{0u}) : p_data__master_2e_addr__low.curr));
	}
	// cells $procdff$29787 $procmux$28516 $procmux$28539 $procmux$28533 $procmux$28531
	if (posedge_p_clk) {
		p_data__master_2e_addr__low_24_46.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_47 ? (p_data__master_2e__24_47 ? (p_data__master_2e_send__ptr.curr ? p_core_2e_m__alu__result.curr.slice<1,0>().val() : p_data__master_2e_addr__low_24_46.curr) : value<2>{0u}) : p_data__master_2e_addr__low_24_46.curr));
	}
	// cells $procdff$29788 $procmux$28493 $procmux$28510 $procmux$28500 $procmux$28498
	if (posedge_p_clk) {
		p_data__master_2e_unsigned.next = (p_data__master_2e_rst ? value<1>{0u} : (p_data__master_2e__24_44 ? (p_data__master_2e__24_44 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_unsigned.curr : p_core_2e_m__control____mem__unsigned.curr) : value<1>{0u}) : p_data__master_2e_unsigned.curr));
	}
	// cells $procdff$29789 $procmux$28490 $procmux$28513 $procmux$28507 $procmux$28505
	if (posedge_p_clk) {
		p_data__master_2e_unsigned_24_43.next = (p_data__master_2e_rst ? value<1>{0u} : (p_data__master_2e__24_44 ? (p_data__master_2e__24_44 ? (p_data__master_2e_send__ptr.curr ? p_core_2e_m__control____mem__unsigned.curr : p_data__master_2e_unsigned_24_43.curr) : value<1>{0u}) : p_data__master_2e_unsigned_24_43.curr));
	}
	// cells $procdff$29790 $procmux$28467 $procmux$28484 $procmux$28474 $procmux$28472
	if (posedge_p_clk) {
		p_data__master_2e_size.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_41 ? (p_data__master_2e__24_41 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_size.curr : p_core_2e_m__control____mem__size.curr) : value<2>{0u}) : p_data__master_2e_size.curr));
	}
	// cells $procdff$29791 $procmux$28464 $procmux$28487 $procmux$28481 $procmux$28479
	if (posedge_p_clk) {
		p_data__master_2e_size_24_40.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_41 ? (p_data__master_2e__24_41 ? (p_data__master_2e_send__ptr.curr ? p_core_2e_m__control____mem__size.curr : p_data__master_2e_size_24_40.curr) : value<2>{0u}) : p_data__master_2e_size_24_40.curr));
	}
	// cells $procdff$29792 $procmux$28339 $procmux$28418 $procmux$28409 $procmux$28407 $procmux$28394 $procmux$28392 $procmux$28390 $procmux$28372 $procmux$28370 $procmux$28368 $procmux$28366 $procmux$28349 $procmux$28347 $procmux$28344
	if (posedge_p_clk) {
		p_data__master_2e_state.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_34 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1082 : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y ? value<2>{0u} : (i_procmux_24_27957__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1082 : value<2>{0x2u})) : value<2>{0u}) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? value<2>{0u} : (i_procmux_24_27957__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1082 : value<2>{0x2u})) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1082));
	}
	// cells $procdff$29793 $procmux$28336 $procmux$28421 $procmux$28415 $procmux$28413 $procmux$28403 $procmux$28401 $procmux$28399 $procmux$28385 $procmux$28383 $procmux$28381 $procmux$28379 $procmux$28359 $procmux$28357 $procmux$28354
	if (posedge_p_clk) {
		p_data__master_2e_state_24_5.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_34 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1081 : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1884_24_249__Y ? value<2>{0u} : (i_procmux_24_27957__Y ? value<2>{0x2u} : i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1081)) : value<2>{0u}) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? value<2>{0u} : (i_procmux_24_27957__Y ? value<2>{0x2u} : i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1081)) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1081));
	}
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1714.3-1717.6
	// cell $procdff$29794
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1716_24_82__ADDR.next = i_procmux_24_28854__Y;
	}
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1714.3-1717.6
	// cell $procdff$29795
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1716_24_82__DATA.next = i_procmux_24_28851__Y;
	}
	// \src: tilelink_soc.v:20513.8-20532.4|tilelink_soc.v:1714.3-1717.6
	// cell $procdff$29796
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1716_24_82__EN.next = i_procmux_24_28848__Y;
	}
	// cells $procdff$29797 $procmux$28858 $flatten\core.$and$tilelink_soc.v:1765$128 $flatten\core.$not$tilelink_soc.v:1764$127 $flatten\core.$not$tilelink_soc.v:1763$126
	if (posedge_p_clk) {
		p_core_2e___0__.next = (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1722_24_91__DATA : p_core_2e___0__.curr);
	}
	// cells $procdff$29798 $procmux$28856 $flatten\core.$and$tilelink_soc.v:1768$131 $flatten\core.$not$tilelink_soc.v:1767$130 $flatten\core.$not$tilelink_soc.v:1766$129
	if (posedge_p_clk) {
		p_core_2e___1__.next = (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1725_24_92__DATA : p_core_2e___1__.curr);
	}
	// cells $procdff$29799 $procmux$29544 $procmux$29604
	if (posedge_p_clk) {
		p_core_2e_m__control____branch__mode.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____branch__mode.curr : p_core_2e_x__control____branch__mode.curr));
	}
	// cells $procdff$29800 $procmux$29541 $procmux$29601
	if (posedge_p_clk) {
		p_core_2e_m__control____branch__type.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____branch__type.curr : p_core_2e_x__control____branch__type.curr));
	}
	// cells $procdff$29801 $procmux$29538 $procmux$29595
	if (posedge_p_clk) {
		p_core_2e_m__control____mem__enable.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____mem__enable.curr : p_core_2e_x__control____mem__enable.curr));
	}
	// cells $procdff$29802 $procmux$29535 $procmux$29592
	if (posedge_p_clk) {
		p_core_2e_m__control____mem__we.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____mem__we.curr : p_core_2e_x__control____mem__we.curr));
	}
	// cells $procdff$29803 $procmux$29532 $procmux$29589
	if (posedge_p_clk) {
		p_core_2e_m__control____mem__size.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____mem__size.curr : p_core_2e_x__control____mem__size.curr));
	}
	// cells $procdff$29804 $procmux$29529 $procmux$29586
	if (posedge_p_clk) {
		p_core_2e_m__control____mem__unsigned.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____mem__unsigned.curr : p_core_2e_x__control____mem__unsigned.curr));
	}
	// cells $procdff$29805 $procmux$29526 $procmux$29580
	if (posedge_p_clk) {
		p_core_2e_m__control____register__write.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____register__write.curr : p_core_2e_x__control____register__write.curr));
	}
	// cells $procdff$29806 $procmux$29523 $procmux$29583
	if (posedge_p_clk) {
		p_core_2e_m__control____writeback__select.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__control____writeback__select.curr : p_core_2e_x__control____writeback__select.curr));
	}
	// cells $procdff$29807 $procmux$29517 $procmux$29520
	if (posedge_p_clk) {
		p_core_2e_m__instruction.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__instruction.curr : p_core_2e_x__instruction.curr));
	}
	// cells $procdff$29808 $procmux$29511 $procmux$29514
	if (posedge_p_clk) {
		p_core_2e_m__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__program__counter.curr : p_core_2e_x__program__counter.curr));
	}
	// cells $procdff$29809 $procmux$29493 $procmux$29496 $flatten\core.$and$tilelink_soc.v:1848$213 $flatten\core.$not$tilelink_soc.v:1846$211 $flatten\core.$not$tilelink_soc.v:1845$210 $procmux$29499
	if (posedge_p_clk) {
		p_core_2e_m__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_x__arbitration____valid.curr : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1843_24_208__Y ? p_core_2e_m__arbitration____valid.curr : value<1>{0u})));
	}
	// cells $procdff$29810 $procmux$29421 $procmux$29424 $flatten\core.$and$tilelink_soc.v:1814$177 $flatten\core.$not$tilelink_soc.v:1813$176 $flatten\core.$not$tilelink_soc.v:1812$175 $procmux$29208 $procmux$29205 $procmux$29202 $procmux$29181 $procmux$29178 $procmux$29176 $flatten\core.$and$tilelink_soc.v:1998$363 $flatten\core.$eq$tilelink_soc.v:1997$362 $flatten\core.$and$tilelink_soc.v:1996$361 $procmux$29190 $procmux$29187 $procmux$29185 $flatten\core.$and$tilelink_soc.v:1995$360 $flatten\core.$eq$tilelink_soc.v:1994$359 $flatten\core.$and$tilelink_soc.v:1993$358 $procmux$29199 $procmux$29196 $procmux$29194 $flatten\core.$and$tilelink_soc.v:1992$357 $flatten\core.$eq$tilelink_soc.v:1991$356 $flatten\core.$and$tilelink_soc.v:1990$355
	if (posedge_p_clk) {
		p_core_2e_x__rs2__is__forwarded.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_658 ? value<1>{0u} : (p_core_2e__24_658 ? value<1>{0u} : (p_core_2e__24_660 ? (p_core_2e__24_658 ? value<1>{0u} : (p_core_2e__24_660 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_x__control____register__write.curr), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2)) ? value<1>{0x1u} : (p_core_2e__24_658 ? value<1>{0u} : (p_core_2e__24_660 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_m__control____register__write.curr), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2)) ? value<1>{0x1u} : (p_core_2e__24_658 ? value<1>{0u} : (p_core_2e__24_660 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____register__write.curr), eq_uu<1>(p_core_2e_w__control____rd.curr, p_core_2e_d__control____rs2)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}))) : value<1>{0u}))) : value<1>{0u})) : value<1>{0u}))) : p_core_2e_x__rs2__is__forwarded.curr));
	}
	// cells $procdff$29811 $procmux$29415 $procmux$29418 $flatten\core.$and$tilelink_soc.v:1811$174 $flatten\core.$not$tilelink_soc.v:1810$173 $flatten\core.$not$tilelink_soc.v:1809$172 $procmux$29136 $procmux$29133 $procmux$29130 $procmux$29109 $procmux$29106 $procmux$29104 $flatten\core.$and$tilelink_soc.v:1943$308 $flatten\core.$eq$tilelink_soc.v:1942$307 $flatten\core.$and$tilelink_soc.v:1941$306 $procmux$29118 $procmux$29115 $procmux$29113 $flatten\core.$and$tilelink_soc.v:1940$305 $flatten\core.$eq$tilelink_soc.v:1939$304 $flatten\core.$and$tilelink_soc.v:1938$303 $procmux$29127 $procmux$29124 $procmux$29122 $flatten\core.$and$tilelink_soc.v:1937$302 $flatten\core.$eq$tilelink_soc.v:1936$301 $flatten\core.$and$tilelink_soc.v:1935$300
	if (posedge_p_clk) {
		p_core_2e_x__rs1__is__forwarded.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_558 ? value<1>{0u} : (p_core_2e__24_558 ? value<1>{0u} : (p_core_2e__24_560 ? (p_core_2e__24_558 ? value<1>{0u} : (p_core_2e__24_560 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_x__control____register__write.curr), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1)) ? value<1>{0x1u} : (p_core_2e__24_558 ? value<1>{0u} : (p_core_2e__24_560 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_m__control____register__write.curr), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1)) ? value<1>{0x1u} : (p_core_2e__24_558 ? value<1>{0u} : (p_core_2e__24_560 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____register__write.curr), eq_uu<1>(p_core_2e_w__control____rd.curr, p_core_2e_d__control____rs1)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}))) : value<1>{0u}))) : value<1>{0u})) : value<1>{0u}))) : p_core_2e_x__rs1__is__forwarded.curr));
	}
	// cells $procdff$29812 $procmux$29409 $procmux$29412 $flatten\core.$and$tilelink_soc.v:1808$171 $flatten\core.$not$tilelink_soc.v:1806$169 $flatten\core.$not$tilelink_soc.v:1805$168 $procmux$29172 $procmux$29169 $procmux$29166 $procmux$29145 $procmux$29142 $procmux$29140 $flatten\core.$and$tilelink_soc.v:1971$336 $flatten\core.$eq$tilelink_soc.v:1970$335 $flatten\core.$and$tilelink_soc.v:1969$334 $procmux$29154 $procmux$29151 $procmux$29149 $flatten\core.$and$tilelink_soc.v:1968$333 $flatten\core.$eq$tilelink_soc.v:1967$332 $flatten\core.$and$tilelink_soc.v:1965$330 $procmux$29163 $procmux$29160 $procmux$29158 $flatten\core.$and$tilelink_soc.v:1964$329 $flatten\core.$eq$tilelink_soc.v:1963$328 $flatten\core.$and$tilelink_soc.v:1962$327
	if (posedge_p_clk) {
		p_core_2e_x__rs2__value__forwarded.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_608 ? value<32>{0u} : (p_core_2e__24_608 ? value<32>{0u} : (p_core_2e__24_610 ? (p_core_2e__24_608 ? value<32>{0u} : (p_core_2e__24_610 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_x__control____register__write.curr), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs2)) ? p_core_2e_x__alu__result : (p_core_2e__24_608 ? value<32>{0u} : (p_core_2e__24_610 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_m__control____register__write.curr), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs2)) ? p_core_2e_m__alu__result.curr : (p_core_2e__24_608 ? value<32>{0u} : (p_core_2e__24_610 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____register__write.curr), eq_uu<1>(p_core_2e_w__control____rd.curr, p_core_2e_d__control____rs2)) ? p_core_2e_w__write__data : value<32>{0u}) : value<32>{0u}))) : value<32>{0u}))) : value<32>{0u})) : value<32>{0u}))) : p_core_2e_x__rs2__value__forwarded.curr));
	}
	// cells $procdff$29813 $procmux$29394 $procmux$29397 $flatten\core.$and$tilelink_soc.v:1804$167 $flatten\core.$not$tilelink_soc.v:1803$166 $flatten\core.$not$tilelink_soc.v:1802$165 $procmux$29100 $procmux$29097 $procmux$29094 $procmux$29073 $procmux$29070 $procmux$29068 $flatten\core.$and$tilelink_soc.v:1916$281 $flatten\core.$eq$tilelink_soc.v:1915$280 $flatten\core.$and$tilelink_soc.v:1914$279 $procmux$29082 $procmux$29079 $procmux$29077 $flatten\core.$and$tilelink_soc.v:1913$278 $flatten\core.$eq$tilelink_soc.v:1912$277 $flatten\core.$and$tilelink_soc.v:1910$275 $procmux$29091 $procmux$29088 $procmux$29086 $flatten\core.$and$tilelink_soc.v:1909$274 $flatten\core.$eq$tilelink_soc.v:1908$273 $flatten\core.$and$tilelink_soc.v:1907$272
	if (posedge_p_clk) {
		p_core_2e_x__rs1__value__forwarded.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_508 ? value<32>{0u} : (p_core_2e__24_508 ? value<32>{0u} : (p_core_2e__24_510 ? (p_core_2e__24_508 ? value<32>{0u} : (p_core_2e__24_510 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_x__control____register__write.curr), eq_uu<1>(p_core_2e_x__control____rd.curr, p_core_2e_d__control____rs1)) ? p_core_2e_x__alu__result : (p_core_2e__24_508 ? value<32>{0u} : (p_core_2e__24_510 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_m__control____register__write.curr), eq_uu<1>(p_core_2e_m__control____rd.curr, p_core_2e_d__control____rs1)) ? p_core_2e_m__alu__result.curr : (p_core_2e__24_508 ? value<32>{0u} : (p_core_2e__24_510 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_w__control____register__write.curr), eq_uu<1>(p_core_2e_w__control____rd.curr, p_core_2e_d__control____rs1)) ? p_core_2e_w__write__data : value<32>{0u}) : value<32>{0u}))) : value<32>{0u}))) : value<32>{0u})) : value<32>{0u}))) : p_core_2e_x__rs1__value__forwarded.curr));
	}
	// cells $procdff$29814 $procmux$29340 $procmux$29346
	if (posedge_p_clk) {
		p_core_2e_x__control____rs1.next = (p_core_2e_rst ? value<5>{0u} : (p_core_2e__24_237 ? p_instruction__master_2e_instruction__stream____rsp__data.slice<19,15>().val() : p_core_2e_x__control____rs1.curr));
	}
	// cells $procdff$29815 $procmux$29337 $procmux$29343
	if (posedge_p_clk) {
		p_core_2e_x__control____rs2.next = (p_core_2e_rst ? value<5>{0u} : (p_core_2e__24_237 ? p_instruction__master_2e_instruction__stream____rsp__data.slice<24,20>().val() : p_core_2e_x__control____rs2.curr));
	}
	// cells $procdff$29816 $procmux$29334 $procmux$29367
	if (posedge_p_clk) {
		p_core_2e_x__control____rd.next = (p_core_2e_rst ? value<5>{0u} : (p_core_2e__24_237 ? p_instruction__master_2e_instruction__stream____rsp__data.slice<11,7>().val() : p_core_2e_x__control____rd.curr));
	}
	// cells $procdff$29817 $procmux$29331 $procmux$29379
	if (posedge_p_clk) {
		p_core_2e_x__control____immediate.next = (p_core_2e_rst ? value<32>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____immediate : p_core_2e_x__control____immediate.curr));
	}
	// cells $procdff$29818 $procmux$29328 $procmux$29391
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__operation.next = (p_core_2e_rst ? value<3>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____alu__operation : p_core_2e_x__control____alu__operation.curr));
	}
	// cells $procdff$29819 $procmux$29325 $procmux$29382
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__mode__switch.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____alu__mode__switch : p_core_2e_x__control____alu__mode__switch.curr));
	}
	// cells $procdff$29820 $procmux$29322 $procmux$29385
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__muldiv.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_237 ? value<1>{0u} : p_core_2e_x__control____alu__muldiv.curr));
	}
	// cells $procdff$29821 $procmux$29319 $procmux$29388
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__left__select.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____alu__left__select : p_core_2e_x__control____alu__left__select.curr));
	}
	// cells $procdff$29822 $procmux$29316 $procmux$29376
	if (posedge_p_clk) {
		p_core_2e_x__control____alu__right__select.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____alu__right__select : p_core_2e_x__control____alu__right__select.curr));
	}
	// cells $procdff$29823 $procmux$29313 $procmux$29373
	if (posedge_p_clk) {
		p_core_2e_x__control____branch__mode.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____branch__mode : p_core_2e_x__control____branch__mode.curr));
	}
	// cells $procdff$29824 $procmux$29310 $procmux$29370
	if (posedge_p_clk) {
		p_core_2e_x__control____branch__type.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____branch__type : p_core_2e_x__control____branch__type.curr));
	}
	// cells $procdff$29825 $procmux$29307 $procmux$29364
	if (posedge_p_clk) {
		p_core_2e_x__control____mem__enable.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____mem__enable : p_core_2e_x__control____mem__enable.curr));
	}
	// cells $procdff$29826 $procmux$29304 $procmux$29361
	if (posedge_p_clk) {
		p_core_2e_x__control____mem__we.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____mem__we : p_core_2e_x__control____mem__we.curr));
	}
	// cells $procdff$29827 $procmux$29301 $procmux$29358
	if (posedge_p_clk) {
		p_core_2e_x__control____mem__size.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____mem__size : p_core_2e_x__control____mem__size.curr));
	}
	// cells $procdff$29828 $procmux$29298 $procmux$29355
	if (posedge_p_clk) {
		p_core_2e_x__control____mem__unsigned.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____mem__unsigned : p_core_2e_x__control____mem__unsigned.curr));
	}
	// cells $procdff$29829 $procmux$29295 $procmux$29349
	if (posedge_p_clk) {
		p_core_2e_x__control____register__write.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____register__write : p_core_2e_x__control____register__write.curr));
	}
	// cells $procdff$29830 $procmux$29292 $procmux$29352
	if (posedge_p_clk) {
		p_core_2e_x__control____writeback__select.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_237 ? p_core_2e_decoder_2e_control____writeback__select : p_core_2e_x__control____writeback__select.curr));
	}
	// cells $procdff$29831 $procmux$29277 $procmux$29280 $flatten\core.$and$tilelink_soc.v:1798$161 $flatten\core.$not$tilelink_soc.v:1797$160 $flatten\core.$not$tilelink_soc.v:1795$158
	if (posedge_p_clk) {
		p_core_2e_x__instruction.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_instruction__master_2e_instruction__stream____rsp__data : p_core_2e_x__instruction.curr));
	}
	// cells $procdff$29832 $procmux$29271 $procmux$29274 $flatten\core.$and$tilelink_soc.v:1794$157 $flatten\core.$not$tilelink_soc.v:1793$156 $flatten\core.$not$tilelink_soc.v:1792$155
	if (posedge_p_clk) {
		p_core_2e_x__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_d__program__counter.curr : p_core_2e_x__program__counter.curr));
	}
	// cells $procdff$29833 $procmux$29250 $procmux$29253 $flatten\core.$and$tilelink_soc.v:1774$137 $flatten\core.$not$tilelink_soc.v:1773$136 $flatten\core.$not$tilelink_soc.v:1772$135 $procmux$29256 $flatten\core.$or$tilelink_soc.v:1771$134 $flatten\core.$not$tilelink_soc.v:1770$133
	if (posedge_p_clk) {
		p_core_2e_x__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? p_core_2e_d__arbitration____valid.curr : (or_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), p_core_2e_x__arbitration____remove) ? value<1>{0u} : p_core_2e_x__arbitration____valid.curr)));
	}
	// cells $procdff$29834 $procmux$29211 $procmux$29214 $flatten\core.$and$tilelink_soc.v:1733$96 $flatten\core.$not$tilelink_soc.v:1732$95 $flatten\core.$not$tilelink_soc.v:1731$94
	if (posedge_p_clk) {
		p_core_2e_d__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? p_core_2e_f__program__counter.curr : p_core_2e_d__program__counter.curr));
	}
	// cells $procdff$29835 $procmux$29032 $procmux$29035 $flatten\core.$and$tilelink_soc.v:2014$379 $flatten\core.$not$tilelink_soc.v:2013$378 $flatten\core.$not$tilelink_soc.v:2012$377 $procmux$29038 $flatten\core.$or$tilelink_soc.v:2011$376 $flatten\core.$not$tilelink_soc.v:2010$375
	if (posedge_p_clk) {
		p_core_2e_d__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_f__arbitration____halted), not_u<1>(p_core_2e_f__arbitration____remove)) ? p_core_2e_f__arbitration____valid.curr : (or_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), p_core_2e_d__arbitration____remove) ? value<1>{0u} : p_core_2e_d__arbitration____valid.curr)));
	}
	// cells $procdff$29836 $procmux$29477 $procmux$29480 $flatten\core.$and$tilelink_soc.v:2001$366 $flatten\core.$not$tilelink_soc.v:2000$365 $flatten\core.$not$tilelink_soc.v:1999$364
	if (posedge_p_clk) {
		p_core_2e_f__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_f__arbitration____halted), not_u<1>(p_core_2e_f__arbitration____remove)) ? p_core_2e_a__program__counter.curr : p_core_2e_f__program__counter.curr));
	}
	// cells $procdff$29837 $procmux$29283 $procmux$29286 $flatten\core.$and$tilelink_soc.v:1977$342 $flatten\core.$not$tilelink_soc.v:1966$331 $flatten\core.$not$tilelink_soc.v:1955$320 $procmux$29289 $flatten\core.$or$tilelink_soc.v:1944$309 $flatten\core.$not$tilelink_soc.v:1933$298
	if (posedge_p_clk) {
		p_core_2e_f__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_a__arbitration____halted), not_u<1>(p_core_2e_a__arbitration____remove)) ? p_core_2e_a__arbitration____valid.curr : (or_uu<1>(not_u<1>(p_core_2e_f__arbitration____halted), p_core_2e_f__arbitration____remove) ? value<1>{0u} : p_core_2e_f__arbitration____valid.curr)));
	}
	// cells $procdff$29838 $procmux$29226 $procmux$29229 $flatten\core.$and$tilelink_soc.v:1911$276 $flatten\core.$and$tilelink_soc.v:1883$248 $flatten\core.$not$tilelink_soc.v:1879$244 $procmux$29232 $flatten\core.$and$tilelink_soc.v:1862$227 $flatten\core.$not$tilelink_soc.v:1857$222 $flatten\core.$and$tilelink_soc.v:1853$218 $flatten\core.$eq$tilelink_soc.v:1847$212 $flatten\core.$and$tilelink_soc.v:1838$203 $flatten\core.$not$tilelink_soc.v:1828$193 $flatten\core.$and$tilelink_soc.v:1818$181 $flatten\core.$not$tilelink_soc.v:1807$170 $flatten\core.$add$tilelink_soc.v:1873$238 $procmux$29235 $flatten\core.$and$tilelink_soc.v:1780$143 $flatten\core.$not$tilelink_soc.v:1769$132 $flatten\core.$and$tilelink_soc.v:1761$124 $flatten\core.$not$tilelink_soc.v:1750$113 $flatten\core.$add$tilelink_soc.v:1796$159
	if (posedge_p_clk) {
		p_core_2e_a__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? p_core_2e_m__branch__target.curr : (and_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_d__arbitration____valid.curr, not_u<1>(p_core_2e_d__arbitration____halted)), not_u<1>(p_core_2e_d__arbitration____remove)), eq_uu<1>(p_core_2e_d__control____branch__mode, value<2>{0x1u})), not_u<1>(p_core_2e_d__control____branch__type)) ? add_uu<33>(p_core_2e_d__program__counter.curr, p_core_2e_d__control____immediate).slice<31,0>().val() : (and_uu<1>(and_uu<1>(p_core_2e_a__arbitration____valid.curr, not_u<1>(p_core_2e_a__arbitration____halted)), not_u<1>(p_core_2e_a__arbitration____remove)) ? add_uu<33>(p_core_2e_a__program__counter.curr, value<3>{0x4u}).slice<31,0>().val() : p_core_2e_a__program__counter.curr))));
	}
	// cells $procdff$29839 $procmux$28861
	if (posedge_p_clk) {
		p_core_2e_a__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : value<1>{0x1u});
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
	if (p_tl__ram_2e_controller_2e_rsp____valid.commit()) changed = true;
	if (p_tl__ram_2e_controller_2e_response__writeback__valid.commit()) changed = true;
	if (p_tl__ram_2e_controller_2e_last__req__addr.commit()) changed = true;
	if (p_tl__ram_2e_controller_2e_decoder__enc__in.commit()) changed = true;
	if (p_tl__ram_2e_wrapper_2e_tmp__req__mask.commit()) changed = true;
	if (p_tl__ram_2e_wrapper_2e_tmp__req__data.commit()) changed = true;
	if (p_tl__ram_2e_wrapper_2e_tmp__req__addr.commit()) changed = true;
	if (p_tl__ram_2e_wrapper_2e_fsm__state.commit()) changed = true;
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
	if (p_core_2e_d__arbitration____valid.commit()) changed = true;
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
	if (p_core_2e_m__program__counter.commit()) changed = true;
	if (p_core_2e_m__rs2__value.commit()) changed = true;
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
	if (p_core_2e_x__program__counter.commit()) changed = true;
	if (p_core_2e_x__rs1__is__forwarded.commit()) changed = true;
	if (p_core_2e_x__rs1__value__forwarded.commit()) changed = true;
	if (p_core_2e_x__rs2__is__forwarded.commit()) changed = true;
	if (p_core_2e_x__rs2__value__forwarded.commit()) changed = true;
	if (p_core_2e___0__.commit()) changed = true;
	if (p_core_2e___1__.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1716_24_82__ADDR.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1716_24_82__DATA.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1716_24_82__EN.commit()) changed = true;
	prev_p_clk = p_clk;
	if (memory_p_core_2e_register__file.commit()) changed = true;
	if (cell_p_tl__ram_2e_memory->commit()) changed = true;
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
	static const value<1> const_p_tl__ram_2e_bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram bus__d__denied", debug_item(const_p_tl__ram_2e_bus____d____denied, 0));
	static const value<2> const_p_tl__ram_2e_bus____d____param = value<2>{0u};
	items.add(path + "tl_ram bus__d__param", debug_item(const_p_tl__ram_2e_bus____d____param, 0));
	items.add(path + "tl_ram clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_ram controller_rsp__valid", debug_item(debug_alias(), p_tl__ram_2e_controller_2e_rsp____valid, 0));
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
	items.add(path + "tl_ram rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_ram wrapper_rsp_in__valid", debug_item(debug_alias(), p_tl__ram_2e_controller_2e_rsp____valid, 0));
	items.add(path + "tl_ram controller decoder enc_in", debug_item(debug_alias(), p_tl__ram_2e_controller_2e_decoder__enc__in, 0));
	items.add(path + "tl_ram controller rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_ram controller rsp__valid", debug_item(p_tl__ram_2e_controller_2e_rsp____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram controller response_writeback_valid", debug_item(p_tl__ram_2e_controller_2e_response__writeback__valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram controller last_req_addr", debug_item(p_tl__ram_2e_controller_2e_last__req__addr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram controller decoder_enc_in", debug_item(p_tl__ram_2e_controller_2e_decoder__enc__in, 0, debug_item::DRIVEN_COMB));
	items.add(path + "tl_ram controller clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__ram_2e_controller_2e_initial = value<1>{0u};
	items.add(path + "tl_ram controller initial", debug_item(const_p_tl__ram_2e_controller_2e_initial, 0));
	items.add(path + "tl_ram wrapper tmp_req_mask", debug_item(p_tl__ram_2e_wrapper_2e_tmp__req__mask, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram wrapper tmp_req_data", debug_item(p_tl__ram_2e_wrapper_2e_tmp__req__data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram wrapper tmp_req_addr", debug_item(p_tl__ram_2e_wrapper_2e_tmp__req__addr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram wrapper rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_ram wrapper rsp_in__valid", debug_item(debug_alias(), p_tl__ram_2e_controller_2e_rsp____valid, 0));
	items.add(path + "tl_ram wrapper fsm_state", debug_item(p_tl__ram_2e_wrapper_2e_fsm__state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram wrapper clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__ram_2e_wrapper_2e_initial = value<1>{0u};
	items.add(path + "tl_ram wrapper initial", debug_item(const_p_tl__ram_2e_wrapper_2e_initial, 0));
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
	static const value<1> const_p_core_2e__24_133 = value<1>{0x1u};
	items.add(path + "core $133", debug_item(const_p_core_2e__24_133, 0));
	static const value<1> const_p_core_2e__24_159 = value<1>{0x1u};
	items.add(path + "core $159", debug_item(const_p_core_2e__24_159, 0));
	items.add(path + "core $308", debug_item(debug_alias(), p_core_2e_x__control____branch__type, 0));
	static const value<1> const_p_core_2e__24_336 = value<1>{0x1u};
	items.add(path + "core $336", debug_item(const_p_core_2e__24_336, 0));
	static const value<1> const_p_core_2e__24_342 = value<1>{0x1u};
	items.add(path + "core $342", debug_item(const_p_core_2e__24_342, 0));
	static const value<1> const_p_core_2e__24_348 = value<1>{0x1u};
	items.add(path + "core $348", debug_item(const_p_core_2e__24_348, 0));
	static const value<1> const_p_core_2e__24_354 = value<1>{0x1u};
	items.add(path + "core $354", debug_item(const_p_core_2e__24_354, 0));
	static const value<1> const_p_core_2e__24_360 = value<1>{0x1u};
	items.add(path + "core $360", debug_item(const_p_core_2e__24_360, 0));
	static const value<1> const_p_core_2e__24_366 = value<1>{0x1u};
	items.add(path + "core $366", debug_item(const_p_core_2e__24_366, 0));
	static const value<1> const_p_core_2e__24_372 = value<1>{0x1u};
	items.add(path + "core $372", debug_item(const_p_core_2e__24_372, 0));
	static const value<1> const_p_core_2e__24_378 = value<1>{0x1u};
	items.add(path + "core $378", debug_item(const_p_core_2e__24_378, 0));
	static const value<1> const_p_core_2e__24_386 = value<1>{0x1u};
	items.add(path + "core $386", debug_item(const_p_core_2e__24_386, 0));
	static const value<1> const_p_core_2e__24_396 = value<1>{0x1u};
	items.add(path + "core $396", debug_item(const_p_core_2e__24_396, 0));
	static const value<1> const_p_core_2e__24_406 = value<1>{0x1u};
	items.add(path + "core $406", debug_item(const_p_core_2e__24_406, 0));
	static const value<1> const_p_core_2e__24_426 = value<1>{0x1u};
	items.add(path + "core $426", debug_item(const_p_core_2e__24_426, 0));
	static const value<1> const_p_core_2e__24_434 = value<1>{0x1u};
	items.add(path + "core $434", debug_item(const_p_core_2e__24_434, 0));
	static const value<1> const_p_core_2e__24_440 = value<1>{0x1u};
	items.add(path + "core $440", debug_item(const_p_core_2e__24_440, 0));
	static const value<1> const_p_core_2e__24_446 = value<1>{0x1u};
	items.add(path + "core $446", debug_item(const_p_core_2e__24_446, 0));
	static const value<1> const_p_core_2e__24_452 = value<1>{0x1u};
	items.add(path + "core $452", debug_item(const_p_core_2e__24_452, 0));
	static const value<1> const_p_core_2e__24_458 = value<1>{0x1u};
	items.add(path + "core $458", debug_item(const_p_core_2e__24_458, 0));
	static const value<1> const_p_core_2e__24_47 = value<1>{0x1u};
	items.add(path + "core $47", debug_item(const_p_core_2e__24_47, 0));
	static const value<1> const_p_core_2e__24_474 = value<1>{0x1u};
	items.add(path + "core $474", debug_item(const_p_core_2e__24_474, 0));
	static const value<1> const_p_core_2e_a__arbitration____halted__by__self = value<1>{0u};
	items.add(path + "core a_arbitration__halted_by_self", debug_item(const_p_core_2e_a__arbitration____halted__by__self, 0));
	items.add(path + "core a_arbitration__valid", debug_item(p_core_2e_a__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core a_program_counter", debug_item(p_core_2e_a__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core d_arbitration__valid", debug_item(p_core_2e_d__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
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
	items.add(path + "core m_program_counter", debug_item(p_core_2e_m__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_rs2_value", debug_item(p_core_2e_m__rs2__value, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core register_file_r_data", debug_item(debug_alias(), p_core_2e___0__, 0));
	items.add(path + "core register_file_r_data$4", debug_item(debug_alias(), p_core_2e___1__, 0));
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
	items.add(path + "core x_program_counter", debug_item(p_core_2e_x__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs1_is_forwarded", debug_item(p_core_2e_x__rs1__is__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs1_value_forwarded", debug_item(p_core_2e_x__rs1__value__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs1_value_read", debug_item(debug_alias(), p_core_2e___0__, 0));
	items.add(path + "core x_rs2_is_forwarded", debug_item(p_core_2e_x__rs2__is__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs2_value_forwarded", debug_item(p_core_2e_x__rs2__value__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs2_value_read", debug_item(debug_alias(), p_core_2e___1__, 0));
	items.add(path + "core _0_", debug_item(p_core_2e___0__, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core _1_", debug_item(p_core_2e___1__, 0, debug_item::DRIVEN_SYNC));
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
	static const value<3> const_p_tl__ram__bus____a____param = value<3>{0u};
	items.add(path + "tl_ram_bus__a__param", debug_item(const_p_tl__ram__bus____a____param, 0));
	static const value<1> const_p_tl__ram__bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_bus__a__corrupt", debug_item(const_p_tl__ram__bus____a____corrupt, 0));
	static const value<2> const_p_tl__ram__arbiter__bus____d____param = value<2>{0u};
	items.add(path + "tl_ram_arbiter_bus__d__param", debug_item(const_p_tl__ram__arbiter__bus____d____param, 0));
	static const value<1> const_p_tl__ram__arbiter__bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram_arbiter_bus__d__denied", debug_item(const_p_tl__ram__arbiter__bus____d____denied, 0));
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
	static const value<32> const_p_bus____a____data = value<32>{0u};
	items.add(path + "bus__a__data", debug_item(const_p_bus____a____data, 0));
	items.add(path + "tl_rom memory", debug_item(memory_p_tl__rom_2e_memory, 0));
	items.add(path + "core register_file", debug_item(memory_p_core_2e_register__file, 0));
	cell_p_tl__ram_2e_memory->debug_info(items, path + "tl_ram memory ");
}

} // namespace cxxrtl_design

extern "C"
cxxrtl_toplevel cxxrtl_design_create() {
	return new _cxxrtl_toplevel { std::unique_ptr<cxxrtl_design::p_top>(new cxxrtl_design::p_top) };
}
