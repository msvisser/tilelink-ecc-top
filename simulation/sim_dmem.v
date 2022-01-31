(* cxxrtl_blackbox, cxxrtl_template = "ADDR_WIDTH DATA_WIDTH" *)
module sim_dmem(clk, rst, clk_en, addr, write_en, write_data, read_data, error, uncorrectable_error, flips, ignore);
    parameter ADDR_WIDTH = 0;
    parameter DATA_WIDTH = 0;

    /* Clock and reset inputs */
    (* cxxrtl_edge = "a" *)
    input clk;
    input rst;

    /* SRAM control lines */
    input clk_en;
    (* cxxrtl_width = "ADDR_WIDTH" *)
    input [ADDR_WIDTH-1:0] addr;
    input write_en;
    (* cxxrtl_width = "DATA_WIDTH" *)
    input [DATA_WIDTH-1:0] write_data;
    (* cxxrtl_width = "DATA_WIDTH" *)
    output [DATA_WIDTH-1:0] read_data;

    /* Debug feedback inputs */
    input error;
    input uncorrectable_error;
    (* cxxrtl_width = "DATA_WIDTH" *)
    input [DATA_WIDTH-1:0] flips;
    input ignore;
endmodule
