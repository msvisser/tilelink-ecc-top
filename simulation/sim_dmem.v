(* cxxrtl_blackbox, cxxrtl_template = "DATA_WIDTH" *)
module sim_dmem(clk, rst, clk_en, addr, write_en, write_data, read_data);
    parameter ADDR_WIDTH = 13;
    parameter DATA_WIDTH = 0;

    (* cxxrtl_edge = "a" *)
    input clk;
    input rst;

    input clk_en;
    // (* cxxrtl_width = "ADDR_WIDTH" *)
    input [ADDR_WIDTH-1:0] addr;
    input write_en;
    (* cxxrtl_width = "DATA_WIDTH" *)
    input [DATA_WIDTH-1:0] write_data;
    (* cxxrtl_width = "DATA_WIDTH" *)
    output [DATA_WIDTH-1:0] read_data;
endmodule
