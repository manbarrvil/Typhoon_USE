// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>
#include <time.h>
#include <stdarg.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif







// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines








































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables





// const variables
static const char* _plant_vdc_va1__n_ITEM_SIGNAL = "signal";
static const int _plant_vdc_va1__n_rd_as = 13107200;
static const unsigned int _plant_vdc_va1__p_addr = 8;
static const char* _plant_vdc_va1__p_cmp_abs_value = "False";
static const char* _plant_vdc_va1__p_comparator_enable = "False";
static const real _plant_vdc_va1__p_execution_rate = 5e-05;
static const char _plant_vdc_va1__p_feed_forward = 0;
static const char* _plant_vdc_va1__p_nd_msr_estimation = "false";
static const char* _plant_vdc_va1__p_operator = "greater";
static const char _plant_vdc_va1__p_override_signal_name = 1;
static const char* _plant_vdc_va1__p_param_set = "";
static const char* _plant_vdc_va1__p_sig_output = "True";
static const real _plant_vdc_va1__p_threshold = 0.0;
static const char* _plant_vdc_va1__p_type = "regular measurement";
static const char _plant_vdc_va1__p_visible = 1;

static const char* _plant_is_a_ia1__n_ITEM_SIGNAL = "signal";
static const int _plant_is_a_ia1__n_rd_as = 13107200;
static const unsigned int _plant_is_a_ia1__p_addr = 16;
static const char* _plant_is_a_ia1__p_cmp_abs_value = "False";
static const char* _plant_is_a_ia1__p_comparator_enable = "False";
static const real _plant_is_a_ia1__p_execution_rate = 5e-05;
static const char _plant_is_a_ia1__p_feed_forward = 0;
static const char* _plant_is_a_ia1__p_nd_msr_estimation = "false";
static const char* _plant_is_a_ia1__p_operator = "greater";
static const char _plant_is_a_ia1__p_override_signal_name = 1;
static const char* _plant_is_a_ia1__p_param_set = "";
static const char* _plant_is_a_ia1__p_sig_output = "True";
static const real _plant_is_a_ia1__p_threshold = 0.0;
static const char* _plant_is_a_ia1__p_type = "regular measurement";
static const char _plant_is_a_ia1__p_visible = 1;

static const char* _plant_is_b_ia1__n_ITEM_SIGNAL = "signal";
static const int _plant_is_b_ia1__n_rd_as = 13107200;
static const unsigned int _plant_is_b_ia1__p_addr = 17;
static const char* _plant_is_b_ia1__p_cmp_abs_value = "False";
static const char* _plant_is_b_ia1__p_comparator_enable = "False";
static const real _plant_is_b_ia1__p_execution_rate = 5e-05;
static const char _plant_is_b_ia1__p_feed_forward = 0;
static const char* _plant_is_b_ia1__p_nd_msr_estimation = "false";
static const char* _plant_is_b_ia1__p_operator = "greater";
static const char _plant_is_b_ia1__p_override_signal_name = 1;
static const char* _plant_is_b_ia1__p_param_set = "";
static const char* _plant_is_b_ia1__p_sig_output = "True";
static const real _plant_is_b_ia1__p_threshold = 0.0;
static const char* _plant_is_b_ia1__p_type = "regular measurement";
static const char _plant_is_b_ia1__p_visible = 1;

static const char* _plant_is_c_ia1__n_ITEM_SIGNAL = "signal";
static const int _plant_is_c_ia1__n_rd_as = 13107200;
static const unsigned int _plant_is_c_ia1__p_addr = 18;
static const char* _plant_is_c_ia1__p_cmp_abs_value = "False";
static const char* _plant_is_c_ia1__p_comparator_enable = "False";
static const real _plant_is_c_ia1__p_execution_rate = 5e-05;
static const char _plant_is_c_ia1__p_feed_forward = 0;
static const char* _plant_is_c_ia1__p_nd_msr_estimation = "false";
static const char* _plant_is_c_ia1__p_operator = "greater";
static const char _plant_is_c_ia1__p_override_signal_name = 1;
static const char* _plant_is_c_ia1__p_param_set = "";
static const char* _plant_is_c_ia1__p_sig_output = "True";
static const real _plant_is_c_ia1__p_threshold = 0.0;
static const char* _plant_is_c_ia1__p_type = "regular measurement";
static const char _plant_is_c_ia1__p_visible = 1;

static const char* _plant_it_a_ia1__n_ITEM_SIGNAL = "signal";
static const int _plant_it_a_ia1__n_rd_as = 13107200;
static const unsigned int _plant_it_a_ia1__p_addr = 19;
static const char* _plant_it_a_ia1__p_cmp_abs_value = "False";
static const char* _plant_it_a_ia1__p_comparator_enable = "False";
static const real _plant_it_a_ia1__p_execution_rate = 5e-05;
static const char _plant_it_a_ia1__p_feed_forward = 0;
static const char* _plant_it_a_ia1__p_nd_msr_estimation = "false";
static const char* _plant_it_a_ia1__p_operator = "greater";
static const char _plant_it_a_ia1__p_override_signal_name = 1;
static const char* _plant_it_a_ia1__p_param_set = "";
static const char* _plant_it_a_ia1__p_sig_output = "True";
static const real _plant_it_a_ia1__p_threshold = 0.0;
static const char* _plant_it_a_ia1__p_type = "regular measurement";
static const char _plant_it_a_ia1__p_visible = 1;

static const char* _plant_it_b_ia1__n_ITEM_SIGNAL = "signal";
static const int _plant_it_b_ia1__n_rd_as = 13107200;
static const unsigned int _plant_it_b_ia1__p_addr = 20;
static const char* _plant_it_b_ia1__p_cmp_abs_value = "False";
static const char* _plant_it_b_ia1__p_comparator_enable = "False";
static const real _plant_it_b_ia1__p_execution_rate = 5e-05;
static const char _plant_it_b_ia1__p_feed_forward = 0;
static const char* _plant_it_b_ia1__p_nd_msr_estimation = "false";
static const char* _plant_it_b_ia1__p_operator = "greater";
static const char _plant_it_b_ia1__p_override_signal_name = 1;
static const char* _plant_it_b_ia1__p_param_set = "";
static const char* _plant_it_b_ia1__p_sig_output = "True";
static const real _plant_it_b_ia1__p_threshold = 0.0;
static const char* _plant_it_b_ia1__p_type = "regular measurement";
static const char _plant_it_b_ia1__p_visible = 1;

static const char* _plant_it_c_ia1__n_ITEM_SIGNAL = "signal";
static const int _plant_it_c_ia1__n_rd_as = 13107200;
static const unsigned int _plant_it_c_ia1__p_addr = 21;
static const char* _plant_it_c_ia1__p_cmp_abs_value = "False";
static const char* _plant_it_c_ia1__p_comparator_enable = "False";
static const real _plant_it_c_ia1__p_execution_rate = 5e-05;
static const char _plant_it_c_ia1__p_feed_forward = 0;
static const char* _plant_it_c_ia1__p_nd_msr_estimation = "false";
static const char* _plant_it_c_ia1__p_operator = "greater";
static const char _plant_it_c_ia1__p_override_signal_name = 1;
static const char* _plant_it_c_ia1__p_param_set = "";
static const char* _plant_it_c_ia1__p_sig_output = "True";
static const real _plant_it_c_ia1__p_threshold = 0.0;
static const char* _plant_it_c_ia1__p_type = "regular measurement";
static const char _plant_it_c_ia1__p_visible = 1;

static const char* _plant_vs_a_va1__n_ITEM_SIGNAL = "signal";
static const int _plant_vs_a_va1__n_rd_as = 13107200;
static const unsigned int _plant_vs_a_va1__p_addr = 9;
static const char* _plant_vs_a_va1__p_cmp_abs_value = "False";
static const char* _plant_vs_a_va1__p_comparator_enable = "False";
static const real _plant_vs_a_va1__p_execution_rate = 5e-05;
static const char _plant_vs_a_va1__p_feed_forward = 0;
static const char* _plant_vs_a_va1__p_nd_msr_estimation = "false";
static const char* _plant_vs_a_va1__p_operator = "greater";
static const char _plant_vs_a_va1__p_override_signal_name = 1;
static const char* _plant_vs_a_va1__p_param_set = "";
static const char* _plant_vs_a_va1__p_sig_output = "True";
static const real _plant_vs_a_va1__p_threshold = 0.0;
static const char* _plant_vs_a_va1__p_type = "regular measurement";
static const char _plant_vs_a_va1__p_visible = 1;

static const char* _plant_vs_b_va1__n_ITEM_SIGNAL = "signal";
static const int _plant_vs_b_va1__n_rd_as = 13107200;
static const unsigned int _plant_vs_b_va1__p_addr = 10;
static const char* _plant_vs_b_va1__p_cmp_abs_value = "False";
static const char* _plant_vs_b_va1__p_comparator_enable = "False";
static const real _plant_vs_b_va1__p_execution_rate = 5e-05;
static const char _plant_vs_b_va1__p_feed_forward = 0;
static const char* _plant_vs_b_va1__p_nd_msr_estimation = "false";
static const char* _plant_vs_b_va1__p_operator = "greater";
static const char _plant_vs_b_va1__p_override_signal_name = 1;
static const char* _plant_vs_b_va1__p_param_set = "";
static const char* _plant_vs_b_va1__p_sig_output = "True";
static const real _plant_vs_b_va1__p_threshold = 0.0;
static const char* _plant_vs_b_va1__p_type = "regular measurement";
static const char _plant_vs_b_va1__p_visible = 1;

static const char* _plant_vs_c_va1__n_ITEM_SIGNAL = "signal";
static const int _plant_vs_c_va1__n_rd_as = 13107200;
static const unsigned int _plant_vs_c_va1__p_addr = 11;
static const char* _plant_vs_c_va1__p_cmp_abs_value = "False";
static const char* _plant_vs_c_va1__p_comparator_enable = "False";
static const real _plant_vs_c_va1__p_execution_rate = 5e-05;
static const char _plant_vs_c_va1__p_feed_forward = 0;
static const char* _plant_vs_c_va1__p_nd_msr_estimation = "false";
static const char* _plant_vs_c_va1__p_operator = "greater";
static const char _plant_vs_c_va1__p_override_signal_name = 1;
static const char* _plant_vs_c_va1__p_param_set = "";
static const char* _plant_vs_c_va1__p_sig_output = "True";
static const real _plant_vs_c_va1__p_threshold = 0.0;
static const char* _plant_vs_c_va1__p_type = "regular measurement";
static const char _plant_vs_c_va1__p_visible = 1;

static const char* _plant_vt_a_va1__n_ITEM_SIGNAL = "signal";
static const int _plant_vt_a_va1__n_rd_as = 13107200;
static const unsigned int _plant_vt_a_va1__p_addr = 12;
static const char* _plant_vt_a_va1__p_cmp_abs_value = "False";
static const char* _plant_vt_a_va1__p_comparator_enable = "False";
static const real _plant_vt_a_va1__p_execution_rate = 5e-05;
static const char _plant_vt_a_va1__p_feed_forward = 0;
static const char* _plant_vt_a_va1__p_nd_msr_estimation = "false";
static const char* _plant_vt_a_va1__p_operator = "greater";
static const char _plant_vt_a_va1__p_override_signal_name = 1;
static const char* _plant_vt_a_va1__p_param_set = "";
static const char* _plant_vt_a_va1__p_sig_output = "True";
static const real _plant_vt_a_va1__p_threshold = 0.0;
static const char* _plant_vt_a_va1__p_type = "regular measurement";
static const char _plant_vt_a_va1__p_visible = 1;

static const char* _plant_vt_b_va1__n_ITEM_SIGNAL = "signal";
static const int _plant_vt_b_va1__n_rd_as = 13107200;
static const unsigned int _plant_vt_b_va1__p_addr = 13;
static const char* _plant_vt_b_va1__p_cmp_abs_value = "False";
static const char* _plant_vt_b_va1__p_comparator_enable = "False";
static const real _plant_vt_b_va1__p_execution_rate = 5e-05;
static const char _plant_vt_b_va1__p_feed_forward = 0;
static const char* _plant_vt_b_va1__p_nd_msr_estimation = "false";
static const char* _plant_vt_b_va1__p_operator = "greater";
static const char _plant_vt_b_va1__p_override_signal_name = 1;
static const char* _plant_vt_b_va1__p_param_set = "";
static const char* _plant_vt_b_va1__p_sig_output = "True";
static const real _plant_vt_b_va1__p_threshold = 0.0;
static const char* _plant_vt_b_va1__p_type = "regular measurement";
static const char _plant_vt_b_va1__p_visible = 1;

static const char* _plant_vt_c_va1__n_ITEM_SIGNAL = "signal";
static const int _plant_vt_c_va1__n_rd_as = 13107200;
static const unsigned int _plant_vt_c_va1__p_addr = 14;
static const char* _plant_vt_c_va1__p_cmp_abs_value = "False";
static const char* _plant_vt_c_va1__p_comparator_enable = "False";
static const real _plant_vt_c_va1__p_execution_rate = 5e-05;
static const char _plant_vt_c_va1__p_feed_forward = 0;
static const char* _plant_vt_c_va1__p_nd_msr_estimation = "false";
static const char* _plant_vt_c_va1__p_operator = "greater";
static const char _plant_vt_c_va1__p_override_signal_name = 1;
static const char* _plant_vt_c_va1__p_param_set = "";
static const char* _plant_vt_c_va1__p_sig_output = "True";
static const real _plant_vt_c_va1__p_threshold = 0.0;
static const char* _plant_vt_c_va1__p_type = "regular measurement";
static const char _plant_vt_c_va1__p_visible = 1;

static const char* _scada_fault_type__n_ITEM_SIGNAL = "signal";
static const int _scada_fault_type__n_gl_addr = 12632064;
static const int _scada_fault_type__n_out_mem_size = 512;
static const int _scada_fault_type__n_out_size = 1;
static const int _scada_fault_type__n_rd_as = 13107200;
static const int _scada_fault_type__n_rd_as_probe = 32;
static const int _scada_fault_type__n_rd_probe = 12648448;
static const unsigned int _scada_fault_type__p_addr = 16385;
static const real _scada_fault_type__p_execution_rate = 5e-05;
static const char _scada_fault_type__p_override_signal_name = 0;
static const char* _scada_fault_type__p_signal_type = "generic";
static const char _scada_fault_type__p_streaming_en = 0;
static const unsigned int _scada_fault_type__p_streaming_er_idx = 0;

static const char* _scada_v_h__n_ITEM_SIGNAL = "signal";
static const int _scada_v_h__n_gl_addr = 12632064;
static const int _scada_v_h__n_out_mem_size = 512;
static const int _scada_v_h__n_out_size = 1;
static const int _scada_v_h__n_rd_as = 13107200;
static const int _scada_v_h__n_rd_as_probe = 32;
static const int _scada_v_h__n_rd_probe = 12648448;
static const unsigned int _scada_v_h__p_addr = 16388;
static const real _scada_v_h__p_execution_rate = 5e-05;
static const char _scada_v_h__p_override_signal_name = 0;
static const char* _scada_v_h__p_signal_type = "generic";
static const char _scada_v_h__p_streaming_en = 0;
static const unsigned int _scada_v_h__p_streaming_er_idx = 0;

static const char* _scada_is_a_scada__n_ITEM_SIGNAL = "signal";
static const int _scada_is_a_scada__n_gl_addr = 12632064;
static const int _scada_is_a_scada__n_out_mem_size = 512;
static const int _scada_is_a_scada__n_out_size = 1;
static const int _scada_is_a_scada__n_rd_as = 13107200;
static const int _scada_is_a_scada__n_rd_as_probe = 32;
static const int _scada_is_a_scada__n_rd_probe = 12648448;
static const unsigned int _scada_is_a_scada__p_addr = 16402;
static const real _scada_is_a_scada__p_execution_rate = 5e-05;
static const char _scada_is_a_scada__p_override_signal_name = 0;
static const char* _scada_is_a_scada__p_signal_type = "generic";
static const char _scada_is_a_scada__p_streaming_en = 0;
static const unsigned int _scada_is_a_scada__p_streaming_er_idx = 0;

static const char* _scada_is_b_scada__n_ITEM_SIGNAL = "signal";
static const int _scada_is_b_scada__n_gl_addr = 12632064;
static const int _scada_is_b_scada__n_out_mem_size = 512;
static const int _scada_is_b_scada__n_out_size = 1;
static const int _scada_is_b_scada__n_rd_as = 13107200;
static const int _scada_is_b_scada__n_rd_as_probe = 32;
static const int _scada_is_b_scada__n_rd_probe = 12648448;
static const unsigned int _scada_is_b_scada__p_addr = 16403;
static const real _scada_is_b_scada__p_execution_rate = 5e-05;
static const char _scada_is_b_scada__p_override_signal_name = 0;
static const char* _scada_is_b_scada__p_signal_type = "generic";
static const char _scada_is_b_scada__p_streaming_en = 0;
static const unsigned int _scada_is_b_scada__p_streaming_er_idx = 0;

static const char* _scada_is_c_scada__n_ITEM_SIGNAL = "signal";
static const int _scada_is_c_scada__n_gl_addr = 12632064;
static const int _scada_is_c_scada__n_out_mem_size = 512;
static const int _scada_is_c_scada__n_out_size = 1;
static const int _scada_is_c_scada__n_rd_as = 13107200;
static const int _scada_is_c_scada__n_rd_as_probe = 32;
static const int _scada_is_c_scada__n_rd_probe = 12648448;
static const unsigned int _scada_is_c_scada__p_addr = 16404;
static const real _scada_is_c_scada__p_execution_rate = 5e-05;
static const char _scada_is_c_scada__p_override_signal_name = 0;
static const char* _scada_is_c_scada__p_signal_type = "generic";
static const char _scada_is_c_scada__p_streaming_en = 0;
static const unsigned int _scada_is_c_scada__p_streaming_er_idx = 0;

static const char* _scada_ctrl__n_ITEM_SIGNAL = "signal";
static const int _scada_ctrl__n_gl_addr = 12632064;
static const int _scada_ctrl__n_out_mem_size = 512;
static const int _scada_ctrl__n_out_size = 1;
static const int _scada_ctrl__n_rd_as = 13107200;
static const int _scada_ctrl__n_rd_as_probe = 32;
static const int _scada_ctrl__n_rd_probe = 12648448;
static const unsigned int _scada_ctrl__p_addr = 16384;
static const real _scada_ctrl__p_execution_rate = 0.01;
static const char _scada_ctrl__p_override_signal_name = 0;
static const char* _scada_ctrl__p_signal_type = "generic";
static const char _scada_ctrl__p_streaming_en = 0;
static const unsigned int _scada_ctrl__p_streaming_er_idx = 0;

static const char* _scada_ctrl_1__n_ITEM_SIGNAL = "signal";
static const int _scada_ctrl_1__n_gl_addr = 12632064;
static const int _scada_ctrl_1__n_out_mem_size = 512;
static const int _scada_ctrl_1__n_out_size = 1;
static const int _scada_ctrl_1__n_rd_as = 13107200;
static const int _scada_ctrl_1__n_rd_as_probe = 32;
static const int _scada_ctrl_1__n_rd_probe = 12648448;
static const unsigned int _scada_ctrl_1__p_addr = 16390;
static const real _scada_ctrl_1__p_execution_rate = 0.01;
static const char _scada_ctrl_1__p_override_signal_name = 0;
static const char* _scada_ctrl_1__p_signal_type = "generic";
static const char _scada_ctrl_1__p_streaming_en = 0;
static const unsigned int _scada_ctrl_1__p_streaming_er_idx = 0;

static const char* _scada_is_d_ref__n_ITEM_SIGNAL = "signal";
static const int _scada_is_d_ref__n_gl_addr = 12632064;
static const int _scada_is_d_ref__n_out_mem_size = 512;
static const int _scada_is_d_ref__n_out_size = 1;
static const int _scada_is_d_ref__n_rd_as = 13107200;
static const int _scada_is_d_ref__n_rd_as_probe = 32;
static const int _scada_is_d_ref__n_rd_probe = 12648448;
static const unsigned int _scada_is_d_ref__p_addr = 16405;
static const real _scada_is_d_ref__p_execution_rate = 5e-05;
static const char _scada_is_d_ref__p_override_signal_name = 0;
static const char* _scada_is_d_ref__p_signal_type = "generic";
static const char _scada_is_d_ref__p_streaming_en = 0;
static const unsigned int _scada_is_d_ref__p_streaming_er_idx = 0;

static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__n_ctrl_src_val = "Model";
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__n_enable_fb_out_val = "False";
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__n_rd_ds = 16252928;
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__n_spc_baseaddr = 134217728;
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__n_spc_ct = 2359296;
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__n_spc_ct_sw_ctrl_val = 1152;
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__n_spc_do_baseaddr = 1024;
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__n_spc_do_mem_width = 24;
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__n_spc_off = 4194304;
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_contactor_name = "Plant.S1";
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_contactor_type = "three_phase_breaker";
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__p_ctc_nb = 0;
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_ctrl_src = "Model";
static const char _plant_s1_triple_s1_ideal_ctc_wrapper__p_digital_input = '1';
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_digital_input_logic = "active high";
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_enable_fb_out = "False";
static const real _plant_s1_triple_s1_ideal_ctc_wrapper__p_execution_rate = 5e-05;
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_fb_out_type = "real";
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_initial_state = "off";
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__p_modes[2][3] = {{0, 0, 0}, {1, 1, 1}};
static const real _plant_s1_triple_s1_ideal_ctc_wrapper__p_off_delay = 0.0;
static const real _plant_s1_triple_s1_ideal_ctc_wrapper__p_on_delay = 0.0;
static const int _plant_s1_triple_s1_ideal_ctc_wrapper__p_spc_nb = 0;
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_switch_names = "['Plant.S1.Triple S1 ideal.SA', 'Plant.S1.Triple S1 ideal.SB', 'Plant.S1.Triple S1 ideal.SC']";
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_switching = "any current";
static const char* _plant_s1_triple_s1_ideal_ctc_wrapper__p_zc_ammeter = "none";

static const char* _scada_breaker__n_ITEM_SIGNAL = "signal";
static const int _scada_breaker__n_gl_addr = 12632064;
static const int _scada_breaker__n_out_mem_size = 512;
static const int _scada_breaker__n_out_size = 1;
static const int _scada_breaker__n_rd_as = 13107200;
static const int _scada_breaker__n_rd_as_probe = 32;
static const int _scada_breaker__n_rd_probe = 12648448;
static const unsigned int _scada_breaker__p_addr = 16389;
static const real _scada_breaker__p_execution_rate = 5e-05;
static const char _scada_breaker__p_override_signal_name = 0;
static const char* _scada_breaker__p_signal_type = "generic";
static const char _scada_breaker__p_streaming_en = 0;
static const unsigned int _scada_breaker__p_streaming_er_idx = 0;

static const char* _scada_sac__n_ITEM_SIGNAL = "signal";
static const int _scada_sac__n_gl_addr = 12632064;
static const int _scada_sac__n_out_mem_size = 512;
static const int _scada_sac__n_out_size = 1;
static const int _scada_sac__n_rd_as = 13107200;
static const int _scada_sac__n_rd_as_probe = 32;
static const int _scada_sac__n_rd_probe = 12648448;
static const unsigned int _scada_sac__p_addr = 16410;
static const real _scada_sac__p_execution_rate = 5e-05;
static const char _scada_sac__p_override_signal_name = 0;
static const char* _scada_sac__p_signal_type = "generic";
static const char _scada_sac__p_streaming_en = 0;
static const unsigned int _scada_sac__p_streaming_er_idx = 0;

static const char* _scada_is_q_ref__n_ITEM_SIGNAL = "signal";
static const int _scada_is_q_ref__n_gl_addr = 12632064;
static const int _scada_is_q_ref__n_out_mem_size = 512;
static const int _scada_is_q_ref__n_out_size = 1;
static const int _scada_is_q_ref__n_rd_as = 13107200;
static const int _scada_is_q_ref__n_rd_as_probe = 32;
static const int _scada_is_q_ref__n_rd_probe = 12648448;
static const unsigned int _scada_is_q_ref__p_addr = 16406;
static const real _scada_is_q_ref__p_execution_rate = 5e-05;
static const char _scada_is_q_ref__p_override_signal_name = 0;
static const char* _scada_is_q_ref__p_signal_type = "generic";
static const char _scada_is_q_ref__p_streaming_en = 0;
static const unsigned int _scada_is_q_ref__p_streaming_er_idx = 0;

static const char* _scada_iarms__n_ITEM_SIGNAL = "signal";
static const int _scada_iarms__n_gl_addr = 12632064;
static const int _scada_iarms__n_out_mem_size = 512;
static const int _scada_iarms__n_out_size = 1;
static const int _scada_iarms__n_rd_as = 13107200;
static const int _scada_iarms__n_rd_as_probe = 32;
static const int _scada_iarms__n_rd_probe = 12648448;
static const unsigned int _scada_iarms__p_addr = 16397;
static const real _scada_iarms__p_execution_rate = 5e-05;
static const char _scada_iarms__p_override_signal_name = 0;
static const char* _scada_iarms__p_signal_type = "generic";
static const char _scada_iarms__p_streaming_en = 0;
static const unsigned int _scada_iarms__p_streaming_er_idx = 0;

static const char* _scada_ibrms__n_ITEM_SIGNAL = "signal";
static const int _scada_ibrms__n_gl_addr = 12632064;
static const int _scada_ibrms__n_out_mem_size = 512;
static const int _scada_ibrms__n_out_size = 1;
static const int _scada_ibrms__n_rd_as = 13107200;
static const int _scada_ibrms__n_rd_as_probe = 32;
static const int _scada_ibrms__n_rd_probe = 12648448;
static const unsigned int _scada_ibrms__p_addr = 16398;
static const real _scada_ibrms__p_execution_rate = 5e-05;
static const char _scada_ibrms__p_override_signal_name = 0;
static const char* _scada_ibrms__p_signal_type = "generic";
static const char _scada_ibrms__p_streaming_en = 0;
static const unsigned int _scada_ibrms__p_streaming_er_idx = 0;

static const char* _scada_icrms__n_ITEM_SIGNAL = "signal";
static const int _scada_icrms__n_gl_addr = 12632064;
static const int _scada_icrms__n_out_mem_size = 512;
static const int _scada_icrms__n_out_size = 1;
static const int _scada_icrms__n_rd_as = 13107200;
static const int _scada_icrms__n_rd_as_probe = 32;
static const int _scada_icrms__n_rd_probe = 12648448;
static const unsigned int _scada_icrms__p_addr = 16399;
static const real _scada_icrms__p_execution_rate = 5e-05;
static const char _scada_icrms__p_override_signal_name = 0;
static const char* _scada_icrms__p_signal_type = "generic";
static const char _scada_icrms__p_streaming_en = 0;
static const unsigned int _scada_icrms__p_streaming_er_idx = 0;

static const char* _scada_varms__n_ITEM_SIGNAL = "signal";
static const int _scada_varms__n_gl_addr = 12632064;
static const int _scada_varms__n_out_mem_size = 512;
static const int _scada_varms__n_out_size = 1;
static const int _scada_varms__n_rd_as = 13107200;
static const int _scada_varms__n_rd_as_probe = 32;
static const int _scada_varms__n_rd_probe = 12648448;
static const unsigned int _scada_varms__p_addr = 16412;
static const real _scada_varms__p_execution_rate = 5e-05;
static const char _scada_varms__p_override_signal_name = 0;
static const char* _scada_varms__p_signal_type = "generic";
static const char _scada_varms__p_streaming_en = 0;
static const unsigned int _scada_varms__p_streaming_er_idx = 0;

static const char* _scada_vbrms__n_ITEM_SIGNAL = "signal";
static const int _scada_vbrms__n_gl_addr = 12632064;
static const int _scada_vbrms__n_out_mem_size = 512;
static const int _scada_vbrms__n_out_size = 1;
static const int _scada_vbrms__n_rd_as = 13107200;
static const int _scada_vbrms__n_rd_as_probe = 32;
static const int _scada_vbrms__n_rd_probe = 12648448;
static const unsigned int _scada_vbrms__p_addr = 16413;
static const real _scada_vbrms__p_execution_rate = 5e-05;
static const char _scada_vbrms__p_override_signal_name = 0;
static const char* _scada_vbrms__p_signal_type = "generic";
static const char _scada_vbrms__p_streaming_en = 0;
static const unsigned int _scada_vbrms__p_streaming_er_idx = 0;

static const char* _scada_p3f__n_ITEM_SIGNAL = "signal";
static const int _scada_p3f__n_gl_addr = 12632064;
static const int _scada_p3f__n_out_mem_size = 512;
static const int _scada_p3f__n_out_size = 1;
static const int _scada_p3f__n_rd_as = 13107200;
static const int _scada_p3f__n_rd_as_probe = 32;
static const int _scada_p3f__n_rd_probe = 12648448;
static const unsigned int _scada_p3f__p_addr = 16386;
static const real _scada_p3f__p_execution_rate = 5e-05;
static const char _scada_p3f__p_override_signal_name = 0;
static const char* _scada_p3f__p_signal_type = "generic";
static const char _scada_p3f__p_streaming_en = 0;
static const unsigned int _scada_p3f__p_streaming_er_idx = 0;

static const char* _scada_q3f__n_ITEM_SIGNAL = "signal";
static const int _scada_q3f__n_gl_addr = 12632064;
static const int _scada_q3f__n_out_mem_size = 512;
static const int _scada_q3f__n_out_size = 1;
static const int _scada_q3f__n_rd_as = 13107200;
static const int _scada_q3f__n_rd_as_probe = 32;
static const int _scada_q3f__n_rd_probe = 12648448;
static const unsigned int _scada_q3f__p_addr = 16387;
static const real _scada_q3f__p_execution_rate = 5e-05;
static const char _scada_q3f__p_override_signal_name = 0;
static const char* _scada_q3f__p_signal_type = "generic";
static const char _scada_q3f__p_streaming_en = 0;
static const unsigned int _scada_q3f__p_streaming_er_idx = 0;

static const char* _scada_p_fil__n_ITEM_SIGNAL = "signal";
static const int _scada_p_fil__n_gl_addr = 12632064;
static const int _scada_p_fil__n_out_mem_size = 512;
static const int _scada_p_fil__n_out_size = 1;
static const int _scada_p_fil__n_rd_as = 13107200;
static const int _scada_p_fil__n_rd_as_probe = 32;
static const int _scada_p_fil__n_rd_probe = 12648448;
static const unsigned int _scada_p_fil__p_addr = 16408;
static const real _scada_p_fil__p_execution_rate = 5e-05;
static const char _scada_p_fil__p_override_signal_name = 0;
static const char* _scada_p_fil__p_signal_type = "generic";
static const char _scada_p_fil__p_streaming_en = 0;
static const unsigned int _scada_p_fil__p_streaming_er_idx = 0;

static const char* _scada_q_fil__n_ITEM_SIGNAL = "signal";
static const int _scada_q_fil__n_gl_addr = 12632064;
static const int _scada_q_fil__n_out_mem_size = 512;
static const int _scada_q_fil__n_out_size = 1;
static const int _scada_q_fil__n_rd_as = 13107200;
static const int _scada_q_fil__n_rd_as_probe = 32;
static const int _scada_q_fil__n_rd_probe = 12648448;
static const unsigned int _scada_q_fil__p_addr = 16409;
static const real _scada_q_fil__p_execution_rate = 5e-05;
static const char _scada_q_fil__p_override_signal_name = 0;
static const char* _scada_q_fil__p_signal_type = "generic";
static const char _scada_q_fil__p_streaming_en = 0;
static const unsigned int _scada_q_fil__p_streaming_er_idx = 0;

static const char* _scada_vcrms__n_ITEM_SIGNAL = "signal";
static const int _scada_vcrms__n_gl_addr = 12632064;
static const int _scada_vcrms__n_out_mem_size = 512;
static const int _scada_vcrms__n_out_size = 1;
static const int _scada_vcrms__n_rd_as = 13107200;
static const int _scada_vcrms__n_rd_as_probe = 32;
static const int _scada_vcrms__n_rd_probe = 12648448;
static const unsigned int _scada_vcrms__p_addr = 16414;
static const real _scada_vcrms__p_execution_rate = 5e-05;
static const char _scada_vcrms__p_override_signal_name = 0;
static const char* _scada_vcrms__p_signal_type = "generic";
static const char _scada_vcrms__p_streaming_en = 0;
static const unsigned int _scada_vcrms__p_streaming_er_idx = 0;

static const char* _scada_omega_scada__n_ITEM_SIGNAL = "signal";
static const int _scada_omega_scada__n_gl_addr = 12632064;
static const int _scada_omega_scada__n_out_mem_size = 512;
static const int _scada_omega_scada__n_out_size = 1;
static const int _scada_omega_scada__n_rd_as = 13107200;
static const int _scada_omega_scada__n_rd_as_probe = 32;
static const int _scada_omega_scada__n_rd_probe = 12648448;
static const unsigned int _scada_omega_scada__p_addr = 16407;
static const real _scada_omega_scada__p_execution_rate = 5e-05;
static const char _scada_omega_scada__p_override_signal_name = 0;
static const char* _scada_omega_scada__p_signal_type = "generic";
static const char _scada_omega_scada__p_streaming_en = 0;
static const unsigned int _scada_omega_scada__p_streaming_er_idx = 0;

static const char* _scada_theta_scada__n_ITEM_SIGNAL = "signal";
static const int _scada_theta_scada__n_gl_addr = 12632064;
static const int _scada_theta_scada__n_out_mem_size = 512;
static const int _scada_theta_scada__n_out_size = 1;
static const int _scada_theta_scada__n_rd_as = 13107200;
static const int _scada_theta_scada__n_rd_as_probe = 32;
static const int _scada_theta_scada__n_rd_probe = 12648448;
static const unsigned int _scada_theta_scada__p_addr = 16411;
static const real _scada_theta_scada__p_execution_rate = 5e-05;
static const char _scada_theta_scada__p_override_signal_name = 0;
static const char* _scada_theta_scada__p_signal_type = "generic";
static const char _scada_theta_scada__p_streaming_en = 0;
static const unsigned int _scada_theta_scada__p_streaming_er_idx = 0;

static const char* _scada_f_pll__n_ITEM_SIGNAL = "signal";
static const int _scada_f_pll__n_gl_addr = 12632064;
static const int _scada_f_pll__n_out_mem_size = 512;
static const int _scada_f_pll__n_out_size = 1;
static const int _scada_f_pll__n_rd_as = 13107200;
static const int _scada_f_pll__n_rd_as_probe = 32;
static const int _scada_f_pll__n_rd_probe = 12648448;
static const unsigned int _scada_f_pll__p_addr = 16396;
static const real _scada_f_pll__p_execution_rate = 5e-05;
static const char _scada_f_pll__p_override_signal_name = 0;
static const char* _scada_f_pll__p_signal_type = "generic";
static const char _scada_f_pll__p_streaming_en = 0;
static const unsigned int _scada_f_pll__p_streaming_er_idx = 0;

static const char* _scada_vd__n_ITEM_SIGNAL = "signal";
static const int _scada_vd__n_gl_addr = 12632064;
static const int _scada_vd__n_out_mem_size = 512;
static const int _scada_vd__n_out_size = 1;
static const int _scada_vd__n_rd_as = 13107200;
static const int _scada_vd__n_rd_as_probe = 32;
static const int _scada_vd__n_rd_probe = 12648448;
static const unsigned int _scada_vd__p_addr = 16415;
static const real _scada_vd__p_execution_rate = 5e-05;
static const char _scada_vd__p_override_signal_name = 0;
static const char* _scada_vd__p_signal_type = "generic";
static const char _scada_vd__p_streaming_en = 0;
static const unsigned int _scada_vd__p_streaming_er_idx = 0;

static const char* _scada_vq__n_ITEM_SIGNAL = "signal";
static const int _scada_vq__n_gl_addr = 12632064;
static const int _scada_vq__n_out_mem_size = 512;
static const int _scada_vq__n_out_size = 1;
static const int _scada_vq__n_rd_as = 13107200;
static const int _scada_vq__n_rd_as_probe = 32;
static const int _scada_vq__n_rd_probe = 12648448;
static const unsigned int _scada_vq__p_addr = 16416;
static const real _scada_vq__p_execution_rate = 5e-05;
static const char _scada_vq__p_override_signal_name = 0;
static const char* _scada_vq__p_signal_type = "generic";
static const char _scada_vq__p_streaming_en = 0;
static const unsigned int _scada_vq__p_streaming_er_idx = 0;

static const char* _scada_id__n_ITEM_SIGNAL = "signal";
static const int _scada_id__n_gl_addr = 12632064;
static const int _scada_id__n_out_mem_size = 512;
static const int _scada_id__n_out_size = 1;
static const int _scada_id__n_rd_as = 13107200;
static const int _scada_id__n_rd_as_probe = 32;
static const int _scada_id__n_rd_probe = 12648448;
static const unsigned int _scada_id__p_addr = 16400;
static const real _scada_id__p_execution_rate = 5e-05;
static const char _scada_id__p_override_signal_name = 0;
static const char* _scada_id__p_signal_type = "generic";
static const char _scada_id__p_streaming_en = 0;
static const unsigned int _scada_id__p_streaming_er_idx = 0;

static const char* _scada_iq__n_ITEM_SIGNAL = "signal";
static const int _scada_iq__n_gl_addr = 12632064;
static const int _scada_iq__n_out_mem_size = 512;
static const int _scada_iq__n_out_size = 1;
static const int _scada_iq__n_rd_as = 13107200;
static const int _scada_iq__n_rd_as_probe = 32;
static const int _scada_iq__n_rd_probe = 12648448;
static const unsigned int _scada_iq__p_addr = 16401;
static const real _scada_iq__p_execution_rate = 5e-05;
static const char _scada_iq__p_override_signal_name = 0;
static const char* _scada_iq__p_signal_type = "generic";
static const char _scada_iq__p_streaming_en = 0;
static const unsigned int _scada_iq__p_streaming_er_idx = 0;

static const char* _scada_eta_d__n_ITEM_SIGNAL = "signal";
static const int _scada_eta_d__n_gl_addr = 12632064;
static const int _scada_eta_d__n_out_mem_size = 512;
static const int _scada_eta_d__n_out_size = 1;
static const int _scada_eta_d__n_rd_as = 13107200;
static const int _scada_eta_d__n_rd_as_probe = 32;
static const int _scada_eta_d__n_rd_probe = 12648448;
static const unsigned int _scada_eta_d__p_addr = 16394;
static const real _scada_eta_d__p_execution_rate = 5e-05;
static const char _scada_eta_d__p_override_signal_name = 0;
static const char* _scada_eta_d__p_signal_type = "generic";
static const char _scada_eta_d__p_streaming_en = 0;
static const unsigned int _scada_eta_d__p_streaming_er_idx = 0;

static const char* _scada_eta_q__n_ITEM_SIGNAL = "signal";
static const int _scada_eta_q__n_gl_addr = 12632064;
static const int _scada_eta_q__n_out_mem_size = 512;
static const int _scada_eta_q__n_out_size = 1;
static const int _scada_eta_q__n_rd_as = 13107200;
static const int _scada_eta_q__n_rd_as_probe = 32;
static const int _scada_eta_q__n_rd_probe = 12648448;
static const unsigned int _scada_eta_q__p_addr = 16395;
static const real _scada_eta_q__p_execution_rate = 5e-05;
static const char _scada_eta_q__p_override_signal_name = 0;
static const char* _scada_eta_q__p_signal_type = "generic";
static const char _scada_eta_q__p_streaming_en = 0;
static const unsigned int _scada_eta_q__p_streaming_er_idx = 0;

static const char* _scada_eta_a__n_ITEM_SIGNAL = "signal";
static const int _scada_eta_a__n_gl_addr = 12632064;
static const int _scada_eta_a__n_out_mem_size = 512;
static const int _scada_eta_a__n_out_size = 1;
static const int _scada_eta_a__n_rd_as = 13107200;
static const int _scada_eta_a__n_rd_as_probe = 32;
static const int _scada_eta_a__n_rd_probe = 12648448;
static const unsigned int _scada_eta_a__p_addr = 16391;
static const real _scada_eta_a__p_execution_rate = 5e-05;
static const char _scada_eta_a__p_override_signal_name = 0;
static const char* _scada_eta_a__p_signal_type = "generic";
static const char _scada_eta_a__p_streaming_en = 0;
static const unsigned int _scada_eta_a__p_streaming_er_idx = 0;

static const char* _scada_eta_b__n_ITEM_SIGNAL = "signal";
static const int _scada_eta_b__n_gl_addr = 12632064;
static const int _scada_eta_b__n_out_mem_size = 512;
static const int _scada_eta_b__n_out_size = 1;
static const int _scada_eta_b__n_rd_as = 13107200;
static const int _scada_eta_b__n_rd_as_probe = 32;
static const int _scada_eta_b__n_rd_probe = 12648448;
static const unsigned int _scada_eta_b__p_addr = 16392;
static const real _scada_eta_b__p_execution_rate = 5e-05;
static const char _scada_eta_b__p_override_signal_name = 0;
static const char* _scada_eta_b__p_signal_type = "generic";
static const char _scada_eta_b__p_streaming_en = 0;
static const unsigned int _scada_eta_b__p_streaming_er_idx = 0;

static const char* _scada_eta_c__n_ITEM_SIGNAL = "signal";
static const int _scada_eta_c__n_gl_addr = 12632064;
static const int _scada_eta_c__n_out_mem_size = 512;
static const int _scada_eta_c__n_out_size = 1;
static const int _scada_eta_c__n_rd_as = 13107200;
static const int _scada_eta_c__n_rd_as_probe = 32;
static const int _scada_eta_c__n_rd_probe = 12648448;
static const unsigned int _scada_eta_c__p_addr = 16393;
static const real _scada_eta_c__p_execution_rate = 5e-05;
static const char _scada_eta_c__p_override_signal_name = 0;
static const char* _scada_eta_c__p_signal_type = "generic";
static const char _scada_eta_c__p_streaming_en = 0;
static const unsigned int _scada_eta_c__p_streaming_er_idx = 0;


//@cmp.var.start
// variables
double _controller_constant1__out = 0.005;
double _controller_constant2__out = 0.2;
static real _plant_vdc_va1__out;
static real _plant_is_a_ia1__out;
static real _plant_is_b_ia1__out;
static real _plant_is_c_ia1__out;
static real _plant_it_a_ia1__out;
static real _plant_it_b_ia1__out;
static real _plant_it_c_ia1__out;
static real _plant_vs_a_va1__out;
static real _plant_vs_b_va1__out;
static real _plant_vs_c_va1__out;
static real _plant_vt_a_va1__out;
static real _plant_vt_b_va1__out;
static real _plant_vt_c_va1__out;
double _rate_transition24_output__out;
double _scada_constant1__out = 0.0;
double _scada_control__out;



double _scada_rate_transition10_output__out;
X_UnInt32 _scada_rate_transition7_output__out;
X_UnInt32 _scada_rate_transition8_output__out;
double _scada_rate_transition9_output__out;
double _scada_i_d_ref__out;
double _scada_i_q_ref__out;
X_UnInt32 _scada_startac__out;
X_UnInt32 _scada_startfsm__out;
double _scada_tau_c__out;



double _scada_rms_value1__out;
X_UnInt32 _scada_rms_value1__zc;



double _scada_rms_value7__out;
X_UnInt32 _scada_rms_value7__zc;



double _controller_bus_join3__out[3];
double _scada_rms_value3__out;
X_UnInt32 _scada_rms_value3__zc;



double _scada_rms_value4__out;
X_UnInt32 _scada_rms_value4__zc;
double _scada_rms_value8__out;
X_UnInt32 _scada_rms_value8__zc;
double _controller_bus_join4__out[3];
double _scada_c_function_powers__i_a;
double _scada_c_function_powers__i_b;
double _scada_c_function_powers__i_c;
double _scada_c_function_powers__v_a;
double _scada_c_function_powers__v_b;
double _scada_c_function_powers__v_c;

double _scada_c_function_powers__p;
double _scada_c_function_powers__p_f;
double _scada_c_function_powers__q;
double _scada_c_function_powers__q_f;

double _scada_rms_value6__out;
X_UnInt32 _scada_rms_value6__zc;
double _controller_product1__out;
double _controller_product2__out;
















double _scada_bus_join10__out[2];


















double _controller_c_function_pll__abc[3];

double _controller_c_function_pll__d;
double _controller_c_function_pll__e_q;
double _controller_c_function_pll__omega_pll;
double _controller_c_function_pll__q;
double _controller_c_function_pll__theta_pll;
















double _controller_bus_join6__out[2];
double _controller_c_function_abc_to_dq__abc[3];
double _controller_c_function_abc_to_dq__theta;

double _controller_c_function_abc_to_dq__d;
double _controller_c_function_abc_to_dq__q;

double _scada_gain1__out;





double _scada_bus_split3__out;
double _scada_bus_split3__out1;
double _controller_bus_join5__out[2];









double _controller_c_function_pi_current_controller__Ki_i;
double _controller_c_function_pi_current_controller__Kp_i;
double _controller_c_function_pi_current_controller__is_dq[2];
double _controller_c_function_pi_current_controller__is_dq_ref[2];
double _controller_c_function_pi_current_controller__omega_pll;
X_UnInt32 _controller_c_function_pi_current_controller__startAC;
double _controller_c_function_pi_current_controller__v_dc;
double _controller_c_function_pi_current_controller__vs_dq[2];

double _controller_c_function_pi_current_controller__eta_d;
double _controller_c_function_pi_current_controller__eta_q;

double _scada_bus_split4__out;
double _scada_bus_split4__out1;
double _controller_bus_join8__out[2];






double _controller_c_function_dq_to_abc__dq[2];
double _controller_c_function_dq_to_abc__theta;

double _controller_c_function_dq_to_abc__a;
double _controller_c_function_dq_to_abc__b;
double _controller_c_function_dq_to_abc__c;

double _scada_bus_split5__out;
double _scada_bus_split5__out1;
double _controller_bus_join9__out[3];






double _plant_bus_split1__out;
double _plant_bus_split1__out1;
double _plant_bus_split1__out2;
double _scada_bus_split1__out;
double _scada_bus_split1__out1;
double _scada_bus_split1__out2;
X_UnInt32 _plant_three_phase_inverter_phase_a_pwm_modulator__channels[1] = {0};
double _plant_three_phase_inverter_phase_a_pwm_modulator__limited_in[1];

X_UnInt32 _plant_three_phase_inverter_phase_b_pwm_modulator__channels[1] = {1};
double _plant_three_phase_inverter_phase_b_pwm_modulator__limited_in[1];

X_UnInt32 _plant_three_phase_inverter_phase_c_pwm_modulator__channels[1] = {2};
double _plant_three_phase_inverter_phase_c_pwm_modulator__limited_in[1];










//@cmp.var.end

//@cmp.svar.start
// state variables







































double volatile _rate_transition24_output__state;



double volatile _scada_rate_transition10_output__state;
X_UnInt32 volatile _scada_rate_transition7_output__state;
X_UnInt32 volatile _scada_rate_transition8_output__state;
double volatile _scada_rate_transition9_output__state;



double _scada_rms_value1__square_sum;
double _scada_rms_value1__sample_cnt;
double _scada_rms_value1__period_cnt;
double _scada_rms_value1__db_timer;
double _scada_rms_value1__previous_filtered_value;
double _scada_rms_value1__previous_correction;
double _scada_rms_value1__previous_value;
double _scada_rms_value1__correction;
double _scada_rms_value1__filtered_value;
double _scada_rms_value1__out_state;


double _scada_rms_value7__square_sum;
double _scada_rms_value7__sample_cnt;
double _scada_rms_value7__period_cnt;
double _scada_rms_value7__db_timer;
double _scada_rms_value7__previous_filtered_value;
double _scada_rms_value7__previous_correction;
double _scada_rms_value7__previous_value;
double _scada_rms_value7__correction;
double _scada_rms_value7__filtered_value;
double _scada_rms_value7__out_state;


double _scada_rms_value3__square_sum;
double _scada_rms_value3__sample_cnt;
double _scada_rms_value3__period_cnt;
double _scada_rms_value3__db_timer;
double _scada_rms_value3__previous_filtered_value;
double _scada_rms_value3__previous_correction;
double _scada_rms_value3__previous_value;
double _scada_rms_value3__correction;
double _scada_rms_value3__filtered_value;
double _scada_rms_value3__out_state;


double _scada_rms_value4__square_sum;
double _scada_rms_value4__sample_cnt;
double _scada_rms_value4__period_cnt;
double _scada_rms_value4__db_timer;
double _scada_rms_value4__previous_filtered_value;
double _scada_rms_value4__previous_correction;
double _scada_rms_value4__previous_value;
double _scada_rms_value4__correction;
double _scada_rms_value4__filtered_value;
double _scada_rms_value4__out_state;
double _scada_rms_value8__square_sum;
double _scada_rms_value8__sample_cnt;
double _scada_rms_value8__period_cnt;
double _scada_rms_value8__db_timer;
double _scada_rms_value8__previous_filtered_value;
double _scada_rms_value8__previous_correction;
double _scada_rms_value8__previous_value;
double _scada_rms_value8__correction;
double _scada_rms_value8__filtered_value;
double _scada_rms_value8__out_state;
double _scada_c_function_powers__p_fil;

double _scada_c_function_powers__q_fil;




double _scada_rms_value6__square_sum;
double _scada_rms_value6__sample_cnt;
double _scada_rms_value6__period_cnt;
double _scada_rms_value6__db_timer;
double _scada_rms_value6__previous_filtered_value;
double _scada_rms_value6__previous_correction;
double _scada_rms_value6__previous_value;
double _scada_rms_value6__correction;
double _scada_rms_value6__filtered_value;
double _scada_rms_value6__out_state;



































double _controller_c_function_pll__y_q;

double _controller_c_function_pll__theta;





































double _controller_c_function_pi_current_controller__y_d;

double _controller_c_function_pi_current_controller__y_q;

double _controller_c_function_pi_current_controller__e_d;

double _controller_c_function_pi_current_controller__e_q;




























//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif





// generated using template: \templates\virtual_hil\fmi_custom_logger_fncs.template---------------------------------



//
// DMA buffers
//










static inline __attribute__((always_inline)) void _plant_vdc_va1__output_fnc();
static inline __attribute__((always_inline)) void _plant_vdc_va1__init_fnc();

static inline __attribute__((always_inline)) void _plant_is_a_ia1__output_fnc();
static inline __attribute__((always_inline)) void _plant_is_a_ia1__init_fnc();

static inline __attribute__((always_inline)) void _plant_is_b_ia1__output_fnc();
static inline __attribute__((always_inline)) void _plant_is_b_ia1__init_fnc();

static inline __attribute__((always_inline)) void _plant_is_c_ia1__output_fnc();
static inline __attribute__((always_inline)) void _plant_is_c_ia1__init_fnc();

static inline __attribute__((always_inline)) void _plant_it_a_ia1__output_fnc();
static inline __attribute__((always_inline)) void _plant_it_a_ia1__init_fnc();

static inline __attribute__((always_inline)) void _plant_it_b_ia1__output_fnc();
static inline __attribute__((always_inline)) void _plant_it_b_ia1__init_fnc();

static inline __attribute__((always_inline)) void _plant_it_c_ia1__output_fnc();
static inline __attribute__((always_inline)) void _plant_it_c_ia1__init_fnc();

static inline __attribute__((always_inline)) void _plant_vs_a_va1__output_fnc();
static inline __attribute__((always_inline)) void _plant_vs_a_va1__init_fnc();

static inline __attribute__((always_inline)) void _plant_vs_b_va1__output_fnc();
static inline __attribute__((always_inline)) void _plant_vs_b_va1__init_fnc();

static inline __attribute__((always_inline)) void _plant_vs_c_va1__output_fnc();
static inline __attribute__((always_inline)) void _plant_vs_c_va1__init_fnc();

static inline __attribute__((always_inline)) void _plant_vt_a_va1__output_fnc();
static inline __attribute__((always_inline)) void _plant_vt_a_va1__init_fnc();

static inline __attribute__((always_inline)) void _plant_vt_b_va1__output_fnc();
static inline __attribute__((always_inline)) void _plant_vt_b_va1__init_fnc();

static inline __attribute__((always_inline)) void _plant_vt_c_va1__output_fnc();
static inline __attribute__((always_inline)) void _plant_vt_c_va1__init_fnc();




static inline __attribute__((always_inline)) void _scada_fault_type__output_fnc();
static inline __attribute__((always_inline)) void _scada_fault_type__init_fnc();










static inline __attribute__((always_inline)) void _scada_v_h__output_fnc();
static inline __attribute__((always_inline)) void _scada_v_h__init_fnc();


static inline __attribute__((always_inline)) void _scada_is_a_scada__output_fnc();
static inline __attribute__((always_inline)) void _scada_is_a_scada__init_fnc();


static inline __attribute__((always_inline)) void _scada_is_b_scada__output_fnc();
static inline __attribute__((always_inline)) void _scada_is_b_scada__init_fnc();



static inline __attribute__((always_inline)) void _scada_is_c_scada__output_fnc();
static inline __attribute__((always_inline)) void _scada_is_c_scada__init_fnc();








static inline __attribute__((always_inline)) void _scada_ctrl__output_fnc();
static inline __attribute__((always_inline)) void _scada_ctrl__init_fnc();

static inline __attribute__((always_inline)) void _scada_ctrl_1__output_fnc();
static inline __attribute__((always_inline)) void _scada_ctrl_1__init_fnc();

static inline __attribute__((always_inline)) void _scada_is_d_ref__output_fnc();
static inline __attribute__((always_inline)) void _scada_is_d_ref__init_fnc();

static inline __attribute__((always_inline)) void _plant_s1_triple_s1_ideal_ctc_wrapper__output_fnc();
static inline __attribute__((always_inline)) void _plant_s1_triple_s1_ideal_ctc_wrapper__init_fnc();

static inline __attribute__((always_inline)) void _scada_breaker__output_fnc();
static inline __attribute__((always_inline)) void _scada_breaker__init_fnc();




static inline __attribute__((always_inline)) void _scada_sac__output_fnc();
static inline __attribute__((always_inline)) void _scada_sac__init_fnc();


static inline __attribute__((always_inline)) void _scada_is_q_ref__output_fnc();
static inline __attribute__((always_inline)) void _scada_is_q_ref__init_fnc();






static inline __attribute__((always_inline)) void _scada_iarms__output_fnc();
static inline __attribute__((always_inline)) void _scada_iarms__init_fnc();

static inline __attribute__((always_inline)) void _scada_ibrms__output_fnc();
static inline __attribute__((always_inline)) void _scada_ibrms__init_fnc();

static inline __attribute__((always_inline)) void _scada_icrms__output_fnc();
static inline __attribute__((always_inline)) void _scada_icrms__init_fnc();

static inline __attribute__((always_inline)) void _scada_varms__output_fnc();
static inline __attribute__((always_inline)) void _scada_varms__init_fnc();

static inline __attribute__((always_inline)) void _scada_vbrms__output_fnc();
static inline __attribute__((always_inline)) void _scada_vbrms__init_fnc();


static inline __attribute__((always_inline)) void _scada_p3f__output_fnc();
static inline __attribute__((always_inline)) void _scada_p3f__init_fnc();

static inline __attribute__((always_inline)) void _scada_q3f__output_fnc();
static inline __attribute__((always_inline)) void _scada_q3f__init_fnc();

static inline __attribute__((always_inline)) void _scada_p_fil__output_fnc();
static inline __attribute__((always_inline)) void _scada_p_fil__init_fnc();

static inline __attribute__((always_inline)) void _scada_q_fil__output_fnc();
static inline __attribute__((always_inline)) void _scada_q_fil__init_fnc();

static inline __attribute__((always_inline)) void _scada_vcrms__output_fnc();
static inline __attribute__((always_inline)) void _scada_vcrms__init_fnc();





static inline __attribute__((always_inline)) void _scada_omega_scada__output_fnc();
static inline __attribute__((always_inline)) void _scada_omega_scada__init_fnc();

static inline __attribute__((always_inline)) void _scada_theta_scada__output_fnc();
static inline __attribute__((always_inline)) void _scada_theta_scada__init_fnc();



static inline __attribute__((always_inline)) void _scada_f_pll__output_fnc();
static inline __attribute__((always_inline)) void _scada_f_pll__init_fnc();

static inline __attribute__((always_inline)) void _scada_vd__output_fnc();
static inline __attribute__((always_inline)) void _scada_vd__init_fnc();

static inline __attribute__((always_inline)) void _scada_vq__output_fnc();
static inline __attribute__((always_inline)) void _scada_vq__init_fnc();




static inline __attribute__((always_inline)) void _scada_id__output_fnc();
static inline __attribute__((always_inline)) void _scada_id__init_fnc();

static inline __attribute__((always_inline)) void _scada_iq__output_fnc();
static inline __attribute__((always_inline)) void _scada_iq__init_fnc();




static inline __attribute__((always_inline)) void _scada_eta_d__output_fnc();
static inline __attribute__((always_inline)) void _scada_eta_d__init_fnc();

static inline __attribute__((always_inline)) void _scada_eta_q__output_fnc();
static inline __attribute__((always_inline)) void _scada_eta_q__init_fnc();






static inline __attribute__((always_inline)) void _scada_eta_a__output_fnc();
static inline __attribute__((always_inline)) void _scada_eta_a__init_fnc();

static inline __attribute__((always_inline)) void _scada_eta_b__output_fnc();
static inline __attribute__((always_inline)) void _scada_eta_b__init_fnc();

static inline __attribute__((always_inline)) void _scada_eta_c__output_fnc();
static inline __attribute__((always_inline)) void _scada_eta_c__init_fnc();



static inline __attribute__((always_inline)) void _plant_vdc_va1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_vdc_va1__output_fnc() {
    real _plant_vdc_va1__t_out;
    _plant_vdc_va1__t_out = _plant_vdc_va1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc80008);
    _plant_vdc_va1__t_out = tac_tmp1;
    {
        _plant_vdc_va1__out = _plant_vdc_va1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_is_a_ia1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_is_a_ia1__output_fnc() {
    real _plant_is_a_ia1__t_out;
    _plant_is_a_ia1__t_out = _plant_is_a_ia1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc80010);
    _plant_is_a_ia1__t_out = tac_tmp1;
    {
        _plant_is_a_ia1__out = _plant_is_a_ia1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_is_b_ia1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_is_b_ia1__output_fnc() {
    real _plant_is_b_ia1__t_out;
    _plant_is_b_ia1__t_out = _plant_is_b_ia1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc80011);
    _plant_is_b_ia1__t_out = tac_tmp1;
    {
        _plant_is_b_ia1__out = _plant_is_b_ia1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_is_c_ia1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_is_c_ia1__output_fnc() {
    real _plant_is_c_ia1__t_out;
    _plant_is_c_ia1__t_out = _plant_is_c_ia1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc80012);
    _plant_is_c_ia1__t_out = tac_tmp1;
    {
        _plant_is_c_ia1__out = _plant_is_c_ia1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_it_a_ia1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_it_a_ia1__output_fnc() {
    real _plant_it_a_ia1__t_out;
    _plant_it_a_ia1__t_out = _plant_it_a_ia1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc80013);
    _plant_it_a_ia1__t_out = tac_tmp1;
    {
        _plant_it_a_ia1__out = _plant_it_a_ia1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_it_b_ia1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_it_b_ia1__output_fnc() {
    real _plant_it_b_ia1__t_out;
    _plant_it_b_ia1__t_out = _plant_it_b_ia1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc80014);
    _plant_it_b_ia1__t_out = tac_tmp1;
    {
        _plant_it_b_ia1__out = _plant_it_b_ia1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_it_c_ia1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_it_c_ia1__output_fnc() {
    real _plant_it_c_ia1__t_out;
    _plant_it_c_ia1__t_out = _plant_it_c_ia1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc80015);
    _plant_it_c_ia1__t_out = tac_tmp1;
    {
        _plant_it_c_ia1__out = _plant_it_c_ia1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_vs_a_va1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_vs_a_va1__output_fnc() {
    real _plant_vs_a_va1__t_out;
    _plant_vs_a_va1__t_out = _plant_vs_a_va1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc80009);
    _plant_vs_a_va1__t_out = tac_tmp1;
    {
        _plant_vs_a_va1__out = _plant_vs_a_va1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_vs_b_va1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_vs_b_va1__output_fnc() {
    real _plant_vs_b_va1__t_out;
    _plant_vs_b_va1__t_out = _plant_vs_b_va1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc8000a);
    _plant_vs_b_va1__t_out = tac_tmp1;
    {
        _plant_vs_b_va1__out = _plant_vs_b_va1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_vs_c_va1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_vs_c_va1__output_fnc() {
    real _plant_vs_c_va1__t_out;
    _plant_vs_c_va1__t_out = _plant_vs_c_va1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc8000b);
    _plant_vs_c_va1__t_out = tac_tmp1;
    {
        _plant_vs_c_va1__out = _plant_vs_c_va1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_vt_a_va1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_vt_a_va1__output_fnc() {
    real _plant_vt_a_va1__t_out;
    _plant_vt_a_va1__t_out = _plant_vt_a_va1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc8000c);
    _plant_vt_a_va1__t_out = tac_tmp1;
    {
        _plant_vt_a_va1__out = _plant_vt_a_va1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_vt_b_va1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_vt_b_va1__output_fnc() {
    real _plant_vt_b_va1__t_out;
    _plant_vt_b_va1__t_out = _plant_vt_b_va1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc8000d);
    _plant_vt_b_va1__t_out = tac_tmp1;
    {
        _plant_vt_b_va1__out = _plant_vt_b_va1__t_out;
    }
}

static inline __attribute__((always_inline)) void _plant_vt_c_va1__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_vt_c_va1__output_fnc() {
    real _plant_vt_c_va1__t_out;
    _plant_vt_c_va1__t_out = _plant_vt_c_va1__out;
    real tac_tmp1;
    tac_tmp1 = HIL_InFloat(0xc8000e);
    _plant_vt_c_va1__t_out = tac_tmp1;
    {
        _plant_vt_c_va1__out = _plant_vt_c_va1__t_out;
    }
}





static inline __attribute__((always_inline)) void _scada_fault_type__output_fnc() {
    HIL_OutAO(0x4001, _scada_constant1__out);
}
static inline __attribute__((always_inline)) void _scada_fault_type__init_fnc() {
    HIL_OutAO(0x4001, 0);
}











static inline __attribute__((always_inline)) void _scada_v_h__output_fnc() {
    HIL_OutAO(0x4004, _plant_vdc_va1__out);
}
static inline __attribute__((always_inline)) void _scada_v_h__init_fnc() {
    HIL_OutAO(0x4004, 0);
}



static inline __attribute__((always_inline)) void _scada_is_a_scada__output_fnc() {
    HIL_OutAO(0x4012, _plant_is_a_ia1__out);
}
static inline __attribute__((always_inline)) void _scada_is_a_scada__init_fnc() {
    HIL_OutAO(0x4012, 0);
}



static inline __attribute__((always_inline)) void _scada_is_b_scada__output_fnc() {
    HIL_OutAO(0x4013, _plant_is_b_ia1__out);
}
static inline __attribute__((always_inline)) void _scada_is_b_scada__init_fnc() {
    HIL_OutAO(0x4013, 0);
}




static inline __attribute__((always_inline)) void _scada_is_c_scada__output_fnc() {
    HIL_OutAO(0x4014, _plant_is_c_ia1__out);
}
static inline __attribute__((always_inline)) void _scada_is_c_scada__init_fnc() {
    HIL_OutAO(0x4014, 0);
}









static inline __attribute__((always_inline)) void _scada_ctrl__output_fnc() {
    HIL_OutAO(0x4000, _scada_control__out);
}
static inline __attribute__((always_inline)) void _scada_ctrl__init_fnc() {
    HIL_OutAO(0x4000, 0);
}


static inline __attribute__((always_inline)) void _scada_ctrl_1__output_fnc() {
    HIL_OutAO(0x4006, _scada_control__out);
}
static inline __attribute__((always_inline)) void _scada_ctrl_1__init_fnc() {
    HIL_OutAO(0x4006, 0);
}


static inline __attribute__((always_inline)) void _scada_is_d_ref__output_fnc() {
    HIL_OutAO(0x4015, _scada_rate_transition10_output__out);
}
static inline __attribute__((always_inline)) void _scada_is_d_ref__init_fnc() {
    HIL_OutAO(0x4015, 0);
}

static inline __attribute__((always_inline)) void _plant_s1_triple_s1_ideal_ctc_wrapper__init_fnc() {}

static inline __attribute__((always_inline)) void _plant_s1_triple_s1_ideal_ctc_wrapper__output_fnc() {
    unsigned int _plant_s1_triple_s1_ideal_ctc_wrapper__t_ctrl_in;
    _plant_s1_triple_s1_ideal_ctc_wrapper__t_ctrl_in = _scada_rate_transition7_output__out;
    /*exists main branch*/
    {
        if((_plant_s1_triple_s1_ideal_ctc_wrapper__t_ctrl_in == 0)) {
            HIL_OutInt32(0x8240480, 0);
        }
        else {
            HIL_OutInt32(0x8240480, 1);
        }
    }
}


static inline __attribute__((always_inline)) void _scada_breaker__output_fnc() {
    HIL_OutAO(0x4005, _scada_rate_transition7_output__out);
}
static inline __attribute__((always_inline)) void _scada_breaker__init_fnc() {
    HIL_OutAO(0x4005, 0);
}





static inline __attribute__((always_inline)) void _scada_sac__output_fnc() {
    HIL_OutAO(0x401a, _scada_rate_transition8_output__out);
}
static inline __attribute__((always_inline)) void _scada_sac__init_fnc() {
    HIL_OutAO(0x401a, 0);
}



static inline __attribute__((always_inline)) void _scada_is_q_ref__output_fnc() {
    HIL_OutAO(0x4016, _scada_rate_transition9_output__out);
}
static inline __attribute__((always_inline)) void _scada_is_q_ref__init_fnc() {
    HIL_OutAO(0x4016, 0);
}







static inline __attribute__((always_inline)) void _scada_iarms__output_fnc() {
    HIL_OutAO(0x400d, _scada_rms_value1__out);
}
static inline __attribute__((always_inline)) void _scada_iarms__init_fnc() {
    HIL_OutAO(0x400d, 0);
}


static inline __attribute__((always_inline)) void _scada_ibrms__output_fnc() {
    HIL_OutAO(0x400e, _scada_rms_value7__out);
}
static inline __attribute__((always_inline)) void _scada_ibrms__init_fnc() {
    HIL_OutAO(0x400e, 0);
}


static inline __attribute__((always_inline)) void _scada_icrms__output_fnc() {
    HIL_OutAO(0x400f, _scada_rms_value3__out);
}
static inline __attribute__((always_inline)) void _scada_icrms__init_fnc() {
    HIL_OutAO(0x400f, 0);
}


static inline __attribute__((always_inline)) void _scada_varms__output_fnc() {
    HIL_OutAO(0x401c, _scada_rms_value4__out);
}
static inline __attribute__((always_inline)) void _scada_varms__init_fnc() {
    HIL_OutAO(0x401c, 0);
}


static inline __attribute__((always_inline)) void _scada_vbrms__output_fnc() {
    HIL_OutAO(0x401d, _scada_rms_value8__out);
}
static inline __attribute__((always_inline)) void _scada_vbrms__init_fnc() {
    HIL_OutAO(0x401d, 0);
}



static inline __attribute__((always_inline)) void _scada_p3f__output_fnc() {
    HIL_OutAO(0x4002, _scada_c_function_powers__p);
}
static inline __attribute__((always_inline)) void _scada_p3f__init_fnc() {
    HIL_OutAO(0x4002, 0);
}


static inline __attribute__((always_inline)) void _scada_q3f__output_fnc() {
    HIL_OutAO(0x4003, _scada_c_function_powers__q);
}
static inline __attribute__((always_inline)) void _scada_q3f__init_fnc() {
    HIL_OutAO(0x4003, 0);
}


static inline __attribute__((always_inline)) void _scada_p_fil__output_fnc() {
    HIL_OutAO(0x4018, _scada_c_function_powers__p_f);
}
static inline __attribute__((always_inline)) void _scada_p_fil__init_fnc() {
    HIL_OutAO(0x4018, 0);
}


static inline __attribute__((always_inline)) void _scada_q_fil__output_fnc() {
    HIL_OutAO(0x4019, _scada_c_function_powers__q_f);
}
static inline __attribute__((always_inline)) void _scada_q_fil__init_fnc() {
    HIL_OutAO(0x4019, 0);
}


static inline __attribute__((always_inline)) void _scada_vcrms__output_fnc() {
    HIL_OutAO(0x401e, _scada_rms_value6__out);
}
static inline __attribute__((always_inline)) void _scada_vcrms__init_fnc() {
    HIL_OutAO(0x401e, 0);
}






static inline __attribute__((always_inline)) void _scada_omega_scada__output_fnc() {
    HIL_OutAO(0x4017, _controller_c_function_pll__omega_pll);
}
static inline __attribute__((always_inline)) void _scada_omega_scada__init_fnc() {
    HIL_OutAO(0x4017, 0);
}


static inline __attribute__((always_inline)) void _scada_theta_scada__output_fnc() {
    HIL_OutAO(0x401b, _controller_c_function_pll__theta_pll);
}
static inline __attribute__((always_inline)) void _scada_theta_scada__init_fnc() {
    HIL_OutAO(0x401b, 0);
}




static inline __attribute__((always_inline)) void _scada_f_pll__output_fnc() {
    HIL_OutAO(0x400c, _scada_gain1__out);
}
static inline __attribute__((always_inline)) void _scada_f_pll__init_fnc() {
    HIL_OutAO(0x400c, 0);
}


static inline __attribute__((always_inline)) void _scada_vd__output_fnc() {
    HIL_OutAO(0x401f, _scada_bus_split3__out);
}
static inline __attribute__((always_inline)) void _scada_vd__init_fnc() {
    HIL_OutAO(0x401f, 0);
}


static inline __attribute__((always_inline)) void _scada_vq__output_fnc() {
    HIL_OutAO(0x4020, _scada_bus_split3__out1);
}
static inline __attribute__((always_inline)) void _scada_vq__init_fnc() {
    HIL_OutAO(0x4020, 0);
}





static inline __attribute__((always_inline)) void _scada_id__output_fnc() {
    HIL_OutAO(0x4010, _scada_bus_split4__out);
}
static inline __attribute__((always_inline)) void _scada_id__init_fnc() {
    HIL_OutAO(0x4010, 0);
}


static inline __attribute__((always_inline)) void _scada_iq__output_fnc() {
    HIL_OutAO(0x4011, _scada_bus_split4__out1);
}
static inline __attribute__((always_inline)) void _scada_iq__init_fnc() {
    HIL_OutAO(0x4011, 0);
}





static inline __attribute__((always_inline)) void _scada_eta_d__output_fnc() {
    HIL_OutAO(0x400a, _scada_bus_split5__out);
}
static inline __attribute__((always_inline)) void _scada_eta_d__init_fnc() {
    HIL_OutAO(0x400a, 0);
}


static inline __attribute__((always_inline)) void _scada_eta_q__output_fnc() {
    HIL_OutAO(0x400b, _scada_bus_split5__out1);
}
static inline __attribute__((always_inline)) void _scada_eta_q__init_fnc() {
    HIL_OutAO(0x400b, 0);
}







static inline __attribute__((always_inline)) void _scada_eta_a__output_fnc() {
    HIL_OutAO(0x4007, _scada_bus_split1__out);
}
static inline __attribute__((always_inline)) void _scada_eta_a__init_fnc() {
    HIL_OutAO(0x4007, 0);
}


static inline __attribute__((always_inline)) void _scada_eta_b__output_fnc() {
    HIL_OutAO(0x4008, _scada_bus_split1__out1);
}
static inline __attribute__((always_inline)) void _scada_eta_b__init_fnc() {
    HIL_OutAO(0x4008, 0);
}


static inline __attribute__((always_inline)) void _scada_eta_c__output_fnc() {
    HIL_OutAO(0x4009, _scada_bus_split1__out2);
}
static inline __attribute__((always_inline)) void _scada_eta_c__init_fnc() {
    HIL_OutAO(0x4009, 0);
}


// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _plant_vdc_va1__init_fnc();
    _plant_is_a_ia1__init_fnc();
    _plant_is_b_ia1__init_fnc();
    _plant_is_c_ia1__init_fnc();
    _plant_it_a_ia1__init_fnc();
    _plant_it_b_ia1__init_fnc();
    _plant_it_c_ia1__init_fnc();
    _plant_vs_a_va1__init_fnc();
    _plant_vs_b_va1__init_fnc();
    _plant_vs_c_va1__init_fnc();
    _plant_vt_a_va1__init_fnc();
    _plant_vt_b_va1__init_fnc();
    _plant_vt_c_va1__init_fnc();
    _rate_transition24_output__state =  0.0;
    _scada_fault_type__init_fnc();
    _scada_rate_transition10_output__state =  0.0;
    _scada_rate_transition7_output__state = (X_UnInt32) 0.0;
    _scada_rate_transition8_output__state = (X_UnInt32) 0.0;
    _scada_rate_transition9_output__state =  0.0;
    _scada_v_h__init_fnc();
    _scada_rms_value1__square_sum = 0x0;
    _scada_rms_value1__sample_cnt = 0x0;
    _scada_rms_value1__period_cnt = 0x0;
    _scada_rms_value1__db_timer = 0x0;
    _scada_rms_value1__previous_filtered_value = 0x0;
    _scada_rms_value1__previous_correction = 0x0;
    _scada_rms_value1__correction = 0x0;
    _scada_rms_value1__previous_value = 0x0;
    _scada_rms_value1__out_state = 0x0;
    _scada_rms_value1__filtered_value = 0x0;
    _scada_rms_value1__db_timer = 0x0;
    _scada_is_a_scada__init_fnc();
    _scada_rms_value7__square_sum = 0x0;
    _scada_rms_value7__sample_cnt = 0x0;
    _scada_rms_value7__period_cnt = 0x0;
    _scada_rms_value7__db_timer = 0x0;
    _scada_rms_value7__previous_filtered_value = 0x0;
    _scada_rms_value7__previous_correction = 0x0;
    _scada_rms_value7__correction = 0x0;
    _scada_rms_value7__previous_value = 0x0;
    _scada_rms_value7__out_state = 0x0;
    _scada_rms_value7__filtered_value = 0x0;
    _scada_rms_value7__db_timer = 0x0;
    _scada_is_b_scada__init_fnc();
    _scada_rms_value3__square_sum = 0x0;
    _scada_rms_value3__sample_cnt = 0x0;
    _scada_rms_value3__period_cnt = 0x0;
    _scada_rms_value3__db_timer = 0x0;
    _scada_rms_value3__previous_filtered_value = 0x0;
    _scada_rms_value3__previous_correction = 0x0;
    _scada_rms_value3__correction = 0x0;
    _scada_rms_value3__previous_value = 0x0;
    _scada_rms_value3__out_state = 0x0;
    _scada_rms_value3__filtered_value = 0x0;
    _scada_rms_value3__db_timer = 0x0;
    _scada_is_c_scada__init_fnc();
    _scada_rms_value4__square_sum = 0x0;
    _scada_rms_value4__sample_cnt = 0x0;
    _scada_rms_value4__period_cnt = 0x0;
    _scada_rms_value4__db_timer = 0x0;
    _scada_rms_value4__previous_filtered_value = 0x0;
    _scada_rms_value4__previous_correction = 0x0;
    _scada_rms_value4__correction = 0x0;
    _scada_rms_value4__previous_value = 0x0;
    _scada_rms_value4__out_state = 0x0;
    _scada_rms_value4__filtered_value = 0x0;
    _scada_rms_value4__db_timer = 0x0;
    _scada_rms_value8__square_sum = 0x0;
    _scada_rms_value8__sample_cnt = 0x0;
    _scada_rms_value8__period_cnt = 0x0;
    _scada_rms_value8__db_timer = 0x0;
    _scada_rms_value8__previous_filtered_value = 0x0;
    _scada_rms_value8__previous_correction = 0x0;
    _scada_rms_value8__correction = 0x0;
    _scada_rms_value8__previous_value = 0x0;
    _scada_rms_value8__out_state = 0x0;
    _scada_rms_value8__filtered_value = 0x0;
    _scada_rms_value8__db_timer = 0x0;
    {
        _scada_c_function_powers__p_fil = 0 ;
        _scada_c_function_powers__q_fil = 0 ;
    }
    _scada_rms_value6__square_sum = 0x0;
    _scada_rms_value6__sample_cnt = 0x0;
    _scada_rms_value6__period_cnt = 0x0;
    _scada_rms_value6__db_timer = 0x0;
    _scada_rms_value6__previous_filtered_value = 0x0;
    _scada_rms_value6__previous_correction = 0x0;
    _scada_rms_value6__correction = 0x0;
    _scada_rms_value6__previous_value = 0x0;
    _scada_rms_value6__out_state = 0x0;
    _scada_rms_value6__filtered_value = 0x0;
    _scada_rms_value6__db_timer = 0x0;
    _scada_ctrl__init_fnc();
    _scada_ctrl_1__init_fnc();
    _scada_is_d_ref__init_fnc();
    _plant_s1_triple_s1_ideal_ctc_wrapper__init_fnc();
    _scada_breaker__init_fnc();
    _scada_sac__init_fnc();
    _scada_is_q_ref__init_fnc();
    _scada_iarms__init_fnc();
    _scada_ibrms__init_fnc();
    _scada_icrms__init_fnc();
    _scada_varms__init_fnc();
    _scada_vbrms__init_fnc();
    {
        _controller_c_function_pll__y_q = 0 ;
        _controller_c_function_pll__theta = 0 ;
    }
    _scada_p3f__init_fnc();
    _scada_q3f__init_fnc();
    _scada_p_fil__init_fnc();
    _scada_q_fil__init_fnc();
    _scada_vcrms__init_fnc();
    {
    }
    _scada_omega_scada__init_fnc();
    _scada_theta_scada__init_fnc();
    _scada_f_pll__init_fnc();
    _scada_vd__init_fnc();
    _scada_vq__init_fnc();
    {
        _controller_c_function_pi_current_controller__e_d = 0.0 ;
        _controller_c_function_pi_current_controller__e_q = 0.0 ;
        _controller_c_function_pi_current_controller__y_d = 0.0 ;
        _controller_c_function_pi_current_controller__y_q = 0.0 ;
    }
    _scada_id__init_fnc();
    _scada_iq__init_fnc();
    {
    }
    _scada_eta_d__init_fnc();
    _scada_eta_q__init_fnc();
    HIL_OutInt32(0x2000080 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 14000);
    HIL_OutInt32(0x20000c0 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 28);
    HIL_OutInt32(0x20001c0 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x1);
    HIL_OutInt32(0x2000080 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 14000);
    HIL_OutInt32(0x20000c0 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 28);
    HIL_OutInt32(0x20001c0 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x2);
    HIL_OutInt32(0x2000080 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 14000);
    HIL_OutInt32(0x20000c0 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 28);
    HIL_OutInt32(0x20001c0 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x4);
    _scada_eta_a__init_fnc();
    _scada_eta_b__init_fnc();
    _scada_eta_c__init_fnc();
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}


// generated using template: virtual_hil/common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Plant.VDC.Va1
    _plant_vdc_va1__output_fnc();
    // Generated from the component: Plant.is_a.Ia1
    _plant_is_a_ia1__output_fnc();
    // Generated from the component: Plant.is_b.Ia1
    _plant_is_b_ia1__output_fnc();
    // Generated from the component: Plant.is_c.Ia1
    _plant_is_c_ia1__output_fnc();
    // Generated from the component: Plant.it_a.Ia1
    _plant_it_a_ia1__output_fnc();
    // Generated from the component: Plant.it_b.Ia1
    _plant_it_b_ia1__output_fnc();
    // Generated from the component: Plant.it_c.Ia1
    _plant_it_c_ia1__output_fnc();
    // Generated from the component: Plant.vs_a.Va1
    _plant_vs_a_va1__output_fnc();
    // Generated from the component: Plant.vs_b.Va1
    _plant_vs_b_va1__output_fnc();
    // Generated from the component: Plant.vs_c.Va1
    _plant_vs_c_va1__output_fnc();
    // Generated from the component: Plant.vt_a.Va1
    _plant_vt_a_va1__output_fnc();
    // Generated from the component: Plant.vt_b.Va1
    _plant_vt_b_va1__output_fnc();
    // Generated from the component: Plant.vt_c.Va1
    _plant_vt_c_va1__output_fnc();
    // Generated from the component: Rate Transition24.Output
    _rate_transition24_output__out = _rate_transition24_output__state;
    // Generated from the component: SCADA.Fault_type
    _scada_fault_type__output_fnc();
    // Generated from the component: SCADA.Rate Transition10.Output
    _scada_rate_transition10_output__out = _scada_rate_transition10_output__state;
    // Generated from the component: SCADA.Rate Transition7.Output
    _scada_rate_transition7_output__out = _scada_rate_transition7_output__state;
    // Generated from the component: SCADA.Rate Transition8.Output
    _scada_rate_transition8_output__out = _scada_rate_transition8_output__state;
    // Generated from the component: SCADA.Rate Transition9.Output
    _scada_rate_transition9_output__out = _scada_rate_transition9_output__state;
    // Generated from the component: SCADA.V_h
    _scada_v_h__output_fnc();
    // Generated from the component: SCADA.RMS value1
    _scada_rms_value1__previous_filtered_value = _scada_rms_value1__filtered_value;
    if (1)
        _scada_rms_value1__filtered_value = _scada_rms_value1__previous_filtered_value * 0.6858407346410207 + _plant_is_a_ia1__out * 0.3141592653589793;
    else
        _scada_rms_value1__filtered_value = _scada_rms_value1__previous_filtered_value * 0.1 + _plant_is_a_ia1__out * 0.9;
    _scada_rms_value1__db_timer += 5e-05;
    if( (_scada_rms_value1__filtered_value >= 0.0) && (_scada_rms_value1__previous_filtered_value < 0.0) && (_scada_rms_value1__db_timer >= 0.0) ) {
        _scada_rms_value1__zc = 1;
        _scada_rms_value1__db_timer = 0;
    } else
        _scada_rms_value1__zc = 0;
    _scada_rms_value1__out = _scada_rms_value1__out_state;
    // Generated from the component: SCADA.is_a_SCADA
    _scada_is_a_scada__output_fnc();
    // Generated from the component: SCADA.RMS value7
    _scada_rms_value7__previous_filtered_value = _scada_rms_value7__filtered_value;
    if (1)
        _scada_rms_value7__filtered_value = _scada_rms_value7__previous_filtered_value * 0.6858407346410207 + _plant_is_b_ia1__out * 0.3141592653589793;
    else
        _scada_rms_value7__filtered_value = _scada_rms_value7__previous_filtered_value * 0.1 + _plant_is_b_ia1__out * 0.9;
    _scada_rms_value7__db_timer += 5e-05;
    if( (_scada_rms_value7__filtered_value >= 0.0) && (_scada_rms_value7__previous_filtered_value < 0.0) && (_scada_rms_value7__db_timer >= 0.0) ) {
        _scada_rms_value7__zc = 1;
        _scada_rms_value7__db_timer = 0;
    } else
        _scada_rms_value7__zc = 0;
    _scada_rms_value7__out = _scada_rms_value7__out_state;
    // Generated from the component: SCADA.is_b_SCADA
    _scada_is_b_scada__output_fnc();
    // Generated from the component: Controller.Bus Join3
    _controller_bus_join3__out[0] = _plant_is_a_ia1__out;
    _controller_bus_join3__out[1] = _plant_is_b_ia1__out;
    _controller_bus_join3__out[2] = _plant_is_c_ia1__out;
    // Generated from the component: SCADA.RMS value3
    _scada_rms_value3__previous_filtered_value = _scada_rms_value3__filtered_value;
    if (1)
        _scada_rms_value3__filtered_value = _scada_rms_value3__previous_filtered_value * 0.6858407346410207 + _plant_is_c_ia1__out * 0.3141592653589793;
    else
        _scada_rms_value3__filtered_value = _scada_rms_value3__previous_filtered_value * 0.1 + _plant_is_c_ia1__out * 0.9;
    _scada_rms_value3__db_timer += 5e-05;
    if( (_scada_rms_value3__filtered_value >= 0.0) && (_scada_rms_value3__previous_filtered_value < 0.0) && (_scada_rms_value3__db_timer >= 0.0) ) {
        _scada_rms_value3__zc = 1;
        _scada_rms_value3__db_timer = 0;
    } else
        _scada_rms_value3__zc = 0;
    _scada_rms_value3__out = _scada_rms_value3__out_state;
    // Generated from the component: SCADA.is_c_SCADA
    _scada_is_c_scada__output_fnc();
    // Generated from the component: SCADA.RMS value4
    _scada_rms_value4__previous_filtered_value = _scada_rms_value4__filtered_value;
    if (1)
        _scada_rms_value4__filtered_value = _scada_rms_value4__previous_filtered_value * 0.6858407346410207 + _plant_vs_a_va1__out * 0.3141592653589793;
    else
        _scada_rms_value4__filtered_value = _scada_rms_value4__previous_filtered_value * 0.1 + _plant_vs_a_va1__out * 0.9;
    _scada_rms_value4__db_timer += 5e-05;
    if( (_scada_rms_value4__filtered_value >= 0.0) && (_scada_rms_value4__previous_filtered_value < 0.0) && (_scada_rms_value4__db_timer >= 0.0) ) {
        _scada_rms_value4__zc = 1;
        _scada_rms_value4__db_timer = 0;
    } else
        _scada_rms_value4__zc = 0;
    _scada_rms_value4__out = _scada_rms_value4__out_state;
    // Generated from the component: SCADA.RMS value8
    _scada_rms_value8__previous_filtered_value = _scada_rms_value8__filtered_value;
    if (1)
        _scada_rms_value8__filtered_value = _scada_rms_value8__previous_filtered_value * 0.6858407346410207 + _plant_vs_b_va1__out * 0.3141592653589793;
    else
        _scada_rms_value8__filtered_value = _scada_rms_value8__previous_filtered_value * 0.1 + _plant_vs_b_va1__out * 0.9;
    _scada_rms_value8__db_timer += 5e-05;
    if( (_scada_rms_value8__filtered_value >= 0.0) && (_scada_rms_value8__previous_filtered_value < 0.0) && (_scada_rms_value8__db_timer >= 0.0) ) {
        _scada_rms_value8__zc = 1;
        _scada_rms_value8__db_timer = 0;
    } else
        _scada_rms_value8__zc = 0;
    _scada_rms_value8__out = _scada_rms_value8__out_state;
    // Generated from the component: Controller.Bus Join4
    _controller_bus_join4__out[0] = _plant_vs_a_va1__out;
    _controller_bus_join4__out[1] = _plant_vs_b_va1__out;
    _controller_bus_join4__out[2] = _plant_vs_c_va1__out;
    // Generated from the component: SCADA.C function powers
    _scada_c_function_powers__i_a = _plant_is_a_ia1__out;
    _scada_c_function_powers__i_b = _plant_is_b_ia1__out;
    _scada_c_function_powers__i_c = _plant_is_c_ia1__out;
    _scada_c_function_powers__v_a = _plant_vs_a_va1__out;
    _scada_c_function_powers__v_b = _plant_vs_b_va1__out;
    _scada_c_function_powers__v_c = _plant_vs_c_va1__out;
    {
        _scada_c_function_powers__p = _scada_c_function_powers__v_a * _scada_c_function_powers__i_a + _scada_c_function_powers__v_b * _scada_c_function_powers__i_b + _scada_c_function_powers__v_c * _scada_c_function_powers__i_c ;
        _scada_c_function_powers__q = 1 / sqrt ( 3 ) * ( _scada_c_function_powers__i_c * ( _scada_c_function_powers__v_a - _scada_c_function_powers__v_b ) + _scada_c_function_powers__i_a * ( _scada_c_function_powers__v_b - _scada_c_function_powers__v_c ) + _scada_c_function_powers__i_b * ( _scada_c_function_powers__v_c - _scada_c_function_powers__v_a ) ) ;
        _scada_c_function_powers__p_f = _scada_c_function_powers__p_fil ;
        _scada_c_function_powers__q_f = _scada_c_function_powers__q_fil ;
    }
    // Generated from the component: SCADA.RMS value6
    _scada_rms_value6__previous_filtered_value = _scada_rms_value6__filtered_value;
    if (1)
        _scada_rms_value6__filtered_value = _scada_rms_value6__previous_filtered_value * 0.6858407346410207 + _plant_vs_c_va1__out * 0.3141592653589793;
    else
        _scada_rms_value6__filtered_value = _scada_rms_value6__previous_filtered_value * 0.1 + _plant_vs_c_va1__out * 0.9;
    _scada_rms_value6__db_timer += 5e-05;
    if( (_scada_rms_value6__filtered_value >= 0.0) && (_scada_rms_value6__previous_filtered_value < 0.0) && (_scada_rms_value6__db_timer >= 0.0) ) {
        _scada_rms_value6__zc = 1;
        _scada_rms_value6__db_timer = 0;
    } else
        _scada_rms_value6__zc = 0;
    _scada_rms_value6__out = _scada_rms_value6__out_state;
    // Generated from the component: Controller.Product1
    _controller_product1__out = (_controller_constant1__out) * 1.0 / (_rate_transition24_output__out);
    // Generated from the component: Controller.Product2
    _controller_product2__out = (_controller_constant2__out) * 1.0 / (_rate_transition24_output__out);
    // Generated from the component: SCADA.is_d_ref
    _scada_is_d_ref__output_fnc();
    // Generated from the component: Plant.S1.Triple S1 ideal.CTC_Wrapper
    _plant_s1_triple_s1_ideal_ctc_wrapper__output_fnc();
    // Generated from the component: SCADA.breaker
    _scada_breaker__output_fnc();
    // Generated from the component: Plant.Three Phase Inverter.Phase A.IGBT Leg global gds ovs.termination1
    // Generated from the component: Plant.Three Phase Inverter.Phase B.IGBT Leg global gds ovs.termination1
    // Generated from the component: Plant.Three Phase Inverter.Phase C.IGBT Leg global gds ovs.termination1
    // Generated from the component: SCADA.sAC
    _scada_sac__output_fnc();
    // Generated from the component: SCADA.Bus Join10
    _scada_bus_join10__out[0] = _scada_rate_transition10_output__out;
    _scada_bus_join10__out[1] = _scada_rate_transition9_output__out;
    // Generated from the component: SCADA.is_q_ref
    _scada_is_q_ref__output_fnc();
    // Generated from the component: SCADA.iarms
    _scada_iarms__output_fnc();
    // Generated from the component: SCADA.ibrms
    _scada_ibrms__output_fnc();
    // Generated from the component: SCADA.icrms
    _scada_icrms__output_fnc();
    // Generated from the component: SCADA.varms
    _scada_varms__output_fnc();
    // Generated from the component: SCADA.vbrms
    _scada_vbrms__output_fnc();
    // Generated from the component: Controller.C function PLL
    _controller_c_function_pll__abc[0] = _controller_bus_join4__out[0];
    _controller_c_function_pll__abc[1] = _controller_bus_join4__out[1];
    _controller_c_function_pll__abc[2] = _controller_bus_join4__out[2];
    {
        _controller_c_function_pll__d = 2.0 / 3.0 * ( cos ( _controller_c_function_pll__theta ) * _controller_c_function_pll__abc [ 0 ] + cos ( _controller_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_pll__abc [ 1 ] + cos ( _controller_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_pll__abc [ 2 ] ) ;
        _controller_c_function_pll__q = 2.0 / 3.0 * ( - sin ( _controller_c_function_pll__theta ) * _controller_c_function_pll__abc [ 0 ] - sin ( _controller_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_pll__abc [ 1 ] - sin ( _controller_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_pll__abc [ 2 ] ) ;
        _controller_c_function_pll__e_q = _controller_c_function_pll__q ;
        _controller_c_function_pll__omega_pll = 1.8 * _controller_c_function_pll__e_q + _controller_c_function_pll__y_q ;
        _controller_c_function_pll__theta_pll = _controller_c_function_pll__theta ;
    }
    // Generated from the component: SCADA.P3f
    _scada_p3f__output_fnc();
    // Generated from the component: SCADA.Q3f
    _scada_q3f__output_fnc();
    // Generated from the component: SCADA.p_fil
    _scada_p_fil__output_fnc();
    // Generated from the component: SCADA.q_fil
    _scada_q_fil__output_fnc();
    // Generated from the component: SCADA.vcrms
    _scada_vcrms__output_fnc();
    // Generated from the component: Controller.Bus Join6
    _controller_bus_join6__out[0] = _controller_c_function_pll__d;
    _controller_bus_join6__out[1] = _controller_c_function_pll__q;
    // Generated from the component: Controller.C function abc to dq
    _controller_c_function_abc_to_dq__abc[0] = _controller_bus_join3__out[0];
    _controller_c_function_abc_to_dq__abc[1] = _controller_bus_join3__out[1];
    _controller_c_function_abc_to_dq__abc[2] = _controller_bus_join3__out[2];
    _controller_c_function_abc_to_dq__theta = _controller_c_function_pll__theta_pll;
    {
        _controller_c_function_abc_to_dq__d = 2.0 / 3.0 * ( cos ( _controller_c_function_abc_to_dq__theta ) * _controller_c_function_abc_to_dq__abc [ 0 ] + cos ( _controller_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_abc_to_dq__abc [ 1 ] + cos ( _controller_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_abc_to_dq__abc [ 2 ] ) ;
        _controller_c_function_abc_to_dq__q = 2.0 / 3.0 * ( - sin ( _controller_c_function_abc_to_dq__theta ) * _controller_c_function_abc_to_dq__abc [ 0 ] - sin ( _controller_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_abc_to_dq__abc [ 1 ] - sin ( _controller_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: Controller.Termination3
    // Generated from the component: SCADA.Gain1
    _scada_gain1__out = 0.15915494309189535 * _controller_c_function_pll__omega_pll;
    // Generated from the component: SCADA.omega_SCADA
    _scada_omega_scada__output_fnc();
    // Generated from the component: SCADA.theta_SCADA
    _scada_theta_scada__output_fnc();
    // Generated from the component: SCADA.Bus Split3
    _scada_bus_split3__out = _controller_bus_join6__out[0];
    _scada_bus_split3__out1 = _controller_bus_join6__out[1];
    // Generated from the component: Controller.Bus Join5
    _controller_bus_join5__out[0] = _controller_c_function_abc_to_dq__d;
    _controller_bus_join5__out[1] = _controller_c_function_abc_to_dq__q;
    // Generated from the component: SCADA.f_PLL
    _scada_f_pll__output_fnc();
    // Generated from the component: SCADA.vd
    _scada_vd__output_fnc();
    // Generated from the component: SCADA.vq
    _scada_vq__output_fnc();
    // Generated from the component: Controller.C function PI current controller
    _controller_c_function_pi_current_controller__Ki_i = _controller_product2__out;
    _controller_c_function_pi_current_controller__Kp_i = _controller_product1__out;
    _controller_c_function_pi_current_controller__is_dq[0] = _controller_bus_join5__out[0];
    _controller_c_function_pi_current_controller__is_dq[1] = _controller_bus_join5__out[1];
    _controller_c_function_pi_current_controller__is_dq_ref[0] = _scada_bus_join10__out[0];
    _controller_c_function_pi_current_controller__is_dq_ref[1] = _scada_bus_join10__out[1];
    _controller_c_function_pi_current_controller__omega_pll = _controller_c_function_pll__omega_pll;
    _controller_c_function_pi_current_controller__startAC = _scada_rate_transition8_output__out;
    _controller_c_function_pi_current_controller__v_dc = _plant_vdc_va1__out;
    _controller_c_function_pi_current_controller__vs_dq[0] = _controller_bus_join6__out[0];
    _controller_c_function_pi_current_controller__vs_dq[1] = _controller_bus_join6__out[1];
    {
        _controller_c_function_pi_current_controller__eta_d = ( 2 / _controller_c_function_pi_current_controller__v_dc ) * ( _controller_c_function_pi_current_controller__Kp_i * _controller_c_function_pi_current_controller__e_d + _controller_c_function_pi_current_controller__y_d - 0.005 * _controller_c_function_pi_current_controller__omega_pll * _controller_c_function_pi_current_controller__is_dq [ 1 ] + _controller_c_function_pi_current_controller__vs_dq [ 0 ] ) ;
        _controller_c_function_pi_current_controller__eta_q = ( 2 / _controller_c_function_pi_current_controller__v_dc ) * ( _controller_c_function_pi_current_controller__Kp_i * _controller_c_function_pi_current_controller__e_q + _controller_c_function_pi_current_controller__y_q + 0.005 * _controller_c_function_pi_current_controller__omega_pll * _controller_c_function_pi_current_controller__is_dq [ 0 ] + _controller_c_function_pi_current_controller__vs_dq [ 1 ] ) ;
    }
    // Generated from the component: SCADA.Bus Split4
    _scada_bus_split4__out = _controller_bus_join5__out[0];
    _scada_bus_split4__out1 = _controller_bus_join5__out[1];
    // Generated from the component: Controller.Bus Join8
    _controller_bus_join8__out[0] = _controller_c_function_pi_current_controller__eta_d;
    _controller_bus_join8__out[1] = _controller_c_function_pi_current_controller__eta_q;
    // Generated from the component: SCADA.id
    _scada_id__output_fnc();
    // Generated from the component: SCADA.iq
    _scada_iq__output_fnc();
    // Generated from the component: Controller.C function dq to abc
    _controller_c_function_dq_to_abc__dq[0] = _controller_bus_join8__out[0];
    _controller_c_function_dq_to_abc__dq[1] = _controller_bus_join8__out[1];
    _controller_c_function_dq_to_abc__theta = _controller_c_function_pll__theta_pll;
    {
        _controller_c_function_dq_to_abc__a = cos ( _controller_c_function_dq_to_abc__theta ) * _controller_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_c_function_dq_to_abc__theta ) * _controller_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_c_function_dq_to_abc__b = cos ( _controller_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_c_function_dq_to_abc__c = cos ( _controller_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc__dq [ 1 ] ;
    }
    // Generated from the component: SCADA.Bus Split5
    _scada_bus_split5__out = _controller_bus_join8__out[0];
    _scada_bus_split5__out1 = _controller_bus_join8__out[1];
    // Generated from the component: Controller.Bus Join9
    _controller_bus_join9__out[0] = _controller_c_function_dq_to_abc__a;
    _controller_bus_join9__out[1] = _controller_c_function_dq_to_abc__b;
    _controller_bus_join9__out[2] = _controller_c_function_dq_to_abc__c;
    // Generated from the component: SCADA.eta_d
    _scada_eta_d__output_fnc();
    // Generated from the component: SCADA.eta_q
    _scada_eta_q__output_fnc();
    // Generated from the component: Plant.Bus Split1
    _plant_bus_split1__out = _controller_bus_join9__out[0];
    _plant_bus_split1__out1 = _controller_bus_join9__out[1];
    _plant_bus_split1__out2 = _controller_bus_join9__out[2];
    // Generated from the component: SCADA.Bus Split1
    _scada_bus_split1__out = _controller_bus_join9__out[0];
    _scada_bus_split1__out1 = _controller_bus_join9__out[1];
    _scada_bus_split1__out2 = _controller_bus_join9__out[2];
    // Generated from the component: Plant.Three Phase Inverter.Phase A.PWM_Modulator
    _plant_three_phase_inverter_phase_a_pwm_modulator__limited_in[0] = MIN(MAX(_plant_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], ceil((_plant_three_phase_inverter_phase_a_pwm_modulator__limited_in[0] - (-1.0)) * 7000.0));
    if (_scada_rate_transition8_output__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_a_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x1);
    // Generated from the component: Plant.Three Phase Inverter.Phase B.PWM_Modulator
    _plant_three_phase_inverter_phase_b_pwm_modulator__limited_in[0] = MIN(MAX(_plant_bus_split1__out1, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], ceil((_plant_three_phase_inverter_phase_b_pwm_modulator__limited_in[0] - (-1.0)) * 7000.0));
    if (_scada_rate_transition8_output__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_b_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x2);
    // Generated from the component: Plant.Three Phase Inverter.Phase C.PWM_Modulator
    _plant_three_phase_inverter_phase_c_pwm_modulator__limited_in[0] = MIN(MAX(_plant_bus_split1__out2, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], ceil((_plant_three_phase_inverter_phase_c_pwm_modulator__limited_in[0] - (-1.0)) * 7000.0));
    if (_scada_rate_transition8_output__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_three_phase_inverter_phase_c_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x4);
    // Generated from the component: SCADA.eta_a
    _scada_eta_a__output_fnc();
    // Generated from the component: SCADA.eta_b
    _scada_eta_b__output_fnc();
    // Generated from the component: SCADA.eta_c
    _scada_eta_c__output_fnc();
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Plant.VDC.Va1
    // Generated from the component: Plant.is_a.Ia1
    // Generated from the component: Plant.is_b.Ia1
    // Generated from the component: Plant.is_c.Ia1
    // Generated from the component: Plant.it_a.Ia1
    // Generated from the component: Plant.it_b.Ia1
    // Generated from the component: Plant.it_c.Ia1
    // Generated from the component: Plant.vs_a.Va1
    // Generated from the component: Plant.vs_b.Va1
    // Generated from the component: Plant.vs_c.Va1
    // Generated from the component: Plant.vt_a.Va1
    // Generated from the component: Plant.vt_b.Va1
    // Generated from the component: Plant.vt_c.Va1
    // Generated from the component: SCADA.Fault_type
    // Generated from the component: SCADA.V_h
    // Generated from the component: SCADA.RMS value1
    if( _scada_rms_value1__zc ) {
        if (_plant_is_a_ia1__out != _scada_rms_value1__previous_value)
            _scada_rms_value1__correction = - _scada_rms_value1__previous_value / (_plant_is_a_ia1__out - _scada_rms_value1__previous_value);
        if (_scada_rms_value1__correction < 0)
            _scada_rms_value1__correction = 0;
        else
            _scada_rms_value1__correction = 0;
        _scada_rms_value1__sample_cnt += _scada_rms_value1__correction - _scada_rms_value1__previous_correction;
        _scada_rms_value1__out_state = sqrt(_scada_rms_value1__square_sum / _scada_rms_value1__sample_cnt);
        _scada_rms_value1__sample_cnt = 0;
        _scada_rms_value1__previous_correction = _scada_rms_value1__correction;
        _scada_rms_value1__square_sum = 0;
    } else if ( _scada_rms_value1__sample_cnt >= 10000 ) {
        _scada_rms_value1__out_state = sqrt(_scada_rms_value1__square_sum / _scada_rms_value1__sample_cnt);
        _scada_rms_value1__sample_cnt = 0;
        _scada_rms_value1__square_sum = 0;
    }
    _scada_rms_value1__previous_value = _plant_is_a_ia1__out;
    _scada_rms_value1__square_sum += _plant_is_a_ia1__out * _plant_is_a_ia1__out;
    _scada_rms_value1__sample_cnt ++;
    // Generated from the component: SCADA.is_a_SCADA
    // Generated from the component: SCADA.RMS value7
    if( _scada_rms_value7__zc ) {
        if (_plant_is_b_ia1__out != _scada_rms_value7__previous_value)
            _scada_rms_value7__correction = - _scada_rms_value7__previous_value / (_plant_is_b_ia1__out - _scada_rms_value7__previous_value);
        if (_scada_rms_value7__correction < 0)
            _scada_rms_value7__correction = 0;
        else
            _scada_rms_value7__correction = 0;
        _scada_rms_value7__sample_cnt += _scada_rms_value7__correction - _scada_rms_value7__previous_correction;
        _scada_rms_value7__out_state = sqrt(_scada_rms_value7__square_sum / _scada_rms_value7__sample_cnt);
        _scada_rms_value7__sample_cnt = 0;
        _scada_rms_value7__previous_correction = _scada_rms_value7__correction;
        _scada_rms_value7__square_sum = 0;
    } else if ( _scada_rms_value7__sample_cnt >= 10000 ) {
        _scada_rms_value7__out_state = sqrt(_scada_rms_value7__square_sum / _scada_rms_value7__sample_cnt);
        _scada_rms_value7__sample_cnt = 0;
        _scada_rms_value7__square_sum = 0;
    }
    _scada_rms_value7__previous_value = _plant_is_b_ia1__out;
    _scada_rms_value7__square_sum += _plant_is_b_ia1__out * _plant_is_b_ia1__out;
    _scada_rms_value7__sample_cnt ++;
    // Generated from the component: SCADA.is_b_SCADA
    // Generated from the component: SCADA.RMS value3
    if( _scada_rms_value3__zc ) {
        if (_plant_is_c_ia1__out != _scada_rms_value3__previous_value)
            _scada_rms_value3__correction = - _scada_rms_value3__previous_value / (_plant_is_c_ia1__out - _scada_rms_value3__previous_value);
        if (_scada_rms_value3__correction < 0)
            _scada_rms_value3__correction = 0;
        else
            _scada_rms_value3__correction = 0;
        _scada_rms_value3__sample_cnt += _scada_rms_value3__correction - _scada_rms_value3__previous_correction;
        _scada_rms_value3__out_state = sqrt(_scada_rms_value3__square_sum / _scada_rms_value3__sample_cnt);
        _scada_rms_value3__sample_cnt = 0;
        _scada_rms_value3__previous_correction = _scada_rms_value3__correction;
        _scada_rms_value3__square_sum = 0;
    } else if ( _scada_rms_value3__sample_cnt >= 10000 ) {
        _scada_rms_value3__out_state = sqrt(_scada_rms_value3__square_sum / _scada_rms_value3__sample_cnt);
        _scada_rms_value3__sample_cnt = 0;
        _scada_rms_value3__square_sum = 0;
    }
    _scada_rms_value3__previous_value = _plant_is_c_ia1__out;
    _scada_rms_value3__square_sum += _plant_is_c_ia1__out * _plant_is_c_ia1__out;
    _scada_rms_value3__sample_cnt ++;
    // Generated from the component: SCADA.is_c_SCADA
    // Generated from the component: SCADA.RMS value4
    if( _scada_rms_value4__zc ) {
        if (_plant_vs_a_va1__out != _scada_rms_value4__previous_value)
            _scada_rms_value4__correction = - _scada_rms_value4__previous_value / (_plant_vs_a_va1__out - _scada_rms_value4__previous_value);
        if (_scada_rms_value4__correction < 0)
            _scada_rms_value4__correction = 0;
        else
            _scada_rms_value4__correction = 0;
        _scada_rms_value4__sample_cnt += _scada_rms_value4__correction - _scada_rms_value4__previous_correction;
        _scada_rms_value4__out_state = sqrt(_scada_rms_value4__square_sum / _scada_rms_value4__sample_cnt);
        _scada_rms_value4__sample_cnt = 0;
        _scada_rms_value4__previous_correction = _scada_rms_value4__correction;
        _scada_rms_value4__square_sum = 0;
    } else if ( _scada_rms_value4__sample_cnt >= 10000 ) {
        _scada_rms_value4__out_state = sqrt(_scada_rms_value4__square_sum / _scada_rms_value4__sample_cnt);
        _scada_rms_value4__sample_cnt = 0;
        _scada_rms_value4__square_sum = 0;
    }
    _scada_rms_value4__previous_value = _plant_vs_a_va1__out;
    _scada_rms_value4__square_sum += _plant_vs_a_va1__out * _plant_vs_a_va1__out;
    _scada_rms_value4__sample_cnt ++;
    // Generated from the component: SCADA.RMS value8
    if( _scada_rms_value8__zc ) {
        if (_plant_vs_b_va1__out != _scada_rms_value8__previous_value)
            _scada_rms_value8__correction = - _scada_rms_value8__previous_value / (_plant_vs_b_va1__out - _scada_rms_value8__previous_value);
        if (_scada_rms_value8__correction < 0)
            _scada_rms_value8__correction = 0;
        else
            _scada_rms_value8__correction = 0;
        _scada_rms_value8__sample_cnt += _scada_rms_value8__correction - _scada_rms_value8__previous_correction;
        _scada_rms_value8__out_state = sqrt(_scada_rms_value8__square_sum / _scada_rms_value8__sample_cnt);
        _scada_rms_value8__sample_cnt = 0;
        _scada_rms_value8__previous_correction = _scada_rms_value8__correction;
        _scada_rms_value8__square_sum = 0;
    } else if ( _scada_rms_value8__sample_cnt >= 10000 ) {
        _scada_rms_value8__out_state = sqrt(_scada_rms_value8__square_sum / _scada_rms_value8__sample_cnt);
        _scada_rms_value8__sample_cnt = 0;
        _scada_rms_value8__square_sum = 0;
    }
    _scada_rms_value8__previous_value = _plant_vs_b_va1__out;
    _scada_rms_value8__square_sum += _plant_vs_b_va1__out * _plant_vs_b_va1__out;
    _scada_rms_value8__sample_cnt ++;
    // Generated from the component: SCADA.C function powers
    {
        _scada_c_function_powers__p_fil = _scada_c_function_powers__p_fil + 5e-05 * 2 * M_PI * 30.0 * ( _scada_c_function_powers__p - _scada_c_function_powers__p_fil ) ;
        _scada_c_function_powers__q_fil = _scada_c_function_powers__q_fil + 5e-05 * 2 * M_PI * 30.0 * ( _scada_c_function_powers__q - _scada_c_function_powers__q_fil ) ;
    }
    // Generated from the component: SCADA.RMS value6
    if( _scada_rms_value6__zc ) {
        if (_plant_vs_c_va1__out != _scada_rms_value6__previous_value)
            _scada_rms_value6__correction = - _scada_rms_value6__previous_value / (_plant_vs_c_va1__out - _scada_rms_value6__previous_value);
        if (_scada_rms_value6__correction < 0)
            _scada_rms_value6__correction = 0;
        else
            _scada_rms_value6__correction = 0;
        _scada_rms_value6__sample_cnt += _scada_rms_value6__correction - _scada_rms_value6__previous_correction;
        _scada_rms_value6__out_state = sqrt(_scada_rms_value6__square_sum / _scada_rms_value6__sample_cnt);
        _scada_rms_value6__sample_cnt = 0;
        _scada_rms_value6__previous_correction = _scada_rms_value6__correction;
        _scada_rms_value6__square_sum = 0;
    } else if ( _scada_rms_value6__sample_cnt >= 10000 ) {
        _scada_rms_value6__out_state = sqrt(_scada_rms_value6__square_sum / _scada_rms_value6__sample_cnt);
        _scada_rms_value6__sample_cnt = 0;
        _scada_rms_value6__square_sum = 0;
    }
    _scada_rms_value6__previous_value = _plant_vs_c_va1__out;
    _scada_rms_value6__square_sum += _plant_vs_c_va1__out * _plant_vs_c_va1__out;
    _scada_rms_value6__sample_cnt ++;
    // Generated from the component: SCADA.is_d_ref
    // Generated from the component: Plant.S1.Triple S1 ideal.CTC_Wrapper
    // Generated from the component: SCADA.breaker
    // Generated from the component: SCADA.sAC
    // Generated from the component: SCADA.is_q_ref
    // Generated from the component: SCADA.iarms
    // Generated from the component: SCADA.ibrms
    // Generated from the component: SCADA.icrms
    // Generated from the component: SCADA.varms
    // Generated from the component: SCADA.vbrms
    // Generated from the component: Controller.C function PLL
    {
        _controller_c_function_pll__y_q = _controller_c_function_pll__y_q + 717.1314741035857 * 5e-05 * _controller_c_function_pll__e_q ;
        _controller_c_function_pll__theta = _controller_c_function_pll__theta + 5e-05 * _controller_c_function_pll__omega_pll ;
        if ( _controller_c_function_pll__theta >= 2 * M_PI )     {
            _controller_c_function_pll__theta = _controller_c_function_pll__theta - 2 * M_PI ;
        }
        if ( _controller_c_function_pll__theta < 0.0 )     {
            _controller_c_function_pll__theta = _controller_c_function_pll__theta + abs ( _controller_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: SCADA.P3f
    // Generated from the component: SCADA.Q3f
    // Generated from the component: SCADA.p_fil
    // Generated from the component: SCADA.q_fil
    // Generated from the component: SCADA.vcrms
    // Generated from the component: Controller.C function abc to dq
    {
    }
    // Generated from the component: SCADA.omega_SCADA
    // Generated from the component: SCADA.theta_SCADA
    // Generated from the component: SCADA.f_PLL
    // Generated from the component: SCADA.vd
    // Generated from the component: SCADA.vq
    // Generated from the component: Controller.C function PI current controller
    {
        _controller_c_function_pi_current_controller__e_d = _controller_c_function_pi_current_controller__is_dq_ref [ 0 ] - _controller_c_function_pi_current_controller__is_dq [ 0 ] ;
        _controller_c_function_pi_current_controller__e_q = _controller_c_function_pi_current_controller__is_dq_ref [ 1 ] - _controller_c_function_pi_current_controller__is_dq [ 1 ] ;
        _controller_c_function_pi_current_controller__y_d = _controller_c_function_pi_current_controller__y_d + _controller_c_function_pi_current_controller__Ki_i * 5e-05 * _controller_c_function_pi_current_controller__e_d ;
        _controller_c_function_pi_current_controller__y_q = _controller_c_function_pi_current_controller__y_q + _controller_c_function_pi_current_controller__Ki_i * 5e-05 * _controller_c_function_pi_current_controller__e_q ;
        if ( _controller_c_function_pi_current_controller__startAC < 0.5 )     {
            _controller_c_function_pi_current_controller__y_d = 0 ;
            _controller_c_function_pi_current_controller__y_q = 0 ;
        }
    }
    // Generated from the component: SCADA.id
    // Generated from the component: SCADA.iq
    // Generated from the component: Controller.C function dq to abc
    {
    }
    // Generated from the component: SCADA.eta_d
    // Generated from the component: SCADA.eta_q
    // Generated from the component: SCADA.eta_a
    // Generated from the component: SCADA.eta_b
    // Generated from the component: SCADA.eta_c
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: SCADA.Control
    _scada_control__out = XIo_InFloat(0x2f800000);
    // Generated from the component: SCADA.i_d_ref
    _scada_i_d_ref__out = XIo_InFloat(0x2f800004);
    // Generated from the component: SCADA.i_q_ref
    _scada_i_q_ref__out = XIo_InFloat(0x2f800008);
    // Generated from the component: SCADA.startAC
    _scada_startac__out = XIo_InInt32(0x2f80000c);
    // Generated from the component: SCADA.startFSM
    _scada_startfsm__out = XIo_InInt32(0x2f800010);
    // Generated from the component: SCADA.tau_c
    _scada_tau_c__out = XIo_InFloat(0x2f800014);
    // Generated from the component: SCADA.CTRL
    _scada_ctrl__output_fnc();
    // Generated from the component: SCADA.ctrl
    _scada_ctrl_1__output_fnc();
    // Generated from the component: SCADA.Rate Transition10.Input
    _scada_rate_transition10_output__state = _scada_i_d_ref__out;
    // Generated from the component: SCADA.Rate Transition9.Input
    _scada_rate_transition9_output__state = _scada_i_q_ref__out;
    // Generated from the component: SCADA.Rate Transition8.Input
    _scada_rate_transition8_output__state = _scada_startac__out;
    // Generated from the component: SCADA.Rate Transition7.Input
    _scada_rate_transition7_output__state = _scada_startfsm__out;
    // Generated from the component: Rate Transition24.Input
    _rate_transition24_output__state = _scada_tau_c__out;
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: SCADA.CTRL
    // Generated from the component: SCADA.ctrl
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------