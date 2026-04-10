/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: dq_unb_pi_vsg.c
*
* Code generated from model             : 'dq_unb_pi_vsg_ctrl_v1'.
* Subsystem selected for code generation: 'dq_unb_pi_vsg'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 08-Jun-2025 @ 01:28:46 PM
*
* Generated using TI C2000 Toolbox. Platform: LAUNCHXL-F28379D
*
*/
#include "dq_unb_pi_vsg.h"
// custom defines
// Model entry point functions


#pragma CODE_SECTION(dq_unb_pi_vsg_step0, ".TI.ramfunc")
void dq_unb_pi_vsg_step0(dq_unb_pi_vsg_ModelData *p_m_Data) {
    dq_unb_pi_vsg_ExtIn *ext_In = (dq_unb_pi_vsg_ExtIn *) p_m_Data->p_extIn;
    dq_unb_pi_vsg_ExtOut *ext_Out = (dq_unb_pi_vsg_ExtOut *) p_m_Data->p_extOut;
    dq_unb_pi_vsg_ModelSinks *m_Sinks = (dq_unb_pi_vsg_ModelSinks *) p_m_Data->p_Sinks;
    dq_unb_pi_vsg_ModelStates *m_States = (dq_unb_pi_vsg_ModelStates *) p_m_Data->p_States;
    // Local variables
    real_t _dq_unb_pi_vsg_adc__generic_1_adc_advanced_c_function__out;
    real_t _dq_unb_pi_vsg_adc__generic_1_offset__out = 1.5f;
    real_t _dq_unb_pi_vsg_adc__generic_1_raw_offset__out = 0.0f;
    real_t _dq_unb_pi_vsg_adc__generic_2_adc_advanced_c_function__out;
    real_t _dq_unb_pi_vsg_adc__generic_2_offset__out = 1.5f;
    real_t _dq_unb_pi_vsg_adc__generic_2_raw_offset__out = 0.0f;
    real_t _dq_unb_pi_vsg_adc__generic_3_adc_advanced_c_function__out;
    real_t _dq_unb_pi_vsg_adc__generic_3_offset__out = 1.5f;
    real_t _dq_unb_pi_vsg_adc__generic_3_raw_offset__out = 0.0f;
    real_t _dq_unb_pi_vsg_adc__generic_4_adc_advanced_c_function__out;
    real_t _dq_unb_pi_vsg_adc__generic_4_offset__out = 1.5f;
    real_t _dq_unb_pi_vsg_adc__generic_4_raw_offset__out = 0.0f;
    real_t _dq_unb_pi_vsg_adc__generic_5_adc_advanced_c_function__out;
    real_t _dq_unb_pi_vsg_adc__generic_5_offset__out = 1.5f;
    real_t _dq_unb_pi_vsg_adc__generic_5_raw_offset__out = 0.0f;
    real_t _dq_unb_pi_vsg_adc__generic_6_adc_advanced_c_function__out;
    real_t _dq_unb_pi_vsg_adc__generic_6_offset__out = 1.5f;
    real_t _dq_unb_pi_vsg_adc__generic_6_raw_offset__out = 0.0f;
    real_t _dq_unb_pi_vsg_adc__generic_7_adc_advanced_c_function__out;
    real_t _dq_unb_pi_vsg_adc__generic_7_offset__out = 1.5f;
    real_t _dq_unb_pi_vsg_adc__generic_7_raw_offset__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant1__out = 1.0f;
    real_t _dq_unb_pi_vsg_constant10__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant2__out = 0.5f;
    real_t _dq_unb_pi_vsg_constant4__out = 1.0f;
    real_t _dq_unb_pi_vsg_constant5__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant6__out = 1.0f;
    real_t _dq_unb_pi_vsg_constant7__out = 800.0f;
    real_t _dq_unb_pi_vsg_constant8__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant9__out = 0.0f;
    real_t _dq_unb_pi_vsg_delay1__out;
    real_t _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var1;
    real_t _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var2;
    real_t _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3;
    real_t _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4;
    real_t _dq_unb_pi_vsg_vsg_a_constant1__out = 0.0f;
    real_t _dq_unb_pi_vsg_vsg_a_constant2__out = 1.0f;
    real_t _dq_unb_pi_vsg_vsg_a_low_pass_filter1__out;
    real_t _dq_unb_pi_vsg_vsg_a_low_pass_filter1__previous_filtered_value;
    real_t _dq_unb_pi_vsg_vsg_b_constant1__out = 0.0f;
    real_t _dq_unb_pi_vsg_vsg_b_constant2__out = 1.0f;
    real_t _dq_unb_pi_vsg_vsg_b_constant3__out = 0.0f;
    real_t _dq_unb_pi_vsg_vsg_b_low_pass_filter1__out;
    real_t _dq_unb_pi_vsg_vsg_b_low_pass_filter1__previous_filtered_value;
    real_t _dq_unb_pi_vsg_vsg_c_constant1__out = 0.0f;
    real_t _dq_unb_pi_vsg_vsg_c_constant2__out = 1.0f;
    real_t _dq_unb_pi_vsg_vsg_c_constant3__out = 0.0f;
    real_t _dq_unb_pi_vsg_vsg_c_low_pass_filter1__out;
    real_t _dq_unb_pi_vsg_vsg_c_low_pass_filter1__previous_filtered_value;
    real_t _dq_unb_pi_vsg_current_ctrl_constant1__out = 0.0f;
    real_t _dq_unb_pi_vsg_current_ctrl_constant2__out = 0.0f;
    real_t _dq_unb_pi_vsg_current_ctrl_constant3__out = 0.0f;
    real_t _dq_unb_pi_vsg_current_ctrl_constant4__out = 314.1592653589793f;
    real_t _dq_unb_pi_vsg_current_ctrl_constant5__out = 314.1592653589793f;
    real_t _dq_unb_pi_vsg_current_ctrl_constant6__out = 314.1592653589793f;
    real_t _dq_unb_pi_vsg_current_ctrl_constant7__out = 1.0f;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__out;
    real_t _dq_unb_pi_vsg_adc__generic_1_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_2_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_3_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_4_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_5_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_6_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_7_sum2__out;
    real_t _dq_unb_pi_vsg_gain9__out;
    real_t _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in;
    real_t _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out;
    real_t _dq_unb_pi_vsg_gain5__out;
    real_t _dq_unb_pi_vsg_gain7__out;
    real_t _dq_unb_pi_vsg_sum2__out;
    real_t _dq_unb_pi_vsg_gpio_do__generic_1_gpio_do_advanced_c_function__in;
    real_t _dq_unb_pi_vsg_gain4__out;
    real_t _dq_unb_pi_vsg_gain6__out;
    real_t _dq_unb_pi_vsg_gain8__out;
    real_t _dq_unb_pi_vsg_vsg_a_signal_switch1__out;
    real_t _dq_unb_pi_vsg_vsg_b_gain1__out;
    real_t _dq_unb_pi_vsg_vsg_c_gain1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_product1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_product1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_product1__out;
    real_t _dq_unb_pi_vsg_adc__generic_1_12_bit_to_refv__out;
    real_t _dq_unb_pi_vsg_adc__generic_2_12_bit_to_refv__out;
    real_t _dq_unb_pi_vsg_adc__generic_3_12_bit_to_refv__out;
    real_t _dq_unb_pi_vsg_adc__generic_4_12_bit_to_refv__out;
    real_t _dq_unb_pi_vsg_adc__generic_5_12_bit_to_refv__out;
    real_t _dq_unb_pi_vsg_adc__generic_6_12_bit_to_refv__out;
    real_t _dq_unb_pi_vsg_adc__generic_7_12_bit_to_refv__out;
    uint_t _dq_unb_pi_vsg_epwm__generic_2_epwm_1_advanced_c_function__CMPA;
    int_t _dq_unb_pi_vsg_epwm__generic_2_epwm_1_advanced_c_function__A;
    int_t _dq_unb_pi_vsg_epwm__generic_2_epwm_1_advanced_c_function__B;
    real_t _dq_unb_pi_vsg_gpio_do__generic_2_gpio_do_advanced_c_function__in;
    real_t _dq_unb_pi_vsg_vsg_b_signal_switch1__out;
    real_t _dq_unb_pi_vsg_vsg_c_signal_switch1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0f};
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__a_coeff[2] = {1.0f, -1.0f};
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__a_sum;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__b_sum;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0f};
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__a_coeff[2] = {1.0f, -1.0f};
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__a_sum;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__b_sum;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0f};
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__a_coeff[2] = {1.0f, -1.0f};
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__a_sum;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__b_sum;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in;
    real_t _dq_unb_pi_vsg_adc__generic_1_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_2_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_3_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_4_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_5_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_6_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_7_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_1_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_2_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_3_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_4_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_5_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_6_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_7_scaling__out;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__out_fil;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__out_fil;
    real_t _dq_unb_pi_vsg_bus_join12__out[3];
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__out_fil;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__out_fil;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__out_fil;
    real_t _dq_unb_pi_vsg_bus_join13__out[3];
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__out_fil;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc[3];
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__theta;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__d;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__q;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc[3];
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__d;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__e_d;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__e_q;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__omega_pll;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__q;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_pll__theta_pll;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc[3];
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__theta;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__d;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__q;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__in;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_gain16__out;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_gain17__out;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_gain18__out;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_gain5__out;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_gain14__out;
    real_t _dq_unb_pi_vsg_vsg_a_gain1__out;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_gain15__out;
    real_t _dq_unb_pi_vsg_virtual_3ph3w_bus_join32__out[2];
    real_t _dq_unb_pi_vsg_virtual_3ph3w_bus_join33__out[2];
    real_t _dq_unb_pi_vsg_virtual_3ph3w_bus_join34__out[2];
    real_t _dq_unb_pi_vsg_virtual_3ph3w_bus_join21__out[2];
    real_t _dq_unb_pi_vsg_virtual_3ph3w_bus_join30__out[2];
    real_t _dq_unb_pi_vsg_virtual_3ph3w_bus_join31__out[2];
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_albe[2];
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__omega_base;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__on_vsg;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_m_ref;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s_ref;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__reset_int;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_pll;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_albe[2];
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__e;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_d;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref[2];
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref_fil[2];
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_q;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__omega_vsg;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_s;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_s_fil;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s_fil;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_d;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_q;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__dq[2];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__theta;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__a;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__b;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__c;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__dq[2];
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__theta;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__a;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__b;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__c;
    real_t _dq_unb_pi_vsg_vsg_a_bus_join11__out[2];
    real_t _dq_unb_pi_vsg_vsg_a_bus_join18__out[2];
    real_t _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__dq[2];
    real_t _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__theta;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__a;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__b;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__c;
    real_t _dq_unb_pi_vsg_vsg_b_bus_join17__out[3];
    real_t _dq_unb_pi_vsg_vsg_c_bus_join17__out[3];
    real_t _dq_unb_pi_vsg_vsg_a_bus_join15__out[3];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__abc[3];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__d;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__e_d;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__e_q;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__omega_pll;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__q;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_pll__theta_pll;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__abc[3];
    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__d;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__e_d;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__e_q;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__omega_pll;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__q;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_pll__theta_pll;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc[3];
    real_t _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__theta;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__d;
    real_t _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__q;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_albe[2];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__omega_base;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__on_vsg;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_m_ref;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s_ref;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_pll;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_albe[2];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__e;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_d;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref[2];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref_fil[2];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_q;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__omega_vsg;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_s;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_s_fil;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s_fil;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_d;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_q;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_albe[2];
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__omega_base;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__on_vsg;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_m_ref;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s_ref;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_pll;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_albe[2];
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__e;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_d;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref[2];
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref_fil[2];
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_q;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__omega_vsg;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_s;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_s_fil;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s_fil;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_d;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_q;
    real_t _dq_unb_pi_vsg_vsg_b_bus_join11__out[2];
    real_t _dq_unb_pi_vsg_vsg_b_bus_join14__out[2];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__dq[2];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__theta;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__a;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__b;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__c;
    real_t _dq_unb_pi_vsg_sci_send1_advanced_c_function__var1;
    real_t _dq_unb_pi_vsg_sci_send1_advanced_c_function__var2;
    real_t _dq_unb_pi_vsg_sci_send1_advanced_c_function__var3;
    real_t _dq_unb_pi_vsg_sci_send1_advanced_c_function__var4;
    real_t _dq_unb_pi_vsg_vsg_c_bus_join11__out[2];
    real_t _dq_unb_pi_vsg_vsg_c_bus_join14__out[2];
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__dq[2];
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__theta;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__a;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__b;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__c;
    real_t _dq_unb_pi_vsg_vsg_b_bus_join15__out[3];
    real_t _dq_unb_pi_vsg_vsg_c_bus_join15__out[3];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc[3];
    real_t _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__theta;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__d;
    real_t _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__q;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc[3];
    real_t _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__theta;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__d;
    real_t _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__q;
    real_t _dq_unb_pi_vsg_bus_join10__out[3];
    real_t _dq_unb_pi_vsg_current_ctrl_bus_split1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_bus_split1__out1;
    real_t _dq_unb_pi_vsg_current_ctrl_bus_split1__out2;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc[3];
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__theta;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__d;
    real_t _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__q;
    real_t _dq_unb_pi_vsg_current_ctrl_sum1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_sum2__out;
    real_t _dq_unb_pi_vsg_current_ctrl_sum5__out;
    real_t _dq_unb_pi_vsg_current_ctrl_sum8__out;
    real_t _dq_unb_pi_vsg_current_ctrl_gain1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_gain1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_gain3__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_gain1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_gain5__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_gain1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_sum3__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem6_sum1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_sum6__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem7_sum1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_sum9__out;
    real_t _dq_unb_pi_vsg_current_ctrl_subsystem8_sum1__out;
    real_t _dq_unb_pi_vsg_current_ctrl_sum4__out;
    real_t _dq_unb_pi_vsg_current_ctrl_sum7__out;
    real_t _dq_unb_pi_vsg_current_ctrl_gain6__out;
    real_t _dq_unb_pi_vsg_current_ctrl_gain2__out;
    real_t _dq_unb_pi_vsg_current_ctrl_gain4__out;
    real_t _dq_unb_pi_vsg_current_ctrl_product4__out;
    real_t _dq_unb_pi_vsg_current_ctrl_product2__out;
    real_t _dq_unb_pi_vsg_current_ctrl_product3__out;
    real_t _dq_unb_pi_vsg_current_ctrl_product5__out;
    real_t _dq_unb_pi_vsg_current_ctrl_bus_join1__out[2];
    real_t _dq_unb_pi_vsg_sum3__out;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__dq[2];
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__theta;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__a;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__b;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__c;
    real_t _dq_unb_pi_vsg_gain3__out;
    real_t _dq_unb_pi_vsg_bus_join14__out[3];
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in;
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out;
    real_t _dq_unb_pi_vsg_sum1__out[3];
    uint_t _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__CMPA;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__A;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__B;
    real_t _dq_unb_pi_vsg_gain1__out[3];
    real_t _dq_unb_pi_vsg_bus_split1__out;
    real_t _dq_unb_pi_vsg_bus_split1__out1;
    real_t _dq_unb_pi_vsg_bus_split1__out2;
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in;
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out;
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in;
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out;
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in;
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out;
    uint_t _dq_unb_pi_vsg_epwm__generic_1_epwm_1_advanced_c_function__CMPA;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_1_advanced_c_function__A;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_1_advanced_c_function__B;
    uint_t _dq_unb_pi_vsg_epwm__generic_1_epwm_2_advanced_c_function__CMPA;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_2_advanced_c_function__A;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_2_advanced_c_function__B;
    uint_t _dq_unb_pi_vsg_epwm__generic_1_epwm_3_advanced_c_function__CMPA;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_3_advanced_c_function__A;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_3_advanced_c_function__B;
    // Set tunable parameters
    // Output block
    while(AdccRegs.ADCCTL1.bit.ADCBSY);
	while(AdcaRegs.ADCCTL1.bit.ADCBSY);
	while(AdcbRegs.ADCCTL1.bit.ADCBSY);
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)1.ADC.advanced c function
    {
        _dq_unb_pi_vsg_adc__generic_1_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT3;
    }
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)2.ADC.advanced c function
    {
        _dq_unb_pi_vsg_adc__generic_2_adc_advanced_c_function__out = AdccResultRegs.ADCRESULT2;
    }
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)3.ADC.advanced c function
    {
        _dq_unb_pi_vsg_adc__generic_3_adc_advanced_c_function__out = AdcbResultRegs.ADCRESULT2;
    }
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)4.ADC.advanced c function
    {
        _dq_unb_pi_vsg_adc__generic_4_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT14;
    }
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)5.ADC.advanced c function
    {
        _dq_unb_pi_vsg_adc__generic_5_adc_advanced_c_function__out = AdccResultRegs.ADCRESULT3;
    }
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)6.ADC.advanced c function
    {
        _dq_unb_pi_vsg_adc__generic_6_adc_advanced_c_function__out = AdcbResultRegs.ADCRESULT3;
    }
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)7.ADC.advanced c function
    {
        _dq_unb_pi_vsg_adc__generic_7_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT2;
    }
    // Generated from the component: dq_unb_pi_vsg.Delay1
    _dq_unb_pi_vsg_delay1__out = m_States->_dq_unb_pi_vsg_delay1__state[m_States->_dq_unb_pi_vsg_delay1__cbi];
    // Generated from the component: dq_unb_pi_vsg.SCI Receive1.advanced c function
    {
        Receive_data(&SerialComm, m_States->_dq_unb_pi_vsg_sci_receive1_advanced_c_function__state_var, 4);
        _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var1 = m_States->_dq_unb_pi_vsg_sci_receive1_advanced_c_function__state_var[0];
        _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var2 = m_States->_dq_unb_pi_vsg_sci_receive1_advanced_c_function__state_var[1];
        _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 = m_States->_dq_unb_pi_vsg_sci_receive1_advanced_c_function__state_var[2];
        _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 = m_States->_dq_unb_pi_vsg_sci_receive1_advanced_c_function__state_var[3];
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_a.Low-Pass Filter1
    _dq_unb_pi_vsg_vsg_a_low_pass_filter1__previous_filtered_value = m_States->_dq_unb_pi_vsg_vsg_a_low_pass_filter1__filtered_value;
    m_States->_dq_unb_pi_vsg_vsg_a_low_pass_filter1__filtered_value = m_States->_dq_unb_pi_vsg_vsg_a_low_pass_filter1__previous_in * (6.283185307179586f * 500.0f * 5e-05) + _dq_unb_pi_vsg_vsg_a_low_pass_filter1__previous_filtered_value * (1 - 6.283185307179586f * 500.0f * 5e-05 );
    _dq_unb_pi_vsg_vsg_a_low_pass_filter1__out = m_States->_dq_unb_pi_vsg_vsg_a_low_pass_filter1__filtered_value;
    // Generated from the component: dq_unb_pi_vsg.VSG_b.Low-Pass Filter1
    _dq_unb_pi_vsg_vsg_b_low_pass_filter1__previous_filtered_value = m_States->_dq_unb_pi_vsg_vsg_b_low_pass_filter1__filtered_value;
    m_States->_dq_unb_pi_vsg_vsg_b_low_pass_filter1__filtered_value = m_States->_dq_unb_pi_vsg_vsg_b_low_pass_filter1__previous_in * (6.283185307179586f * 500.0f * 5e-05) + _dq_unb_pi_vsg_vsg_b_low_pass_filter1__previous_filtered_value * (1 - 6.283185307179586f * 500.0f * 5e-05 );
    _dq_unb_pi_vsg_vsg_b_low_pass_filter1__out = m_States->_dq_unb_pi_vsg_vsg_b_low_pass_filter1__filtered_value;
    // Generated from the component: dq_unb_pi_vsg.VSG_c.Low-Pass Filter1
    _dq_unb_pi_vsg_vsg_c_low_pass_filter1__previous_filtered_value = m_States->_dq_unb_pi_vsg_vsg_c_low_pass_filter1__filtered_value;
    m_States->_dq_unb_pi_vsg_vsg_c_low_pass_filter1__filtered_value = m_States->_dq_unb_pi_vsg_vsg_c_low_pass_filter1__previous_in * (6.283185307179586f * 500.0f * 5e-05) + _dq_unb_pi_vsg_vsg_c_low_pass_filter1__previous_filtered_value * (1 - 6.283185307179586f * 500.0f * 5e-05 );
    _dq_unb_pi_vsg_vsg_c_low_pass_filter1__out = m_States->_dq_unb_pi_vsg_vsg_c_low_pass_filter1__filtered_value;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem6.Integrator1
    _dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__out = m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__state;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem7.Integrator1
    _dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__out = m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__state;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem8.Integrator1
    _dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__out = m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__state;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)1.Sum2
    _dq_unb_pi_vsg_adc__generic_1_sum2__out = _dq_unb_pi_vsg_adc__generic_1_adc_advanced_c_function__out - _dq_unb_pi_vsg_adc__generic_1_raw_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)2.Sum2
    _dq_unb_pi_vsg_adc__generic_2_sum2__out = _dq_unb_pi_vsg_adc__generic_2_adc_advanced_c_function__out - _dq_unb_pi_vsg_adc__generic_2_raw_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)3.Sum2
    _dq_unb_pi_vsg_adc__generic_3_sum2__out = _dq_unb_pi_vsg_adc__generic_3_adc_advanced_c_function__out - _dq_unb_pi_vsg_adc__generic_3_raw_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)4.Sum2
    _dq_unb_pi_vsg_adc__generic_4_sum2__out = _dq_unb_pi_vsg_adc__generic_4_adc_advanced_c_function__out - _dq_unb_pi_vsg_adc__generic_4_raw_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)5.Sum2
    _dq_unb_pi_vsg_adc__generic_5_sum2__out = _dq_unb_pi_vsg_adc__generic_5_adc_advanced_c_function__out - _dq_unb_pi_vsg_adc__generic_5_raw_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)6.Sum2
    _dq_unb_pi_vsg_adc__generic_6_sum2__out = _dq_unb_pi_vsg_adc__generic_6_adc_advanced_c_function__out - _dq_unb_pi_vsg_adc__generic_6_raw_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)7.Sum2
    _dq_unb_pi_vsg_adc__generic_7_sum2__out = _dq_unb_pi_vsg_adc__generic_7_adc_advanced_c_function__out - _dq_unb_pi_vsg_adc__generic_7_raw_offset__out;
    // Generated from the component: dq_unb_pi_vsg.Gain9
    _dq_unb_pi_vsg_gain9__out = 3.0f * _dq_unb_pi_vsg_constant10__out;
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA
    _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in = _dq_unb_pi_vsg_constant2__out;
    {
        _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out = _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in * 5000 ;
    }
    // Generated from the component: dq_unb_pi_vsg.Gain5
    _dq_unb_pi_vsg_gain5__out = 3.0f * _dq_unb_pi_vsg_constant8__out;
    // Generated from the component: dq_unb_pi_vsg.Gain7
    _dq_unb_pi_vsg_gain7__out = 3.0f * _dq_unb_pi_vsg_constant9__out;
    // Generated from the component: dq_unb_pi_vsg.Sum2
    _dq_unb_pi_vsg_sum2__out = _dq_unb_pi_vsg_constant4__out - _dq_unb_pi_vsg_delay1__out;
    // Generated from the component: dq_unb_pi_vsg.GPIO DO (Generic)1.GPIO DO.advanced c function
    _dq_unb_pi_vsg_gpio_do__generic_1_gpio_do_advanced_c_function__in = _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4;
    {
        if ( _dq_unb_pi_vsg_gpio_do__generic_1_gpio_do_advanced_c_function__in > 0.5f )     {
            GpioDataRegs.GPASET.bit.GPIO9 = 1;
        }
        else     {
            GpioDataRegs.GPACLEAR.bit.GPIO9 = 1 ;
        }
    }
    // Generated from the component: dq_unb_pi_vsg.Gain4
    _dq_unb_pi_vsg_gain4__out = 3.0f * _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var1;
    // Generated from the component: dq_unb_pi_vsg.Gain6
    _dq_unb_pi_vsg_gain6__out = 3.0f * _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var1;
    // Generated from the component: dq_unb_pi_vsg.Gain8
    _dq_unb_pi_vsg_gain8__out = 3.0f * _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var1;
    // Generated from the component: dq_unb_pi_vsg.VSG_a.Signal switch1
    _dq_unb_pi_vsg_vsg_a_signal_switch1__out = (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0.5f) ? _dq_unb_pi_vsg_vsg_a_constant2__out : _dq_unb_pi_vsg_vsg_a_low_pass_filter1__out;
    // Generated from the component: dq_unb_pi_vsg.VSG_b.Gain1
    _dq_unb_pi_vsg_vsg_b_gain1__out = 0.0031830988618379067f * _dq_unb_pi_vsg_vsg_b_low_pass_filter1__out;
    // Generated from the component: dq_unb_pi_vsg.VSG_c.Gain1
    _dq_unb_pi_vsg_vsg_c_gain1__out = 0.0031830988618379067f * _dq_unb_pi_vsg_vsg_c_low_pass_filter1__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem6.Product1
    _dq_unb_pi_vsg_current_ctrl_subsystem6_product1__out = (_dq_unb_pi_vsg_current_ctrl_constant4__out * _dq_unb_pi_vsg_current_ctrl_constant4__out * _dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__out);
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem7.Product1
    _dq_unb_pi_vsg_current_ctrl_subsystem7_product1__out = (_dq_unb_pi_vsg_current_ctrl_constant5__out * _dq_unb_pi_vsg_current_ctrl_constant5__out * _dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__out);
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem8.Product1
    _dq_unb_pi_vsg_current_ctrl_subsystem8_product1__out = (_dq_unb_pi_vsg_current_ctrl_constant6__out * _dq_unb_pi_vsg_current_ctrl_constant6__out * _dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__out);
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)1.12_bit_to_refV
    _dq_unb_pi_vsg_adc__generic_1_12_bit_to_refv__out = 0.0007326007326007326f * _dq_unb_pi_vsg_adc__generic_1_sum2__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)2.12_bit_to_refV
    _dq_unb_pi_vsg_adc__generic_2_12_bit_to_refv__out = 0.0007326007326007326f * _dq_unb_pi_vsg_adc__generic_2_sum2__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)3.12_bit_to_refV
    _dq_unb_pi_vsg_adc__generic_3_12_bit_to_refv__out = 0.0007326007326007326f * _dq_unb_pi_vsg_adc__generic_3_sum2__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)4.12_bit_to_refV
    _dq_unb_pi_vsg_adc__generic_4_12_bit_to_refv__out = 0.0007326007326007326f * _dq_unb_pi_vsg_adc__generic_4_sum2__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)5.12_bit_to_refV
    _dq_unb_pi_vsg_adc__generic_5_12_bit_to_refv__out = 0.0007326007326007326f * _dq_unb_pi_vsg_adc__generic_5_sum2__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)6.12_bit_to_refV
    _dq_unb_pi_vsg_adc__generic_6_12_bit_to_refv__out = 0.0007326007326007326f * _dq_unb_pi_vsg_adc__generic_6_sum2__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)7.12_bit_to_refV
    _dq_unb_pi_vsg_adc__generic_7_12_bit_to_refv__out = 0.0007326007326007326f * _dq_unb_pi_vsg_adc__generic_7_sum2__out;
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)2.ePWM 1.advanced c function
    _dq_unb_pi_vsg_epwm__generic_2_epwm_1_advanced_c_function__CMPA = _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out;
    {
        EPwm6Regs.CMPA.bit.CMPA = _dq_unb_pi_vsg_epwm__generic_2_epwm_1_advanced_c_function__CMPA;
    }
    // Generated from the component: dq_unb_pi_vsg.GPIO DO (Generic)2.GPIO DO.advanced c function
    _dq_unb_pi_vsg_gpio_do__generic_2_gpio_do_advanced_c_function__in = _dq_unb_pi_vsg_sum2__out;
    {
        if ( _dq_unb_pi_vsg_gpio_do__generic_2_gpio_do_advanced_c_function__in > 0.5f )     {
            GpioDataRegs.GPASET.bit.GPIO24 = 1;
        }
        else     {
            GpioDataRegs.GPACLEAR.bit.GPIO24 = 1 ;
        }
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_b.Signal switch1
    _dq_unb_pi_vsg_vsg_b_signal_switch1__out = (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0.5f) ? _dq_unb_pi_vsg_vsg_b_constant2__out : _dq_unb_pi_vsg_vsg_b_gain1__out;
    // Generated from the component: dq_unb_pi_vsg.VSG_c.Signal switch1
    _dq_unb_pi_vsg_vsg_c_signal_switch1__out = (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0.5f) ? _dq_unb_pi_vsg_vsg_c_constant2__out : _dq_unb_pi_vsg_vsg_c_gain1__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem6.Discrete Transfer Function2
    uint_t _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i;
    _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__a_sum = 0.0f;
    _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__b_sum = 0.0f;
    _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i++) {
        _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__b_coeff[_dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i + 1] * m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__states[_dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i];
    }
    _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__a_sum += m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__states[0] * _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__a_coeff[1];
    _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in = _dq_unb_pi_vsg_current_ctrl_subsystem6_product1__out - _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__a_sum;
    _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__b_coeff[0] * _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in;
    _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__out = _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__b_sum;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem7.Discrete Transfer Function2
    uint_t _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i;
    _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__a_sum = 0.0f;
    _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__b_sum = 0.0f;
    _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i++) {
        _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__b_coeff[_dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i + 1] * m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__states[_dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i];
    }
    _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__a_sum += m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__states[0] * _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__a_coeff[1];
    _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in = _dq_unb_pi_vsg_current_ctrl_subsystem7_product1__out - _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__a_sum;
    _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__b_coeff[0] * _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in;
    _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__out = _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__b_sum;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem8.Discrete Transfer Function2
    uint_t _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i;
    _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__a_sum = 0.0f;
    _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__b_sum = 0.0f;
    _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i++) {
        _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__b_coeff[_dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i + 1] * m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__states[_dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i];
    }
    _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__a_sum += m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__states[0] * _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__a_coeff[1];
    _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in = _dq_unb_pi_vsg_current_ctrl_subsystem8_product1__out - _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__a_sum;
    _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__b_coeff[0] * _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in;
    _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__out = _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__b_sum;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)1.Sum1
    _dq_unb_pi_vsg_adc__generic_1_sum1__out = _dq_unb_pi_vsg_adc__generic_1_12_bit_to_refv__out - _dq_unb_pi_vsg_adc__generic_1_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)2.Sum1
    _dq_unb_pi_vsg_adc__generic_2_sum1__out = _dq_unb_pi_vsg_adc__generic_2_12_bit_to_refv__out - _dq_unb_pi_vsg_adc__generic_2_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)3.Sum1
    _dq_unb_pi_vsg_adc__generic_3_sum1__out = _dq_unb_pi_vsg_adc__generic_3_12_bit_to_refv__out - _dq_unb_pi_vsg_adc__generic_3_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)4.Sum1
    _dq_unb_pi_vsg_adc__generic_4_sum1__out = _dq_unb_pi_vsg_adc__generic_4_12_bit_to_refv__out - _dq_unb_pi_vsg_adc__generic_4_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)5.Sum1
    _dq_unb_pi_vsg_adc__generic_5_sum1__out = _dq_unb_pi_vsg_adc__generic_5_12_bit_to_refv__out - _dq_unb_pi_vsg_adc__generic_5_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)6.Sum1
    _dq_unb_pi_vsg_adc__generic_6_sum1__out = _dq_unb_pi_vsg_adc__generic_6_12_bit_to_refv__out - _dq_unb_pi_vsg_adc__generic_6_offset__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)7.Sum1
    _dq_unb_pi_vsg_adc__generic_7_sum1__out = _dq_unb_pi_vsg_adc__generic_7_12_bit_to_refv__out - _dq_unb_pi_vsg_adc__generic_7_offset__out;
    _dq_unb_pi_vsg_adc__generic_1_scaling__out = 30.0f * _dq_unb_pi_vsg_adc__generic_1_sum1__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)2.scaling
    _dq_unb_pi_vsg_adc__generic_2_scaling__out = 30.0f * _dq_unb_pi_vsg_adc__generic_2_sum1__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)3.scaling
    _dq_unb_pi_vsg_adc__generic_3_scaling__out = 30.0f * _dq_unb_pi_vsg_adc__generic_3_sum1__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)4.scaling
    _dq_unb_pi_vsg_adc__generic_4_scaling__out = 240.0f * _dq_unb_pi_vsg_adc__generic_4_sum1__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)5.scaling
    _dq_unb_pi_vsg_adc__generic_5_scaling__out = 240.0f * _dq_unb_pi_vsg_adc__generic_5_sum1__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)6.scaling
    _dq_unb_pi_vsg_adc__generic_6_scaling__out = 240.0f * _dq_unb_pi_vsg_adc__generic_6_sum1__out;
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)7.scaling
    _dq_unb_pi_vsg_adc__generic_7_scaling__out = 30.0f * _dq_unb_pi_vsg_adc__generic_7_sum1__out;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem6.LPF
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__in = _dq_unb_pi_vsg_adc__generic_1_scaling__out;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem8.LPF
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__in = _dq_unb_pi_vsg_adc__generic_2_scaling__out;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Bus Join12
    _dq_unb_pi_vsg_bus_join12__out[0] = _dq_unb_pi_vsg_adc__generic_1_scaling__out;
    _dq_unb_pi_vsg_bus_join12__out[1] = _dq_unb_pi_vsg_adc__generic_2_scaling__out;
    _dq_unb_pi_vsg_bus_join12__out[2] = _dq_unb_pi_vsg_adc__generic_3_scaling__out;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem11.LPF
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__in = _dq_unb_pi_vsg_adc__generic_3_scaling__out;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem7.LPF
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__in = _dq_unb_pi_vsg_adc__generic_4_scaling__out;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem9.LPF
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__in = _dq_unb_pi_vsg_adc__generic_5_scaling__out;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Bus Join13
    _dq_unb_pi_vsg_bus_join13__out[0] = _dq_unb_pi_vsg_adc__generic_4_scaling__out;
    _dq_unb_pi_vsg_bus_join13__out[1] = _dq_unb_pi_vsg_adc__generic_5_scaling__out;
    _dq_unb_pi_vsg_bus_join13__out[2] = _dq_unb_pi_vsg_adc__generic_6_scaling__out;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem10.LPF
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__in = _dq_unb_pi_vsg_adc__generic_6_scaling__out;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem6.LPF1
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__in = _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__out_fil;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem8.LPF1
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__in = _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__out_fil;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.C function abc to dq1
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc[0] = _dq_unb_pi_vsg_bus_join12__out[0];
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc[1] = _dq_unb_pi_vsg_bus_join12__out[1];
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc[2] = _dq_unb_pi_vsg_bus_join12__out[2];
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__theta = _dq_unb_pi_vsg_current_ctrl_constant2__out;
    {
        _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__theta ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc [ 0 ] + cos ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc [ 1 ] + cos ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__theta ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc [ 0 ] - sin ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc [ 1 ] - sin ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem11.LPF1
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__in = _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__out_fil;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem7.LPF1
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__in = _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__out_fil;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem9.LPF1
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__in = _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__out_fil;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.C function PLL
    _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc[0] = _dq_unb_pi_vsg_bus_join13__out[0];
    _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc[1] = _dq_unb_pi_vsg_bus_join13__out[1];
    _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc[2] = _dq_unb_pi_vsg_bus_join13__out[2];
    {
        _dq_unb_pi_vsg_current_ctrl_c_function_pll__d = 2.0f / 3.0f * ( cos ( m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta ) * _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc [ 0 ] + cos ( m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc [ 1 ] + cos ( m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_current_ctrl_c_function_pll__q = 2.0f / 3.0f * ( - sin ( m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta ) * _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc [ 0 ] - sin ( m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc [ 1 ] - sin ( m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_pll__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_current_ctrl_c_function_pll__e_d = _dq_unb_pi_vsg_current_ctrl_c_function_pll__d ;
        _dq_unb_pi_vsg_current_ctrl_c_function_pll__omega_pll = 1.8f * _dq_unb_pi_vsg_current_ctrl_c_function_pll__e_d + m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__y_d ;
        _dq_unb_pi_vsg_current_ctrl_c_function_pll__theta_pll = m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta ;
    }
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.C function abc to dq2
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc[0] = _dq_unb_pi_vsg_bus_join13__out[0];
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc[1] = _dq_unb_pi_vsg_bus_join13__out[1];
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc[2] = _dq_unb_pi_vsg_bus_join13__out[2];
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__theta = _dq_unb_pi_vsg_current_ctrl_constant3__out;
    {
        _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__theta ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc [ 0 ] + cos ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc [ 1 ] + cos ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__theta ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc [ 0 ] - sin ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc [ 1 ] - sin ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem10.LPF1
    _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__in = _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__out_fil;
    {
        _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__out_fil = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Gain16
    _dq_unb_pi_vsg_virtual_3ph3w_gain16__out = 2.0f * _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Gain17
    _dq_unb_pi_vsg_virtual_3ph3w_gain17__out = 2.0f * _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Gain18
    _dq_unb_pi_vsg_virtual_3ph3w_gain18__out = 2.0f * _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Gain5
    _dq_unb_pi_vsg_virtual_3ph3w_gain5__out = 2.0f * _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Gain14
    _dq_unb_pi_vsg_virtual_3ph3w_gain14__out = 2.0f * _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.VSG_a.Gain1
    _dq_unb_pi_vsg_vsg_a_gain1__out = 0.0031830988618379067f * _dq_unb_pi_vsg_current_ctrl_c_function_pll__omega_pll;
    _dq_unb_pi_vsg_virtual_3ph3w_gain15__out = 2.0f * _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Bus Join32
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join32__out[0] = _dq_unb_pi_vsg_adc__generic_1_scaling__out;
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join32__out[1] = _dq_unb_pi_vsg_virtual_3ph3w_gain16__out;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Bus Join33
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join33__out[0] = _dq_unb_pi_vsg_adc__generic_2_scaling__out;
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join33__out[1] = _dq_unb_pi_vsg_virtual_3ph3w_gain17__out;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Bus Join34
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join34__out[0] = _dq_unb_pi_vsg_adc__generic_3_scaling__out;
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join34__out[1] = _dq_unb_pi_vsg_virtual_3ph3w_gain18__out;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Bus Join21
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join21__out[0] = _dq_unb_pi_vsg_adc__generic_4_scaling__out;
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join21__out[1] = _dq_unb_pi_vsg_virtual_3ph3w_gain5__out;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Bus Join30
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join30__out[0] = _dq_unb_pi_vsg_adc__generic_5_scaling__out;
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join30__out[1] = _dq_unb_pi_vsg_virtual_3ph3w_gain14__out;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Bus Join31
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join31__out[0] = _dq_unb_pi_vsg_adc__generic_6_scaling__out;
    _dq_unb_pi_vsg_virtual_3ph3w_bus_join31__out[1] = _dq_unb_pi_vsg_virtual_3ph3w_gain15__out;
    // Generated from the component: dq_unb_pi_vsg.VSG_a.C function VSG1
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_albe[0] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join32__out[0];
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_albe[1] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join32__out[1];
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__omega_base = _dq_unb_pi_vsg_vsg_a_signal_switch1__out;
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__on_vsg = _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3;
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_m_ref = _dq_unb_pi_vsg_gain4__out;
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s_ref = _dq_unb_pi_vsg_gain5__out;
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__reset_int = _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var2;
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_pll = _dq_unb_pi_vsg_current_ctrl_c_function_pll__theta_pll;
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_albe[0] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join21__out[0];
    _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_albe[1] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join21__out[1];
    {
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__omega_vsg = ( 0.01f * m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_p + m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_p + _dq_unb_pi_vsg_vsg_a_c_function_vsg1__omega_base ) * 2.0f * M_PI * 50.0f ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_d = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_albe [ 0 ] * cos ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_albe [ 1 ] * sin ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_q = - _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_albe [ 0 ] * sin ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_albe [ 1 ] * cos ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_d = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_albe [ 0 ] * cos ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_albe [ 1 ] * sin ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_q = - _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_albe [ 0 ] * sin ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_albe [ 1 ] * cos ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_s = ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_d * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_d + _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_q * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_q ) / ( 40.824829046386306f * 326.5986323710904f ) ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s = ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_d * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_q - _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_q * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_d ) / ( 40.824829046386306f * 326.5986323710904f ) ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_s_fil = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_ps ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s_fil = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_qs ;
        if ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__on_vsg < 0.5f )     {
            _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_s = 0.0f ;
            _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s = 0.0f ;
        }
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__e = 1.0f + 0.1f * m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_q + m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_q ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref [ 0 ] = - 40.824829046386306f * ( 0.1f * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__e + 0.0f * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_d / 326.5986323710904f + 0.1f * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_q / 326.5986323710904f ) / ( pow ( 0.0f , 2 ) + pow ( 0.1f , 2 ) ) ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref [ 1 ] = - 40.824829046386306f * ( 0.0f * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__e + 0.0f * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_q / 326.5986323710904f - 0.1f * _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_d / 326.5986323710904f ) / ( pow ( 0.0f , 2 ) + pow ( 0.1f , 2 ) ) ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref_fil [ 0 ] = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isd ;
        _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref_fil [ 1 ] = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isq ;
        if ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__on_vsg < 0.5f )     {
            _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref [ 0 ] = 0.0f ;
            _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref [ 1 ] = 0.0f ;
        }
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function dq to abc1
    _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__dq[0] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join30__out[0];
    _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__dq[1] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join30__out[1];
    _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__theta = _dq_unb_pi_vsg_vsg_b_constant3__out;
    {
        _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__a = cos ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__theta ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__theta ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__b = cos ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__c = cos ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__dq [ 1 ] ;
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function dq to abc1
    _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__dq[0] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join31__out[0];
    _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__dq[1] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join31__out[1];
    _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__theta = _dq_unb_pi_vsg_vsg_c_constant3__out;
    {
        _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__a = cos ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__theta ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__theta ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__b = cos ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__c = cos ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__dq [ 1 ] ;
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_a.Bus Join11
    _dq_unb_pi_vsg_vsg_a_bus_join11__out[0] = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_d;
    _dq_unb_pi_vsg_vsg_a_bus_join11__out[1] = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_q;
    // Generated from the component: dq_unb_pi_vsg.VSG_a.Bus Join18
    _dq_unb_pi_vsg_vsg_a_bus_join18__out[0] = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_d;
    _dq_unb_pi_vsg_vsg_a_bus_join18__out[1] = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__vs_q;
    // Generated from the component: dq_unb_pi_vsg.VSG_a.C function dq to abc
    _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__dq[0] = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref[0];
    _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__dq[1] = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref[1];
    _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__theta = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta_vsg;
    {
        _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__a = cos ( _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__theta ) * _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__theta ) * _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__b = cos ( _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__c = cos ( _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__dq [ 1 ] ;
    }
    _dq_unb_pi_vsg_vsg_b_bus_join17__out[0] = _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__a;
    _dq_unb_pi_vsg_vsg_b_bus_join17__out[1] = _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__b;
    _dq_unb_pi_vsg_vsg_b_bus_join17__out[2] = _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc1__c;
    // Generated from the component: dq_unb_pi_vsg.VSG_c.Bus Join17
    _dq_unb_pi_vsg_vsg_c_bus_join17__out[0] = _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__a;
    _dq_unb_pi_vsg_vsg_c_bus_join17__out[1] = _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__b;
    _dq_unb_pi_vsg_vsg_c_bus_join17__out[2] = _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc1__c;
    // Generated from the component: dq_unb_pi_vsg.VSG_a.Bus Join15
    _dq_unb_pi_vsg_vsg_a_bus_join15__out[0] = _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__a;
    _dq_unb_pi_vsg_vsg_a_bus_join15__out[1] = _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__b;
    _dq_unb_pi_vsg_vsg_a_bus_join15__out[2] = _dq_unb_pi_vsg_vsg_a_c_function_dq_to_abc__c;
    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function PLL
    _dq_unb_pi_vsg_vsg_b_c_function_pll__abc[0] = _dq_unb_pi_vsg_vsg_b_bus_join17__out[0];
    _dq_unb_pi_vsg_vsg_b_c_function_pll__abc[1] = _dq_unb_pi_vsg_vsg_b_bus_join17__out[1];
    _dq_unb_pi_vsg_vsg_b_c_function_pll__abc[2] = _dq_unb_pi_vsg_vsg_b_bus_join17__out[2];
    {
        _dq_unb_pi_vsg_vsg_b_c_function_pll__d = 2.0f / 3.0f * ( cos ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta ) * _dq_unb_pi_vsg_vsg_b_c_function_pll__abc [ 0 ] + cos ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_pll__abc [ 1 ] + cos ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_pll__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_pll__q = 2.0f / 3.0f * ( - sin ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta ) * _dq_unb_pi_vsg_vsg_b_c_function_pll__abc [ 0 ] - sin ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_pll__abc [ 1 ] - sin ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_pll__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_pll__e_d = _dq_unb_pi_vsg_vsg_b_c_function_pll__d ;
        _dq_unb_pi_vsg_vsg_b_c_function_pll__omega_pll = 1.8f * _dq_unb_pi_vsg_vsg_b_c_function_pll__e_d + m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__y_d ;
        _dq_unb_pi_vsg_vsg_b_c_function_pll__theta_pll = m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta ;
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function PLL
    _dq_unb_pi_vsg_vsg_c_c_function_pll__abc[0] = _dq_unb_pi_vsg_vsg_c_bus_join17__out[0];
    _dq_unb_pi_vsg_vsg_c_c_function_pll__abc[1] = _dq_unb_pi_vsg_vsg_c_bus_join17__out[1];
    _dq_unb_pi_vsg_vsg_c_c_function_pll__abc[2] = _dq_unb_pi_vsg_vsg_c_bus_join17__out[2];
    {
        _dq_unb_pi_vsg_vsg_c_c_function_pll__d = 2.0f / 3.0f * ( cos ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta ) * _dq_unb_pi_vsg_vsg_c_c_function_pll__abc [ 0 ] + cos ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_pll__abc [ 1 ] + cos ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_pll__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_pll__q = 2.0f / 3.0f * ( - sin ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta ) * _dq_unb_pi_vsg_vsg_c_c_function_pll__abc [ 0 ] - sin ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_pll__abc [ 1 ] - sin ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_pll__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_pll__e_d = _dq_unb_pi_vsg_vsg_c_c_function_pll__d ;
        _dq_unb_pi_vsg_vsg_c_c_function_pll__omega_pll = 1.8f * _dq_unb_pi_vsg_vsg_c_c_function_pll__e_d + m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__y_d ;
        _dq_unb_pi_vsg_vsg_c_c_function_pll__theta_pll = m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta ;
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_a.C function abc to dq
    _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc[0] = _dq_unb_pi_vsg_vsg_a_bus_join15__out[0];
    _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc[1] = _dq_unb_pi_vsg_vsg_a_bus_join15__out[1];
    _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc[2] = _dq_unb_pi_vsg_vsg_a_bus_join15__out[2];
    _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__theta = _dq_unb_pi_vsg_vsg_a_constant1__out;
    {
        _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc [ 0 ] + cos ( _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc [ 1 ] + cos ( _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc [ 1 ] - sin ( _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function VSG1
    _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_albe[0] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join33__out[0];
    _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_albe[1] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join33__out[1];
    _dq_unb_pi_vsg_vsg_b_c_function_vsg1__omega_base = _dq_unb_pi_vsg_vsg_b_signal_switch1__out;
    _dq_unb_pi_vsg_vsg_b_c_function_vsg1__on_vsg = _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3;
    _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_m_ref = _dq_unb_pi_vsg_gain6__out;
    _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s_ref = _dq_unb_pi_vsg_gain7__out;
    _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_pll = _dq_unb_pi_vsg_vsg_b_c_function_pll__theta_pll;
    _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_albe[0] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join30__out[0];
    _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_albe[1] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join30__out[1];
    {
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__omega_vsg = ( 0.01f * m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_p + m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_p + _dq_unb_pi_vsg_vsg_b_c_function_vsg1__omega_base ) * 2.0f * M_PI * 50.0f ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_d = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_albe [ 0 ] * cos ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_albe [ 1 ] * sin ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_q = - _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_albe [ 0 ] * sin ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_albe [ 1 ] * cos ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_d = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_albe [ 0 ] * cos ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_albe [ 1 ] * sin ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_q = - _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_albe [ 0 ] * sin ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_albe [ 1 ] * cos ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_s = ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_d * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_d + _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_q * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_q ) / ( 40.824829046386306f * 326.5986323710904f ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s = ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_d * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_q - _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_q * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_d ) / ( 40.824829046386306f * 326.5986323710904f ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_s_fil = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_ps ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s_fil = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_qs ;
        if ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__on_vsg < 0.5f )     {
            _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_s = 0.0f ;
            _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s = 0.0f ;
        }
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__e = 1.0f + 0.1f * m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_q + m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_q ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref [ 0 ] = - 40.824829046386306f * ( 0.1f * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__e + 0.0f * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_d / 326.5986323710904f + 0.1f * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_q / 326.5986323710904f ) / ( pow ( 0.0f , 2 ) + pow ( 0.1f , 2 ) ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref [ 1 ] = - 40.824829046386306f * ( 0.0f * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__e + 0.0f * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_q / 326.5986323710904f - 0.1f * _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_d / 326.5986323710904f ) / ( pow ( 0.0f , 2 ) + pow ( 0.1f , 2 ) ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref_fil [ 0 ] = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isd ;
        _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref_fil [ 1 ] = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isq ;
        if ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__on_vsg < 0.5f )     {
            _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref [ 0 ] = 0.0f ;
            _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref [ 1 ] = 0.0f ;
        }
    }
    _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_albe[0] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join34__out[0];
    _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_albe[1] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join34__out[1];
    _dq_unb_pi_vsg_vsg_c_c_function_vsg1__omega_base = _dq_unb_pi_vsg_vsg_c_signal_switch1__out;
    _dq_unb_pi_vsg_vsg_c_c_function_vsg1__on_vsg = _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3;
    _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_m_ref = _dq_unb_pi_vsg_gain8__out;
    _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s_ref = _dq_unb_pi_vsg_gain9__out;
    _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_pll = _dq_unb_pi_vsg_vsg_c_c_function_pll__theta_pll;
    _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_albe[0] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join31__out[0];
    _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_albe[1] = _dq_unb_pi_vsg_virtual_3ph3w_bus_join31__out[1];
    {
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__omega_vsg = ( 0.01f * m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_p + m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_p + _dq_unb_pi_vsg_vsg_c_c_function_vsg1__omega_base ) * 2.0f * M_PI * 50.0f ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_d = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_albe [ 0 ] * cos ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_albe [ 1 ] * sin ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_q = - _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_albe [ 0 ] * sin ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_albe [ 1 ] * cos ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_d = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_albe [ 0 ] * cos ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_albe [ 1 ] * sin ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_q = - _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_albe [ 0 ] * sin ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg ) + _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_albe [ 1 ] * cos ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_s = ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_d * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_d + _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_q * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_q ) / ( 40.824829046386306f * 326.5986323710904f ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s = ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_d * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_q - _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_q * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_d ) / ( 40.824829046386306f * 326.5986323710904f ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_s_fil = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_ps ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s_fil = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_qs ;
        if ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__on_vsg < 0.5f )     {
            _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_s = 0.0f ;
            _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s = 0.0f ;
        }
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__e = 1.0f + 0.1f * m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_q + m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_q ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref [ 0 ] = - 40.824829046386306f * ( 0.1f * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__e + 0.0f * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_d / 326.5986323710904f + 0.1f * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_q / 326.5986323710904f ) / ( pow ( 0.0f , 2 ) + pow ( 0.1f , 2 ) ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref [ 1 ] = - 40.824829046386306f * ( 0.0f * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__e + 0.0f * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_q / 326.5986323710904f - 0.1f * _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_d / 326.5986323710904f ) / ( pow ( 0.0f , 2 ) + pow ( 0.1f , 2 ) ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref_fil [ 0 ] = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isd ;
        _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref_fil [ 1 ] = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isq ;
        if ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__on_vsg < 0.5f )     {
            _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref [ 0 ] = 0.0f ;
            _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref [ 1 ] = 0.0f ;
        }
    }
    _dq_unb_pi_vsg_vsg_b_bus_join11__out[0] = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_d;
    _dq_unb_pi_vsg_vsg_b_bus_join11__out[1] = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_q;
    // Generated from the component: dq_unb_pi_vsg.VSG_b.Bus Join14
    _dq_unb_pi_vsg_vsg_b_bus_join14__out[0] = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_d;
    _dq_unb_pi_vsg_vsg_b_bus_join14__out[1] = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__vs_q;
    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function dq to abc
    _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__dq[0] = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref[0];
    _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__dq[1] = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref[1];
    _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__theta = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta_vsg;
    {
        _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__a = cos ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__theta ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__theta ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__b = cos ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__c = cos ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__dq [ 1 ] ;
    }
    _dq_unb_pi_vsg_sci_send1_advanced_c_function__var1 = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_s;
    _dq_unb_pi_vsg_sci_send1_advanced_c_function__var2 = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__omega_vsg;
    _dq_unb_pi_vsg_sci_send1_advanced_c_function__var3 = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__omega_vsg;
    _dq_unb_pi_vsg_sci_send1_advanced_c_function__var4 = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__omega_vsg;
    {
        real_t tx_array[4] = {
            _dq_unb_pi_vsg_sci_send1_advanced_c_function__var1
            , _dq_unb_pi_vsg_sci_send1_advanced_c_function__var2
            , _dq_unb_pi_vsg_sci_send1_advanced_c_function__var3
            , _dq_unb_pi_vsg_sci_send1_advanced_c_function__var4
        };
        Transmit_data(&SerialComm, tx_array, 4, 0, 0);
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_c.Bus Join11
    _dq_unb_pi_vsg_vsg_c_bus_join11__out[0] = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_d;
    _dq_unb_pi_vsg_vsg_c_bus_join11__out[1] = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_q;
    // Generated from the component: dq_unb_pi_vsg.VSG_c.Bus Join14
    _dq_unb_pi_vsg_vsg_c_bus_join14__out[0] = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_d;
    _dq_unb_pi_vsg_vsg_c_bus_join14__out[1] = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__vs_q;
    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function dq to abc
    _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__dq[0] = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref[0];
    _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__dq[1] = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref[1];
    _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__theta = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta_vsg;
    {
        _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__a = cos ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__theta ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__theta ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__b = cos ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__dq [ 1 ] ;
        _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__c = cos ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__dq [ 1 ] ;
    }
    _dq_unb_pi_vsg_vsg_b_bus_join15__out[0] = _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__a;
    _dq_unb_pi_vsg_vsg_b_bus_join15__out[1] = _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__b;
    _dq_unb_pi_vsg_vsg_b_bus_join15__out[2] = _dq_unb_pi_vsg_vsg_b_c_function_dq_to_abc__c;
    // Generated from the component: dq_unb_pi_vsg.VSG_c.Bus Join15
    _dq_unb_pi_vsg_vsg_c_bus_join15__out[0] = _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__a;
    _dq_unb_pi_vsg_vsg_c_bus_join15__out[1] = _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__b;
    _dq_unb_pi_vsg_vsg_c_bus_join15__out[2] = _dq_unb_pi_vsg_vsg_c_c_function_dq_to_abc__c;
    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function abc to dq
    _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc[0] = _dq_unb_pi_vsg_vsg_b_bus_join15__out[0];
    _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc[1] = _dq_unb_pi_vsg_vsg_b_bus_join15__out[1];
    _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc[2] = _dq_unb_pi_vsg_vsg_b_bus_join15__out[2];
    _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__theta = _dq_unb_pi_vsg_vsg_b_constant1__out;
    {
        _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc [ 0 ] + cos ( _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc [ 1 ] + cos ( _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc [ 1 ] - sin ( _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function abc to dq
    _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc[0] = _dq_unb_pi_vsg_vsg_c_bus_join15__out[0];
    _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc[1] = _dq_unb_pi_vsg_vsg_c_bus_join15__out[1];
    _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc[2] = _dq_unb_pi_vsg_vsg_c_bus_join15__out[2];
    _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__theta = _dq_unb_pi_vsg_vsg_c_constant1__out;
    {
        _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc [ 0 ] + cos ( _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc [ 1 ] + cos ( _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc [ 0 ] - sin ( _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc [ 1 ] - sin ( _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    _dq_unb_pi_vsg_bus_join10__out[0] = _dq_unb_pi_vsg_vsg_a_c_function_abc_to_dq__d;
    _dq_unb_pi_vsg_bus_join10__out[1] = _dq_unb_pi_vsg_vsg_b_c_function_abc_to_dq__d;
    _dq_unb_pi_vsg_bus_join10__out[2] = _dq_unb_pi_vsg_vsg_c_c_function_abc_to_dq__d;
    _dq_unb_pi_vsg_current_ctrl_bus_split1__out = _dq_unb_pi_vsg_bus_join10__out[0];
    _dq_unb_pi_vsg_current_ctrl_bus_split1__out1 = _dq_unb_pi_vsg_bus_join10__out[1];
    _dq_unb_pi_vsg_current_ctrl_bus_split1__out2 = _dq_unb_pi_vsg_bus_join10__out[2];
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.C function abc to dq
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc[0] = _dq_unb_pi_vsg_bus_join10__out[0];
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc[1] = _dq_unb_pi_vsg_bus_join10__out[1];
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc[2] = _dq_unb_pi_vsg_bus_join10__out[2];
    _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__theta = _dq_unb_pi_vsg_current_ctrl_constant1__out;
    {
        _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc [ 0 ] + cos ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc [ 1 ] + cos ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc [ 0 ] - sin ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc [ 1 ] - sin ( _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Sum1
    _dq_unb_pi_vsg_current_ctrl_sum1__out =  - _dq_unb_pi_vsg_current_ctrl_bus_split1__out - _dq_unb_pi_vsg_current_ctrl_bus_split1__out1 - _dq_unb_pi_vsg_current_ctrl_bus_split1__out2;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Sum2
    _dq_unb_pi_vsg_current_ctrl_sum2__out = _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__d - _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__d;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Sum5
    _dq_unb_pi_vsg_current_ctrl_sum5__out = _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq__q - _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq1__q;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Sum8
    _dq_unb_pi_vsg_current_ctrl_sum8__out = _dq_unb_pi_vsg_current_ctrl_sum1__out - _dq_unb_pi_vsg_adc__generic_7_scaling__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Gain1
    _dq_unb_pi_vsg_current_ctrl_gain1__out = 10.0f * _dq_unb_pi_vsg_current_ctrl_sum2__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem6.Gain1
    _dq_unb_pi_vsg_current_ctrl_subsystem6_gain1__out = 314.1592653589793f * _dq_unb_pi_vsg_current_ctrl_sum2__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Gain3
    _dq_unb_pi_vsg_current_ctrl_gain3__out = 10.0f * _dq_unb_pi_vsg_current_ctrl_sum5__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem7.Gain1
    _dq_unb_pi_vsg_current_ctrl_subsystem7_gain1__out = 314.1592653589793f * _dq_unb_pi_vsg_current_ctrl_sum5__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Gain5
    _dq_unb_pi_vsg_current_ctrl_gain5__out = 10.0f * _dq_unb_pi_vsg_current_ctrl_sum8__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem8.Gain1
    _dq_unb_pi_vsg_current_ctrl_subsystem8_gain1__out = 314.1592653589793f * _dq_unb_pi_vsg_current_ctrl_sum8__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Sum3
    _dq_unb_pi_vsg_current_ctrl_sum3__out = _dq_unb_pi_vsg_current_ctrl_gain1__out + _dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem6.Sum1
    _dq_unb_pi_vsg_current_ctrl_subsystem6_sum1__out = _dq_unb_pi_vsg_current_ctrl_subsystem6_gain1__out - _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Sum6
    _dq_unb_pi_vsg_current_ctrl_sum6__out = _dq_unb_pi_vsg_current_ctrl_gain3__out + _dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem7.Sum1
    _dq_unb_pi_vsg_current_ctrl_subsystem7_sum1__out = _dq_unb_pi_vsg_current_ctrl_subsystem7_gain1__out - _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Sum9
    _dq_unb_pi_vsg_current_ctrl_sum9__out = _dq_unb_pi_vsg_current_ctrl_gain5__out + _dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem8.Sum1
    _dq_unb_pi_vsg_current_ctrl_subsystem8_sum1__out = _dq_unb_pi_vsg_current_ctrl_subsystem8_gain1__out - _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Sum4
    _dq_unb_pi_vsg_current_ctrl_sum4__out = _dq_unb_pi_vsg_current_ctrl_sum3__out + _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__d;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Sum7
    _dq_unb_pi_vsg_current_ctrl_sum7__out = _dq_unb_pi_vsg_current_ctrl_sum6__out + _dq_unb_pi_vsg_current_ctrl_c_function_abc_to_dq2__q;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Gain6
    _dq_unb_pi_vsg_current_ctrl_gain6__out = 2.0f * _dq_unb_pi_vsg_current_ctrl_sum9__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Gain2
    _dq_unb_pi_vsg_current_ctrl_gain2__out = 2.0f * _dq_unb_pi_vsg_current_ctrl_sum4__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Gain4
    _dq_unb_pi_vsg_current_ctrl_gain4__out = 2.0f * _dq_unb_pi_vsg_current_ctrl_sum7__out;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Product4
    _dq_unb_pi_vsg_current_ctrl_product4__out = (_dq_unb_pi_vsg_current_ctrl_gain6__out) * 1.0f / (_dq_unb_pi_vsg_constant7__out);
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Product2
    _dq_unb_pi_vsg_current_ctrl_product2__out = (_dq_unb_pi_vsg_current_ctrl_gain2__out) * 1.0f / (_dq_unb_pi_vsg_constant7__out);
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Product3
    _dq_unb_pi_vsg_current_ctrl_product3__out = (_dq_unb_pi_vsg_current_ctrl_gain4__out) * 1.0f / (_dq_unb_pi_vsg_constant7__out);
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Product5
    _dq_unb_pi_vsg_current_ctrl_product5__out = (_dq_unb_pi_vsg_current_ctrl_product4__out * _dq_unb_pi_vsg_current_ctrl_constant7__out);
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Bus Join1
    _dq_unb_pi_vsg_current_ctrl_bus_join1__out[0] = _dq_unb_pi_vsg_current_ctrl_product2__out;
    _dq_unb_pi_vsg_current_ctrl_bus_join1__out[1] = _dq_unb_pi_vsg_current_ctrl_product3__out;
    // Generated from the component: dq_unb_pi_vsg.Sum3
    _dq_unb_pi_vsg_sum3__out = _dq_unb_pi_vsg_current_ctrl_product5__out + _dq_unb_pi_vsg_constant6__out;
    // Generated from the component: dq_unb_pi_vsg.C function dq to abc1
    _dq_unb_pi_vsg_c_function_dq_to_abc1__dq[0] = _dq_unb_pi_vsg_current_ctrl_bus_join1__out[0];
    _dq_unb_pi_vsg_c_function_dq_to_abc1__dq[1] = _dq_unb_pi_vsg_current_ctrl_bus_join1__out[1];
    _dq_unb_pi_vsg_c_function_dq_to_abc1__theta = _dq_unb_pi_vsg_constant5__out;
    {
        _dq_unb_pi_vsg_c_function_dq_to_abc1__a = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc1__b = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc1__c = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 1 ] ;
    }
    // Generated from the component: dq_unb_pi_vsg.Gain3
    _dq_unb_pi_vsg_gain3__out = 0.5f * _dq_unb_pi_vsg_sum3__out;
    // Generated from the component: dq_unb_pi_vsg.Bus Join14
    _dq_unb_pi_vsg_bus_join14__out[0] = _dq_unb_pi_vsg_c_function_dq_to_abc1__a;
    _dq_unb_pi_vsg_bus_join14__out[1] = _dq_unb_pi_vsg_c_function_dq_to_abc1__b;
    _dq_unb_pi_vsg_bus_join14__out[2] = _dq_unb_pi_vsg_c_function_dq_to_abc1__c;
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 4.D_to_CMPA
    _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in = _dq_unb_pi_vsg_gain3__out;
    {
        _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: dq_unb_pi_vsg.Sum1
    _dq_unb_pi_vsg_sum1__out[0] = _dq_unb_pi_vsg_bus_join14__out[0] + _dq_unb_pi_vsg_constant1__out;
    _dq_unb_pi_vsg_sum1__out[1] = _dq_unb_pi_vsg_bus_join14__out[1] + _dq_unb_pi_vsg_constant1__out;
    _dq_unb_pi_vsg_sum1__out[2] = _dq_unb_pi_vsg_bus_join14__out[2] + _dq_unb_pi_vsg_constant1__out;
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 4.advanced c function
    _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__CMPA = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out;
    {
        EPwm4Regs.CMPA.bit.CMPA = _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__CMPA;
    }
    // Generated from the component: dq_unb_pi_vsg.Gain1
    _dq_unb_pi_vsg_gain1__out[0] = 0.5f * _dq_unb_pi_vsg_sum1__out[0];
    _dq_unb_pi_vsg_gain1__out[1] = 0.5f * _dq_unb_pi_vsg_sum1__out[1];
    _dq_unb_pi_vsg_gain1__out[2] = 0.5f * _dq_unb_pi_vsg_sum1__out[2];
    _dq_unb_pi_vsg_bus_split1__out = _dq_unb_pi_vsg_gain1__out[0];
    _dq_unb_pi_vsg_bus_split1__out1 = _dq_unb_pi_vsg_gain1__out[1];
    _dq_unb_pi_vsg_bus_split1__out2 = _dq_unb_pi_vsg_gain1__out[2];
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA
    _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in = _dq_unb_pi_vsg_bus_split1__out;
    {
        _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA
    _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in = _dq_unb_pi_vsg_bus_split1__out1;
    {
        _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA
    _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in = _dq_unb_pi_vsg_bus_split1__out2;
    {
        _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 1.advanced c function
    _dq_unb_pi_vsg_epwm__generic_1_epwm_1_advanced_c_function__CMPA = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out;
    {
        EPwm1Regs.CMPA.bit.CMPA = _dq_unb_pi_vsg_epwm__generic_1_epwm_1_advanced_c_function__CMPA;
    }
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 2.advanced c function
    _dq_unb_pi_vsg_epwm__generic_1_epwm_2_advanced_c_function__CMPA = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out;
    {
        EPwm2Regs.CMPA.bit.CMPA = _dq_unb_pi_vsg_epwm__generic_1_epwm_2_advanced_c_function__CMPA;
    }
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 3.advanced c function
    _dq_unb_pi_vsg_epwm__generic_1_epwm_3_advanced_c_function__CMPA = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out;
    {
        EPwm3Regs.CMPA.bit.CMPA = _dq_unb_pi_vsg_epwm__generic_1_epwm_3_advanced_c_function__CMPA;
    }
    // Generated from the component: dq_unb_pi_vsg.Delay1
    m_States->_dq_unb_pi_vsg_delay1__state[m_States->_dq_unb_pi_vsg_delay1__cbi] = _dq_unb_pi_vsg_sum2__out;
    if (m_States->_dq_unb_pi_vsg_delay1__cbi < 0)
        m_States->_dq_unb_pi_vsg_delay1__cbi++;
    else
        m_States->_dq_unb_pi_vsg_delay1__cbi = 0;
    // Generated from the component: dq_unb_pi_vsg.VSG_a.Low-Pass Filter1
    m_States->_dq_unb_pi_vsg_vsg_a_low_pass_filter1__previous_in = _dq_unb_pi_vsg_vsg_a_gain1__out;
    // Generated from the component: dq_unb_pi_vsg.VSG_b.Low-Pass Filter1
    m_States->_dq_unb_pi_vsg_vsg_b_low_pass_filter1__previous_in = _dq_unb_pi_vsg_vsg_b_c_function_pll__omega_pll;
    // Generated from the component: dq_unb_pi_vsg.VSG_c.Low-Pass Filter1
    m_States->_dq_unb_pi_vsg_vsg_c_low_pass_filter1__previous_in = _dq_unb_pi_vsg_vsg_c_c_function_pll__omega_pll;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem6.Integrator1
    if ((_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 > 0.0f) && (m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__reset_state <= 0)) {
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__state = 0.0f;
    } else
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__state += _dq_unb_pi_vsg_current_ctrl_subsystem6_sum1__out * 5e-05;
    if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 > 0)
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__reset_state = 1;
    else if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 < 0)
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__reset_state = -1;
    else
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__reset_state = 0;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem7.Integrator1
    if ((_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 > 0.0f) && (m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__reset_state <= 0)) {
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__state = 0.0f;
    } else
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__state += _dq_unb_pi_vsg_current_ctrl_subsystem7_sum1__out * 5e-05;
    if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 > 0)
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__reset_state = 1;
    else if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 < 0)
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__reset_state = -1;
    else
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__reset_state = 0;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem8.Integrator1
    if ((_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 > 0.0f) && (m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__reset_state <= 0)) {
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__state = 0.0f;
    } else
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__state += _dq_unb_pi_vsg_current_ctrl_subsystem8_sum1__out * 5e-05;
    if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 > 0)
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__reset_state = 1;
    else if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 < 0)
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__reset_state = -1;
    else
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__reset_state = 0;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem6.Discrete Transfer Function2
    m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__states[0] = _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem7.Discrete Transfer Function2
    m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__states[0] = _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in;
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.Subsystem8.Discrete Transfer Function2
    m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__states[0] = _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in;
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem6.LPF
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem8.LPF
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem11.LPF
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem7.LPF
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem9.LPF
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem10.LPF
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem6.LPF1
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem8.LPF1
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem11.LPF1
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem7.LPF1
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem9.LPF1
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.current_ctrl.C function PLL
    {
        m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__y_d = m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__y_d + 717.1314741035857f * 5e-05 * _dq_unb_pi_vsg_current_ctrl_c_function_pll__e_d ;
        m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta = m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta + 5e-05 * _dq_unb_pi_vsg_current_ctrl_c_function_pll__omega_pll ;
        if ( m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta >= 2 * M_PI )     {
            m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta = m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta - 2 * M_PI ;
        }
        if ( m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta < 0.0f )     {
            m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta = m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta + abs ( m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: dq_unb_pi_vsg.Virtual 3ph3w.Subsystem10.LPF1
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__x_out = m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( 0.02f ) * ( _dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__in - m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_a.C function VSG1
    {
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_p = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_m_ref - _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_s ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_q = _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s_ref - _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_p = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_p + 0.1f * 5e-05 * m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_p ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_q = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_q + 1.0f * 5e-05 * m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_q ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta + _dq_unb_pi_vsg_vsg_a_c_function_vsg1__omega_vsg * 5e-05 ;
        if ( m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta >= 2 * M_PI )     {
            m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta - 2 * M_PI ;
        }
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isd = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isd + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref [ 0 ] - m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isd ) ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isq = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isq + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__is_dq_ref [ 1 ] - m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isq ) ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_ps = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_ps + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__p_s - m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_ps ) ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_qs = m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_qs + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_a_c_function_vsg1__q_s - m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_qs ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function PLL
    {
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__y_d = m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__y_d + 717.1314741035857f * 5e-05 * _dq_unb_pi_vsg_vsg_b_c_function_pll__e_d ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta = m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta + 5e-05 * _dq_unb_pi_vsg_vsg_b_c_function_pll__omega_pll ;
        if ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta >= 2 * M_PI )     {
            m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta = m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta - 2 * M_PI ;
        }
        if ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta < 0.0f )     {
            m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta = m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta + abs ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function PLL
    {
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__y_d = m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__y_d + 717.1314741035857f * 5e-05 * _dq_unb_pi_vsg_vsg_c_c_function_pll__e_d ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta = m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta + 5e-05 * _dq_unb_pi_vsg_vsg_c_c_function_pll__omega_pll ;
        if ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta >= 2 * M_PI )     {
            m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta = m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta - 2 * M_PI ;
        }
        if ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta < 0.0f )     {
            m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta = m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta + abs ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_b.C function VSG1
    {
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_p = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_m_ref - _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_s ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_q = _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s_ref - _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_p = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_p + 0.1f * 5e-05 * m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_p ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_q = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_q + 1.0f * 5e-05 * m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_q ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta + _dq_unb_pi_vsg_vsg_b_c_function_vsg1__omega_vsg * 5e-05 ;
        if ( m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta >= 2 * M_PI )     {
            m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta - 2 * M_PI ;
        }
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isd = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isd + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref [ 0 ] - m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isd ) ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isq = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isq + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__is_dq_ref [ 1 ] - m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isq ) ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_ps = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_ps + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__p_s - m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_ps ) ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_qs = m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_qs + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_b_c_function_vsg1__q_s - m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_qs ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.VSG_c.C function VSG1
    {
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_p = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_m_ref - _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_s ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_q = _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s_ref - _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_p = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_p + 0.1f * 5e-05 * m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_p ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_q = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_q + 1.0f * 5e-05 * m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_q ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta + _dq_unb_pi_vsg_vsg_c_c_function_vsg1__omega_vsg * 5e-05 ;
        if ( m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta >= 2 * M_PI )     {
            m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta - 2 * M_PI ;
        }
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isd = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isd + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref [ 0 ] - m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isd ) ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isq = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isq + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__is_dq_ref [ 1 ] - m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isq ) ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_ps = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_ps + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__p_s - m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_ps ) ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_qs = m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_qs + 5e-05 * 2 * M_PI * 1 / ( 0.01f ) * ( _dq_unb_pi_vsg_vsg_c_c_function_vsg1__q_s - m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_qs ) ;
    }
    AdccRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcbRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
}


void dq_unb_pi_vsg_init0(dq_unb_pi_vsg_ModelData *p_m_Data) {
    // Initialize variables
    dq_unb_pi_vsg_ExtIn *ext_In = (dq_unb_pi_vsg_ExtIn *) p_m_Data->p_extIn;
    dq_unb_pi_vsg_ModelStates *m_States = (dq_unb_pi_vsg_ModelStates *) p_m_Data->p_States;
    // Init tunable properties if they exist
    AdcSetMode(ADC_ADCB, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	AdcSetMode(ADC_ADCA, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	AdcSetMode(ADC_ADCC, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	// dq_unb_pi_vsg.SCI Setup1
	GpioCtrlRegs.GPBGMUX1.bit.GPIO42 = 3;
	GpioCtrlRegs.GPBMUX1.bit.GPIO42 = 3;
	GpioCtrlRegs.GPBDIR.bit.GPIO42 = 1;
	GpioCtrlRegs.GPBPUD.bit.GPIO42 = 1;
	GpioCtrlRegs.GPBQSEL1.bit.GPIO42 = 0;
	GpioCtrlRegs.GPBGMUX1.bit.GPIO43 = 3;
	GpioCtrlRegs.GPBMUX1.bit.GPIO43 = 3;
	GpioCtrlRegs.GPBDIR.bit.GPIO43 = 0;
	GpioCtrlRegs.GPBPUD.bit.GPIO43 = 0;
	GpioCtrlRegs.GPBQSEL1.bit.GPIO43 = 3;
	SciaRegs.SCIHBAUD.all = 0;
	SciaRegs.SCILBAUD.all = 12;
	SciaRegs.SCICCR.bit.PARITYENA = 0;
	SciaRegs.SCICCR.bit.PARITY = 0;
	SciaRegs.SCICCR.bit.STOPBITS = 0;
	SciaRegs.SCICCR.bit.SCICHAR = 7;
	SciaRegs.SCIFFTX.bit.SCIFFENA = 1;
	SciaRegs.SCIFFTX.bit.SCIRST = 1;
	SciaRegs.SCICTL1.bit.SWRESET = 1;
	SciaRegs.SCICTL1.bit.RXENA = 1;
	SciaRegs.SCICTL1.bit.TXENA = 1;
	SciaRegs.SCIFFRX.bit.RXFIFORESET = 1;
	SciaRegs.SCIFFTX.bit.TXFIFORESET = 1;
	SerialComm.SciRegs = &SciaRegs;
	// dq_unb_pi_vsg.ADC (Generic)5.ADC
	AdccRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdccRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdccRegs.ADCSOC3CTL.bit.ACQPS = 28;
	AdccRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdccRegs.ADCINTSEL1N2.bit.INT1SEL = 2;
	AdccRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdccRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdccRegs.ADCCTL2.bit.PRESCALE = 6;
	AdccRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// dq_unb_pi_vsg.ADC (Generic)7.ADC
	AdcaRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdcaRegs.ADCSOC2CTL.bit.ACQPS = 28;
	AdcaRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdcaRegs.ADCINTSEL1N2.bit.INT1SEL = 14;
	AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdcaRegs.ADCCTL2.bit.PRESCALE = 6;
	AdcaRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// dq_unb_pi_vsg.ADC (Generic)6.ADC
	AdcbRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdcbRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdcbRegs.ADCSOC3CTL.bit.ACQPS = 28;
	AdcbRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdcbRegs.ADCINTSEL1N2.bit.INT1SEL = 2;
	AdcbRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdcbRegs.ADCCTL2.bit.PRESCALE = 6;
	AdcbRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// dq_unb_pi_vsg.GPIO DO (Generic)2.GPIO DO
	GpioCtrlRegs.GPADIR.bit.GPIO24 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO24 = 1;
	// dq_unb_pi_vsg.ADC (Generic)2.ADC
	AdccRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdccRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdccRegs.ADCSOC2CTL.bit.ACQPS = 28;
	// dq_unb_pi_vsg.ADC (Generic)1.ADC
	AdcaRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdcaRegs.ADCSOC3CTL.bit.ACQPS = 28;
	// dq_unb_pi_vsg.ADC (Generic)4.ADC
	AdcaRegs.ADCSOC14CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC14CTL.bit.CHSEL = 14;
	AdcaRegs.ADCSOC14CTL.bit.ACQPS = 28;
	// dq_unb_pi_vsg.ePWM (Generic)2.ePWM 1
	GpioCtrlRegs.GPAMUX1.bit.GPIO10 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO10 = 0;
	GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO11 = 0;
	CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
	ClkCfgRegs.PERCLKDIVSEL.bit.EPWMCLKDIV = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM4SYNCIN = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM7SYNCIN = 1;
	EPwm6Regs.TBCTL.bit.HSPCLKDIV = 0;
	EPwm6Regs.TBCTL.bit.CLKDIV = 0;
	EPwm6Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
	EPwm6Regs.TBPRD = 5000;
	EPwm6Regs.TBCTL.bit.PHSEN = 0;
	EPwm6Regs.TBCTL2.bit.PRDLDSYNC = 0;
	EPwm6Regs.TBPHS.bit.TBPHS = 0;
	EPwm6Regs.TBCTL.bit.PHSDIR = TB_UP;
	EPwm6Regs.TBCTL.bit.SYNCOSEL = TB_CTR_ZERO;
	EPwm6Regs.CMPA.bit.CMPA = 0;
	EPwm6Regs.CMPB.bit.CMPB = 0;
	EPwm6Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;
	EPwm6Regs.CMPCTL.bit.SHDWBMODE = CC_SHADOW;
	EPwm6Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;
	EPwm6Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO;
	EPwm6Regs.AQCTLA.bit.CAU = AQ_CLEAR;
	EPwm6Regs.AQCTLA.bit.CAD = AQ_SET;
	EPwm6Regs.AQCTLA.bit.CBU = AQ_NO_ACTION;
	EPwm6Regs.AQCTLA.bit.CBD = AQ_NO_ACTION;
	EPwm6Regs.AQCTLA.bit.ZRO = AQ_NO_ACTION;
	EPwm6Regs.AQCTLA.bit.PRD = AQ_NO_ACTION;
	EPwm6Regs.DBCTL.bit.OUT_MODE = DB_FULL_ENABLE;
	EPwm6Regs.DBCTL.bit.POLSEL = DB_ACTV_HIC;
	EPwm6Regs.DBCTL.bit.IN_MODE = DBA_ALL;
	EPwm6Regs.DBRED.bit.DBRED = 0;
	EPwm6Regs.DBFED.bit.DBFED = 0;
	EPwm6Regs.ETSEL.bit.SOCAEN = 1;
	EPwm6Regs.ETSEL.bit.SOCASEL = ET_CTR_PRDZERO;
	EPwm6Regs.ETPS.bit.SOCAPRD = ET_1ST;
	EPwm6Regs.ETSEL.bit.SOCBEN = 0;
	EPwm6Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm6Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm6Regs.ETSEL.bit.INTEN = 0;
	EPwm6Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm6Regs.ETPS.bit.INTPRD = ET_1ST;
	// dq_unb_pi_vsg.ADC (Generic)3.ADC
	AdcbRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdcbRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdcbRegs.ADCSOC2CTL.bit.ACQPS = 28;
	// dq_unb_pi_vsg.ePWM (Generic)1.ePWM 4
	GpioCtrlRegs.GPAMUX1.bit.GPIO6 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO6 = 0;
	GpioCtrlRegs.GPAMUX1.bit.GPIO7 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO7 = 0;
	CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
	ClkCfgRegs.PERCLKDIVSEL.bit.EPWMCLKDIV = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM4SYNCIN = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM7SYNCIN = 1;
	EPwm4Regs.TBCTL.bit.HSPCLKDIV = 0;
	EPwm4Regs.TBCTL.bit.CLKDIV = 0;
	EPwm4Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
	EPwm4Regs.TBPRD = 10000;
	EPwm4Regs.TBCTL.bit.PHSEN = 1;
	EPwm4Regs.TBCTL2.bit.PRDLDSYNC = 1;
	EPwm4Regs.TBPHS.bit.TBPHS = 2;
	EPwm4Regs.TBCTL.bit.PHSDIR = TB_UP;
	EPwm4Regs.TBCTL.bit.SYNCOSEL = TB_CTR_ZERO;
	EPwm4Regs.CMPA.bit.CMPA = 0;
	EPwm4Regs.CMPB.bit.CMPB = 0;
	EPwm4Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;
	EPwm4Regs.CMPCTL.bit.SHDWBMODE = CC_SHADOW;
	EPwm4Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;
	EPwm4Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO;
	EPwm4Regs.AQCTLA.bit.CAU = AQ_CLEAR;
	EPwm4Regs.AQCTLA.bit.CAD = AQ_SET;
	EPwm4Regs.AQCTLA.bit.CBU = AQ_NO_ACTION;
	EPwm4Regs.AQCTLA.bit.CBD = AQ_NO_ACTION;
	EPwm4Regs.AQCTLA.bit.ZRO = AQ_NO_ACTION;
	EPwm4Regs.AQCTLA.bit.PRD = AQ_NO_ACTION;
	EPwm4Regs.DBCTL.bit.OUT_MODE = DB_FULL_ENABLE;
	EPwm4Regs.DBCTL.bit.POLSEL = DB_ACTV_HIC;
	EPwm4Regs.DBCTL.bit.IN_MODE = DBA_ALL;
	EPwm4Regs.DBRED.bit.DBRED = 20;
	EPwm4Regs.DBFED.bit.DBFED = 20;
	EPwm4Regs.ETSEL.bit.SOCAEN = 0;
	EPwm4Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm4Regs.ETPS.bit.SOCAPRD = ET_DISABLE;
	EPwm4Regs.ETSEL.bit.SOCBEN = 0;
	EPwm4Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm4Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm4Regs.ETSEL.bit.INTEN = 0;
	EPwm4Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm4Regs.ETPS.bit.INTPRD = ET_DISABLE;
	// dq_unb_pi_vsg.ePWM (Generic)1.ePWM 1
	GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO0 = 0;
	GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO1 = 0;
	CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
	ClkCfgRegs.PERCLKDIVSEL.bit.EPWMCLKDIV = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM4SYNCIN = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM7SYNCIN = 1;
	EPwm1Regs.TBCTL.bit.HSPCLKDIV = 0;
	EPwm1Regs.TBCTL.bit.CLKDIV = 0;
	EPwm1Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
	EPwm1Regs.TBPRD = 10000;
	EPwm1Regs.TBCTL.bit.PHSEN = 0;
	EPwm1Regs.TBCTL2.bit.PRDLDSYNC = 0;
	EPwm1Regs.TBPHS.bit.TBPHS = 0;
	EPwm1Regs.TBCTL.bit.PHSDIR = TB_UP;
	EPwm1Regs.TBCTL.bit.SYNCOSEL = TB_CTR_ZERO;
	EPwm1Regs.CMPA.bit.CMPA = 0;
	EPwm1Regs.CMPB.bit.CMPB = 0;
	EPwm1Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;
	EPwm1Regs.CMPCTL.bit.SHDWBMODE = CC_SHADOW;
	EPwm1Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;
	EPwm1Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO;
	EPwm1Regs.AQCTLA.bit.CAU = AQ_CLEAR;
	EPwm1Regs.AQCTLA.bit.CAD = AQ_SET;
	EPwm1Regs.AQCTLA.bit.CBU = AQ_NO_ACTION;
	EPwm1Regs.AQCTLA.bit.CBD = AQ_NO_ACTION;
	EPwm1Regs.AQCTLA.bit.ZRO = AQ_NO_ACTION;
	EPwm1Regs.AQCTLA.bit.PRD = AQ_NO_ACTION;
	EPwm1Regs.DBCTL.bit.OUT_MODE = DB_FULL_ENABLE;
	EPwm1Regs.DBCTL.bit.POLSEL = DB_ACTV_HIC;
	EPwm1Regs.DBCTL.bit.IN_MODE = DBA_ALL;
	EPwm1Regs.DBRED.bit.DBRED = 20;
	EPwm1Regs.DBFED.bit.DBFED = 20;
	EPwm1Regs.ETSEL.bit.SOCAEN = 0;
	EPwm1Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm1Regs.ETPS.bit.SOCAPRD = ET_1ST;
	EPwm1Regs.ETSEL.bit.SOCBEN = 0;
	EPwm1Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm1Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm1Regs.ETSEL.bit.INTEN = 0;
	EPwm1Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm1Regs.ETPS.bit.INTPRD = ET_1ST;
	// dq_unb_pi_vsg.ePWM (Generic)1.ePWM 2
	GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO2 = 0;
	GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO3 = 0;
	CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
	ClkCfgRegs.PERCLKDIVSEL.bit.EPWMCLKDIV = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM4SYNCIN = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM7SYNCIN = 1;
	EPwm2Regs.TBCTL.bit.HSPCLKDIV = 0;
	EPwm2Regs.TBCTL.bit.CLKDIV = 0;
	EPwm2Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
	EPwm2Regs.TBPRD = 10000;
	EPwm2Regs.TBCTL.bit.PHSEN = 1;
	EPwm2Regs.TBCTL2.bit.PRDLDSYNC = 1;
	EPwm2Regs.TBPHS.bit.TBPHS = 2;
	EPwm2Regs.TBCTL.bit.PHSDIR = TB_UP;
	EPwm2Regs.TBCTL.bit.SYNCOSEL = TB_CTR_ZERO;
	EPwm2Regs.CMPA.bit.CMPA = 0;
	EPwm2Regs.CMPB.bit.CMPB = 0;
	EPwm2Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;
	EPwm2Regs.CMPCTL.bit.SHDWBMODE = CC_SHADOW;
	EPwm2Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;
	EPwm2Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO;
	EPwm2Regs.AQCTLA.bit.CAU = AQ_CLEAR;
	EPwm2Regs.AQCTLA.bit.CAD = AQ_SET;
	EPwm2Regs.AQCTLA.bit.CBU = AQ_NO_ACTION;
	EPwm2Regs.AQCTLA.bit.CBD = AQ_NO_ACTION;
	EPwm2Regs.AQCTLA.bit.ZRO = AQ_NO_ACTION;
	EPwm2Regs.AQCTLA.bit.PRD = AQ_NO_ACTION;
	EPwm2Regs.DBCTL.bit.OUT_MODE = DB_FULL_ENABLE;
	EPwm2Regs.DBCTL.bit.POLSEL = DB_ACTV_HIC;
	EPwm2Regs.DBCTL.bit.IN_MODE = DBA_ALL;
	EPwm2Regs.DBRED.bit.DBRED = 20;
	EPwm2Regs.DBFED.bit.DBFED = 20;
	EPwm2Regs.ETSEL.bit.SOCAEN = 0;
	EPwm2Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm2Regs.ETPS.bit.SOCAPRD = ET_DISABLE;
	EPwm2Regs.ETSEL.bit.SOCBEN = 0;
	EPwm2Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm2Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm2Regs.ETSEL.bit.INTEN = 0;
	EPwm2Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm2Regs.ETPS.bit.INTPRD = ET_DISABLE;
	// dq_unb_pi_vsg.ePWM (Generic)1.ePWM 3
	GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO4 = 0;
	GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO5 = 0;
	CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
	ClkCfgRegs.PERCLKDIVSEL.bit.EPWMCLKDIV = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM4SYNCIN = 0;
	SyncSocRegs.SYNCSELECT.bit.EPWM7SYNCIN = 1;
	EPwm3Regs.TBCTL.bit.HSPCLKDIV = 0;
	EPwm3Regs.TBCTL.bit.CLKDIV = 0;
	EPwm3Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;
	EPwm3Regs.TBPRD = 10000;
	EPwm3Regs.TBCTL.bit.PHSEN = 1;
	EPwm3Regs.TBCTL2.bit.PRDLDSYNC = 1;
	EPwm3Regs.TBPHS.bit.TBPHS = 2;
	EPwm3Regs.TBCTL.bit.PHSDIR = TB_UP;
	EPwm3Regs.TBCTL.bit.SYNCOSEL = TB_CTR_ZERO;
	EPwm3Regs.CMPA.bit.CMPA = 0;
	EPwm3Regs.CMPB.bit.CMPB = 0;
	EPwm3Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;
	EPwm3Regs.CMPCTL.bit.SHDWBMODE = CC_SHADOW;
	EPwm3Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;
	EPwm3Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO;
	EPwm3Regs.AQCTLA.bit.CAU = AQ_CLEAR;
	EPwm3Regs.AQCTLA.bit.CAD = AQ_SET;
	EPwm3Regs.AQCTLA.bit.CBU = AQ_NO_ACTION;
	EPwm3Regs.AQCTLA.bit.CBD = AQ_NO_ACTION;
	EPwm3Regs.AQCTLA.bit.ZRO = AQ_NO_ACTION;
	EPwm3Regs.AQCTLA.bit.PRD = AQ_NO_ACTION;
	EPwm3Regs.DBCTL.bit.OUT_MODE = DB_FULL_ENABLE;
	EPwm3Regs.DBCTL.bit.POLSEL = DB_ACTV_HIC;
	EPwm3Regs.DBCTL.bit.IN_MODE = DBA_ALL;
	EPwm3Regs.DBRED.bit.DBRED = 20;
	EPwm3Regs.DBFED.bit.DBFED = 20;
	EPwm3Regs.ETSEL.bit.SOCAEN = 0;
	EPwm3Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm3Regs.ETPS.bit.SOCAPRD = ET_DISABLE;
	EPwm3Regs.ETSEL.bit.SOCBEN = 0;
	EPwm3Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm3Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm3Regs.ETSEL.bit.INTEN = 0;
	EPwm3Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm3Regs.ETPS.bit.INTPRD = ET_DISABLE;
	// dq_unb_pi_vsg.GPIO DO (Generic)1.GPIO DO
	GpioCtrlRegs.GPADIR.bit.GPIO9 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO9 = 1;
    uint_t _dq_unb_pi_vsg_delay1__i;
    for (_dq_unb_pi_vsg_delay1__i = 0; _dq_unb_pi_vsg_delay1__i < 1; _dq_unb_pi_vsg_delay1__i++) {
        m_States->_dq_unb_pi_vsg_delay1__state[_dq_unb_pi_vsg_delay1__i] =  0.0f;
    }
    m_States->_dq_unb_pi_vsg_delay1__cbi = 0;
    {
        SerialComm.rx_defined = 1;
    }
    m_States->_dq_unb_pi_vsg_vsg_a_low_pass_filter1__filtered_value = 0.0f / (1 - 6.283185307179586f * 500.0f * 5e-05 );
    m_States->_dq_unb_pi_vsg_vsg_a_low_pass_filter1__previous_in = 0x0;
    m_States->_dq_unb_pi_vsg_vsg_b_low_pass_filter1__filtered_value = 0.0f / (1 - 6.283185307179586f * 500.0f * 5e-05 );
    m_States->_dq_unb_pi_vsg_vsg_b_low_pass_filter1__previous_in = 0x0;
    m_States->_dq_unb_pi_vsg_vsg_c_low_pass_filter1__filtered_value = 0.0f / (1 - 6.283185307179586f * 500.0f * 5e-05 );
    m_States->_dq_unb_pi_vsg_vsg_c_low_pass_filter1__previous_in = 0x0;
    m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__state = 0.0f;
    m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_integrator1__reset_state = 2;
    m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__state = 0.0f;
    m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_integrator1__reset_state = 2;
    m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__state = 0.0f;
    m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_integrator1__reset_state = 2;
    uint_t _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i;
    for (_dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i++) {
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__states[_dq_unb_pi_vsg_current_ctrl_subsystem6_discrete_transfer_function2__i] = 0;
    }
    uint_t _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i;
    for (_dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i++) {
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__states[_dq_unb_pi_vsg_current_ctrl_subsystem7_discrete_transfer_function2__i] = 0;
    }
    uint_t _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i;
    for (_dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i++) {
        m_States->_dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__states[_dq_unb_pi_vsg_current_ctrl_subsystem8_discrete_transfer_function2__i] = 0;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem6_lpf1__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem8_lpf1__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem11_lpf1__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem7_lpf1__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem9_lpf1__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__y_q = 0 ;
        m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__y_d = 0 ;
        m_States->_dq_unb_pi_vsg_current_ctrl_c_function_pll__theta = 0 ;
    }
    {
        m_States->_dq_unb_pi_vsg_virtual_3ph3w_subsystem10_lpf1__x_out = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_p = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_q = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__theta = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isd = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_isq = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_p = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__e_q = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_ps = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_a_c_function_vsg1__x_qs = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__y_q = 0 ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__y_d = 0 ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_pll__theta = 0 ;
    }
    {
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__y_q = 0 ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__y_d = 0 ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_pll__theta = 0 ;
    }
    {
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_p = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_q = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__theta = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isd = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_isq = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_p = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__e_q = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_ps = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_b_c_function_vsg1__x_qs = 0.0f ;
    }
    {
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_p = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_q = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__theta = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isd = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_isq = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_p = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__e_q = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_ps = 0.0f ;
        m_States->_dq_unb_pi_vsg_vsg_c_c_function_vsg1__x_qs = 0.0f ;
    }
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
}


#pragma CODE_SECTION(dq_unb_pi_vsg_step1, ".TI.ramfunc")
void dq_unb_pi_vsg_step1(dq_unb_pi_vsg_ModelData *p_m_Data) {
    dq_unb_pi_vsg_ExtIn *ext_In = (dq_unb_pi_vsg_ExtIn *) p_m_Data->p_extIn;
    dq_unb_pi_vsg_ExtOut *ext_Out = (dq_unb_pi_vsg_ExtOut *) p_m_Data->p_extOut;
    dq_unb_pi_vsg_ModelSinks *m_Sinks = (dq_unb_pi_vsg_ModelSinks *) p_m_Data->p_Sinks;
    dq_unb_pi_vsg_ModelStates *m_States = (dq_unb_pi_vsg_ModelStates *) p_m_Data->p_States;
    // Local variables
    real_t _dq_unb_pi_vsg_sci_setup1_constant1__out = 1.0f;
    real_t _dq_unb_pi_vsg_sci_setup1_advanced_c_function__outdata;
    // Set tunable parameters
    // Generated from the component: dq_unb_pi_vsg.SCI Setup1.Constant1
    // Output block
    // Generated from the component: dq_unb_pi_vsg.SCI Setup1.advanced c function
    _dq_unb_pi_vsg_sci_setup1_advanced_c_function__outdata = _dq_unb_pi_vsg_sci_setup1_constant1__out;
}


void dq_unb_pi_vsg_init1(dq_unb_pi_vsg_ModelData *p_m_Data) {
    // Initialize variables
    dq_unb_pi_vsg_ExtIn *ext_In = (dq_unb_pi_vsg_ExtIn *) p_m_Data->p_extIn;
    dq_unb_pi_vsg_ModelStates *m_States = (dq_unb_pi_vsg_ModelStates *) p_m_Data->p_States;
    // Init tunable properties if they exist
}
