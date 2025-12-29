/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: dq_unb_pi_vsg.c
*
* Code generated from model             : 'dq_unb_pi_vsg_ctrl_sec'.
* Subsystem selected for code generation: 'dq_unb_pi_vsg'.
*
* Schematic Editor version              : 2025.3
* C source code generated on            : 29-Dec-2025 @ 01:46:24 PM
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
    real_t _dq_unb_pi_vsg_constant11__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant12__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant13__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant14__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant15__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant16__out = 0.0f;
    real_t _dq_unb_pi_vsg_constant17__out = 800.0f;
    real_t _dq_unb_pi_vsg_constant18__out = 800.0f;
    real_t _dq_unb_pi_vsg_constant2__out = 0.5f;
    real_t _dq_unb_pi_vsg_constant4__out = 1.0f;
    real_t _dq_unb_pi_vsg_constant6__out = 1.0f;
    real_t _dq_unb_pi_vsg_constant8__out = 1.0f;
    real_t _dq_unb_pi_vsg_constant9__out = 0.0f;
    real_t _dq_unb_pi_vsg_delay1__out;
    real_t _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var1;
    real_t _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var2;
    real_t _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3;
    real_t _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4;
    real_t _dq_unb_pi_vsg_unit_delay1__out;
    real_t _dq_unb_pi_vsg_unit_delay2__out;
    real_t _dq_unb_pi_vsg_adc__generic_1_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_2_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_3_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_4_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_5_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_6_sum2__out;
    real_t _dq_unb_pi_vsg_adc__generic_7_sum2__out;
    real_t _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in;
    real_t _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out;
    real_t _dq_unb_pi_vsg_sum2__out;
    real_t _dq_unb_pi_vsg_gpio_do__generic_1_gpio_do_advanced_c_function__in;
    real_t _dq_unb_pi_vsg_gain10__out;
    real_t _dq_unb_pi_vsg_gain11__out;
    real_t _dq_unb_pi_vsg_integrator1__out;
    real_t _dq_unb_pi_vsg_subsystem13_integrator1__out;
    real_t _dq_unb_pi_vsg_subsystem14_integrator1__out;
    real_t _dq_unb_pi_vsg_subsystem15_integrator1__out;
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
    real_t _dq_unb_pi_vsg_gain17__out;
    real_t _dq_unb_pi_vsg_bus_join21__out[2];
    real_t _dq_unb_pi_vsg_adc__generic_1_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_2_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_3_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_4_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_5_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_6_sum1__out;
    real_t _dq_unb_pi_vsg_adc__generic_7_sum1__out;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc4__dq[2];
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc4__theta;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc4__a;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc4__b;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc4__c;
    real_t _dq_unb_pi_vsg_adc__generic_1_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_2_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_3_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_4_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_5_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_6_scaling__out;
    real_t _dq_unb_pi_vsg_adc__generic_7_scaling__out;
    real_t _dq_unb_pi_vsg_bus_join22__out[3];
    real_t _dq_unb_pi_vsg_bus_join15__out[3];
    real_t _dq_unb_pi_vsg_bus_join16__out[3];
    real_t _dq_unb_pi_vsg_sum7__out;
    real_t _dq_unb_pi_vsg_rms_value4__out;
    real_t _dq_unb_pi_vsg_sum9__out;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq1__abc[3];
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq1__theta;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq1__d;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq1__q;
    real_t _dq_unb_pi_vsg_c_function_pll__abc[3];
    real_t _dq_unb_pi_vsg_c_function_pll__d;
    real_t _dq_unb_pi_vsg_c_function_pll__e_d;
    real_t _dq_unb_pi_vsg_c_function_pll__e_q;
    real_t _dq_unb_pi_vsg_c_function_pll__omega_pll;
    real_t _dq_unb_pi_vsg_c_function_pll__q;
    real_t _dq_unb_pi_vsg_c_function_pll__theta_pll;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq__abc[3];
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq__theta;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq__d;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq__q;
    real_t _dq_unb_pi_vsg_gain15__out;
    real_t _dq_unb_pi_vsg_gain18__out;
    real_t _dq_unb_pi_vsg_gain19__out;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__in;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__omega_rads;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__out_fil;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__in;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__omega_rads;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__out_fil;
    real_t _dq_unb_pi_vsg_gain12__out;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__in;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__omega_rads;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__out_fil;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__in;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__omega_rads;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__out_fil;
    real_t _dq_unb_pi_vsg_product4__out;
    real_t _dq_unb_pi_vsg_rms_value3__out;
    real_t _dq_unb_pi_vsg_sum10__out;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__in;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__omega_rads;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__in;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__omega_rads;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_signal_switch1__out;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__in;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__omega_rads;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__in;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__omega_rads;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__out_fil;
    real_t _dq_unb_pi_vsg_gain21__out;
    real_t _dq_unb_pi_vsg_gain20__out;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_gain13__out;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_gain13__out;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_gain13__out;
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_gain13__out;
    real_t _dq_unb_pi_vsg_sum8__out;
    real_t _dq_unb_pi_vsg_product1__out;
    real_t _dq_unb_pi_vsg_subsystem11_subsystem8_bus_join21__out[2];
    real_t _dq_unb_pi_vsg_subsystem11_subsystem9_bus_join21__out[2];
    real_t _dq_unb_pi_vsg_subsystem10_subsystem8_bus_join21__out[2];
    real_t _dq_unb_pi_vsg_subsystem10_subsystem9_bus_join21__out[2];
    real_t _dq_unb_pi_vsg_subsystem13_gain1__out;
    real_t _dq_unb_pi_vsg_sum3__out;
    real_t _dq_unb_pi_vsg_subsystem11_c_function1__alpha[2];
    real_t _dq_unb_pi_vsg_subsystem11_c_function1__beta[2];
    real_t _dq_unb_pi_vsg_subsystem11_c_function1__alpha_neg;
    real_t _dq_unb_pi_vsg_subsystem11_c_function1__alpha_pos;
    real_t _dq_unb_pi_vsg_subsystem11_c_function1__beta_neg;
    real_t _dq_unb_pi_vsg_subsystem11_c_function1__beta_pos;
    real_t _dq_unb_pi_vsg_subsystem10_c_function1__alpha[2];
    real_t _dq_unb_pi_vsg_subsystem10_c_function1__beta[2];
    real_t _dq_unb_pi_vsg_subsystem10_c_function1__alpha_neg;
    real_t _dq_unb_pi_vsg_subsystem10_c_function1__alpha_pos;
    real_t _dq_unb_pi_vsg_subsystem10_c_function1__beta_neg;
    real_t _dq_unb_pi_vsg_subsystem10_c_function1__beta_pos;
    real_t _dq_unb_pi_vsg_gain3__out;
    real_t _dq_unb_pi_vsg_subsystem11_bus_join19__out[2];
    real_t _dq_unb_pi_vsg_subsystem11_bus_join20__out[2];
    real_t _dq_unb_pi_vsg_subsystem10_bus_join19__out[2];
    real_t _dq_unb_pi_vsg_subsystem10_bus_join20__out[2];
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in;
    real_t _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc3__dq[2];
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc3__theta;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc3__a;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc3__b;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc3__c;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc2__dq[2];
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc2__theta;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc2__a;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc2__b;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc2__c;
    real_t _dq_unb_pi_vsg_bus_split2__out;
    real_t _dq_unb_pi_vsg_bus_split2__out1;
    uint_t _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__CMPA;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__A;
    int_t _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__B;
    real_t _dq_unb_pi_vsg_bus_join20__out[3];
    real_t _dq_unb_pi_vsg_bus_join19__out[3];
    real_t _dq_unb_pi_vsg_product2__out;
    real_t _dq_unb_pi_vsg_product5__out;
    real_t _dq_unb_pi_vsg_rms_value1__out;
    real_t _dq_unb_pi_vsg_rms_value2__out;
    real_t _dq_unb_pi_vsg_c_function_vsg__is_abc[3];
    real_t _dq_unb_pi_vsg_c_function_vsg__omega_base;
    real_t _dq_unb_pi_vsg_c_function_vsg__on_vsg;
    real_t _dq_unb_pi_vsg_c_function_vsg__p_m_ref;
    real_t _dq_unb_pi_vsg_c_function_vsg__q_s_ref;
    real_t _dq_unb_pi_vsg_c_function_vsg__reset_int;
    real_t _dq_unb_pi_vsg_c_function_vsg__theta_pll;
    real_t _dq_unb_pi_vsg_c_function_vsg__vs_abc[3];
    real_t _dq_unb_pi_vsg_c_function_vsg__e;
    real_t _dq_unb_pi_vsg_c_function_vsg__is_d;
    real_t _dq_unb_pi_vsg_c_function_vsg__is_dq_ref[2];
    real_t _dq_unb_pi_vsg_c_function_vsg__is_dq_ref_fil[2];
    real_t _dq_unb_pi_vsg_c_function_vsg__is_q;
    real_t _dq_unb_pi_vsg_c_function_vsg__omega_vsg;
    real_t _dq_unb_pi_vsg_c_function_vsg__p_s;
    real_t _dq_unb_pi_vsg_c_function_vsg__q_s;
    real_t _dq_unb_pi_vsg_c_function_vsg__theta_vsg;
    real_t _dq_unb_pi_vsg_c_function_vsg__vs_d;
    real_t _dq_unb_pi_vsg_c_function_vsg__vs_q;
    real_t _dq_unb_pi_vsg_sum5__out;
    real_t _dq_unb_pi_vsg_sum4__out;
    real_t _dq_unb_pi_vsg_bus_join18__out[2];
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq2__abc[3];
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq2__theta;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq2__d;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq2__q;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq3__abc[3];
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq3__theta;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq3__d;
    real_t _dq_unb_pi_vsg_c_function_abc_to_dq3__q;
    real_t _dq_unb_pi_vsg_sci_send1_advanced_c_function__var1;
    real_t _dq_unb_pi_vsg_sci_send1_advanced_c_function__var2;
    real_t _dq_unb_pi_vsg_sci_send1_advanced_c_function__var3;
    real_t _dq_unb_pi_vsg_sci_send1_advanced_c_function__var4;
    real_t _dq_unb_pi_vsg_subsystem13_product1__out;
    real_t _dq_unb_pi_vsg_subsystem14_product1__out;
    real_t _dq_unb_pi_vsg_subsystem15_product1__out;
    real_t _dq_unb_pi_vsg_subsystem14_gain1__out;
    real_t _dq_unb_pi_vsg_subsystem15_gain1__out;
    real_t _dq_unb_pi_vsg_bus_join11__out[2];
    real_t _dq_unb_pi_vsg_bus_join23__out[2];
    real_t _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__out;
    real_t _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0f};
    real_t _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__a_coeff[2] = {1.0f, -1.0f};
    real_t _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__a_sum;
    real_t _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__b_sum;
    real_t _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__delay_line_in;
    real_t _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__out;
    real_t _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0f};
    real_t _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__a_coeff[2] = {1.0f, -1.0f};
    real_t _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__a_sum;
    real_t _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__b_sum;
    real_t _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__delay_line_in;
    real_t _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__out;
    real_t _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0f};
    real_t _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__a_coeff[2] = {1.0f, -1.0f};
    real_t _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__a_sum;
    real_t _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__b_sum;
    real_t _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__delay_line_in;
    real_t _dq_unb_pi_vsg_sum6__out[2];
    real_t _dq_unb_pi_vsg_subsystem13_sum1__out;
    real_t _dq_unb_pi_vsg_subsystem14_sum1__out;
    real_t _dq_unb_pi_vsg_subsystem15_sum1__out;
    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq[2];
    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq_ref[2];
    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__omega_pll;
    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__reset_int;
    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__v_dc;
    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__vs_dq[2];
    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__eta_d;
    real_t _dq_unb_pi_vsg_c_function_pi_current_controller__eta_q;
    real_t _dq_unb_pi_vsg_bus_join8__out[2];
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__dq[2];
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__theta;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__a;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__b;
    real_t _dq_unb_pi_vsg_c_function_dq_to_abc1__c;
    real_t _dq_unb_pi_vsg_bus_join14__out[3];
    real_t _dq_unb_pi_vsg_sum1__out[3];
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
    while(AdcbRegs.ADCCTL1.bit.ADCBSY);
	while(AdccRegs.ADCCTL1.bit.ADCBSY);
	while(AdcaRegs.ADCCTL1.bit.ADCBSY);
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
        _dq_unb_pi_vsg_adc__generic_4_adc_advanced_c_function__out = AdcbResultRegs.ADCRESULT4;
    }
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)5.ADC.advanced c function
    {
        _dq_unb_pi_vsg_adc__generic_5_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT4;
    }
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)6.ADC.advanced c function
    {
        _dq_unb_pi_vsg_adc__generic_6_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT1;
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
    // Generated from the component: dq_unb_pi_vsg.Unit Delay1
    _dq_unb_pi_vsg_unit_delay1__out = m_States->_dq_unb_pi_vsg_unit_delay1__state;
    // Generated from the component: dq_unb_pi_vsg.Unit Delay2
    _dq_unb_pi_vsg_unit_delay2__out = m_States->_dq_unb_pi_vsg_unit_delay2__state;
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
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA
    _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in = _dq_unb_pi_vsg_constant2__out;
    {
        _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out = _dq_unb_pi_vsg_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in * 10000 ;
    }
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
    // Generated from the component: dq_unb_pi_vsg.Gain10
    _dq_unb_pi_vsg_gain10__out = 0.05f * _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var1;
    // Generated from the component: dq_unb_pi_vsg.Gain11
    _dq_unb_pi_vsg_gain11__out = 0.05f * _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var2;
    // Generated from the component: dq_unb_pi_vsg.Integrator1
    if ((_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0.0f) && (m_States->_dq_unb_pi_vsg_integrator1__reset_state <= 0)) {
        m_States->_dq_unb_pi_vsg_integrator1__state = 0.0f;
    }
    _dq_unb_pi_vsg_integrator1__out = m_States->_dq_unb_pi_vsg_integrator1__state;
    // Generated from the component: dq_unb_pi_vsg.Subsystem13.Integrator1
    if ((_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0.0f) && (m_States->_dq_unb_pi_vsg_subsystem13_integrator1__reset_state <= 0)) {
        m_States->_dq_unb_pi_vsg_subsystem13_integrator1__state = 0.0f;
    }
    _dq_unb_pi_vsg_subsystem13_integrator1__out = m_States->_dq_unb_pi_vsg_subsystem13_integrator1__state;
    // Generated from the component: dq_unb_pi_vsg.Subsystem14.Integrator1
    if ((_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0.0f) && (m_States->_dq_unb_pi_vsg_subsystem14_integrator1__reset_state <= 0)) {
        m_States->_dq_unb_pi_vsg_subsystem14_integrator1__state = 0.0f;
    }
    _dq_unb_pi_vsg_subsystem14_integrator1__out = m_States->_dq_unb_pi_vsg_subsystem14_integrator1__state;
    // Generated from the component: dq_unb_pi_vsg.Subsystem15.Integrator1
    if ((_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0.0f) && (m_States->_dq_unb_pi_vsg_subsystem15_integrator1__reset_state <= 0)) {
        m_States->_dq_unb_pi_vsg_subsystem15_integrator1__state = 0.0f;
    }
    _dq_unb_pi_vsg_subsystem15_integrator1__out = m_States->_dq_unb_pi_vsg_subsystem15_integrator1__state;
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
    // Generated from the component: dq_unb_pi_vsg.Gain17
    _dq_unb_pi_vsg_gain17__out = -1.0f * _dq_unb_pi_vsg_subsystem13_integrator1__out;
    // Generated from the component: dq_unb_pi_vsg.Bus Join21
    _dq_unb_pi_vsg_bus_join21__out[0] = _dq_unb_pi_vsg_subsystem15_integrator1__out;
    _dq_unb_pi_vsg_bus_join21__out[1] = _dq_unb_pi_vsg_subsystem14_integrator1__out;
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
    _dq_unb_pi_vsg_c_function_dq_to_abc4__dq[0] = _dq_unb_pi_vsg_bus_join21__out[0];
    _dq_unb_pi_vsg_c_function_dq_to_abc4__dq[1] = _dq_unb_pi_vsg_bus_join21__out[1];
    _dq_unb_pi_vsg_c_function_dq_to_abc4__theta = _dq_unb_pi_vsg_constant15__out;
    {
        _dq_unb_pi_vsg_c_function_dq_to_abc4__a = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc4__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc4__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc4__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc4__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc4__b = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc4__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc4__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc4__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc4__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc4__c = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc4__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc4__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc4__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc4__dq [ 1 ] ;
    }
    // Generated from the component: dq_unb_pi_vsg.ADC (Generic)1.scaling
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
    // Generated from the component: dq_unb_pi_vsg.Bus Join22
    _dq_unb_pi_vsg_bus_join22__out[0] = _dq_unb_pi_vsg_c_function_dq_to_abc4__a;
    _dq_unb_pi_vsg_bus_join22__out[1] = _dq_unb_pi_vsg_c_function_dq_to_abc4__b;
    _dq_unb_pi_vsg_bus_join22__out[2] = _dq_unb_pi_vsg_c_function_dq_to_abc4__c;
    // Generated from the component: dq_unb_pi_vsg.Bus Join15
    _dq_unb_pi_vsg_bus_join15__out[0] = _dq_unb_pi_vsg_adc__generic_1_scaling__out;
    _dq_unb_pi_vsg_bus_join15__out[1] = _dq_unb_pi_vsg_adc__generic_2_scaling__out;
    _dq_unb_pi_vsg_bus_join15__out[2] = _dq_unb_pi_vsg_adc__generic_3_scaling__out;
    // Generated from the component: dq_unb_pi_vsg.Bus Join16
    _dq_unb_pi_vsg_bus_join16__out[0] = _dq_unb_pi_vsg_adc__generic_4_scaling__out;
    _dq_unb_pi_vsg_bus_join16__out[1] = _dq_unb_pi_vsg_adc__generic_5_scaling__out;
    _dq_unb_pi_vsg_bus_join16__out[2] = _dq_unb_pi_vsg_adc__generic_6_scaling__out;
    // Generated from the component: dq_unb_pi_vsg.Sum7
    _dq_unb_pi_vsg_sum7__out = _dq_unb_pi_vsg_adc__generic_4_scaling__out + _dq_unb_pi_vsg_adc__generic_5_scaling__out + _dq_unb_pi_vsg_adc__generic_6_scaling__out;
    // Generated from the component: dq_unb_pi_vsg.RMS value4
    if (m_States->_dq_unb_pi_vsg_rms_value4__period_cnt >= 2 * M_PI) {
        m_States->_dq_unb_pi_vsg_rms_value4__out_state = sqrt(m_States->_dq_unb_pi_vsg_rms_value4__square_sum / (2 * M_PI));
        m_States->_dq_unb_pi_vsg_rms_value4__square_sum = 0.0f;
        m_States->_dq_unb_pi_vsg_rms_value4__period_cnt = fmod(m_States->_dq_unb_pi_vsg_rms_value4__period_cnt, 2 * M_PI);
    }
    _dq_unb_pi_vsg_rms_value4__out = m_States->_dq_unb_pi_vsg_rms_value4__out_state;
    // Generated from the component: dq_unb_pi_vsg.Sum9
    _dq_unb_pi_vsg_sum9__out = _dq_unb_pi_vsg_gain17__out - _dq_unb_pi_vsg_adc__generic_7_scaling__out;
    // Generated from the component: dq_unb_pi_vsg.C function abc to dq1
    _dq_unb_pi_vsg_c_function_abc_to_dq1__abc[0] = _dq_unb_pi_vsg_bus_join15__out[0];
    _dq_unb_pi_vsg_c_function_abc_to_dq1__abc[1] = _dq_unb_pi_vsg_bus_join15__out[1];
    _dq_unb_pi_vsg_c_function_abc_to_dq1__abc[2] = _dq_unb_pi_vsg_bus_join15__out[2];
    _dq_unb_pi_vsg_c_function_abc_to_dq1__theta = _dq_unb_pi_vsg_constant11__out;
    {
        _dq_unb_pi_vsg_c_function_abc_to_dq1__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_c_function_abc_to_dq1__theta ) * _dq_unb_pi_vsg_c_function_abc_to_dq1__abc [ 0 ] + cos ( _dq_unb_pi_vsg_c_function_abc_to_dq1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq1__abc [ 1 ] + cos ( _dq_unb_pi_vsg_c_function_abc_to_dq1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq1__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_abc_to_dq1__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq1__theta ) * _dq_unb_pi_vsg_c_function_abc_to_dq1__abc [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq1__abc [ 1 ] - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq1__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.C function PLL
    _dq_unb_pi_vsg_c_function_pll__abc[0] = _dq_unb_pi_vsg_bus_join16__out[0];
    _dq_unb_pi_vsg_c_function_pll__abc[1] = _dq_unb_pi_vsg_bus_join16__out[1];
    _dq_unb_pi_vsg_c_function_pll__abc[2] = _dq_unb_pi_vsg_bus_join16__out[2];
    {
        _dq_unb_pi_vsg_c_function_pll__d = 2.0f / 3.0f * ( cos ( m_States->_dq_unb_pi_vsg_c_function_pll__theta ) * _dq_unb_pi_vsg_c_function_pll__abc [ 0 ] + cos ( m_States->_dq_unb_pi_vsg_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_pll__abc [ 1 ] + cos ( m_States->_dq_unb_pi_vsg_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_pll__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_pll__q = 2.0f / 3.0f * ( - sin ( m_States->_dq_unb_pi_vsg_c_function_pll__theta ) * _dq_unb_pi_vsg_c_function_pll__abc [ 0 ] - sin ( m_States->_dq_unb_pi_vsg_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_pll__abc [ 1 ] - sin ( m_States->_dq_unb_pi_vsg_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_pll__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_pll__e_d = _dq_unb_pi_vsg_c_function_pll__d ;
        _dq_unb_pi_vsg_c_function_pll__omega_pll = 1.8f * _dq_unb_pi_vsg_c_function_pll__e_d + m_States->_dq_unb_pi_vsg_c_function_pll__y_d ;
        _dq_unb_pi_vsg_c_function_pll__theta_pll = m_States->_dq_unb_pi_vsg_c_function_pll__theta ;
    }
    // Generated from the component: dq_unb_pi_vsg.C function abc to dq
    _dq_unb_pi_vsg_c_function_abc_to_dq__abc[0] = _dq_unb_pi_vsg_bus_join16__out[0];
    _dq_unb_pi_vsg_c_function_abc_to_dq__abc[1] = _dq_unb_pi_vsg_bus_join16__out[1];
    _dq_unb_pi_vsg_c_function_abc_to_dq__abc[2] = _dq_unb_pi_vsg_bus_join16__out[2];
    _dq_unb_pi_vsg_c_function_abc_to_dq__theta = _dq_unb_pi_vsg_constant9__out;
    {
        _dq_unb_pi_vsg_c_function_abc_to_dq__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_c_function_abc_to_dq__abc [ 0 ] + cos ( _dq_unb_pi_vsg_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq__abc [ 1 ] + cos ( _dq_unb_pi_vsg_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_abc_to_dq__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq__theta ) * _dq_unb_pi_vsg_c_function_abc_to_dq__abc [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq__abc [ 1 ] - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Gain15
    _dq_unb_pi_vsg_gain15__out = 0.3333333333333333f * _dq_unb_pi_vsg_sum7__out;
    // Generated from the component: dq_unb_pi_vsg.Gain18
    _dq_unb_pi_vsg_gain18__out = 5.0f * _dq_unb_pi_vsg_sum9__out;
    // Generated from the component: dq_unb_pi_vsg.Gain19
    _dq_unb_pi_vsg_gain19__out = 157.07963267948966f * _dq_unb_pi_vsg_sum9__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem8.Subsystem6.LPF
    _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__in = _dq_unb_pi_vsg_c_function_abc_to_dq1__d;
    _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__omega_rads = _dq_unb_pi_vsg_unit_delay2__out;
    {
        _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__out_fil = m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem9.Subsystem6.LPF
    _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__in = _dq_unb_pi_vsg_c_function_abc_to_dq1__q;
    _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__omega_rads = _dq_unb_pi_vsg_unit_delay2__out;
    {
        _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__out_fil = m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Gain12
    _dq_unb_pi_vsg_gain12__out = 0.0031830988618379067f * _dq_unb_pi_vsg_c_function_pll__omega_pll;
    _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__in = _dq_unb_pi_vsg_c_function_abc_to_dq__d;
    _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__omega_rads = _dq_unb_pi_vsg_unit_delay1__out;
    {
        _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__out_fil = m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem9.Subsystem6.LPF
    _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__in = _dq_unb_pi_vsg_c_function_abc_to_dq__q;
    _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__omega_rads = _dq_unb_pi_vsg_unit_delay1__out;
    {
        _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__out_fil = m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Product4
    _dq_unb_pi_vsg_product4__out = (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 * _dq_unb_pi_vsg_gain15__out);
    // Generated from the component: dq_unb_pi_vsg.RMS value3
    if (m_States->_dq_unb_pi_vsg_rms_value3__period_cnt >= 2 * M_PI) {
        m_States->_dq_unb_pi_vsg_rms_value3__out_state = sqrt(m_States->_dq_unb_pi_vsg_rms_value3__square_sum / (2 * M_PI));
        m_States->_dq_unb_pi_vsg_rms_value3__square_sum = 0.0f;
        m_States->_dq_unb_pi_vsg_rms_value3__period_cnt = fmod(m_States->_dq_unb_pi_vsg_rms_value3__period_cnt, 2 * M_PI);
    }
    _dq_unb_pi_vsg_rms_value3__out = m_States->_dq_unb_pi_vsg_rms_value3__out_state;
    // Generated from the component: dq_unb_pi_vsg.Sum10
    _dq_unb_pi_vsg_sum10__out = _dq_unb_pi_vsg_gain18__out + _dq_unb_pi_vsg_integrator1__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem8.Subsystem6.LPF1
    _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__in = _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__out_fil;
    _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__omega_rads = _dq_unb_pi_vsg_unit_delay2__out;
    {
        _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__out_fil = m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem9.Subsystem6.LPF1
    _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__in = _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__out_fil;
    _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__omega_rads = _dq_unb_pi_vsg_unit_delay2__out;
    {
        _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__out_fil = m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Signal switch1
    _dq_unb_pi_vsg_signal_switch1__out = (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4 > 0.5f) ? _dq_unb_pi_vsg_constant8__out : _dq_unb_pi_vsg_gain12__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem8.Subsystem6.LPF1
    _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__in = _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__out_fil;
    _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__omega_rads = _dq_unb_pi_vsg_unit_delay1__out;
    {
        _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__out_fil = m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem9.Subsystem6.LPF1
    _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__in = _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__out_fil;
    _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__omega_rads = _dq_unb_pi_vsg_unit_delay1__out;
    {
        _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__out_fil = m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__x_out ;
    }
    // Generated from the component: dq_unb_pi_vsg.Gain21
    _dq_unb_pi_vsg_gain21__out = 1.0f * _dq_unb_pi_vsg_product4__out;
    // Generated from the component: dq_unb_pi_vsg.Gain20
    _dq_unb_pi_vsg_gain20__out = 2.0f * _dq_unb_pi_vsg_sum10__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem8.Gain13
    _dq_unb_pi_vsg_subsystem11_subsystem8_gain13__out = 2.0f * _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem9.Gain13
    _dq_unb_pi_vsg_subsystem11_subsystem9_gain13__out = 2.0f * _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem8.Gain13
    _dq_unb_pi_vsg_subsystem10_subsystem8_gain13__out = 2.0f * _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem9.Gain13
    _dq_unb_pi_vsg_subsystem10_subsystem9_gain13__out = 2.0f * _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__out_fil;
    // Generated from the component: dq_unb_pi_vsg.Sum8
    _dq_unb_pi_vsg_sum8__out = _dq_unb_pi_vsg_constant16__out - _dq_unb_pi_vsg_gain21__out;
    // Generated from the component: dq_unb_pi_vsg.Product1
    _dq_unb_pi_vsg_product1__out = (_dq_unb_pi_vsg_gain20__out) * 1.0f / (_dq_unb_pi_vsg_constant17__out);
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem8.Bus Join21
    _dq_unb_pi_vsg_subsystem11_subsystem8_bus_join21__out[0] = _dq_unb_pi_vsg_c_function_abc_to_dq1__d;
    _dq_unb_pi_vsg_subsystem11_subsystem8_bus_join21__out[1] = _dq_unb_pi_vsg_subsystem11_subsystem8_gain13__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem9.Bus Join21
    _dq_unb_pi_vsg_subsystem11_subsystem9_bus_join21__out[0] = _dq_unb_pi_vsg_c_function_abc_to_dq1__q;
    _dq_unb_pi_vsg_subsystem11_subsystem9_bus_join21__out[1] = _dq_unb_pi_vsg_subsystem11_subsystem9_gain13__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem8.Bus Join21
    _dq_unb_pi_vsg_subsystem10_subsystem8_bus_join21__out[0] = _dq_unb_pi_vsg_c_function_abc_to_dq__d;
    _dq_unb_pi_vsg_subsystem10_subsystem8_bus_join21__out[1] = _dq_unb_pi_vsg_subsystem10_subsystem8_gain13__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem9.Bus Join21
    _dq_unb_pi_vsg_subsystem10_subsystem9_bus_join21__out[0] = _dq_unb_pi_vsg_c_function_abc_to_dq__q;
    _dq_unb_pi_vsg_subsystem10_subsystem9_bus_join21__out[1] = _dq_unb_pi_vsg_subsystem10_subsystem9_gain13__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem13.Gain1
    _dq_unb_pi_vsg_subsystem13_gain1__out = 8.0f * _dq_unb_pi_vsg_sum8__out;
    // Generated from the component: dq_unb_pi_vsg.Sum3
    _dq_unb_pi_vsg_sum3__out = _dq_unb_pi_vsg_product1__out + _dq_unb_pi_vsg_constant6__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.C function1
    _dq_unb_pi_vsg_subsystem11_c_function1__alpha[0] = _dq_unb_pi_vsg_subsystem11_subsystem8_bus_join21__out[0];
    _dq_unb_pi_vsg_subsystem11_c_function1__alpha[1] = _dq_unb_pi_vsg_subsystem11_subsystem8_bus_join21__out[1];
    _dq_unb_pi_vsg_subsystem11_c_function1__beta[0] = _dq_unb_pi_vsg_subsystem11_subsystem9_bus_join21__out[0];
    _dq_unb_pi_vsg_subsystem11_c_function1__beta[1] = _dq_unb_pi_vsg_subsystem11_subsystem9_bus_join21__out[1];
    {
        _dq_unb_pi_vsg_subsystem11_c_function1__alpha_pos = 0.5f * ( _dq_unb_pi_vsg_subsystem11_c_function1__alpha [ 0 ] - _dq_unb_pi_vsg_subsystem11_c_function1__beta [ 1 ] ) ;
        _dq_unb_pi_vsg_subsystem11_c_function1__beta_pos = 0.5f * ( _dq_unb_pi_vsg_subsystem11_c_function1__beta [ 0 ] + _dq_unb_pi_vsg_subsystem11_c_function1__alpha [ 1 ] ) ;
        _dq_unb_pi_vsg_subsystem11_c_function1__alpha_neg = 0.5f * ( _dq_unb_pi_vsg_subsystem11_c_function1__alpha [ 0 ] + _dq_unb_pi_vsg_subsystem11_c_function1__beta [ 1 ] ) ;
        _dq_unb_pi_vsg_subsystem11_c_function1__beta_neg = 0.5f * ( _dq_unb_pi_vsg_subsystem11_c_function1__beta [ 0 ] - _dq_unb_pi_vsg_subsystem11_c_function1__alpha [ 1 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.C function1
    _dq_unb_pi_vsg_subsystem10_c_function1__alpha[0] = _dq_unb_pi_vsg_subsystem10_subsystem8_bus_join21__out[0];
    _dq_unb_pi_vsg_subsystem10_c_function1__alpha[1] = _dq_unb_pi_vsg_subsystem10_subsystem8_bus_join21__out[1];
    _dq_unb_pi_vsg_subsystem10_c_function1__beta[0] = _dq_unb_pi_vsg_subsystem10_subsystem9_bus_join21__out[0];
    _dq_unb_pi_vsg_subsystem10_c_function1__beta[1] = _dq_unb_pi_vsg_subsystem10_subsystem9_bus_join21__out[1];
    {
        _dq_unb_pi_vsg_subsystem10_c_function1__alpha_pos = 0.5f * ( _dq_unb_pi_vsg_subsystem10_c_function1__alpha [ 0 ] - _dq_unb_pi_vsg_subsystem10_c_function1__beta [ 1 ] ) ;
        _dq_unb_pi_vsg_subsystem10_c_function1__beta_pos = 0.5f * ( _dq_unb_pi_vsg_subsystem10_c_function1__beta [ 0 ] + _dq_unb_pi_vsg_subsystem10_c_function1__alpha [ 1 ] ) ;
        _dq_unb_pi_vsg_subsystem10_c_function1__alpha_neg = 0.5f * ( _dq_unb_pi_vsg_subsystem10_c_function1__alpha [ 0 ] + _dq_unb_pi_vsg_subsystem10_c_function1__beta [ 1 ] ) ;
        _dq_unb_pi_vsg_subsystem10_c_function1__beta_neg = 0.5f * ( _dq_unb_pi_vsg_subsystem10_c_function1__beta [ 0 ] - _dq_unb_pi_vsg_subsystem10_c_function1__alpha [ 1 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Gain3
    _dq_unb_pi_vsg_gain3__out = 0.5f * _dq_unb_pi_vsg_sum3__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Bus Join19
    _dq_unb_pi_vsg_subsystem11_bus_join19__out[0] = _dq_unb_pi_vsg_subsystem11_c_function1__alpha_pos;
    _dq_unb_pi_vsg_subsystem11_bus_join19__out[1] = _dq_unb_pi_vsg_subsystem11_c_function1__beta_pos;
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Bus Join20
    _dq_unb_pi_vsg_subsystem11_bus_join20__out[0] = _dq_unb_pi_vsg_subsystem11_c_function1__alpha_neg;
    _dq_unb_pi_vsg_subsystem11_bus_join20__out[1] = _dq_unb_pi_vsg_subsystem11_c_function1__beta_neg;
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Bus Join19
    _dq_unb_pi_vsg_subsystem10_bus_join19__out[0] = _dq_unb_pi_vsg_subsystem10_c_function1__alpha_pos;
    _dq_unb_pi_vsg_subsystem10_bus_join19__out[1] = _dq_unb_pi_vsg_subsystem10_c_function1__beta_pos;
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Bus Join20
    _dq_unb_pi_vsg_subsystem10_bus_join20__out[0] = _dq_unb_pi_vsg_subsystem10_c_function1__alpha_neg;
    _dq_unb_pi_vsg_subsystem10_bus_join20__out[1] = _dq_unb_pi_vsg_subsystem10_c_function1__beta_neg;
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.D_to_CMPA 4.D_to_CMPA
    _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in = _dq_unb_pi_vsg_gain3__out;
    {
        _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: dq_unb_pi_vsg.C function dq to abc3
    _dq_unb_pi_vsg_c_function_dq_to_abc3__dq[0] = _dq_unb_pi_vsg_subsystem11_bus_join19__out[0];
    _dq_unb_pi_vsg_c_function_dq_to_abc3__dq[1] = _dq_unb_pi_vsg_subsystem11_bus_join19__out[1];
    _dq_unb_pi_vsg_c_function_dq_to_abc3__theta = _dq_unb_pi_vsg_constant12__out;
    {
        _dq_unb_pi_vsg_c_function_dq_to_abc3__a = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc3__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc3__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc3__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc3__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc3__b = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc3__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc3__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc3__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc3__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc3__c = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc3__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc3__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc3__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc3__dq [ 1 ] ;
    }
    _dq_unb_pi_vsg_c_function_dq_to_abc2__dq[0] = _dq_unb_pi_vsg_subsystem10_bus_join19__out[0];
    _dq_unb_pi_vsg_c_function_dq_to_abc2__dq[1] = _dq_unb_pi_vsg_subsystem10_bus_join19__out[1];
    _dq_unb_pi_vsg_c_function_dq_to_abc2__theta = _dq_unb_pi_vsg_constant10__out;
    {
        _dq_unb_pi_vsg_c_function_dq_to_abc2__a = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc2__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc2__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc2__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc2__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc2__b = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc2__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc2__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc2__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc2__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc2__c = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc2__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc2__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc2__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc2__dq [ 1 ] ;
    }
    // Generated from the component: dq_unb_pi_vsg.Bus Split2
    _dq_unb_pi_vsg_bus_split2__out = _dq_unb_pi_vsg_subsystem10_bus_join20__out[0];
    _dq_unb_pi_vsg_bus_split2__out1 = _dq_unb_pi_vsg_subsystem10_bus_join20__out[1];
    // Generated from the component: dq_unb_pi_vsg.ePWM (Generic)1.ePWM 4.advanced c function
    _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__CMPA = _dq_unb_pi_vsg_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out;
    {
        EPwm4Regs.CMPA.bit.CMPA = _dq_unb_pi_vsg_epwm__generic_1_epwm_4_advanced_c_function__CMPA;
    }
    // Generated from the component: dq_unb_pi_vsg.Bus Join20
    _dq_unb_pi_vsg_bus_join20__out[0] = _dq_unb_pi_vsg_c_function_dq_to_abc3__a;
    _dq_unb_pi_vsg_bus_join20__out[1] = _dq_unb_pi_vsg_c_function_dq_to_abc3__b;
    _dq_unb_pi_vsg_bus_join20__out[2] = _dq_unb_pi_vsg_c_function_dq_to_abc3__c;
    // Generated from the component: dq_unb_pi_vsg.Bus Join19
    _dq_unb_pi_vsg_bus_join19__out[0] = _dq_unb_pi_vsg_c_function_dq_to_abc2__a;
    _dq_unb_pi_vsg_bus_join19__out[1] = _dq_unb_pi_vsg_c_function_dq_to_abc2__b;
    _dq_unb_pi_vsg_bus_join19__out[2] = _dq_unb_pi_vsg_c_function_dq_to_abc2__c;
    // Generated from the component: dq_unb_pi_vsg.Product2
    _dq_unb_pi_vsg_product2__out = (_dq_unb_pi_vsg_bus_split2__out1 * _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3);
    // Generated from the component: dq_unb_pi_vsg.Product5
    _dq_unb_pi_vsg_product5__out = (_dq_unb_pi_vsg_bus_split2__out * _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3);
    // Generated from the component: dq_unb_pi_vsg.RMS value1
    if (m_States->_dq_unb_pi_vsg_rms_value1__period_cnt >= 2 * M_PI) {
        m_States->_dq_unb_pi_vsg_rms_value1__out_state = sqrt(m_States->_dq_unb_pi_vsg_rms_value1__square_sum / (2 * M_PI));
        m_States->_dq_unb_pi_vsg_rms_value1__square_sum = 0.0f;
        m_States->_dq_unb_pi_vsg_rms_value1__period_cnt = fmod(m_States->_dq_unb_pi_vsg_rms_value1__period_cnt, 2 * M_PI);
    }
    _dq_unb_pi_vsg_rms_value1__out = m_States->_dq_unb_pi_vsg_rms_value1__out_state;
    // Generated from the component: dq_unb_pi_vsg.RMS value2
    if (m_States->_dq_unb_pi_vsg_rms_value2__period_cnt >= 2 * M_PI) {
        m_States->_dq_unb_pi_vsg_rms_value2__out_state = sqrt(m_States->_dq_unb_pi_vsg_rms_value2__square_sum / (2 * M_PI));
        m_States->_dq_unb_pi_vsg_rms_value2__square_sum = 0.0f;
        m_States->_dq_unb_pi_vsg_rms_value2__period_cnt = fmod(m_States->_dq_unb_pi_vsg_rms_value2__period_cnt, 2 * M_PI);
    }
    _dq_unb_pi_vsg_rms_value2__out = m_States->_dq_unb_pi_vsg_rms_value2__out_state;
    _dq_unb_pi_vsg_c_function_vsg__is_abc[0] = _dq_unb_pi_vsg_bus_join20__out[0];
    _dq_unb_pi_vsg_c_function_vsg__is_abc[1] = _dq_unb_pi_vsg_bus_join20__out[1];
    _dq_unb_pi_vsg_c_function_vsg__is_abc[2] = _dq_unb_pi_vsg_bus_join20__out[2];
    _dq_unb_pi_vsg_c_function_vsg__omega_base = _dq_unb_pi_vsg_signal_switch1__out;
    _dq_unb_pi_vsg_c_function_vsg__on_vsg = _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4;
    _dq_unb_pi_vsg_c_function_vsg__p_m_ref = _dq_unb_pi_vsg_gain10__out;
    _dq_unb_pi_vsg_c_function_vsg__q_s_ref = _dq_unb_pi_vsg_gain11__out;
    _dq_unb_pi_vsg_c_function_vsg__reset_int = _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4;
    _dq_unb_pi_vsg_c_function_vsg__theta_pll = _dq_unb_pi_vsg_c_function_pll__theta_pll;
    _dq_unb_pi_vsg_c_function_vsg__vs_abc[0] = _dq_unb_pi_vsg_bus_join19__out[0];
    _dq_unb_pi_vsg_c_function_vsg__vs_abc[1] = _dq_unb_pi_vsg_bus_join19__out[1];
    _dq_unb_pi_vsg_c_function_vsg__vs_abc[2] = _dq_unb_pi_vsg_bus_join19__out[2];
    {
        _dq_unb_pi_vsg_c_function_vsg__is_d = 2.0f / 3.0f * ( cos ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta ) * _dq_unb_pi_vsg_c_function_vsg__is_abc [ 0 ] + cos ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_vsg__is_abc [ 1 ] + cos ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_vsg__is_abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_vsg__is_q = 2.0f / 3.0f * ( - sin ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta ) * _dq_unb_pi_vsg_c_function_vsg__is_abc [ 0 ] - sin ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_vsg__is_abc [ 1 ] - sin ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_vsg__is_abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_vsg__vs_d = 2.0f / 3.0f * ( cos ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta ) * _dq_unb_pi_vsg_c_function_vsg__vs_abc [ 0 ] + cos ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_vsg__vs_abc [ 1 ] + cos ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_vsg__vs_abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_vsg__vs_q = 2.0f / 3.0f * ( - sin ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta ) * _dq_unb_pi_vsg_c_function_vsg__vs_abc [ 0 ] - sin ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_vsg__vs_abc [ 1 ] - sin ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_vsg__vs_abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_vsg__p_s = ( _dq_unb_pi_vsg_c_function_vsg__is_d * _dq_unb_pi_vsg_c_function_vsg__vs_d + _dq_unb_pi_vsg_c_function_vsg__is_q * _dq_unb_pi_vsg_c_function_vsg__vs_q ) / ( 40.824829046386306f * 326.5986323710904f ) ;
        _dq_unb_pi_vsg_c_function_vsg__q_s = ( _dq_unb_pi_vsg_c_function_vsg__is_d * _dq_unb_pi_vsg_c_function_vsg__vs_q - _dq_unb_pi_vsg_c_function_vsg__is_q * _dq_unb_pi_vsg_c_function_vsg__vs_d ) / ( 40.824829046386306f * 326.5986323710904f ) ;
        if ( _dq_unb_pi_vsg_c_function_vsg__on_vsg < 0.5f )     {
            _dq_unb_pi_vsg_c_function_vsg__p_s = 0.0f ;
            _dq_unb_pi_vsg_c_function_vsg__q_s = 0.0f ;
        }
        _dq_unb_pi_vsg_c_function_vsg__omega_vsg = ( 0.015f * m_States->_dq_unb_pi_vsg_c_function_vsg__e_p + m_States->_dq_unb_pi_vsg_c_function_vsg__x_p + _dq_unb_pi_vsg_c_function_vsg__omega_base ) * 2.0f * M_PI * 50.0f ;
        _dq_unb_pi_vsg_c_function_vsg__theta_vsg = m_States->_dq_unb_pi_vsg_c_function_vsg__theta ;
        _dq_unb_pi_vsg_c_function_vsg__e = 1.0f + 0.1f * m_States->_dq_unb_pi_vsg_c_function_vsg__e_q + m_States->_dq_unb_pi_vsg_c_function_vsg__x_q ;
        _dq_unb_pi_vsg_c_function_vsg__is_dq_ref [ 0 ] = - 40.824829046386306f * ( 0.5f * _dq_unb_pi_vsg_c_function_vsg__e + 0.0f * _dq_unb_pi_vsg_c_function_vsg__vs_d / 326.5986323710904f + 0.5f * _dq_unb_pi_vsg_c_function_vsg__vs_q / 326.5986323710904f ) / ( pow ( 0.0f , 2 ) + pow ( 0.5f , 2 ) ) ;
        _dq_unb_pi_vsg_c_function_vsg__is_dq_ref [ 1 ] = - 40.824829046386306f * ( 0.0f * _dq_unb_pi_vsg_c_function_vsg__e + 0.0f * _dq_unb_pi_vsg_c_function_vsg__vs_q / 326.5986323710904f - 0.5f * _dq_unb_pi_vsg_c_function_vsg__vs_d / 326.5986323710904f ) / ( pow ( 0.0f , 2 ) + pow ( 0.5f , 2 ) ) ;
        _dq_unb_pi_vsg_c_function_vsg__is_dq_ref_fil [ 0 ] = m_States->_dq_unb_pi_vsg_c_function_vsg__x_isd ;
        _dq_unb_pi_vsg_c_function_vsg__is_dq_ref_fil [ 1 ] = m_States->_dq_unb_pi_vsg_c_function_vsg__x_isq ;
        if ( _dq_unb_pi_vsg_c_function_vsg__on_vsg < 0.5f )     {
            _dq_unb_pi_vsg_c_function_vsg__is_dq_ref [ 0 ] = 0.0f ;
            _dq_unb_pi_vsg_c_function_vsg__is_dq_ref [ 1 ] = 0.0f ;
        }
    }
    // Generated from the component: dq_unb_pi_vsg.Sum5
    _dq_unb_pi_vsg_sum5__out = _dq_unb_pi_vsg_constant14__out - _dq_unb_pi_vsg_product2__out;
    // Generated from the component: dq_unb_pi_vsg.Sum4
    _dq_unb_pi_vsg_sum4__out = _dq_unb_pi_vsg_constant13__out - _dq_unb_pi_vsg_product5__out;
    // Generated from the component: dq_unb_pi_vsg.Bus Join18
    _dq_unb_pi_vsg_bus_join18__out[0] = _dq_unb_pi_vsg_c_function_vsg__vs_d;
    _dq_unb_pi_vsg_bus_join18__out[1] = _dq_unb_pi_vsg_c_function_vsg__vs_q;
    // Generated from the component: dq_unb_pi_vsg.C function abc to dq2
    _dq_unb_pi_vsg_c_function_abc_to_dq2__abc[0] = _dq_unb_pi_vsg_bus_join15__out[0];
    _dq_unb_pi_vsg_c_function_abc_to_dq2__abc[1] = _dq_unb_pi_vsg_bus_join15__out[1];
    _dq_unb_pi_vsg_c_function_abc_to_dq2__abc[2] = _dq_unb_pi_vsg_bus_join15__out[2];
    _dq_unb_pi_vsg_c_function_abc_to_dq2__theta = _dq_unb_pi_vsg_c_function_vsg__theta_vsg;
    {
        _dq_unb_pi_vsg_c_function_abc_to_dq2__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_c_function_abc_to_dq2__theta ) * _dq_unb_pi_vsg_c_function_abc_to_dq2__abc [ 0 ] + cos ( _dq_unb_pi_vsg_c_function_abc_to_dq2__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq2__abc [ 1 ] + cos ( _dq_unb_pi_vsg_c_function_abc_to_dq2__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq2__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_abc_to_dq2__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq2__theta ) * _dq_unb_pi_vsg_c_function_abc_to_dq2__abc [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq2__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq2__abc [ 1 ] - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq2__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq2__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.C function abc to dq3
    _dq_unb_pi_vsg_c_function_abc_to_dq3__abc[0] = _dq_unb_pi_vsg_bus_join22__out[0];
    _dq_unb_pi_vsg_c_function_abc_to_dq3__abc[1] = _dq_unb_pi_vsg_bus_join22__out[1];
    _dq_unb_pi_vsg_c_function_abc_to_dq3__abc[2] = _dq_unb_pi_vsg_bus_join22__out[2];
    _dq_unb_pi_vsg_c_function_abc_to_dq3__theta = _dq_unb_pi_vsg_c_function_vsg__theta_vsg;
    {
        _dq_unb_pi_vsg_c_function_abc_to_dq3__d = 2.0f / 3.0f * ( cos ( _dq_unb_pi_vsg_c_function_abc_to_dq3__theta ) * _dq_unb_pi_vsg_c_function_abc_to_dq3__abc [ 0 ] + cos ( _dq_unb_pi_vsg_c_function_abc_to_dq3__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq3__abc [ 1 ] + cos ( _dq_unb_pi_vsg_c_function_abc_to_dq3__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq3__abc [ 2 ] ) ;
        _dq_unb_pi_vsg_c_function_abc_to_dq3__q = 2.0f / 3.0f * ( - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq3__theta ) * _dq_unb_pi_vsg_c_function_abc_to_dq3__abc [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq3__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq3__abc [ 1 ] - sin ( _dq_unb_pi_vsg_c_function_abc_to_dq3__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_abc_to_dq3__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.SCI Send1.advanced c function
    _dq_unb_pi_vsg_sci_send1_advanced_c_function__var1 = _dq_unb_pi_vsg_rms_value1__out;
    _dq_unb_pi_vsg_sci_send1_advanced_c_function__var2 = _dq_unb_pi_vsg_rms_value2__out;
    _dq_unb_pi_vsg_sci_send1_advanced_c_function__var3 = _dq_unb_pi_vsg_rms_value3__out;
    _dq_unb_pi_vsg_sci_send1_advanced_c_function__var4 = _dq_unb_pi_vsg_c_function_vsg__omega_vsg;
    {
        real_t tx_array[4] = {
            _dq_unb_pi_vsg_sci_send1_advanced_c_function__var1
            , _dq_unb_pi_vsg_sci_send1_advanced_c_function__var2
            , _dq_unb_pi_vsg_sci_send1_advanced_c_function__var3
            , _dq_unb_pi_vsg_sci_send1_advanced_c_function__var4
        };
        Transmit_data(&SerialComm, tx_array, 4, 0, 0);
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem13.Product1
    _dq_unb_pi_vsg_subsystem13_product1__out = (_dq_unb_pi_vsg_c_function_vsg__omega_vsg * _dq_unb_pi_vsg_c_function_vsg__omega_vsg * _dq_unb_pi_vsg_subsystem13_integrator1__out);
    // Generated from the component: dq_unb_pi_vsg.Subsystem14.Product1
    _dq_unb_pi_vsg_subsystem14_product1__out = (_dq_unb_pi_vsg_c_function_vsg__omega_vsg * _dq_unb_pi_vsg_c_function_vsg__omega_vsg * _dq_unb_pi_vsg_subsystem14_integrator1__out);
    // Generated from the component: dq_unb_pi_vsg.Subsystem15.Product1
    _dq_unb_pi_vsg_subsystem15_product1__out = (_dq_unb_pi_vsg_c_function_vsg__omega_vsg * _dq_unb_pi_vsg_c_function_vsg__omega_vsg * _dq_unb_pi_vsg_subsystem15_integrator1__out);
    _dq_unb_pi_vsg_subsystem14_gain1__out = 8.0f * _dq_unb_pi_vsg_sum5__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem15.Gain1
    _dq_unb_pi_vsg_subsystem15_gain1__out = 8.0f * _dq_unb_pi_vsg_sum4__out;
    // Generated from the component: dq_unb_pi_vsg.Bus Join11
    _dq_unb_pi_vsg_bus_join11__out[0] = _dq_unb_pi_vsg_c_function_abc_to_dq2__d;
    _dq_unb_pi_vsg_bus_join11__out[1] = _dq_unb_pi_vsg_c_function_abc_to_dq2__q;
    // Generated from the component: dq_unb_pi_vsg.Bus Join23
    _dq_unb_pi_vsg_bus_join23__out[0] = _dq_unb_pi_vsg_c_function_abc_to_dq3__d;
    _dq_unb_pi_vsg_bus_join23__out[1] = _dq_unb_pi_vsg_c_function_abc_to_dq3__q;
    // Generated from the component: dq_unb_pi_vsg.Subsystem13.Discrete Transfer Function2
    uint_t _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i;
    _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__a_sum = 0.0f;
    _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__b_sum = 0.0f;
    _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i++) {
        _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__b_coeff[_dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i + 1] * m_States->_dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__states[_dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i];
    }
    _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__a_sum += m_States->_dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__states[0] * _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__a_coeff[1];
    _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__delay_line_in = _dq_unb_pi_vsg_subsystem13_product1__out - _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__a_sum;
    _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__b_coeff[0] * _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__delay_line_in;
    _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__out = _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__b_sum;
    // Generated from the component: dq_unb_pi_vsg.Subsystem14.Discrete Transfer Function2
    uint_t _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i;
    _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__a_sum = 0.0f;
    _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__b_sum = 0.0f;
    _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i++) {
        _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__b_coeff[_dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i + 1] * m_States->_dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__states[_dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i];
    }
    _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__a_sum += m_States->_dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__states[0] * _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__a_coeff[1];
    _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__delay_line_in = _dq_unb_pi_vsg_subsystem14_product1__out - _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__a_sum;
    _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__b_coeff[0] * _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__delay_line_in;
    _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__out = _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__b_sum;
    // Generated from the component: dq_unb_pi_vsg.Subsystem15.Discrete Transfer Function2
    uint_t _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i;
    _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__a_sum = 0.0f;
    _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__b_sum = 0.0f;
    _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i++) {
        _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__b_coeff[_dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i + 1] * m_States->_dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__states[_dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i];
    }
    _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__a_sum += m_States->_dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__states[0] * _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__a_coeff[1];
    _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__delay_line_in = _dq_unb_pi_vsg_subsystem15_product1__out - _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__a_sum;
    _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__b_sum += _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__b_coeff[0] * _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__delay_line_in;
    _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__out = _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__b_sum;
    // Generated from the component: dq_unb_pi_vsg.Sum6
    _dq_unb_pi_vsg_sum6__out[0] = _dq_unb_pi_vsg_c_function_vsg__is_dq_ref_fil[0] + _dq_unb_pi_vsg_bus_join23__out[0];
    _dq_unb_pi_vsg_sum6__out[1] = _dq_unb_pi_vsg_c_function_vsg__is_dq_ref_fil[1] + _dq_unb_pi_vsg_bus_join23__out[1];
    // Generated from the component: dq_unb_pi_vsg.Subsystem13.Sum1
    _dq_unb_pi_vsg_subsystem13_sum1__out = _dq_unb_pi_vsg_subsystem13_gain1__out - _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem14.Sum1
    _dq_unb_pi_vsg_subsystem14_sum1__out = _dq_unb_pi_vsg_subsystem14_gain1__out - _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__out;
    // Generated from the component: dq_unb_pi_vsg.Subsystem15.Sum1
    _dq_unb_pi_vsg_subsystem15_sum1__out = _dq_unb_pi_vsg_subsystem15_gain1__out - _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__out;
    // Generated from the component: dq_unb_pi_vsg.C function PI current controller
    _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq[0] = _dq_unb_pi_vsg_bus_join11__out[0];
    _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq[1] = _dq_unb_pi_vsg_bus_join11__out[1];
    _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq_ref[0] = _dq_unb_pi_vsg_sum6__out[0];
    _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq_ref[1] = _dq_unb_pi_vsg_sum6__out[1];
    _dq_unb_pi_vsg_c_function_pi_current_controller__omega_pll = _dq_unb_pi_vsg_c_function_vsg__omega_vsg;
    _dq_unb_pi_vsg_c_function_pi_current_controller__reset_int = _dq_unb_pi_vsg_sci_receive1_advanced_c_function__var4;
    _dq_unb_pi_vsg_c_function_pi_current_controller__v_dc = _dq_unb_pi_vsg_constant18__out;
    _dq_unb_pi_vsg_c_function_pi_current_controller__vs_dq[0] = _dq_unb_pi_vsg_bus_join18__out[0];
    _dq_unb_pi_vsg_c_function_pi_current_controller__vs_dq[1] = _dq_unb_pi_vsg_bus_join18__out[1];
    {
        _dq_unb_pi_vsg_c_function_pi_current_controller__eta_d = ( 2 / _dq_unb_pi_vsg_c_function_pi_current_controller__v_dc ) * ( 5.0f * m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__e_d + m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_d - 0.005f * 2 * M_PI * 50 * _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq [ 1 ] + _dq_unb_pi_vsg_c_function_pi_current_controller__vs_dq [ 0 ] ) ;
        _dq_unb_pi_vsg_c_function_pi_current_controller__eta_q = ( 2 / _dq_unb_pi_vsg_c_function_pi_current_controller__v_dc ) * ( 5.0f * m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__e_q + m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_q + 0.005f * 2 * M_PI * 50 * _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq [ 0 ] + _dq_unb_pi_vsg_c_function_pi_current_controller__vs_dq [ 1 ] ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Bus Join8
    _dq_unb_pi_vsg_bus_join8__out[0] = _dq_unb_pi_vsg_c_function_pi_current_controller__eta_d;
    _dq_unb_pi_vsg_bus_join8__out[1] = _dq_unb_pi_vsg_c_function_pi_current_controller__eta_q;
    // Generated from the component: dq_unb_pi_vsg.C function dq to abc1
    _dq_unb_pi_vsg_c_function_dq_to_abc1__dq[0] = _dq_unb_pi_vsg_bus_join8__out[0];
    _dq_unb_pi_vsg_c_function_dq_to_abc1__dq[1] = _dq_unb_pi_vsg_bus_join8__out[1];
    _dq_unb_pi_vsg_c_function_dq_to_abc1__theta = _dq_unb_pi_vsg_c_function_vsg__theta_vsg;
    {
        _dq_unb_pi_vsg_c_function_dq_to_abc1__a = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc1__b = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 1 ] ;
        _dq_unb_pi_vsg_c_function_dq_to_abc1__c = cos ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 0 ] - sin ( _dq_unb_pi_vsg_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _dq_unb_pi_vsg_c_function_dq_to_abc1__dq [ 1 ] ;
    }
    // Generated from the component: dq_unb_pi_vsg.Bus Join14
    _dq_unb_pi_vsg_bus_join14__out[0] = _dq_unb_pi_vsg_c_function_dq_to_abc1__a;
    _dq_unb_pi_vsg_bus_join14__out[1] = _dq_unb_pi_vsg_c_function_dq_to_abc1__b;
    _dq_unb_pi_vsg_bus_join14__out[2] = _dq_unb_pi_vsg_c_function_dq_to_abc1__c;
    // Generated from the component: dq_unb_pi_vsg.Sum1
    _dq_unb_pi_vsg_sum1__out[0] = _dq_unb_pi_vsg_bus_join14__out[0] + _dq_unb_pi_vsg_constant1__out;
    _dq_unb_pi_vsg_sum1__out[1] = _dq_unb_pi_vsg_bus_join14__out[1] + _dq_unb_pi_vsg_constant1__out;
    _dq_unb_pi_vsg_sum1__out[2] = _dq_unb_pi_vsg_bus_join14__out[2] + _dq_unb_pi_vsg_constant1__out;
    // Generated from the component: dq_unb_pi_vsg.Gain1
    _dq_unb_pi_vsg_gain1__out[0] = 0.5f * _dq_unb_pi_vsg_sum1__out[0];
    _dq_unb_pi_vsg_gain1__out[1] = 0.5f * _dq_unb_pi_vsg_sum1__out[1];
    _dq_unb_pi_vsg_gain1__out[2] = 0.5f * _dq_unb_pi_vsg_sum1__out[2];
    // Generated from the component: dq_unb_pi_vsg.Bus Split1
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
    // Generated from the component: dq_unb_pi_vsg.Unit Delay1
    m_States->_dq_unb_pi_vsg_unit_delay1__state = _dq_unb_pi_vsg_c_function_vsg__omega_vsg;
    // Generated from the component: dq_unb_pi_vsg.Unit Delay2
    m_States->_dq_unb_pi_vsg_unit_delay2__state = _dq_unb_pi_vsg_c_function_vsg__omega_vsg;
    // Generated from the component: dq_unb_pi_vsg.Integrator1
    m_States->_dq_unb_pi_vsg_integrator1__state += _dq_unb_pi_vsg_gain19__out * 5e-05;
    if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0)
        m_States->_dq_unb_pi_vsg_integrator1__reset_state = 1;
    else if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 < 0)
        m_States->_dq_unb_pi_vsg_integrator1__reset_state = -1;
    else
        m_States->_dq_unb_pi_vsg_integrator1__reset_state = 0;
    // Generated from the component: dq_unb_pi_vsg.Subsystem13.Integrator1
    m_States->_dq_unb_pi_vsg_subsystem13_integrator1__state += _dq_unb_pi_vsg_subsystem13_sum1__out * 5e-05;
    if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0)
        m_States->_dq_unb_pi_vsg_subsystem13_integrator1__reset_state = 1;
    else if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 < 0)
        m_States->_dq_unb_pi_vsg_subsystem13_integrator1__reset_state = -1;
    else
        m_States->_dq_unb_pi_vsg_subsystem13_integrator1__reset_state = 0;
    // Generated from the component: dq_unb_pi_vsg.Subsystem14.Integrator1
    m_States->_dq_unb_pi_vsg_subsystem14_integrator1__state += _dq_unb_pi_vsg_subsystem14_sum1__out * 5e-05;
    if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0)
        m_States->_dq_unb_pi_vsg_subsystem14_integrator1__reset_state = 1;
    else if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 < 0)
        m_States->_dq_unb_pi_vsg_subsystem14_integrator1__reset_state = -1;
    else
        m_States->_dq_unb_pi_vsg_subsystem14_integrator1__reset_state = 0;
    // Generated from the component: dq_unb_pi_vsg.Subsystem15.Integrator1
    m_States->_dq_unb_pi_vsg_subsystem15_integrator1__state += _dq_unb_pi_vsg_subsystem15_sum1__out * 5e-05;
    if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 > 0)
        m_States->_dq_unb_pi_vsg_subsystem15_integrator1__reset_state = 1;
    else if (_dq_unb_pi_vsg_sci_receive1_advanced_c_function__var3 < 0)
        m_States->_dq_unb_pi_vsg_subsystem15_integrator1__reset_state = -1;
    else
        m_States->_dq_unb_pi_vsg_subsystem15_integrator1__reset_state = 0;
    // Generated from the component: dq_unb_pi_vsg.RMS value4
    if (m_States->_dq_unb_pi_vsg_rms_value4__period_cnt >= 2 * M_PI) {
        m_States->_dq_unb_pi_vsg_rms_value4__period_cnt = fmod(m_States->_dq_unb_pi_vsg_rms_value4__period_cnt, 2 * M_PI);
    }
    m_States->_dq_unb_pi_vsg_rms_value4__period_cnt += 0.015707963267948967f;
    m_States->_dq_unb_pi_vsg_rms_value4__square_sum += _dq_unb_pi_vsg_adc__generic_7_scaling__out * _dq_unb_pi_vsg_adc__generic_7_scaling__out * 0.015707963267948967f;
    // Generated from the component: dq_unb_pi_vsg.C function PLL
    {
        m_States->_dq_unb_pi_vsg_c_function_pll__y_d = m_States->_dq_unb_pi_vsg_c_function_pll__y_d + 717.1314741035857f * 5e-05 * _dq_unb_pi_vsg_c_function_pll__e_d ;
        m_States->_dq_unb_pi_vsg_c_function_pll__theta = m_States->_dq_unb_pi_vsg_c_function_pll__theta + 5e-05 * _dq_unb_pi_vsg_c_function_pll__omega_pll ;
        if ( m_States->_dq_unb_pi_vsg_c_function_pll__theta >= 2 * M_PI )     {
            m_States->_dq_unb_pi_vsg_c_function_pll__theta = m_States->_dq_unb_pi_vsg_c_function_pll__theta - 2 * M_PI ;
        }
        if ( m_States->_dq_unb_pi_vsg_c_function_pll__theta < 0.0f )     {
            m_States->_dq_unb_pi_vsg_c_function_pll__theta = m_States->_dq_unb_pi_vsg_c_function_pll__theta + abs ( m_States->_dq_unb_pi_vsg_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem8.Subsystem6.LPF
    {
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__period = 1.0f / ( _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__omega_rads / ( 2 * M_PI ) ) ;
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__x_out = m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__period ) * ( _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__in - m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem9.Subsystem6.LPF
    {
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__period = 1.0f / ( _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__omega_rads / ( 2 * M_PI ) ) ;
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__x_out = m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__period ) * ( _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__in - m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem8.Subsystem6.LPF
    {
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__period = 1.0f / ( _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__omega_rads / ( 2 * M_PI ) ) ;
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__x_out = m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__period ) * ( _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__in - m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem9.Subsystem6.LPF
    {
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__period = 1.0f / ( _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__omega_rads / ( 2 * M_PI ) ) ;
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__x_out = m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__x_out + 5e-05 * 2 * M_PI * 1 / ( m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__period ) * ( _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__in - m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.RMS value3
    if (m_States->_dq_unb_pi_vsg_rms_value3__period_cnt >= 2 * M_PI) {
        m_States->_dq_unb_pi_vsg_rms_value3__period_cnt = fmod(m_States->_dq_unb_pi_vsg_rms_value3__period_cnt, 2 * M_PI);
    }
    m_States->_dq_unb_pi_vsg_rms_value3__period_cnt += 0.015707963267948967f;
    m_States->_dq_unb_pi_vsg_rms_value3__square_sum += _dq_unb_pi_vsg_gain15__out * _dq_unb_pi_vsg_gain15__out * 0.015707963267948967f;
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem8.Subsystem6.LPF1
    {
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__period = 1.0f / ( _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__omega_rads / ( 2 * M_PI ) ) ;
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__x_out = m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__period ) * ( _dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__in - m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem11.Subsystem9.Subsystem6.LPF1
    {
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__period = 1.0f / ( _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__omega_rads / ( 2 * M_PI ) ) ;
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__x_out = m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__period ) * ( _dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__in - m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem8.Subsystem6.LPF1
    {
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__period = 1.0f / ( _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__omega_rads / ( 2 * M_PI ) ) ;
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__x_out = m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__period ) * ( _dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__in - m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem10.Subsystem9.Subsystem6.LPF1
    {
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__period = 1.0f / ( _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__omega_rads / ( 2 * M_PI ) ) ;
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__x_out = m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__x_out + 5e-05 * 2 * M_PI * 1 / ( m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__period ) * ( _dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__in - m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__x_out ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.RMS value1
    if (m_States->_dq_unb_pi_vsg_rms_value1__period_cnt >= 2 * M_PI) {
        m_States->_dq_unb_pi_vsg_rms_value1__period_cnt = fmod(m_States->_dq_unb_pi_vsg_rms_value1__period_cnt, 2 * M_PI);
    }
    m_States->_dq_unb_pi_vsg_rms_value1__period_cnt += 0.015707963267948967f;
    m_States->_dq_unb_pi_vsg_rms_value1__square_sum += _dq_unb_pi_vsg_bus_split2__out * _dq_unb_pi_vsg_bus_split2__out * 0.015707963267948967f;
    // Generated from the component: dq_unb_pi_vsg.RMS value2
    if (m_States->_dq_unb_pi_vsg_rms_value2__period_cnt >= 2 * M_PI) {
        m_States->_dq_unb_pi_vsg_rms_value2__period_cnt = fmod(m_States->_dq_unb_pi_vsg_rms_value2__period_cnt, 2 * M_PI);
    }
    m_States->_dq_unb_pi_vsg_rms_value2__period_cnt += 0.015707963267948967f;
    m_States->_dq_unb_pi_vsg_rms_value2__square_sum += _dq_unb_pi_vsg_bus_split2__out1 * _dq_unb_pi_vsg_bus_split2__out1 * 0.015707963267948967f;
    // Generated from the component: dq_unb_pi_vsg.C function VSG
    {
        m_States->_dq_unb_pi_vsg_c_function_vsg__e_p = _dq_unb_pi_vsg_c_function_vsg__p_m_ref - _dq_unb_pi_vsg_c_function_vsg__p_s ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__e_q = _dq_unb_pi_vsg_c_function_vsg__q_s_ref - _dq_unb_pi_vsg_c_function_vsg__q_s ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__x_p = m_States->_dq_unb_pi_vsg_c_function_vsg__x_p + 0.1f * 5e-05 * m_States->_dq_unb_pi_vsg_c_function_vsg__e_p ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__x_q = m_States->_dq_unb_pi_vsg_c_function_vsg__x_q + 1.0f * 5e-05 * m_States->_dq_unb_pi_vsg_c_function_vsg__e_q ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__theta = m_States->_dq_unb_pi_vsg_c_function_vsg__theta + _dq_unb_pi_vsg_c_function_vsg__omega_vsg * 5e-05 ;
        if ( _dq_unb_pi_vsg_c_function_vsg__reset_int < 0.5f )     {
            m_States->_dq_unb_pi_vsg_c_function_vsg__theta = _dq_unb_pi_vsg_c_function_vsg__theta_pll ;
            m_States->_dq_unb_pi_vsg_c_function_vsg__x_p = 0.0f ;
            m_States->_dq_unb_pi_vsg_c_function_vsg__x_q = 0.0f ;
        }
        if ( m_States->_dq_unb_pi_vsg_c_function_vsg__theta >= 2 * M_PI )     {
            m_States->_dq_unb_pi_vsg_c_function_vsg__theta = m_States->_dq_unb_pi_vsg_c_function_vsg__theta - 2 * M_PI ;
        }
        m_States->_dq_unb_pi_vsg_c_function_vsg__x_isd = m_States->_dq_unb_pi_vsg_c_function_vsg__x_isd + 5e-05 * 2 * M_PI * 1 / ( 0.0024f ) * ( _dq_unb_pi_vsg_c_function_vsg__is_dq_ref [ 0 ] - m_States->_dq_unb_pi_vsg_c_function_vsg__x_isd ) ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__x_isq = m_States->_dq_unb_pi_vsg_c_function_vsg__x_isq + 5e-05 * 2 * M_PI * 1 / ( 0.0024f ) * ( _dq_unb_pi_vsg_c_function_vsg__is_dq_ref [ 1 ] - m_States->_dq_unb_pi_vsg_c_function_vsg__x_isq ) ;
    }
    // Generated from the component: dq_unb_pi_vsg.Subsystem13.Discrete Transfer Function2
    m_States->_dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__states[0] = _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__delay_line_in;
    // Generated from the component: dq_unb_pi_vsg.Subsystem14.Discrete Transfer Function2
    m_States->_dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__states[0] = _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__delay_line_in;
    // Generated from the component: dq_unb_pi_vsg.Subsystem15.Discrete Transfer Function2
    m_States->_dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__states[0] = _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__delay_line_in;
    // Generated from the component: dq_unb_pi_vsg.C function PI current controller
    {
        m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__e_d = _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq_ref [ 0 ] - _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq [ 0 ] ;
        m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__e_q = _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq_ref [ 1 ] - _dq_unb_pi_vsg_c_function_pi_current_controller__is_dq [ 1 ] ;
        m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_d = m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_d + 157.07963267948966f * 5e-05 * m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__e_d ;
        m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_q = m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_q + 157.07963267948966f * 5e-05 * m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__e_q ;
        if ( _dq_unb_pi_vsg_c_function_pi_current_controller__reset_int < 0.5f )     {
            m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_d = 0 ;
            m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_q = 0 ;
        }
    }
    AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcbRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdccRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
}


void dq_unb_pi_vsg_init0(dq_unb_pi_vsg_ModelData *p_m_Data) {
    // Initialize variables
    dq_unb_pi_vsg_ExtIn *ext_In = (dq_unb_pi_vsg_ExtIn *) p_m_Data->p_extIn;
    dq_unb_pi_vsg_ModelStates *m_States = (dq_unb_pi_vsg_ModelStates *) p_m_Data->p_States;
    // Init tunable properties if they exist
    AdcSetMode(ADC_ADCA, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	AdcSetMode(ADC_ADCC, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	AdcSetMode(ADC_ADCB, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
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
	// dq_unb_pi_vsg.ADC (Generic)1.ADC
	AdcaRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdcaRegs.ADCSOC3CTL.bit.ACQPS = 28;
	AdcaRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdcaRegs.ADCINTSEL1N2.bit.INT1SEL = 4;
	AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdcaRegs.ADCCTL2.bit.PRESCALE = 6;
	AdcaRegs.ADCCTL1.bit.ADCPWDNZ = 1;
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
	EPwm6Regs.TBPRD = 10000;
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
	// dq_unb_pi_vsg.GPIO DO (Generic)2.GPIO DO
	GpioCtrlRegs.GPADIR.bit.GPIO24 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO24 = 1;
	// dq_unb_pi_vsg.GPIO DO (Generic)1.GPIO DO
	GpioCtrlRegs.GPADIR.bit.GPIO9 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO9 = 1;
	// dq_unb_pi_vsg.ADC (Generic)4.ADC
	AdcbRegs.ADCSOC4CTL.bit.TRIGSEL = 15;
	AdcbRegs.ADCSOC4CTL.bit.CHSEL = 4;
	AdcbRegs.ADCSOC4CTL.bit.ACQPS = 28;
	AdcbRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdcbRegs.ADCINTSEL1N2.bit.INT1SEL = 2;
	AdcbRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdcbRegs.ADCCTL2.bit.PRESCALE = 6;
	AdcbRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// dq_unb_pi_vsg.ADC (Generic)7.ADC
	AdcaRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdcaRegs.ADCSOC2CTL.bit.ACQPS = 28;
	// dq_unb_pi_vsg.ADC (Generic)3.ADC
	AdcbRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdcbRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdcbRegs.ADCSOC2CTL.bit.ACQPS = 28;
	// dq_unb_pi_vsg.ADC (Generic)6.ADC
	AdcaRegs.ADCSOC1CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC1CTL.bit.CHSEL = 1;
	AdcaRegs.ADCSOC1CTL.bit.ACQPS = 28;
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
	// dq_unb_pi_vsg.ADC (Generic)2.ADC
	AdccRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdccRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdccRegs.ADCSOC2CTL.bit.ACQPS = 28;
	AdccRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdccRegs.ADCINTSEL1N2.bit.INT1SEL = 2;
	AdccRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdccRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdccRegs.ADCCTL2.bit.PRESCALE = 6;
	AdccRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// dq_unb_pi_vsg.ADC (Generic)5.ADC
	AdcaRegs.ADCSOC4CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC4CTL.bit.CHSEL = 4;
	AdcaRegs.ADCSOC4CTL.bit.ACQPS = 28;
    uint_t _dq_unb_pi_vsg_delay1__i;
    for (_dq_unb_pi_vsg_delay1__i = 0; _dq_unb_pi_vsg_delay1__i < 1; _dq_unb_pi_vsg_delay1__i++) {
        m_States->_dq_unb_pi_vsg_delay1__state[_dq_unb_pi_vsg_delay1__i] =  0.0f;
    }
    m_States->_dq_unb_pi_vsg_delay1__cbi = 0;
    {
        SerialComm.rx_defined = 1;
    }
    m_States->_dq_unb_pi_vsg_unit_delay1__state = 0.0f;
    m_States->_dq_unb_pi_vsg_unit_delay2__state = 0.0f;
    m_States->_dq_unb_pi_vsg_integrator1__state = 0.0f;
    m_States->_dq_unb_pi_vsg_integrator1__reset_state = 2;
    m_States->_dq_unb_pi_vsg_subsystem13_integrator1__state = 0.0f;
    m_States->_dq_unb_pi_vsg_subsystem13_integrator1__reset_state = 2;
    m_States->_dq_unb_pi_vsg_subsystem14_integrator1__state = 0.0f;
    m_States->_dq_unb_pi_vsg_subsystem14_integrator1__reset_state = 2;
    m_States->_dq_unb_pi_vsg_subsystem15_integrator1__state = 0.0f;
    m_States->_dq_unb_pi_vsg_subsystem15_integrator1__reset_state = 2;
    m_States->_dq_unb_pi_vsg_rms_value4__square_sum = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value4__sample_cnt = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value4__period_cnt = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value4__db_timer = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value4__previous_filtered_value = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value4__previous_correction = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value4__correction = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value4__previous_value = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value4__out_state = 0x0;
    {
        m_States->_dq_unb_pi_vsg_c_function_pll__y_q = 0 ;
        m_States->_dq_unb_pi_vsg_c_function_pll__y_d = 0 ;
        m_States->_dq_unb_pi_vsg_c_function_pll__theta = 0 ;
    }
    {
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__x_out = 0.0f ;
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf__period = 20e-3 ;
    }
    {
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__x_out = 0.0f ;
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf__period = 20e-3 ;
    }
    {
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__x_out = 0.0f ;
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf__period = 20e-3 ;
    }
    {
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__x_out = 0.0f ;
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf__period = 20e-3 ;
    }
    m_States->_dq_unb_pi_vsg_rms_value3__square_sum = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value3__sample_cnt = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value3__period_cnt = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value3__db_timer = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value3__previous_filtered_value = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value3__previous_correction = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value3__correction = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value3__previous_value = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value3__out_state = 0x0;
    {
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__x_out = 0.0f ;
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem8_subsystem6_lpf1__period = 20e-3 ;
    }
    {
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__x_out = 0.0f ;
        m_States->_dq_unb_pi_vsg_subsystem11_subsystem9_subsystem6_lpf1__period = 20e-3 ;
    }
    {
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__x_out = 0.0f ;
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem8_subsystem6_lpf1__period = 20e-3 ;
    }
    {
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__x_out = 0.0f ;
        m_States->_dq_unb_pi_vsg_subsystem10_subsystem9_subsystem6_lpf1__period = 20e-3 ;
    }
    m_States->_dq_unb_pi_vsg_rms_value1__square_sum = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value1__sample_cnt = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value1__period_cnt = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value1__db_timer = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value1__previous_filtered_value = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value1__previous_correction = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value1__correction = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value1__previous_value = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value1__out_state = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value2__square_sum = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value2__sample_cnt = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value2__period_cnt = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value2__db_timer = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value2__previous_filtered_value = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value2__previous_correction = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value2__correction = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value2__previous_value = 0x0;
    m_States->_dq_unb_pi_vsg_rms_value2__out_state = 0x0;
    {
        m_States->_dq_unb_pi_vsg_c_function_vsg__x_p = 0.0f ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__x_q = 0.0f ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__theta = 0.0f ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__x_isd = 0.0f ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__x_isq = 0.0f ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__e_p = 0.0f ;
        m_States->_dq_unb_pi_vsg_c_function_vsg__e_q = 0.0f ;
    }
    uint_t _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i;
    for (_dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i++) {
        m_States->_dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__states[_dq_unb_pi_vsg_subsystem13_discrete_transfer_function2__i] = 0;
    }
    uint_t _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i;
    for (_dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i++) {
        m_States->_dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__states[_dq_unb_pi_vsg_subsystem14_discrete_transfer_function2__i] = 0;
    }
    uint_t _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i;
    for (_dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i = 0; _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i < 1; _dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i++) {
        m_States->_dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__states[_dq_unb_pi_vsg_subsystem15_discrete_transfer_function2__i] = 0;
    }
    {
        m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__e_d = 0.0f ;
        m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__e_q = 0.0f ;
        m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_d = 0.0f ;
        m_States->_dq_unb_pi_vsg_c_function_pi_current_controller__y_q = 0.0f ;
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
