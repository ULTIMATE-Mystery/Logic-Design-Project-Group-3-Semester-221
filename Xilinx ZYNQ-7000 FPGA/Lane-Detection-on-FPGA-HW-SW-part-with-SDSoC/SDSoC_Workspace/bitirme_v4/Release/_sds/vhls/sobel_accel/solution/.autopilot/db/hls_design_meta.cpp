#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("p_src_allocatedFlag", 8, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("p_src_rows", 32, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("p_src_cols", 32, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("p_src_size", 32, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("p_src_data_V_address0", 19, hls_out, 4, "ap_memory", "mem_address", 1),
	Port_Property("p_src_data_V_ce0", 1, hls_out, 4, "ap_memory", "mem_ce", 1),
	Port_Property("p_src_data_V_q0", 8, hls_in, 4, "ap_memory", "mem_dout", 1),
	Port_Property("p_dstgx_allocatedFlag", 8, hls_in, 5, "ap_none", "in_data", 1),
	Port_Property("p_dstgx_rows", 32, hls_in, 6, "ap_none", "in_data", 1),
	Port_Property("p_dstgx_cols", 32, hls_in, 7, "ap_none", "in_data", 1),
	Port_Property("p_dstgx_size", 32, hls_in, 8, "ap_none", "in_data", 1),
	Port_Property("p_dstgx_data_V_address0", 19, hls_out, 9, "ap_memory", "mem_address", 1),
	Port_Property("p_dstgx_data_V_ce0", 1, hls_out, 9, "ap_memory", "mem_ce", 1),
	Port_Property("p_dstgx_data_V_we0", 1, hls_out, 9, "ap_memory", "mem_we", 1),
	Port_Property("p_dstgx_data_V_d0", 8, hls_out, 9, "ap_memory", "mem_din", 1),
	Port_Property("p_dstgy_allocatedFlag", 8, hls_in, 10, "ap_none", "in_data", 1),
	Port_Property("p_dstgy_rows", 32, hls_in, 11, "ap_none", "in_data", 1),
	Port_Property("p_dstgy_cols", 32, hls_in, 12, "ap_none", "in_data", 1),
	Port_Property("p_dstgy_size", 32, hls_in, 13, "ap_none", "in_data", 1),
	Port_Property("p_dstgy_data_V_address0", 19, hls_out, 14, "ap_memory", "mem_address", 1),
	Port_Property("p_dstgy_data_V_ce0", 1, hls_out, 14, "ap_memory", "mem_ce", 1),
	Port_Property("p_dstgy_data_V_we0", 1, hls_out, 14, "ap_memory", "mem_we", 1),
	Port_Property("p_dstgy_data_V_d0", 8, hls_out, 14, "ap_memory", "mem_din", 1),
};
const char* HLS_Design_Meta::dut_name = "sobel_accel";