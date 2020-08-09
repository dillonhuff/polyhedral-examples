module mult_stencil_op_hcompute_mult_stencil_2_broadcast (
    input [15:0] in,
    input en,
    output valid,
    output [15:0] mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5
);
assign valid = en;
assign mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5 = in;
endmodule

module mult_stencil_op_hcompute_hw_output_stencil_5_select (
    input clk,
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    input [15:0] mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5,
    output [15:0] out
);
assign out = mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5;
endmodule

module hw_input_stencil_op_hcompute_mult_stencil_3_select (
    input clk,
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3,
    output [15:0] out
);
assign out = hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3;
endmodule

module hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast (
    input [15:0] in,
    input en,
    output valid,
    output [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3
);
assign valid = en;
assign hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3 = in;
endmodule

module hcompute_hw_output_stencil (
    input [15:0] in0_mult_stencil_0,
    output [15:0] out_hw_output_stencil
);
assign out_hw_output_stencil = in0_mult_stencil_0;
endmodule

module hcompute_hw_input_stencil (
    input [15:0] in0_input_copy_stencil_0,
    output [15:0] out_hw_input_stencil
);
assign out_hw_input_stencil = in0_input_copy_stencil_0;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write_0,
    input [15:0] mult_stencil_op_hcompute_hw_output_stencil_read_0
);
wire [15:0] inner_compute_out_hw_output_stencil;
hcompute_hw_output_stencil inner_compute (
    .in0_mult_stencil_0(mult_stencil_op_hcompute_hw_output_stencil_read_0),
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_0 = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_input_stencil (
    input clk,
    output [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write_0,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read_0
);
wire [15:0] inner_compute_out_hw_input_stencil;
hcompute_hw_input_stencil inner_compute (
    .in0_input_copy_stencil_0(input_copy_stencil_op_hcompute_hw_input_stencil_read_0),
    .out_hw_input_stencil(inner_compute_out_hw_input_stencil)
);
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_0 = inner_compute_out_hw_input_stencil;
endmodule

module coreir_sub #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output [width-1:0] out
);
  assign out = in0 - in1;
endmodule

module coreir_slice #(
    parameter hi = 1,
    parameter lo = 0,
    parameter width = 1
) (
    input [width-1:0] in,
    output [hi-lo-1:0] out
);
  assign out = in[hi-1:lo];
endmodule

module coreir_reg #(
    parameter width = 1,
    parameter clk_posedge = 1,
    parameter init = 1
) (
    input clk,
    input [width-1:0] in,
    output [width-1:0] out
);
  reg [width-1:0] outReg=init;
  wire real_clk;
  assign real_clk = clk_posedge ? clk : ~clk;
  always @(posedge real_clk) begin
    outReg <= in;
  end
  assign out = outReg;
endmodule

module mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    parameter init = 16'h0000
) (
    input [15:0] in,
    input clk,
    output [15:0] out
);
wire [15:0] reg0_out;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(clk),
    .in(in),
    .out(reg0_out)
);
assign out = reg0_out;
endmodule

module coreir_mux #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    input sel,
    output [width-1:0] out
);
  assign out = sel ? in1 : in0;
endmodule

module mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    parameter init = 16'h0000
) (
    input [15:0] in,
    input clk,
    output [15:0] out,
    input en
);
wire [15:0] enMux_out;
wire [15:0] reg0_out;
coreir_mux #(
    .width(16)
) enMux (
    .in0(reg0_out),
    .in1(in),
    .sel(en),
    .out(enMux_out)
);
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(clk),
    .in(enMux_out),
    .out(reg0_out)
);
assign out = reg0_out;
endmodule

module coreir_mul #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output [width-1:0] out
);
  assign out = in0 * in1;
endmodule

module coreir_mem #(
    parameter has_init = 1'b0,
    parameter depth = 1,
    parameter width = 1
) (
    input clk,
    input [width-1:0] wdata,
    input [$clog2(depth)-1:0] waddr,
    input wen,
    output [width-1:0] rdata,
    input [$clog2(depth)-1:0] raddr
);
  reg [width-1:0] data[depth-1:0];
  always @(posedge clk) begin
    if (wen) begin
      data[waddr] <= wdata;
    end
  end
  assign rdata = data[raddr];
endmodule

module raw_dual_port_sram_tile__depth4096 (
    input clk,
    input [15:0] wdata,
    input [15:0] waddr,
    input wen,
    output [15:0] rdata,
    input [15:0] raddr,
    input ren
);
wire [15:0] mem_rdata;
wire [11:0] raddr_slice_out;
wire [15:0] readreg_out;
wire [11:0] waddr_slice_out;
coreir_mem #(
    .depth(4096),
    .has_init(1'b0),
    .width(16)
) mem (
    .clk(clk),
    .wdata(wdata),
    .waddr(waddr_slice_out),
    .wen(wen),
    .rdata(mem_rdata),
    .raddr(raddr_slice_out)
);
coreir_slice #(
    .hi(12),
    .lo(0),
    .width(16)
) raddr_slice (
    .in(raddr),
    .out(raddr_slice_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) readreg (
    .in(mem_rdata),
    .clk(clk),
    .out(readreg_out),
    .en(ren)
);
coreir_slice #(
    .hi(12),
    .lo(0),
    .width(16)
) waddr_slice (
    .in(waddr),
    .out(waddr_slice_out)
);
assign rdata = readreg_out;
endmodule

module coreir_eq #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output out
);
  assign out = in0 == in1;
endmodule

module coreir_const #(
    parameter width = 1,
    parameter value = 1
) (
    output [width-1:0] out
);
  assign out = value;
endmodule

module hcompute_mult_stencil (
    input [15:0] in0_hw_input_stencil_0,
    output [15:0] out_mult_stencil
);
wire [15:0] const2__259_out;
wire [15:0] mul_hw_input_stencil_1_259_260_out;
coreir_const #(
    .value(16'h0002),
    .width(16)
) const2__259 (
    .out(const2__259_out)
);
coreir_mul #(
    .width(16)
) mul_hw_input_stencil_1_259_260 (
    .in0(in0_hw_input_stencil_0),
    .in1(const2__259_out),
    .out(mul_hw_input_stencil_1_259_260_out)
);
assign out_mult_stencil = mul_hw_input_stencil_1_259_260_out;
endmodule

module cu_op_hcompute_mult_stencil (
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_mult_stencil_read_0,
    output [15:0] mult_stencil_op_hcompute_mult_stencil_write_0
);
wire [15:0] inner_compute_out_mult_stencil;
hcompute_mult_stencil inner_compute (
    .in0_hw_input_stencil_0(hw_input_stencil_op_hcompute_mult_stencil_read_0),
    .out_mult_stencil(inner_compute_out_mult_stencil)
);
assign mult_stencil_op_hcompute_mult_stencil_write_0 = inner_compute_out_mult_stencil;
endmodule

module coreir_add #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output [width-1:0] out
);
  assign out = in0 + in1;
endmodule

module corebit_wire (
    input in,
    output out
);
  assign out = in;
endmodule

module corebit_reg #(
    parameter clk_posedge = 1,
    parameter init = 1
) (
    input clk,
    input in,
    output out
);
reg outReg = init;
always @(posedge clk) begin
  outReg <= in;
end
assign out = outReg;
endmodule

module corebit_const #(
    parameter value = 1
) (
    output out
);
  assign out = value;
endmodule

module corebit_and (
    input in0,
    input in1,
    output out
);
  assign out = in0 & in1;
endmodule

module array_delay_U59 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2
);
wire [15:0] _U60_out;
wire [15:0] _U61_out;
wire [15:0] _U62_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U60 (
    .in(in_0),
    .clk(clk),
    .out(_U60_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U61 (
    .in(in_1),
    .clk(clk),
    .out(_U61_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U62 (
    .in(in_2),
    .clk(clk),
    .out(_U62_out)
);
assign out_0 = _U60_out;
assign out_1 = _U61_out;
assign out_2 = _U62_out;
endmodule

module array_delay_U55 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2
);
wire [15:0] _U56_out;
wire [15:0] _U57_out;
wire [15:0] _U58_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U56 (
    .in(in_0),
    .clk(clk),
    .out(_U56_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U57 (
    .in(in_1),
    .clk(clk),
    .out(_U57_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U58 (
    .in(in_2),
    .clk(clk),
    .out(_U58_out)
);
assign out_0 = _U56_out;
assign out_1 = _U57_out;
assign out_2 = _U58_out;
endmodule

module array_delay_U38 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2
);
wire [15:0] _U39_out;
wire [15:0] _U40_out;
wire [15:0] _U41_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U39 (
    .in(in_0),
    .clk(clk),
    .out(_U39_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U40 (
    .in(in_1),
    .clk(clk),
    .out(_U40_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U41 (
    .in(in_2),
    .clk(clk),
    .out(_U41_out)
);
assign out_0 = _U39_out;
assign out_1 = _U40_out;
assign out_2 = _U41_out;
endmodule

module array_delay_U34 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2
);
wire [15:0] _U35_out;
wire [15:0] _U36_out;
wire [15:0] _U37_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U35 (
    .in(in_0),
    .clk(clk),
    .out(_U35_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U36 (
    .in(in_1),
    .clk(clk),
    .out(_U36_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U37 (
    .in(in_2),
    .clk(clk),
    .out(_U37_out)
);
assign out_0 = _U35_out;
assign out_1 = _U36_out;
assign out_2 = _U37_out;
endmodule

module array_delay_U17 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2
);
wire [15:0] _U18_out;
wire [15:0] _U19_out;
wire [15:0] _U20_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U18 (
    .in(in_0),
    .clk(clk),
    .out(_U18_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U19 (
    .in(in_1),
    .clk(clk),
    .out(_U19_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U20 (
    .in(in_2),
    .clk(clk),
    .out(_U20_out)
);
assign out_0 = _U18_out;
assign out_1 = _U19_out;
assign out_2 = _U20_out;
endmodule

module array_delay_U13 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2
);
wire [15:0] _U14_out;
wire [15:0] _U15_out;
wire [15:0] _U16_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U14 (
    .in(in_0),
    .clk(clk),
    .out(_U14_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U15 (
    .in(in_1),
    .clk(clk),
    .out(_U15_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U16 (
    .in(in_2),
    .clk(clk),
    .out(_U16_out)
);
assign out_0 = _U14_out;
assign out_1 = _U15_out;
assign out_2 = _U16_out;
endmodule

module aff__U84 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    output [15:0] out
);
wire [15:0] add_all__U88_out;
wire [15:0] add_all__U89_out;
wire [15:0] add_all__U90_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U85_out;
wire [15:0] mul_d1__U86_out;
wire [15:0] mul_d2__U87_out;
coreir_add #(
    .width(16)
) add_all__U88 (
    .in0(mul_d0__U85_out),
    .in1(mul_d1__U86_out),
    .out(add_all__U88_out)
);
coreir_add #(
    .width(16)
) add_all__U89 (
    .in0(add_all__U88_out),
    .in1(mul_d2__U87_out),
    .out(add_all__U89_out)
);
coreir_add #(
    .width(16)
) add_all__U90 (
    .in0(add_all__U89_out),
    .in1(const_term_out),
    .out(add_all__U90_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0040),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U85 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U85_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U86 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U86_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U87 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U87_out)
);
assign out = add_all__U90_out;
endmodule

module aff__U77 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    output [15:0] out
);
wire [15:0] add_all__U81_out;
wire [15:0] add_all__U82_out;
wire [15:0] add_all__U83_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U78_out;
wire [15:0] mul_d1__U79_out;
wire [15:0] mul_d2__U80_out;
coreir_add #(
    .width(16)
) add_all__U81 (
    .in0(mul_d0__U78_out),
    .in1(mul_d1__U79_out),
    .out(add_all__U81_out)
);
coreir_add #(
    .width(16)
) add_all__U82 (
    .in0(add_all__U81_out),
    .in1(mul_d2__U80_out),
    .out(add_all__U82_out)
);
coreir_add #(
    .width(16)
) add_all__U83 (
    .in0(add_all__U82_out),
    .in1(const_term_out),
    .out(add_all__U83_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0040),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U78 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U78_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U79 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U79_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U80 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U80_out)
);
assign out = add_all__U83_out;
endmodule

module mult_stencil_ub (
    input clk,
    output [15:0] op_hcompute_hw_output_stencil_read_0,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars_0,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars_1,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars_2,
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_mult_stencil_write_0,
    input [15:0] op_hcompute_mult_stencil_write_ctrl_vars_0,
    input [15:0] op_hcompute_mult_stencil_write_ctrl_vars_1,
    input [15:0] op_hcompute_mult_stencil_write_ctrl_vars_2,
    input op_hcompute_mult_stencil_write_wen
);
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_5_select_out;
wire mult_stencil_op_hcompute_mult_stencil_2_broadcast_valid;
wire [15:0] mult_stencil_op_hcompute_mult_stencil_2_broadcast_mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5;
wire [15:0] mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_rdata;
wire [15:0] mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_read_addrgen_out;
wire [15:0] mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_write_addrgen_out;
mult_stencil_op_hcompute_hw_output_stencil_5_select mult_stencil_op_hcompute_hw_output_stencil_5_select (
    .clk(clk),
    .d_0(op_hcompute_hw_output_stencil_read_ctrl_vars_0),
    .d_1(op_hcompute_hw_output_stencil_read_ctrl_vars_1),
    .d_2(op_hcompute_hw_output_stencil_read_ctrl_vars_2),
    .mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5(mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_rdata),
    .out(mult_stencil_op_hcompute_hw_output_stencil_5_select_out)
);
mult_stencil_op_hcompute_mult_stencil_2_broadcast mult_stencil_op_hcompute_mult_stencil_2_broadcast (
    .in(op_hcompute_mult_stencil_write_0),
    .en(op_hcompute_mult_stencil_write_wen),
    .valid(mult_stencil_op_hcompute_mult_stencil_2_broadcast_valid),
    .mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5(mult_stencil_op_hcompute_mult_stencil_2_broadcast_mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5)
);
raw_dual_port_sram_tile__depth4096 mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5 (
    .clk(clk),
    .wdata(mult_stencil_op_hcompute_mult_stencil_2_broadcast_mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5),
    .waddr(mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_write_addrgen_out),
    .wen(mult_stencil_op_hcompute_mult_stencil_2_broadcast_valid),
    .rdata(mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_rdata),
    .raddr(mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_read_addrgen_out),
    .ren(op_hcompute_hw_output_stencil_read_ren)
);
aff__U77 mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_read_addrgen (
    .d_0(op_hcompute_hw_output_stencil_read_ctrl_vars_0),
    .d_1(op_hcompute_hw_output_stencil_read_ctrl_vars_1),
    .d_2(op_hcompute_hw_output_stencil_read_ctrl_vars_2),
    .out(mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_read_addrgen_out)
);
aff__U84 mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_write_addrgen (
    .d_0(op_hcompute_mult_stencil_write_ctrl_vars_0),
    .d_1(op_hcompute_mult_stencil_write_ctrl_vars_1),
    .d_2(op_hcompute_mult_stencil_write_ctrl_vars_2),
    .out(mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_write_addrgen_out)
);
assign op_hcompute_hw_output_stencil_read_0 = mult_stencil_op_hcompute_hw_output_stencil_5_select_out;
endmodule

module aff__U70 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    output [15:0] out
);
wire [15:0] add_all__U74_out;
wire [15:0] add_all__U75_out;
wire [15:0] add_all__U76_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U71_out;
wire [15:0] mul_d1__U72_out;
wire [15:0] mul_d2__U73_out;
coreir_add #(
    .width(16)
) add_all__U74 (
    .in0(mul_d0__U71_out),
    .in1(mul_d1__U72_out),
    .out(add_all__U74_out)
);
coreir_add #(
    .width(16)
) add_all__U75 (
    .in0(add_all__U74_out),
    .in1(mul_d2__U73_out),
    .out(add_all__U75_out)
);
coreir_add #(
    .width(16)
) add_all__U76 (
    .in0(add_all__U75_out),
    .in1(const_term_out),
    .out(add_all__U76_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0040),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U71 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U71_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U72 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U72_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U73 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U73_out)
);
assign out = add_all__U76_out;
endmodule

module aff__U63 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    output [15:0] out
);
wire [15:0] add_all__U67_out;
wire [15:0] add_all__U68_out;
wire [15:0] add_all__U69_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U64_out;
wire [15:0] mul_d1__U65_out;
wire [15:0] mul_d2__U66_out;
coreir_add #(
    .width(16)
) add_all__U67 (
    .in0(mul_d0__U64_out),
    .in1(mul_d1__U65_out),
    .out(add_all__U67_out)
);
coreir_add #(
    .width(16)
) add_all__U68 (
    .in0(add_all__U67_out),
    .in1(mul_d2__U66_out),
    .out(add_all__U68_out)
);
coreir_add #(
    .width(16)
) add_all__U69 (
    .in0(add_all__U68_out),
    .in1(const_term_out),
    .out(add_all__U69_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0040),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U64 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U64_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U65 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U65_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U66 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U66_out)
);
assign out = add_all__U69_out;
endmodule

module hw_input_stencil_ub (
    input clk,
    input [15:0] op_hcompute_hw_input_stencil_write_0,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars_0,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars_1,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars_2,
    input op_hcompute_hw_input_stencil_write_wen,
    output [15:0] op_hcompute_mult_stencil_read_0,
    input [15:0] op_hcompute_mult_stencil_read_ctrl_vars_0,
    input [15:0] op_hcompute_mult_stencil_read_ctrl_vars_1,
    input [15:0] op_hcompute_mult_stencil_read_ctrl_vars_2,
    input op_hcompute_mult_stencil_read_ren
);
wire hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_valid;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_rdata;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_read_addrgen_out;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_write_addrgen_out;
wire [15:0] hw_input_stencil_op_hcompute_mult_stencil_3_select_out;
hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast (
    .in(op_hcompute_hw_input_stencil_write_0),
    .en(op_hcompute_hw_input_stencil_write_wen),
    .valid(hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_valid),
    .hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3(hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3)
);
raw_dual_port_sram_tile__depth4096 hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3 (
    .clk(clk),
    .wdata(hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3),
    .waddr(hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_write_addrgen_out),
    .wen(hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_valid),
    .rdata(hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_rdata),
    .raddr(hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_read_addrgen_out),
    .ren(op_hcompute_mult_stencil_read_ren)
);
aff__U63 hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_read_addrgen (
    .d_0(op_hcompute_mult_stencil_read_ctrl_vars_0),
    .d_1(op_hcompute_mult_stencil_read_ctrl_vars_1),
    .d_2(op_hcompute_mult_stencil_read_ctrl_vars_2),
    .out(hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_read_addrgen_out)
);
aff__U70 hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_write_addrgen (
    .d_0(op_hcompute_hw_input_stencil_write_ctrl_vars_0),
    .d_1(op_hcompute_hw_input_stencil_write_ctrl_vars_1),
    .d_2(op_hcompute_hw_input_stencil_write_ctrl_vars_2),
    .out(hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_write_addrgen_out)
);
hw_input_stencil_op_hcompute_mult_stencil_3_select hw_input_stencil_op_hcompute_mult_stencil_3_select (
    .clk(clk),
    .d_0(op_hcompute_mult_stencil_read_ctrl_vars_0),
    .d_1(op_hcompute_mult_stencil_read_ctrl_vars_1),
    .d_2(op_hcompute_mult_stencil_read_ctrl_vars_2),
    .hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3(hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_rdata),
    .out(hw_input_stencil_op_hcompute_mult_stencil_3_select_out)
);
assign op_hcompute_mult_stencil_read_0 = hw_input_stencil_op_hcompute_mult_stencil_3_select_out;
endmodule

module aff__U43 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    output [15:0] out
);
wire [15:0] add_all__U47_out;
wire [15:0] add_all__U48_out;
wire [15:0] add_all__U49_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U44_out;
wire [15:0] mul_d1__U45_out;
wire [15:0] mul_d2__U46_out;
coreir_add #(
    .width(16)
) add_all__U47 (
    .in0(mul_d0__U44_out),
    .in1(mul_d1__U45_out),
    .out(add_all__U47_out)
);
coreir_add #(
    .width(16)
) add_all__U48 (
    .in0(add_all__U47_out),
    .in1(mul_d2__U46_out),
    .out(add_all__U48_out)
);
coreir_add #(
    .width(16)
) add_all__U49 (
    .in0(add_all__U48_out),
    .in1(const_term_out),
    .out(add_all__U49_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0041),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h3000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U44 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U44_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U45 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U45_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U46 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U46_out)
);
assign out = add_all__U49_out;
endmodule

module affine_controller__U42 (
    input clk,
    output [15:0] d_0,
    output [15:0] d_1,
    output [15:0] d_2,
    output valid
);
wire [15:0] _U50_out;
wire [15:0] _U51_out;
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire d_0_am__U52_out;
wire d_0_am__U53_out;
wire d_0_at_max_out;
wire [15:0] d_0_inc_out;
wire [15:0] d_0_max_out;
wire [15:0] d_0_min_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_next_value_at_max_out;
wire [15:0] d_0_reg_out;
wire d_1_am__U54_out;
wire d_1_at_max_out;
wire [15:0] d_1_inc_out;
wire [15:0] d_1_max_out;
wire [15:0] d_1_min_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_next_value_at_max_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_inc_out;
wire [15:0] d_2_max_out;
wire [15:0] d_2_min_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_next_value_at_max_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] time_diff_out;
wire true_out;
coreir_const #(
    .value(16'h0001),
    .width(16)
) _U50 (
    .out(_U50_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) _U51 (
    .out(_U51_out)
);
aff__U43 affine_func (
    .d_0(d_0_reg_out),
    .d_1(d_1_reg_out),
    .d_2(d_2_reg_out),
    .out(affine_func_out)
);
coreir_eq #(
    .width(16)
) cmp_time (
    .in0(time_diff_out),
    .in1(_U51_out),
    .out(cmp_time_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
corebit_and d_0_am__U52 (
    .in0(true_out),
    .in1(d_1_at_max_out),
    .out(d_0_am__U52_out)
);
corebit_and d_0_am__U53 (
    .in0(d_0_am__U52_out),
    .in1(d_2_at_max_out),
    .out(d_0_am__U53_out)
);
coreir_eq #(
    .width(16)
) d_0_at_max (
    .in0(d_0_reg_out),
    .in1(d_0_max_out),
    .out(d_0_at_max_out)
);
coreir_add #(
    .width(16)
) d_0_inc (
    .in0(d_0_reg_out),
    .in1(_U50_out),
    .out(d_0_inc_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_max (
    .out(d_0_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_min (
    .out(d_0_min_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value (
    .in0(d_0_reg_out),
    .in1(d_0_next_value_at_max_out),
    .sel(d_0_am__U53_out),
    .out(d_0_next_value_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value_at_max (
    .in0(d_0_inc_out),
    .in1(d_0_min_out),
    .sel(d_0_at_max_out),
    .out(d_0_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
corebit_and d_1_am__U54 (
    .in0(true_out),
    .in1(d_2_at_max_out),
    .out(d_1_am__U54_out)
);
coreir_eq #(
    .width(16)
) d_1_at_max (
    .in0(d_1_reg_out),
    .in1(d_1_max_out),
    .out(d_1_at_max_out)
);
coreir_add #(
    .width(16)
) d_1_inc (
    .in0(d_1_reg_out),
    .in1(_U50_out),
    .out(d_1_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_1_max (
    .out(d_1_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_1_min (
    .out(d_1_min_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value (
    .in0(d_1_reg_out),
    .in1(d_1_next_value_at_max_out),
    .sel(d_1_am__U54_out),
    .out(d_1_next_value_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value_at_max (
    .in0(d_1_inc_out),
    .in1(d_1_min_out),
    .sel(d_1_at_max_out),
    .out(d_1_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
coreir_eq #(
    .width(16)
) d_2_at_max (
    .in0(d_2_reg_out),
    .in1(d_2_max_out),
    .out(d_2_at_max_out)
);
coreir_add #(
    .width(16)
) d_2_inc (
    .in0(d_2_reg_out),
    .in1(_U50_out),
    .out(d_2_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_2_max (
    .out(d_2_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_2_min (
    .out(d_2_min_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value (
    .in0(d_2_reg_out),
    .in1(d_2_next_value_at_max_out),
    .sel(true_out),
    .out(d_2_next_value_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value_at_max (
    .in0(d_2_inc_out),
    .in1(d_2_min_out),
    .sel(d_2_at_max_out),
    .out(d_2_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
coreir_add #(
    .width(16)
) inc_time (
    .in0(cycle_time_out),
    .in1(_U50_out),
    .out(inc_time_out)
);
coreir_sub #(
    .width(16)
) time_diff (
    .in0(affine_func_out),
    .in1(cycle_time_out),
    .out(time_diff_out)
);
corebit_const #(
    .value(1'b1)
) true (
    .out(true_out)
);
assign d_0 = d_0_reg_out;
assign d_1 = d_1_reg_out;
assign d_2 = d_2_reg_out;
assign valid = cmp_time_out;
endmodule

module aff__U22 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    output [15:0] out
);
wire [15:0] add_all__U26_out;
wire [15:0] add_all__U27_out;
wire [15:0] add_all__U28_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U23_out;
wire [15:0] mul_d1__U24_out;
wire [15:0] mul_d2__U25_out;
coreir_add #(
    .width(16)
) add_all__U26 (
    .in0(mul_d0__U23_out),
    .in1(mul_d1__U24_out),
    .out(add_all__U26_out)
);
coreir_add #(
    .width(16)
) add_all__U27 (
    .in0(add_all__U26_out),
    .in1(mul_d2__U25_out),
    .out(add_all__U27_out)
);
coreir_add #(
    .width(16)
) add_all__U28 (
    .in0(add_all__U27_out),
    .in1(const_term_out),
    .out(add_all__U28_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0041),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h1000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U23 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U23_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U24 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U24_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U25 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U25_out)
);
assign out = add_all__U28_out;
endmodule

module affine_controller__U21 (
    input clk,
    output [15:0] d_0,
    output [15:0] d_1,
    output [15:0] d_2,
    output valid
);
wire [15:0] _U29_out;
wire [15:0] _U30_out;
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire d_0_am__U31_out;
wire d_0_am__U32_out;
wire d_0_at_max_out;
wire [15:0] d_0_inc_out;
wire [15:0] d_0_max_out;
wire [15:0] d_0_min_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_next_value_at_max_out;
wire [15:0] d_0_reg_out;
wire d_1_am__U33_out;
wire d_1_at_max_out;
wire [15:0] d_1_inc_out;
wire [15:0] d_1_max_out;
wire [15:0] d_1_min_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_next_value_at_max_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_inc_out;
wire [15:0] d_2_max_out;
wire [15:0] d_2_min_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_next_value_at_max_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] time_diff_out;
wire true_out;
coreir_const #(
    .value(16'h0001),
    .width(16)
) _U29 (
    .out(_U29_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) _U30 (
    .out(_U30_out)
);
aff__U22 affine_func (
    .d_0(d_0_reg_out),
    .d_1(d_1_reg_out),
    .d_2(d_2_reg_out),
    .out(affine_func_out)
);
coreir_eq #(
    .width(16)
) cmp_time (
    .in0(time_diff_out),
    .in1(_U30_out),
    .out(cmp_time_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
corebit_and d_0_am__U31 (
    .in0(true_out),
    .in1(d_1_at_max_out),
    .out(d_0_am__U31_out)
);
corebit_and d_0_am__U32 (
    .in0(d_0_am__U31_out),
    .in1(d_2_at_max_out),
    .out(d_0_am__U32_out)
);
coreir_eq #(
    .width(16)
) d_0_at_max (
    .in0(d_0_reg_out),
    .in1(d_0_max_out),
    .out(d_0_at_max_out)
);
coreir_add #(
    .width(16)
) d_0_inc (
    .in0(d_0_reg_out),
    .in1(_U29_out),
    .out(d_0_inc_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_max (
    .out(d_0_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_min (
    .out(d_0_min_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value (
    .in0(d_0_reg_out),
    .in1(d_0_next_value_at_max_out),
    .sel(d_0_am__U32_out),
    .out(d_0_next_value_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value_at_max (
    .in0(d_0_inc_out),
    .in1(d_0_min_out),
    .sel(d_0_at_max_out),
    .out(d_0_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
corebit_and d_1_am__U33 (
    .in0(true_out),
    .in1(d_2_at_max_out),
    .out(d_1_am__U33_out)
);
coreir_eq #(
    .width(16)
) d_1_at_max (
    .in0(d_1_reg_out),
    .in1(d_1_max_out),
    .out(d_1_at_max_out)
);
coreir_add #(
    .width(16)
) d_1_inc (
    .in0(d_1_reg_out),
    .in1(_U29_out),
    .out(d_1_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_1_max (
    .out(d_1_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_1_min (
    .out(d_1_min_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value (
    .in0(d_1_reg_out),
    .in1(d_1_next_value_at_max_out),
    .sel(d_1_am__U33_out),
    .out(d_1_next_value_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value_at_max (
    .in0(d_1_inc_out),
    .in1(d_1_min_out),
    .sel(d_1_at_max_out),
    .out(d_1_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
coreir_eq #(
    .width(16)
) d_2_at_max (
    .in0(d_2_reg_out),
    .in1(d_2_max_out),
    .out(d_2_at_max_out)
);
coreir_add #(
    .width(16)
) d_2_inc (
    .in0(d_2_reg_out),
    .in1(_U29_out),
    .out(d_2_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_2_max (
    .out(d_2_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_2_min (
    .out(d_2_min_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value (
    .in0(d_2_reg_out),
    .in1(d_2_next_value_at_max_out),
    .sel(true_out),
    .out(d_2_next_value_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value_at_max (
    .in0(d_2_inc_out),
    .in1(d_2_min_out),
    .sel(d_2_at_max_out),
    .out(d_2_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
coreir_add #(
    .width(16)
) inc_time (
    .in0(cycle_time_out),
    .in1(_U29_out),
    .out(inc_time_out)
);
coreir_sub #(
    .width(16)
) time_diff (
    .in0(affine_func_out),
    .in1(cycle_time_out),
    .out(time_diff_out)
);
corebit_const #(
    .value(1'b1)
) true (
    .out(true_out)
);
assign d_0 = d_0_reg_out;
assign d_1 = d_1_reg_out;
assign d_2 = d_2_reg_out;
assign valid = cmp_time_out;
endmodule

module aff__U1 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    output [15:0] out
);
wire [15:0] add_all__U5_out;
wire [15:0] add_all__U6_out;
wire [15:0] add_all__U7_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U2_out;
wire [15:0] mul_d1__U3_out;
wire [15:0] mul_d2__U4_out;
coreir_add #(
    .width(16)
) add_all__U5 (
    .in0(mul_d0__U2_out),
    .in1(mul_d1__U3_out),
    .out(add_all__U5_out)
);
coreir_add #(
    .width(16)
) add_all__U6 (
    .in0(add_all__U5_out),
    .in1(mul_d2__U4_out),
    .out(add_all__U6_out)
);
coreir_add #(
    .width(16)
) add_all__U7 (
    .in0(add_all__U6_out),
    .in1(const_term_out),
    .out(add_all__U7_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0040),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U2 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U2_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U3 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U3_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U4 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U4_out)
);
assign out = add_all__U7_out;
endmodule

module affine_controller__U0 (
    input clk,
    output [15:0] d_0,
    output [15:0] d_1,
    output [15:0] d_2,
    output valid
);
wire [15:0] _U8_out;
wire [15:0] _U9_out;
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire d_0_am__U10_out;
wire d_0_am__U11_out;
wire d_0_at_max_out;
wire [15:0] d_0_inc_out;
wire [15:0] d_0_max_out;
wire [15:0] d_0_min_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_next_value_at_max_out;
wire [15:0] d_0_reg_out;
wire d_1_am__U12_out;
wire d_1_at_max_out;
wire [15:0] d_1_inc_out;
wire [15:0] d_1_max_out;
wire [15:0] d_1_min_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_next_value_at_max_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_inc_out;
wire [15:0] d_2_max_out;
wire [15:0] d_2_min_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_next_value_at_max_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] time_diff_out;
wire true_out;
coreir_const #(
    .value(16'h0001),
    .width(16)
) _U8 (
    .out(_U8_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) _U9 (
    .out(_U9_out)
);
aff__U1 affine_func (
    .d_0(d_0_reg_out),
    .d_1(d_1_reg_out),
    .d_2(d_2_reg_out),
    .out(affine_func_out)
);
coreir_eq #(
    .width(16)
) cmp_time (
    .in0(time_diff_out),
    .in1(_U9_out),
    .out(cmp_time_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
corebit_and d_0_am__U10 (
    .in0(true_out),
    .in1(d_1_at_max_out),
    .out(d_0_am__U10_out)
);
corebit_and d_0_am__U11 (
    .in0(d_0_am__U10_out),
    .in1(d_2_at_max_out),
    .out(d_0_am__U11_out)
);
coreir_eq #(
    .width(16)
) d_0_at_max (
    .in0(d_0_reg_out),
    .in1(d_0_max_out),
    .out(d_0_at_max_out)
);
coreir_add #(
    .width(16)
) d_0_inc (
    .in0(d_0_reg_out),
    .in1(_U8_out),
    .out(d_0_inc_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_max (
    .out(d_0_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_min (
    .out(d_0_min_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value (
    .in0(d_0_reg_out),
    .in1(d_0_next_value_at_max_out),
    .sel(d_0_am__U11_out),
    .out(d_0_next_value_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value_at_max (
    .in0(d_0_inc_out),
    .in1(d_0_min_out),
    .sel(d_0_at_max_out),
    .out(d_0_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
corebit_and d_1_am__U12 (
    .in0(true_out),
    .in1(d_2_at_max_out),
    .out(d_1_am__U12_out)
);
coreir_eq #(
    .width(16)
) d_1_at_max (
    .in0(d_1_reg_out),
    .in1(d_1_max_out),
    .out(d_1_at_max_out)
);
coreir_add #(
    .width(16)
) d_1_inc (
    .in0(d_1_reg_out),
    .in1(_U8_out),
    .out(d_1_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_1_max (
    .out(d_1_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_1_min (
    .out(d_1_min_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value (
    .in0(d_1_reg_out),
    .in1(d_1_next_value_at_max_out),
    .sel(d_1_am__U12_out),
    .out(d_1_next_value_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value_at_max (
    .in0(d_1_inc_out),
    .in1(d_1_min_out),
    .sel(d_1_at_max_out),
    .out(d_1_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
coreir_eq #(
    .width(16)
) d_2_at_max (
    .in0(d_2_reg_out),
    .in1(d_2_max_out),
    .out(d_2_at_max_out)
);
coreir_add #(
    .width(16)
) d_2_inc (
    .in0(d_2_reg_out),
    .in1(_U8_out),
    .out(d_2_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_2_max (
    .out(d_2_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_2_min (
    .out(d_2_min_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value (
    .in0(d_2_reg_out),
    .in1(d_2_next_value_at_max_out),
    .sel(true_out),
    .out(d_2_next_value_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value_at_max (
    .in0(d_2_inc_out),
    .in1(d_2_min_out),
    .sel(d_2_at_max_out),
    .out(d_2_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
coreir_add #(
    .width(16)
) inc_time (
    .in0(cycle_time_out),
    .in1(_U8_out),
    .out(inc_time_out)
);
coreir_sub #(
    .width(16)
) time_diff (
    .in0(affine_func_out),
    .in1(cycle_time_out),
    .out(time_diff_out)
);
corebit_const #(
    .value(1'b1)
) true (
    .out(true_out)
);
assign d_0 = d_0_reg_out;
assign d_1 = d_1_reg_out;
assign d_2 = d_2_reg_out;
assign valid = cmp_time_out;
endmodule

module pointwise (
    input clk,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write_0,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read_0,
    output input_copy_stencil_op_hcompute_hw_input_stencil_read_valid
);
wire [15:0] _U91_out;
wire [15:0] hw_input_stencil_op_hcompute_mult_stencil_read_0;
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_read_0;
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write_0;
wire op_hcompute_hw_input_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out_0;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out_1;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out_2;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d_0;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d_1;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d_2;
wire op_hcompute_hw_input_stencil_port_controller_valid;
wire op_hcompute_hw_input_stencil_read_start_out;
wire op_hcompute_hw_input_stencil_write_start_out;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out_0;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out_1;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out_2;
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write_0;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out_0;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out_1;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out_2;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d_0;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d_1;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d_2;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire op_hcompute_hw_output_stencil_read_start_out;
wire op_hcompute_hw_output_stencil_write_start_out;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out_0;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out_1;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out_2;
wire [15:0] op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write_0;
wire op_hcompute_mult_stencil_exe_start_out;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out_0;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out_1;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out_2;
wire [15:0] op_hcompute_mult_stencil_port_controller_d_0;
wire [15:0] op_hcompute_mult_stencil_port_controller_d_1;
wire [15:0] op_hcompute_mult_stencil_port_controller_d_2;
wire op_hcompute_mult_stencil_port_controller_valid;
wire op_hcompute_mult_stencil_read_start_out;
wire op_hcompute_mult_stencil_write_start_out;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out_0;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out_1;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out_2;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U91 (
    .in(input_copy_stencil_op_hcompute_hw_input_stencil_read_0),
    .clk(clk),
    .out(_U91_out)
);
hw_input_stencil_ub hw_input_stencil (
    .clk(clk),
    .op_hcompute_hw_input_stencil_write_0(op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write_0),
    .op_hcompute_hw_input_stencil_write_ctrl_vars_0(op_hcompute_hw_input_stencil_write_start_control_vars_out_0),
    .op_hcompute_hw_input_stencil_write_ctrl_vars_1(op_hcompute_hw_input_stencil_write_start_control_vars_out_1),
    .op_hcompute_hw_input_stencil_write_ctrl_vars_2(op_hcompute_hw_input_stencil_write_start_control_vars_out_2),
    .op_hcompute_hw_input_stencil_write_wen(op_hcompute_hw_input_stencil_write_start_out),
    .op_hcompute_mult_stencil_read_0(hw_input_stencil_op_hcompute_mult_stencil_read_0),
    .op_hcompute_mult_stencil_read_ctrl_vars_0(op_hcompute_mult_stencil_port_controller_d_0),
    .op_hcompute_mult_stencil_read_ctrl_vars_1(op_hcompute_mult_stencil_port_controller_d_1),
    .op_hcompute_mult_stencil_read_ctrl_vars_2(op_hcompute_mult_stencil_port_controller_d_2),
    .op_hcompute_mult_stencil_read_ren(op_hcompute_mult_stencil_read_start_out)
);
mult_stencil_ub mult_stencil (
    .clk(clk),
    .op_hcompute_hw_output_stencil_read_0(mult_stencil_op_hcompute_hw_output_stencil_read_0),
    .op_hcompute_hw_output_stencil_read_ctrl_vars_0(op_hcompute_hw_output_stencil_port_controller_d_0),
    .op_hcompute_hw_output_stencil_read_ctrl_vars_1(op_hcompute_hw_output_stencil_port_controller_d_1),
    .op_hcompute_hw_output_stencil_read_ctrl_vars_2(op_hcompute_hw_output_stencil_port_controller_d_2),
    .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_start_out),
    .op_hcompute_mult_stencil_write_0(op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write_0),
    .op_hcompute_mult_stencil_write_ctrl_vars_0(op_hcompute_mult_stencil_write_start_control_vars_out_0),
    .op_hcompute_mult_stencil_write_ctrl_vars_1(op_hcompute_mult_stencil_write_start_control_vars_out_1),
    .op_hcompute_mult_stencil_write_ctrl_vars_2(op_hcompute_mult_stencil_write_start_control_vars_out_2),
    .op_hcompute_mult_stencil_write_wen(op_hcompute_mult_stencil_write_start_out)
);
cu_op_hcompute_hw_input_stencil op_hcompute_hw_input_stencil (
    .clk(clk),
    .hw_input_stencil_op_hcompute_hw_input_stencil_write_0(op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write_0),
    .input_copy_stencil_op_hcompute_hw_input_stencil_read_0(_U91_out)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_input_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_hw_input_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_stencil_exe_start_out)
);
array_delay_U17 op_hcompute_hw_input_stencil_exe_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_hw_input_stencil_port_controller_d_0),
    .in_1(op_hcompute_hw_input_stencil_port_controller_d_1),
    .in_2(op_hcompute_hw_input_stencil_port_controller_d_2),
    .out_0(op_hcompute_hw_input_stencil_exe_start_control_vars_out_0),
    .out_1(op_hcompute_hw_input_stencil_exe_start_control_vars_out_1),
    .out_2(op_hcompute_hw_input_stencil_exe_start_control_vars_out_2)
);
affine_controller__U0 op_hcompute_hw_input_stencil_port_controller (
    .clk(clk),
    .d_0(op_hcompute_hw_input_stencil_port_controller_d_0),
    .d_1(op_hcompute_hw_input_stencil_port_controller_d_1),
    .d_2(op_hcompute_hw_input_stencil_port_controller_d_2),
    .valid(op_hcompute_hw_input_stencil_port_controller_valid)
);
corebit_wire op_hcompute_hw_input_stencil_read_start (
    .in(op_hcompute_hw_input_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_stencil_read_start_out)
);
corebit_wire op_hcompute_hw_input_stencil_write_start (
    .in(op_hcompute_hw_input_stencil_exe_start_out),
    .out(op_hcompute_hw_input_stencil_write_start_out)
);
array_delay_U13 op_hcompute_hw_input_stencil_write_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_hw_input_stencil_port_controller_d_0),
    .in_1(op_hcompute_hw_input_stencil_port_controller_d_1),
    .in_2(op_hcompute_hw_input_stencil_port_controller_d_2),
    .out_0(op_hcompute_hw_input_stencil_write_start_control_vars_out_0),
    .out_1(op_hcompute_hw_input_stencil_write_start_control_vars_out_1),
    .out_2(op_hcompute_hw_input_stencil_write_start_control_vars_out_2)
);
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(clk),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write_0(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write_0),
    .mult_stencil_op_hcompute_hw_output_stencil_read_0(mult_stencil_op_hcompute_hw_output_stencil_read_0)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
array_delay_U59 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_hw_output_stencil_port_controller_d_0),
    .in_1(op_hcompute_hw_output_stencil_port_controller_d_1),
    .in_2(op_hcompute_hw_output_stencil_port_controller_d_2),
    .out_0(op_hcompute_hw_output_stencil_exe_start_control_vars_out_0),
    .out_1(op_hcompute_hw_output_stencil_exe_start_control_vars_out_1),
    .out_2(op_hcompute_hw_output_stencil_exe_start_control_vars_out_2)
);
affine_controller__U42 op_hcompute_hw_output_stencil_port_controller (
    .clk(clk),
    .d_0(op_hcompute_hw_output_stencil_port_controller_d_0),
    .d_1(op_hcompute_hw_output_stencil_port_controller_d_1),
    .d_2(op_hcompute_hw_output_stencil_port_controller_d_2),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid)
);
corebit_wire op_hcompute_hw_output_stencil_read_start (
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_read_start_out)
);
corebit_wire op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_exe_start_out),
    .out(op_hcompute_hw_output_stencil_write_start_out)
);
array_delay_U55 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_hw_output_stencil_port_controller_d_0),
    .in_1(op_hcompute_hw_output_stencil_port_controller_d_1),
    .in_2(op_hcompute_hw_output_stencil_port_controller_d_2),
    .out_0(op_hcompute_hw_output_stencil_write_start_control_vars_out_0),
    .out_1(op_hcompute_hw_output_stencil_write_start_control_vars_out_1),
    .out_2(op_hcompute_hw_output_stencil_write_start_control_vars_out_2)
);
cu_op_hcompute_mult_stencil op_hcompute_mult_stencil (
    .clk(clk),
    .hw_input_stencil_op_hcompute_mult_stencil_read_0(hw_input_stencil_op_hcompute_mult_stencil_read_0),
    .mult_stencil_op_hcompute_mult_stencil_write_0(op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write_0)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_mult_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_mult_stencil_port_controller_valid),
    .out(op_hcompute_mult_stencil_exe_start_out)
);
array_delay_U38 op_hcompute_mult_stencil_exe_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_mult_stencil_port_controller_d_0),
    .in_1(op_hcompute_mult_stencil_port_controller_d_1),
    .in_2(op_hcompute_mult_stencil_port_controller_d_2),
    .out_0(op_hcompute_mult_stencil_exe_start_control_vars_out_0),
    .out_1(op_hcompute_mult_stencil_exe_start_control_vars_out_1),
    .out_2(op_hcompute_mult_stencil_exe_start_control_vars_out_2)
);
affine_controller__U21 op_hcompute_mult_stencil_port_controller (
    .clk(clk),
    .d_0(op_hcompute_mult_stencil_port_controller_d_0),
    .d_1(op_hcompute_mult_stencil_port_controller_d_1),
    .d_2(op_hcompute_mult_stencil_port_controller_d_2),
    .valid(op_hcompute_mult_stencil_port_controller_valid)
);
corebit_wire op_hcompute_mult_stencil_read_start (
    .in(op_hcompute_mult_stencil_port_controller_valid),
    .out(op_hcompute_mult_stencil_read_start_out)
);
corebit_wire op_hcompute_mult_stencil_write_start (
    .in(op_hcompute_mult_stencil_exe_start_out),
    .out(op_hcompute_mult_stencil_write_start_out)
);
array_delay_U34 op_hcompute_mult_stencil_write_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_mult_stencil_port_controller_d_0),
    .in_1(op_hcompute_mult_stencil_port_controller_d_1),
    .in_2(op_hcompute_mult_stencil_port_controller_d_2),
    .out_0(op_hcompute_mult_stencil_write_start_control_vars_out_0),
    .out_1(op_hcompute_mult_stencil_write_start_control_vars_out_1),
    .out_2(op_hcompute_mult_stencil_write_start_control_vars_out_2)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_0 = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write_0;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start_out;
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = op_hcompute_hw_input_stencil_read_start_out;
endmodule

