// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="a0_sobel_accel,hls_ip_2018_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.888000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=3,HLS_SYN_DSP=3,HLS_SYN_FF=993,HLS_SYN_LUT=2071}" *)

module a0_sobel_accel (
        ap_clk,
        ap_rst_n,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        p_src_allocatedFlag,
        p_src_rows,
        p_src_cols,
        p_src_size,
        p_src_data_V_address0,
        p_src_data_V_ce0,
        p_src_data_V_q0,
        p_dstgx_allocatedFlag,
        p_dstgx_rows,
        p_dstgx_cols,
        p_dstgx_size,
        p_dstgx_data_V_address0,
        p_dstgx_data_V_ce0,
        p_dstgx_data_V_we0,
        p_dstgx_data_V_d0,
        p_dstgy_allocatedFlag,
        p_dstgy_rows,
        p_dstgy_cols,
        p_dstgy_size,
        p_dstgy_data_V_address0,
        p_dstgy_data_V_ce0,
        p_dstgy_data_V_we0,
        p_dstgy_data_V_d0
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

input   ap_clk;
input   ap_rst_n;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [7:0] p_src_allocatedFlag;
input  [31:0] p_src_rows;
input  [31:0] p_src_cols;
input  [31:0] p_src_size;
output  [18:0] p_src_data_V_address0;
output   p_src_data_V_ce0;
input  [7:0] p_src_data_V_q0;
input  [7:0] p_dstgx_allocatedFlag;
input  [31:0] p_dstgx_rows;
input  [31:0] p_dstgx_cols;
input  [31:0] p_dstgx_size;
output  [18:0] p_dstgx_data_V_address0;
output   p_dstgx_data_V_ce0;
output   p_dstgx_data_V_we0;
output  [7:0] p_dstgx_data_V_d0;
input  [7:0] p_dstgy_allocatedFlag;
input  [31:0] p_dstgy_rows;
input  [31:0] p_dstgy_cols;
input  [31:0] p_dstgy_size;
output  [18:0] p_dstgy_data_V_address0;
output   p_dstgy_data_V_ce0;
output   p_dstgy_data_V_we0;
output  [7:0] p_dstgy_data_V_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;

reg    ap_rst_n_inv;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [18:0] grp_Sobel_fu_78_p_src_mat_data_V_address0;
wire    grp_Sobel_fu_78_p_src_mat_data_V_ce0;
wire   [7:0] grp_Sobel_fu_78_p_src_mat_data_V_d0;
wire    grp_Sobel_fu_78_p_src_mat_data_V_we0;
wire   [18:0] grp_Sobel_fu_78_p_src_mat_data_V_address1;
wire    grp_Sobel_fu_78_p_src_mat_data_V_ce1;
wire   [7:0] grp_Sobel_fu_78_p_src_mat_data_V_d1;
wire    grp_Sobel_fu_78_p_src_mat_data_V_we1;
wire   [18:0] grp_Sobel_fu_78_p_dst_matx_data_V_address0;
wire    grp_Sobel_fu_78_p_dst_matx_data_V_ce0;
wire   [7:0] grp_Sobel_fu_78_p_dst_matx_data_V_d0;
wire    grp_Sobel_fu_78_p_dst_matx_data_V_we0;
wire   [18:0] grp_Sobel_fu_78_p_dst_matx_data_V_address1;
wire    grp_Sobel_fu_78_p_dst_matx_data_V_ce1;
wire   [7:0] grp_Sobel_fu_78_p_dst_matx_data_V_d1;
wire    grp_Sobel_fu_78_p_dst_matx_data_V_we1;
wire   [18:0] grp_Sobel_fu_78_p_dst_maty_data_V_address0;
wire    grp_Sobel_fu_78_p_dst_maty_data_V_ce0;
wire   [7:0] grp_Sobel_fu_78_p_dst_maty_data_V_d0;
wire    grp_Sobel_fu_78_p_dst_maty_data_V_we0;
wire   [18:0] grp_Sobel_fu_78_p_dst_maty_data_V_address1;
wire    grp_Sobel_fu_78_p_dst_maty_data_V_ce1;
wire   [7:0] grp_Sobel_fu_78_p_dst_maty_data_V_d1;
wire    grp_Sobel_fu_78_p_dst_maty_data_V_we1;
wire    grp_Sobel_fu_78_ap_done;
wire    grp_Sobel_fu_78_ap_start;
wire    grp_Sobel_fu_78_ap_ready;
wire    grp_Sobel_fu_78_ap_idle;
reg    grp_Sobel_fu_78_ap_continue;
reg    grp_Sobel_fu_78_ap_start_reg;
wire    ap_CS_fsm_state2;
wire    ap_sync_grp_Sobel_fu_78_ap_ready;
wire    ap_sync_grp_Sobel_fu_78_ap_done;
reg    ap_block_state2_on_subcall_done;
reg    ap_sync_reg_grp_Sobel_fu_78_ap_ready;
reg    ap_sync_reg_grp_Sobel_fu_78_ap_done;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
#0 grp_Sobel_fu_78_ap_start_reg = 1'b0;
#0 ap_sync_reg_grp_Sobel_fu_78_ap_ready = 1'b0;
#0 ap_sync_reg_grp_Sobel_fu_78_ap_done = 1'b0;
end

a0_Sobel grp_Sobel_fu_78(
    .p_src_mat_rows_read(p_src_rows),
    .p_src_mat_cols_read(p_src_cols),
    .p_src_mat_data_V_address0(grp_Sobel_fu_78_p_src_mat_data_V_address0),
    .p_src_mat_data_V_ce0(grp_Sobel_fu_78_p_src_mat_data_V_ce0),
    .p_src_mat_data_V_d0(grp_Sobel_fu_78_p_src_mat_data_V_d0),
    .p_src_mat_data_V_q0(p_src_data_V_q0),
    .p_src_mat_data_V_we0(grp_Sobel_fu_78_p_src_mat_data_V_we0),
    .p_src_mat_data_V_address1(grp_Sobel_fu_78_p_src_mat_data_V_address1),
    .p_src_mat_data_V_ce1(grp_Sobel_fu_78_p_src_mat_data_V_ce1),
    .p_src_mat_data_V_d1(grp_Sobel_fu_78_p_src_mat_data_V_d1),
    .p_src_mat_data_V_q1(8'd0),
    .p_src_mat_data_V_we1(grp_Sobel_fu_78_p_src_mat_data_V_we1),
    .p_dst_matx_rows_read(p_dstgx_rows),
    .p_dst_matx_cols_read(p_dstgx_cols),
    .p_dst_matx_data_V_address0(grp_Sobel_fu_78_p_dst_matx_data_V_address0),
    .p_dst_matx_data_V_ce0(grp_Sobel_fu_78_p_dst_matx_data_V_ce0),
    .p_dst_matx_data_V_d0(grp_Sobel_fu_78_p_dst_matx_data_V_d0),
    .p_dst_matx_data_V_q0(8'd0),
    .p_dst_matx_data_V_we0(grp_Sobel_fu_78_p_dst_matx_data_V_we0),
    .p_dst_matx_data_V_address1(grp_Sobel_fu_78_p_dst_matx_data_V_address1),
    .p_dst_matx_data_V_ce1(grp_Sobel_fu_78_p_dst_matx_data_V_ce1),
    .p_dst_matx_data_V_d1(grp_Sobel_fu_78_p_dst_matx_data_V_d1),
    .p_dst_matx_data_V_q1(8'd0),
    .p_dst_matx_data_V_we1(grp_Sobel_fu_78_p_dst_matx_data_V_we1),
    .p_dst_maty_cols_read(p_dstgy_cols),
    .p_dst_maty_data_V_address0(grp_Sobel_fu_78_p_dst_maty_data_V_address0),
    .p_dst_maty_data_V_ce0(grp_Sobel_fu_78_p_dst_maty_data_V_ce0),
    .p_dst_maty_data_V_d0(grp_Sobel_fu_78_p_dst_maty_data_V_d0),
    .p_dst_maty_data_V_q0(8'd0),
    .p_dst_maty_data_V_we0(grp_Sobel_fu_78_p_dst_maty_data_V_we0),
    .p_dst_maty_data_V_address1(grp_Sobel_fu_78_p_dst_maty_data_V_address1),
    .p_dst_maty_data_V_ce1(grp_Sobel_fu_78_p_dst_maty_data_V_ce1),
    .p_dst_maty_data_V_d1(grp_Sobel_fu_78_p_dst_maty_data_V_d1),
    .p_dst_maty_data_V_q1(8'd0),
    .p_dst_maty_data_V_we1(grp_Sobel_fu_78_p_dst_maty_data_V_we1),
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .p_src_mat_rows_read_ap_vld(1'b1),
    .p_src_mat_cols_read_ap_vld(1'b1),
    .p_dst_matx_rows_read_ap_vld(1'b1),
    .p_dst_matx_cols_read_ap_vld(1'b1),
    .p_dst_maty_cols_read_ap_vld(1'b1),
    .ap_done(grp_Sobel_fu_78_ap_done),
    .ap_start(grp_Sobel_fu_78_ap_start),
    .ap_ready(grp_Sobel_fu_78_ap_ready),
    .ap_idle(grp_Sobel_fu_78_ap_idle),
    .ap_continue(grp_Sobel_fu_78_ap_continue)
);

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_sync_reg_grp_Sobel_fu_78_ap_done <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state2) & (1'b0 == ap_block_state2_on_subcall_done))) begin
            ap_sync_reg_grp_Sobel_fu_78_ap_done <= 1'b0;
        end else if ((grp_Sobel_fu_78_ap_done == 1'b1)) begin
            ap_sync_reg_grp_Sobel_fu_78_ap_done <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_sync_reg_grp_Sobel_fu_78_ap_ready <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state2) & (1'b0 == ap_block_state2_on_subcall_done))) begin
            ap_sync_reg_grp_Sobel_fu_78_ap_ready <= 1'b0;
        end else if ((grp_Sobel_fu_78_ap_ready == 1'b1)) begin
            ap_sync_reg_grp_Sobel_fu_78_ap_ready <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        grp_Sobel_fu_78_ap_start_reg <= 1'b0;
    end else begin
        if ((((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) | ((ap_sync_grp_Sobel_fu_78_ap_ready == 1'b0) & (1'b1 == ap_CS_fsm_state2)))) begin
            grp_Sobel_fu_78_ap_start_reg <= 1'b1;
        end else if ((grp_Sobel_fu_78_ap_ready == 1'b1)) begin
            grp_Sobel_fu_78_ap_start_reg <= 1'b0;
        end
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (1'b0 == ap_block_state2_on_subcall_done))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (1'b0 == ap_block_state2_on_subcall_done))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (1'b0 == ap_block_state2_on_subcall_done))) begin
        grp_Sobel_fu_78_ap_continue = 1'b1;
    end else begin
        grp_Sobel_fu_78_ap_continue = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (1'b0 == ap_block_state2_on_subcall_done))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

always @ (*) begin
    ap_block_state2_on_subcall_done = ((ap_sync_grp_Sobel_fu_78_ap_ready & ap_sync_grp_Sobel_fu_78_ap_done) == 1'b0);
end

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign ap_sync_grp_Sobel_fu_78_ap_done = (grp_Sobel_fu_78_ap_done | ap_sync_reg_grp_Sobel_fu_78_ap_done);

assign ap_sync_grp_Sobel_fu_78_ap_ready = (grp_Sobel_fu_78_ap_ready | ap_sync_reg_grp_Sobel_fu_78_ap_ready);

assign grp_Sobel_fu_78_ap_start = grp_Sobel_fu_78_ap_start_reg;

assign p_dstgx_data_V_address0 = grp_Sobel_fu_78_p_dst_matx_data_V_address0;

assign p_dstgx_data_V_ce0 = grp_Sobel_fu_78_p_dst_matx_data_V_ce0;

assign p_dstgx_data_V_d0 = grp_Sobel_fu_78_p_dst_matx_data_V_d0;

assign p_dstgx_data_V_we0 = grp_Sobel_fu_78_p_dst_matx_data_V_we0;

assign p_dstgy_data_V_address0 = grp_Sobel_fu_78_p_dst_maty_data_V_address0;

assign p_dstgy_data_V_ce0 = grp_Sobel_fu_78_p_dst_maty_data_V_ce0;

assign p_dstgy_data_V_d0 = grp_Sobel_fu_78_p_dst_maty_data_V_d0;

assign p_dstgy_data_V_we0 = grp_Sobel_fu_78_p_dst_maty_data_V_we0;

assign p_src_data_V_address0 = grp_Sobel_fu_78_p_src_mat_data_V_address0;

assign p_src_data_V_ce0 = grp_Sobel_fu_78_p_src_mat_data_V_ce0;

endmodule //a0_sobel_accel