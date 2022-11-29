// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _a0_Sobel_Loop_1_proc374_HH_
#define _a0_Sobel_Loop_1_proc374_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct a0_Sobel_Loop_1_proc374 : public sc_module {
    // Port declarations 36
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > p_src_mat_rows_read;
    sc_in< sc_lv<32> > p_src_mat_cols_read;
    sc_out< sc_lv<19> > p_src_mat_data_V_address0;
    sc_out< sc_logic > p_src_mat_data_V_ce0;
    sc_in< sc_lv<8> > p_src_mat_data_V_q0;
    sc_out< sc_lv<8> > p_src_V_V_din;
    sc_in< sc_logic > p_src_V_V_full_n;
    sc_out< sc_logic > p_src_V_V_write;
    sc_in< sc_lv<32> > p_dst_matx_rows_read;
    sc_in< sc_lv<32> > p_dst_matx_cols_read;
    sc_in< sc_lv<32> > p_dst_maty_cols_read;
    sc_out< sc_lv<32> > p_src_mat_rows_read_out_din;
    sc_in< sc_logic > p_src_mat_rows_read_out_full_n;
    sc_out< sc_logic > p_src_mat_rows_read_out_write;
    sc_out< sc_lv<32> > p_src_mat_cols_read_out_din;
    sc_in< sc_logic > p_src_mat_cols_read_out_full_n;
    sc_out< sc_logic > p_src_mat_cols_read_out_write;
    sc_out< sc_lv<32> > p_dst_matx_rows_read_out_din;
    sc_in< sc_logic > p_dst_matx_rows_read_out_full_n;
    sc_out< sc_logic > p_dst_matx_rows_read_out_write;
    sc_out< sc_lv<32> > p_dst_matx_cols_read_out_din;
    sc_in< sc_logic > p_dst_matx_cols_read_out_full_n;
    sc_out< sc_logic > p_dst_matx_cols_read_out_write;
    sc_out< sc_lv<32> > p_dst_maty_cols_read_out_din;
    sc_in< sc_logic > p_dst_maty_cols_read_out_full_n;
    sc_out< sc_logic > p_dst_maty_cols_read_out_write;


    // Module declarations
    a0_Sobel_Loop_1_proc374(sc_module_name name);
    SC_HAS_PROCESS(a0_Sobel_Loop_1_proc374);

    ~a0_Sobel_Loop_1_proc374();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > p_src_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > tmp_i_i_36_reg_264;
    sc_signal< sc_logic > p_src_mat_rows_read_out_blk_n;
    sc_signal< sc_logic > p_src_mat_cols_read_out_blk_n;
    sc_signal< sc_logic > p_dst_matx_rows_read_out_blk_n;
    sc_signal< sc_logic > p_dst_matx_cols_read_out_blk_n;
    sc_signal< sc_logic > p_dst_maty_cols_read_out_blk_n;
    sc_signal< sc_lv<31> > j_i_i_reg_167;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<20> > tmp_fu_178_p1;
    sc_signal< sc_lv<20> > tmp_reg_245;
    sc_signal< sc_lv<1> > tmp_i_i_fu_190_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<31> > i_fu_195_p2;
    sc_signal< sc_lv<31> > i_reg_254;
    sc_signal< sc_lv<20> > tmp_21_i_i_fu_201_p2;
    sc_signal< sc_lv<20> > tmp_21_i_i_reg_259;
    sc_signal< sc_lv<1> > tmp_i_i_36_fu_214_p2;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<31> > j_fu_219_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_lv<31> > i_i_i_reg_156;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > p_sum1_cast_i_i_fu_230_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > i_cast_i_i_fu_182_p1;
    sc_signal< sc_lv<20> > tmp_13_fu_186_p1;
    sc_signal< sc_lv<32> > j_cast_i_i_fu_206_p1;
    sc_signal< sc_lv<20> > tmp_14_fu_210_p1;
    sc_signal< sc_lv<20> > p_sum1_i_i_fu_225_p2;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state5;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<31> ap_const_lv31_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_i_cast_i_i_fu_182_p1();
    void thread_i_fu_195_p2();
    void thread_internal_ap_ready();
    void thread_j_cast_i_i_fu_206_p1();
    void thread_j_fu_219_p2();
    void thread_p_dst_matx_cols_read_out_blk_n();
    void thread_p_dst_matx_cols_read_out_din();
    void thread_p_dst_matx_cols_read_out_write();
    void thread_p_dst_matx_rows_read_out_blk_n();
    void thread_p_dst_matx_rows_read_out_din();
    void thread_p_dst_matx_rows_read_out_write();
    void thread_p_dst_maty_cols_read_out_blk_n();
    void thread_p_dst_maty_cols_read_out_din();
    void thread_p_dst_maty_cols_read_out_write();
    void thread_p_src_V_V_blk_n();
    void thread_p_src_V_V_din();
    void thread_p_src_V_V_write();
    void thread_p_src_mat_cols_read_out_blk_n();
    void thread_p_src_mat_cols_read_out_din();
    void thread_p_src_mat_cols_read_out_write();
    void thread_p_src_mat_data_V_address0();
    void thread_p_src_mat_data_V_ce0();
    void thread_p_src_mat_rows_read_out_blk_n();
    void thread_p_src_mat_rows_read_out_din();
    void thread_p_src_mat_rows_read_out_write();
    void thread_p_sum1_cast_i_i_fu_230_p1();
    void thread_p_sum1_i_i_fu_225_p2();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_13_fu_186_p1();
    void thread_tmp_14_fu_210_p1();
    void thread_tmp_21_i_i_fu_201_p2();
    void thread_tmp_fu_178_p1();
    void thread_tmp_i_i_36_fu_214_p2();
    void thread_tmp_i_i_fu_190_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif