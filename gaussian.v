// Module `ub` defined externally
module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_blur_stencil [0:0]
);
assign out_hw_output_stencil = in0_blur_stencil[0];
endmodule

module hcompute_hw_input_stencil (
    output [15:0] out_hw_input_stencil,
    input [15:0] in0_input_copy_stencil [0:0]
);
assign out_hw_input_stencil = in0_input_copy_stencil[0];
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] blur_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_blur_stencil [0:0];
assign inner_compute_in0_blur_stencil[0] = blur_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_blur_stencil(inner_compute_in0_blur_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_input_stencil (
    input clk,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0],
    output [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_input_stencil;
wire [15:0] inner_compute_in0_input_copy_stencil [0:0];
assign inner_compute_in0_input_copy_stencil[0] = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
hcompute_hw_input_stencil inner_compute (
    .out_hw_input_stencil(inner_compute_out_hw_input_stencil),
    .in0_input_copy_stencil(inner_compute_in0_input_copy_stencil)
);
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = inner_compute_out_hw_input_stencil;
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
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(clk),
    .in(in),
    .out(out)
);
endmodule

module hcompute_blur_unnormalized_stencil (
    output [15:0] out_blur_unnormalized_stencil
);
assign out_blur_unnormalized_stencil = 16'h0000;
endmodule

module cu_op_hcompute_blur_unnormalized_stencil (
    input clk,
    output [15:0] blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write [0:0]
);
wire [15:0] inner_compute_out_blur_unnormalized_stencil;
hcompute_blur_unnormalized_stencil inner_compute (
    .out_blur_unnormalized_stencil(inner_compute_out_blur_unnormalized_stencil)
);
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write[0] = inner_compute_out_blur_unnormalized_stencil;
endmodule

module hcompute_blur_stencil (
    output [15:0] out_blur_stencil,
    input [15:0] in0_blur_unnormalized_stencil [0:0]
);
assign out_blur_stencil = in0_blur_unnormalized_stencil[0] >> 16'h0008;
endmodule

module cu_op_hcompute_blur_stencil (
    input clk,
    input [15:0] blur_unnormalized_stencil_op_hcompute_blur_stencil_read [0:0],
    output [15:0] blur_stencil_op_hcompute_blur_stencil_write [0:0]
);
wire [15:0] inner_compute_out_blur_stencil;
wire [15:0] inner_compute_in0_blur_unnormalized_stencil [0:0];
assign inner_compute_in0_blur_unnormalized_stencil[0] = blur_unnormalized_stencil_op_hcompute_blur_stencil_read[0];
hcompute_blur_stencil inner_compute (
    .out_blur_stencil(inner_compute_out_blur_stencil),
    .in0_blur_unnormalized_stencil(inner_compute_in0_blur_unnormalized_stencil)
);
assign blur_stencil_op_hcompute_blur_stencil_write[0] = inner_compute_out_blur_stencil;
endmodule

module hcompute_blur_unnormalized_stencil_1 (
    output [15:0] out_blur_unnormalized_stencil,
    input [15:0] in1_hw_input_stencil [8:0]
);
assign out_blur_unnormalized_stencil = 16'((16'(in1_hw_input_stencil[0] * 16'h0018)) + (16'((16'(in1_hw_input_stencil[1] * 16'h001e)) + (16'((16'(in1_hw_input_stencil[2] * 16'h0018)) + (16'((16'(in1_hw_input_stencil[3] * 16'h001e)) + (16'((16'(in1_hw_input_stencil[4] * 16'h0025)) + (16'((16'(in1_hw_input_stencil[5] * 16'h001e)) + (16'((16'(in1_hw_input_stencil[6] * 16'h0018)) + (16'((16'(in1_hw_input_stencil[7] * 16'h0018)) + (16'(in1_hw_input_stencil[8] * 16'h001e)))))))))))))))));
endmodule

module cu_op_hcompute_blur_unnormalized_stencil_1 (
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read [8:0],
    output [15:0] blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_blur_unnormalized_stencil;
wire [15:0] inner_compute_in1_hw_input_stencil [8:0];
assign inner_compute_in1_hw_input_stencil[8] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[8];
assign inner_compute_in1_hw_input_stencil[7] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[7];
assign inner_compute_in1_hw_input_stencil[6] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[6];
assign inner_compute_in1_hw_input_stencil[5] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[5];
assign inner_compute_in1_hw_input_stencil[4] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[4];
assign inner_compute_in1_hw_input_stencil[3] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[3];
assign inner_compute_in1_hw_input_stencil[2] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[2];
assign inner_compute_in1_hw_input_stencil[1] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[1];
assign inner_compute_in1_hw_input_stencil[0] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[0];
hcompute_blur_unnormalized_stencil_1 inner_compute (
    .out_blur_unnormalized_stencil(inner_compute_out_blur_unnormalized_stencil),
    .in1_hw_input_stencil(inner_compute_in1_hw_input_stencil)
);
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write[0] = inner_compute_out_blur_unnormalized_stencil;
endmodule

module hw_input_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_blur_unnormalized_stencil_1_read [8:0],
    input [15:0] op_hcompute_hw_input_stencil_write [0:0]
);
wire [15:0] d_reg__U0_out;
wire [15:0] d_reg__U1_out;
wire [15:0] d_reg__U2_out;
wire [15:0] d_reg__U3_out;
wire [15:0] d_reg__U4_out;
wire [15:0] d_reg__U5_out;
wire [15:0] ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_dataout_0;
wire [15:0] ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_dataout_1;
wire [15:0] ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_chainin_0_const_in_out;
wire ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_clk_en_const_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U0 (
    .in(op_hcompute_hw_input_stencil_write[0]),
    .clk(clk),
    .out(d_reg__U0_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U1 (
    .in(d_reg__U0_out),
    .clk(clk),
    .out(d_reg__U1_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U2 (
    .in(ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_dataout_1),
    .clk(clk),
    .out(d_reg__U2_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U3 (
    .in(d_reg__U2_out),
    .clk(clk),
    .out(d_reg__U3_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U4 (
    .in(ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_dataout_0),
    .clk(clk),
    .out(d_reg__U4_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U5 (
    .in(d_reg__U4_out),
    .clk(clk),
    .out(d_reg__U5_out)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11 (
    .rst_n(reset),
    .clk_en(ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_clk_en_const_out),
    .clk(clk),
    .datain_0(op_hcompute_hw_input_stencil_write[0]),
    .chainin_0(ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_chainin_0_const_in_out),
    .dataout_0(ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_dataout_0),
    .dataout_1(ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_dataout_1)
);
assign ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_chainin_0_const_in_out = 16'h0000;
assign ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_clk_en_const_out = 1'b1;
assign op_hcompute_blur_unnormalized_stencil_1_read[8] = ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_dataout_1;
assign op_hcompute_blur_unnormalized_stencil_1_read[7] = op_hcompute_hw_input_stencil_write[0];
assign op_hcompute_blur_unnormalized_stencil_1_read[6] = ub_hw_input_stencil_op_hcompute_hw_input_stencil_2_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_dataout_0;
assign op_hcompute_blur_unnormalized_stencil_1_read[5] = d_reg__U0_out;
assign op_hcompute_blur_unnormalized_stencil_1_read[4] = d_reg__U2_out;
assign op_hcompute_blur_unnormalized_stencil_1_read[3] = d_reg__U4_out;
assign op_hcompute_blur_unnormalized_stencil_1_read[2] = d_reg__U1_out;
assign op_hcompute_blur_unnormalized_stencil_1_read[1] = d_reg__U3_out;
assign op_hcompute_blur_unnormalized_stencil_1_read[0] = d_reg__U5_out;
endmodule

module blur_unnormalized_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_blur_stencil_read [0:0],
    input [15:0] op_hcompute_blur_unnormalized_stencil_1_write [0:0],
    input [15:0] op_hcompute_blur_unnormalized_stencil_write [0:0]
);
assign op_hcompute_blur_stencil_read[0] = op_hcompute_blur_unnormalized_stencil_1_write[0];
endmodule

module blur_stencil_ub (
    input clk,
    input reset,
    input [15:0] op_hcompute_blur_stencil_write [0:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
assign op_hcompute_hw_output_stencil_read[0] = op_hcompute_blur_stencil_write[0];
endmodule

module gaussian (
    input clk,
    input reset,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output input_copy_stencil_op_hcompute_hw_input_stencil_read_valid,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0]
);
wire [15:0] _U6_out;
wire [15:0] blur_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] blur_unnormalized_stencil_op_hcompute_blur_stencil_read [0:0];
wire [15:0] hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read [8:0];
wire [15:0] op_hcompute_blur_stencil_blur_stencil_op_hcompute_blur_stencil_write [0:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write [0:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write [0:0];
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U6 (
    .in(input_copy_stencil_op_hcompute_hw_input_stencil_read[0]),
    .clk(clk),
    .out(_U6_out)
);
wire [15:0] blur_stencil_op_hcompute_blur_stencil_write [0:0];
assign blur_stencil_op_hcompute_blur_stencil_write[0] = op_hcompute_blur_stencil_blur_stencil_op_hcompute_blur_stencil_write[0];
blur_stencil_ub blur_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_blur_stencil_write(blur_stencil_op_hcompute_blur_stencil_write),
    .op_hcompute_hw_output_stencil_read(blur_stencil_op_hcompute_hw_output_stencil_read)
);
wire [15:0] blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write [0:0];
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write[0] = op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write[0];
wire [15:0] blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write [0:0];
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write[0] = op_hcompute_blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write[0];
blur_unnormalized_stencil_ub blur_unnormalized_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_blur_stencil_read(blur_unnormalized_stencil_op_hcompute_blur_stencil_read),
    .op_hcompute_blur_unnormalized_stencil_1_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write),
    .op_hcompute_blur_unnormalized_stencil_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write)
);
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write[0];
hw_input_stencil_ub hw_input_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_blur_unnormalized_stencil_1_read(hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read),
    .op_hcompute_hw_input_stencil_write(hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
wire [15:0] op_hcompute_blur_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_read [0:0];
assign op_hcompute_blur_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_read[0] = blur_unnormalized_stencil_op_hcompute_blur_stencil_read[0];
cu_op_hcompute_blur_stencil op_hcompute_blur_stencil (
    .clk(clk),
    .blur_unnormalized_stencil_op_hcompute_blur_stencil_read(op_hcompute_blur_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_read),
    .blur_stencil_op_hcompute_blur_stencil_write(op_hcompute_blur_stencil_blur_stencil_op_hcompute_blur_stencil_write)
);
cu_op_hcompute_blur_unnormalized_stencil op_hcompute_blur_unnormalized_stencil (
    .clk(clk),
    .blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write(op_hcompute_blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write)
);
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read [8:0];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[8] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[8];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[7] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[7];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[6] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[6];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[5] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[5];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[4] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[4];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[3] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[3];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[2] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[2];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[1] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[1];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[0] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[0];
cu_op_hcompute_blur_unnormalized_stencil_1 op_hcompute_blur_unnormalized_stencil_1 (
    .clk(clk),
    .hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read(op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read),
    .blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write(op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write)
);
wire [15:0] op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0];
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U6_out;
cu_op_hcompute_hw_input_stencil op_hcompute_hw_input_stencil (
    .clk(clk),
    .input_copy_stencil_op_hcompute_hw_input_stencil_read(op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read),
    .hw_input_stencil_op_hcompute_hw_input_stencil_write(op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
wire [15:0] op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read [0:0];
assign op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read[0] = blur_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(clk),
    .blur_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = 1'b0;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = 1'b0;
endmodule
