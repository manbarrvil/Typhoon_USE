/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: dq_statcom_react_ctrl.c
*
* Code generated from model             : 'dq_statcom_react_ctrl_v1'.
* Subsystem selected for code generation: 'dq_statcom_react_ctrl'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 26-May-2025 @ 02:51:28 PM
*
* Generated using TI C2000 Toolbox. Platform: LAUNCHXL-F28379D
*
*/
#include "dq_statcom_react_ctrl.h"
// custom defines
// Model entry point functions


#pragma CODE_SECTION(dq_statcom_react_ctrl_step0, ".TI.ramfunc")
void dq_statcom_react_ctrl_step0(dq_statcom_react_ctrl_ModelData *p_m_Data) {
    dq_statcom_react_ctrl_ExtIn *ext_In = (dq_statcom_react_ctrl_ExtIn *) p_m_Data->p_extIn;
    dq_statcom_react_ctrl_ExtOut *ext_Out = (dq_statcom_react_ctrl_ExtOut *) p_m_Data->p_extOut;
    dq_statcom_react_ctrl_ModelSinks *m_Sinks = (dq_statcom_react_ctrl_ModelSinks *) p_m_Data->p_Sinks;
    dq_statcom_react_ctrl_ModelStates *m_States = (dq_statcom_react_ctrl_ModelStates *) p_m_Data->p_States;
    // Local variables
    real_t _dq_statcom_react_ctrl_adc__generic_1_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_1_offset__out = 1.5f;
    real_t _dq_statcom_react_ctrl_adc__generic_1_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_10_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_10_offset__out = 1.5f;
    real_t _dq_statcom_react_ctrl_adc__generic_10_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_2_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_2_offset__out = 1.5f;
    real_t _dq_statcom_react_ctrl_adc__generic_2_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_3_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_3_offset__out = 1.5f;
    real_t _dq_statcom_react_ctrl_adc__generic_3_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_4_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_4_offset__out = 1.5f;
    real_t _dq_statcom_react_ctrl_adc__generic_4_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_5_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_5_offset__out = 1.5f;
    real_t _dq_statcom_react_ctrl_adc__generic_5_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_6_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_6_offset__out = 1.5f;
    real_t _dq_statcom_react_ctrl_adc__generic_6_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_7_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_7_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_7_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_8_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_8_offset__out = 1.5f;
    real_t _dq_statcom_react_ctrl_adc__generic_8_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_9_adc_advanced_c_function__out;
    real_t _dq_statcom_react_ctrl_adc__generic_9_offset__out = 1.5f;
    real_t _dq_statcom_react_ctrl_adc__generic_9_raw_offset__out = 0.0f;
    real_t _dq_statcom_react_ctrl_constant1__out = 1.0f;
    real_t _dq_statcom_react_ctrl_constant2__out = 0.5f;
    real_t _dq_statcom_react_ctrl_constant4__out = 1.0f;
    real_t _dq_statcom_react_ctrl_delay1__out;
    real_t _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1;
    real_t _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var2;
    real_t _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var3;
    real_t _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var4;
    real_t _dq_statcom_react_ctrl_q_ref_gen__out = 0.0f;
    real_t _dq_statcom_react_ctrl_adc__generic_1_sum2__out;
    real_t _dq_statcom_react_ctrl_adc__generic_10_sum2__out;
    real_t _dq_statcom_react_ctrl_adc__generic_2_sum2__out;
    real_t _dq_statcom_react_ctrl_adc__generic_3_sum2__out;
    real_t _dq_statcom_react_ctrl_adc__generic_4_sum2__out;
    real_t _dq_statcom_react_ctrl_adc__generic_5_sum2__out;
    real_t _dq_statcom_react_ctrl_adc__generic_6_sum2__out;
    real_t _dq_statcom_react_ctrl_adc__generic_7_sum2__out;
    real_t _dq_statcom_react_ctrl_adc__generic_8_sum2__out;
    real_t _dq_statcom_react_ctrl_adc__generic_9_sum2__out;
    real_t _dq_statcom_react_ctrl_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in;
    real_t _dq_statcom_react_ctrl_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out;
    real_t _dq_statcom_react_ctrl_sum2__out;
    real_t _dq_statcom_react_ctrl_gpio_do__generic_1_gpio_do_advanced_c_function__in;
    real_t _dq_statcom_react_ctrl_rate_limiter1__out;
    real_t _dq_statcom_react_ctrl_rate_limiter1__rising_rate_lim[1];
    real_t _dq_statcom_react_ctrl_rate_limiter1__falling_rate_lim[1];
    real_t _dq_statcom_react_ctrl_adc__generic_1_12_bit_to_refv__out;
    real_t _dq_statcom_react_ctrl_adc__generic_10_12_bit_to_refv__out;
    real_t _dq_statcom_react_ctrl_adc__generic_2_12_bit_to_refv__out;
    real_t _dq_statcom_react_ctrl_adc__generic_3_12_bit_to_refv__out;
    real_t _dq_statcom_react_ctrl_adc__generic_4_12_bit_to_refv__out;
    real_t _dq_statcom_react_ctrl_adc__generic_5_12_bit_to_refv__out;
    real_t _dq_statcom_react_ctrl_adc__generic_6_12_bit_to_refv__out;
    real_t _dq_statcom_react_ctrl_adc__generic_7_12_bit_to_refv__out;
    real_t _dq_statcom_react_ctrl_adc__generic_8_12_bit_to_refv__out;
    real_t _dq_statcom_react_ctrl_adc__generic_9_12_bit_to_refv__out;
    uint_t _dq_statcom_react_ctrl_epwm__generic_2_epwm_1_advanced_c_function__CMPA;
    int_t _dq_statcom_react_ctrl_epwm__generic_2_epwm_1_advanced_c_function__A;
    int_t _dq_statcom_react_ctrl_epwm__generic_2_epwm_1_advanced_c_function__B;
    real_t _dq_statcom_react_ctrl_gpio_do__generic_2_gpio_do_advanced_c_function__in;
    real_t _dq_statcom_react_ctrl_limit1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_1_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_10_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_2_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_3_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_4_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_5_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_6_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_7_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_8_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_9_sum1__out;
    real_t _dq_statcom_react_ctrl_adc__generic_1_scaling__out;
    real_t _dq_statcom_react_ctrl_adc__generic_10_scaling__out;
    real_t _dq_statcom_react_ctrl_adc__generic_2_scaling__out;
    real_t _dq_statcom_react_ctrl_adc__generic_3_scaling__out;
    real_t _dq_statcom_react_ctrl_adc__generic_4_scaling__out;
    real_t _dq_statcom_react_ctrl_adc__generic_5_scaling__out;
    real_t _dq_statcom_react_ctrl_adc__generic_6_scaling__out;
    real_t _dq_statcom_react_ctrl_adc__generic_7_scaling__out;
    real_t _dq_statcom_react_ctrl_adc__generic_8_scaling__out;
    real_t _dq_statcom_react_ctrl_adc__generic_9_scaling__out;
    real_t _dq_statcom_react_ctrl_bus_join3__out[3];
    real_t _dq_statcom_react_ctrl_bus_join4__out[3];
    real_t _dq_statcom_react_ctrl_c_function_pi_voltage_controller__reset_int;
    real_t _dq_statcom_react_ctrl_c_function_pi_voltage_controller__v_dc;
    real_t _dq_statcom_react_ctrl_c_function_pi_voltage_controller__v_dc_ref;
    real_t _dq_statcom_react_ctrl_c_function_pi_voltage_controller__p_ref;
    real_t _dq_statcom_react_ctrl_c_function_powers__i_a;
    real_t _dq_statcom_react_ctrl_c_function_powers__i_b;
    real_t _dq_statcom_react_ctrl_c_function_powers__i_c;
    real_t _dq_statcom_react_ctrl_c_function_powers__v_a;
    real_t _dq_statcom_react_ctrl_c_function_powers__v_b;
    real_t _dq_statcom_react_ctrl_c_function_powers__v_c;
    real_t _dq_statcom_react_ctrl_c_function_powers__p;
    real_t _dq_statcom_react_ctrl_c_function_powers__p_f;
    real_t _dq_statcom_react_ctrl_c_function_powers__q;
    real_t _dq_statcom_react_ctrl_c_function_powers__q_f;
    real_t _dq_statcom_react_ctrl_c_function_pll__abc[3];
    real_t _dq_statcom_react_ctrl_c_function_pll__init_pll;
    real_t _dq_statcom_react_ctrl_c_function_pll__d;
    real_t _dq_statcom_react_ctrl_c_function_pll__e_q;
    real_t _dq_statcom_react_ctrl_c_function_pll__omega_pll;
    real_t _dq_statcom_react_ctrl_c_function_pll__q;
    real_t _dq_statcom_react_ctrl_c_function_pll__theta_pll;
    real_t _dq_statcom_react_ctrl_c_function1__q_gen;
    real_t _dq_statcom_react_ctrl_c_function1__q_ref_gen;
    real_t _dq_statcom_react_ctrl_c_function1__react_power_comp;
    real_t _dq_statcom_react_ctrl_c_function1__q_ref;
    real_t _dq_statcom_react_ctrl_bus_join6__out[2];
    real_t _dq_statcom_react_ctrl_c_function_abc_to_dq__abc[3];
    real_t _dq_statcom_react_ctrl_c_function_abc_to_dq__theta;
    real_t _dq_statcom_react_ctrl_c_function_abc_to_dq__d;
    real_t _dq_statcom_react_ctrl_c_function_abc_to_dq__q;
    real_t _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var1;
    real_t _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var2;
    real_t _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var3;
    real_t _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var4;
    real_t _dq_statcom_react_ctrl_bus_join7__out[2];
    real_t _dq_statcom_react_ctrl_bus_join5__out[2];
    real_t _dq_statcom_react_ctrl_c_function_current_refer__pq_ref[2];
    real_t _dq_statcom_react_ctrl_c_function_current_refer__reset_int;
    real_t _dq_statcom_react_ctrl_c_function_current_refer__vs_dq[2];
    real_t _dq_statcom_react_ctrl_c_function_current_refer__is_d_ref;
    real_t _dq_statcom_react_ctrl_c_function_current_refer__is_q_ref;
    real_t _dq_statcom_react_ctrl_bus_join12__out[2];
    real_t _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq[2];
    real_t _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq_ref[2];
    real_t _dq_statcom_react_ctrl_c_function_pi_current_controller__omega_pll;
    real_t _dq_statcom_react_ctrl_c_function_pi_current_controller__reset_int;
    real_t _dq_statcom_react_ctrl_c_function_pi_current_controller__v_dc;
    real_t _dq_statcom_react_ctrl_c_function_pi_current_controller__vs_dq[2];
    real_t _dq_statcom_react_ctrl_c_function_pi_current_controller__eta_d;
    real_t _dq_statcom_react_ctrl_c_function_pi_current_controller__eta_q;
    real_t _dq_statcom_react_ctrl_bus_join8__out[2];
    real_t _dq_statcom_react_ctrl_c_function_dq_to_abc__dq[2];
    real_t _dq_statcom_react_ctrl_c_function_dq_to_abc__theta;
    real_t _dq_statcom_react_ctrl_c_function_dq_to_abc__a;
    real_t _dq_statcom_react_ctrl_c_function_dq_to_abc__b;
    real_t _dq_statcom_react_ctrl_c_function_dq_to_abc__c;
    real_t _dq_statcom_react_ctrl_bus_join9__out[3];
    real_t _dq_statcom_react_ctrl_sum1__out[3];
    real_t _dq_statcom_react_ctrl_gain1__out[3];
    real_t _dq_statcom_react_ctrl_bus_split1__out;
    real_t _dq_statcom_react_ctrl_bus_split1__out1;
    real_t _dq_statcom_react_ctrl_bus_split1__out2;
    real_t _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in;
    real_t _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out;
    real_t _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in;
    real_t _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out;
    real_t _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in;
    real_t _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out;
    uint_t _dq_statcom_react_ctrl_epwm__generic_1_epwm_1_advanced_c_function__CMPA;
    int_t _dq_statcom_react_ctrl_epwm__generic_1_epwm_1_advanced_c_function__A;
    int_t _dq_statcom_react_ctrl_epwm__generic_1_epwm_1_advanced_c_function__B;
    uint_t _dq_statcom_react_ctrl_epwm__generic_1_epwm_2_advanced_c_function__CMPA;
    int_t _dq_statcom_react_ctrl_epwm__generic_1_epwm_2_advanced_c_function__A;
    int_t _dq_statcom_react_ctrl_epwm__generic_1_epwm_2_advanced_c_function__B;
    uint_t _dq_statcom_react_ctrl_epwm__generic_1_epwm_3_advanced_c_function__CMPA;
    int_t _dq_statcom_react_ctrl_epwm__generic_1_epwm_3_advanced_c_function__A;
    int_t _dq_statcom_react_ctrl_epwm__generic_1_epwm_3_advanced_c_function__B;
    // Set tunable parameters
    // Output block
    while(AdcaRegs.ADCCTL1.bit.ADCBSY);
	while(AdcbRegs.ADCCTL1.bit.ADCBSY);
	while(AdccRegs.ADCCTL1.bit.ADCBSY);
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)1.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_1_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT3;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)10.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_10_adc_advanced_c_function__out = AdcbResultRegs.ADCRESULT5;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)2.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_2_adc_advanced_c_function__out = AdccResultRegs.ADCRESULT2;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)3.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_3_adc_advanced_c_function__out = AdcbResultRegs.ADCRESULT2;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)4.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_4_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT14;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)5.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_5_adc_advanced_c_function__out = AdccResultRegs.ADCRESULT3;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)6.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_6_adc_advanced_c_function__out = AdcbResultRegs.ADCRESULT3;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)7.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_7_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT2;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)8.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_8_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT15;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)9.ADC.advanced c function
    {
        _dq_statcom_react_ctrl_adc__generic_9_adc_advanced_c_function__out = AdccResultRegs.ADCRESULT5;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.Delay1
    _dq_statcom_react_ctrl_delay1__out = m_States->_dq_statcom_react_ctrl_delay1__state[m_States->_dq_statcom_react_ctrl_delay1__cbi];
    // Generated from the component: dq_STATCOM_react_ctrl.SCI Receive1.advanced c function
    {
        Receive_data(&SerialComm, m_States->_dq_statcom_react_ctrl_sci_receive1_advanced_c_function__state_var, 4);
        _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1 = m_States->_dq_statcom_react_ctrl_sci_receive1_advanced_c_function__state_var[0];
        _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var2 = m_States->_dq_statcom_react_ctrl_sci_receive1_advanced_c_function__state_var[1];
        _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var3 = m_States->_dq_statcom_react_ctrl_sci_receive1_advanced_c_function__state_var[2];
        _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var4 = m_States->_dq_statcom_react_ctrl_sci_receive1_advanced_c_function__state_var[3];
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)1.Sum2
    _dq_statcom_react_ctrl_adc__generic_1_sum2__out = _dq_statcom_react_ctrl_adc__generic_1_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_1_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)10.Sum2
    _dq_statcom_react_ctrl_adc__generic_10_sum2__out = _dq_statcom_react_ctrl_adc__generic_10_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_10_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)2.Sum2
    _dq_statcom_react_ctrl_adc__generic_2_sum2__out = _dq_statcom_react_ctrl_adc__generic_2_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_2_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)3.Sum2
    _dq_statcom_react_ctrl_adc__generic_3_sum2__out = _dq_statcom_react_ctrl_adc__generic_3_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_3_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)4.Sum2
    _dq_statcom_react_ctrl_adc__generic_4_sum2__out = _dq_statcom_react_ctrl_adc__generic_4_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_4_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)5.Sum2
    _dq_statcom_react_ctrl_adc__generic_5_sum2__out = _dq_statcom_react_ctrl_adc__generic_5_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_5_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)6.Sum2
    _dq_statcom_react_ctrl_adc__generic_6_sum2__out = _dq_statcom_react_ctrl_adc__generic_6_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_6_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)7.Sum2
    _dq_statcom_react_ctrl_adc__generic_7_sum2__out = _dq_statcom_react_ctrl_adc__generic_7_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_7_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)8.Sum2
    _dq_statcom_react_ctrl_adc__generic_8_sum2__out = _dq_statcom_react_ctrl_adc__generic_8_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_8_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)9.Sum2
    _dq_statcom_react_ctrl_adc__generic_9_sum2__out = _dq_statcom_react_ctrl_adc__generic_9_adc_advanced_c_function__out - _dq_statcom_react_ctrl_adc__generic_9_raw_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA
    _dq_statcom_react_ctrl_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in = _dq_statcom_react_ctrl_constant2__out;
    {
        _dq_statcom_react_ctrl_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out = _dq_statcom_react_ctrl_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in * 5000 ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.Sum2
    _dq_statcom_react_ctrl_sum2__out = _dq_statcom_react_ctrl_constant4__out - _dq_statcom_react_ctrl_delay1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.GPIO DO (Generic)1.GPIO DO.advanced c function
    _dq_statcom_react_ctrl_gpio_do__generic_1_gpio_do_advanced_c_function__in = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var4;
    {
        if ( _dq_statcom_react_ctrl_gpio_do__generic_1_gpio_do_advanced_c_function__in > 0.5f )     {
            GpioDataRegs.GPASET.bit.GPIO9 = 1;
        }
        else     {
            GpioDataRegs.GPACLEAR.bit.GPIO9 = 1 ;
        }
    }
    // Generated from the component: dq_STATCOM_react_ctrl.Rate Limiter1
    _dq_statcom_react_ctrl_rate_limiter1__rising_rate_lim[0] = 10000.0f * 5e-05;
    _dq_statcom_react_ctrl_rate_limiter1__falling_rate_lim[0] = -10000.0f * 5e-05;
    if (m_States->_dq_statcom_react_ctrl_rate_limiter1__first_step) {
        _dq_statcom_react_ctrl_rate_limiter1__out = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1;
        m_States->_dq_statcom_react_ctrl_rate_limiter1__state = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1;
    } else {
        _dq_statcom_react_ctrl_rate_limiter1__out = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1;
        if (_dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1 - m_States->_dq_statcom_react_ctrl_rate_limiter1__state > _dq_statcom_react_ctrl_rate_limiter1__rising_rate_lim[0])
            _dq_statcom_react_ctrl_rate_limiter1__out = m_States->_dq_statcom_react_ctrl_rate_limiter1__state + (_dq_statcom_react_ctrl_rate_limiter1__rising_rate_lim[0]);
        if (_dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1 - m_States->_dq_statcom_react_ctrl_rate_limiter1__state < _dq_statcom_react_ctrl_rate_limiter1__falling_rate_lim[0])
            _dq_statcom_react_ctrl_rate_limiter1__out = m_States->_dq_statcom_react_ctrl_rate_limiter1__state + (_dq_statcom_react_ctrl_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)1.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_1_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_1_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)10.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_10_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_10_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)2.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_2_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_2_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)3.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_3_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_3_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)4.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_4_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_4_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)5.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_5_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_5_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)6.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_6_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_6_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)7.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_7_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_7_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)8.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_8_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_8_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)9.12_bit_to_refV
    _dq_statcom_react_ctrl_adc__generic_9_12_bit_to_refv__out = 0.0007326007326007326f * _dq_statcom_react_ctrl_adc__generic_9_sum2__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ePWM (Generic)2.ePWM 1.advanced c function
    _dq_statcom_react_ctrl_epwm__generic_2_epwm_1_advanced_c_function__CMPA = _dq_statcom_react_ctrl_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out;
    {
        EPwm6Regs.CMPA.bit.CMPA = _dq_statcom_react_ctrl_epwm__generic_2_epwm_1_advanced_c_function__CMPA;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.GPIO DO (Generic)2.GPIO DO.advanced c function
    _dq_statcom_react_ctrl_gpio_do__generic_2_gpio_do_advanced_c_function__in = _dq_statcom_react_ctrl_sum2__out;
    {
        if ( _dq_statcom_react_ctrl_gpio_do__generic_2_gpio_do_advanced_c_function__in > 0.5f )     {
            GpioDataRegs.GPASET.bit.GPIO24 = 1;
        }
        else     {
            GpioDataRegs.GPACLEAR.bit.GPIO24 = 1 ;
        }
    }
    // Generated from the component: dq_STATCOM_react_ctrl.Limit1
    _dq_statcom_react_ctrl_limit1__out = MIN(MAX(_dq_statcom_react_ctrl_rate_limiter1__out, 600.0f), 800.0f);
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)1.Sum1
    _dq_statcom_react_ctrl_adc__generic_1_sum1__out = _dq_statcom_react_ctrl_adc__generic_1_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_1_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)10.Sum1
    _dq_statcom_react_ctrl_adc__generic_10_sum1__out = _dq_statcom_react_ctrl_adc__generic_10_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_10_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)2.Sum1
    _dq_statcom_react_ctrl_adc__generic_2_sum1__out = _dq_statcom_react_ctrl_adc__generic_2_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_2_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)3.Sum1
    _dq_statcom_react_ctrl_adc__generic_3_sum1__out = _dq_statcom_react_ctrl_adc__generic_3_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_3_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)4.Sum1
    _dq_statcom_react_ctrl_adc__generic_4_sum1__out = _dq_statcom_react_ctrl_adc__generic_4_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_4_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)5.Sum1
    _dq_statcom_react_ctrl_adc__generic_5_sum1__out = _dq_statcom_react_ctrl_adc__generic_5_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_5_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)6.Sum1
    _dq_statcom_react_ctrl_adc__generic_6_sum1__out = _dq_statcom_react_ctrl_adc__generic_6_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_6_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)7.Sum1
    _dq_statcom_react_ctrl_adc__generic_7_sum1__out = _dq_statcom_react_ctrl_adc__generic_7_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_7_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)8.Sum1
    _dq_statcom_react_ctrl_adc__generic_8_sum1__out = _dq_statcom_react_ctrl_adc__generic_8_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_8_offset__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)9.Sum1
    _dq_statcom_react_ctrl_adc__generic_9_sum1__out = _dq_statcom_react_ctrl_adc__generic_9_12_bit_to_refv__out - _dq_statcom_react_ctrl_adc__generic_9_offset__out;
    _dq_statcom_react_ctrl_adc__generic_1_scaling__out = 30.0f * _dq_statcom_react_ctrl_adc__generic_1_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)10.scaling
    _dq_statcom_react_ctrl_adc__generic_10_scaling__out = 30.0f * _dq_statcom_react_ctrl_adc__generic_10_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)2.scaling
    _dq_statcom_react_ctrl_adc__generic_2_scaling__out = 30.0f * _dq_statcom_react_ctrl_adc__generic_2_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)3.scaling
    _dq_statcom_react_ctrl_adc__generic_3_scaling__out = 30.0f * _dq_statcom_react_ctrl_adc__generic_3_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)4.scaling
    _dq_statcom_react_ctrl_adc__generic_4_scaling__out = 240.0f * _dq_statcom_react_ctrl_adc__generic_4_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)5.scaling
    _dq_statcom_react_ctrl_adc__generic_5_scaling__out = 240.0f * _dq_statcom_react_ctrl_adc__generic_5_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)6.scaling
    _dq_statcom_react_ctrl_adc__generic_6_scaling__out = 240.0f * _dq_statcom_react_ctrl_adc__generic_6_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)7.scaling
    _dq_statcom_react_ctrl_adc__generic_7_scaling__out = 300.0f * _dq_statcom_react_ctrl_adc__generic_7_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)8.scaling
    _dq_statcom_react_ctrl_adc__generic_8_scaling__out = 30.0f * _dq_statcom_react_ctrl_adc__generic_8_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.ADC (Generic)9.scaling
    _dq_statcom_react_ctrl_adc__generic_9_scaling__out = 30.0f * _dq_statcom_react_ctrl_adc__generic_9_sum1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.Bus Join3
    _dq_statcom_react_ctrl_bus_join3__out[0] = _dq_statcom_react_ctrl_adc__generic_1_scaling__out;
    _dq_statcom_react_ctrl_bus_join3__out[1] = _dq_statcom_react_ctrl_adc__generic_2_scaling__out;
    _dq_statcom_react_ctrl_bus_join3__out[2] = _dq_statcom_react_ctrl_adc__generic_3_scaling__out;
    // Generated from the component: dq_STATCOM_react_ctrl.Bus Join4
    _dq_statcom_react_ctrl_bus_join4__out[0] = _dq_statcom_react_ctrl_adc__generic_4_scaling__out;
    _dq_statcom_react_ctrl_bus_join4__out[1] = _dq_statcom_react_ctrl_adc__generic_5_scaling__out;
    _dq_statcom_react_ctrl_bus_join4__out[2] = _dq_statcom_react_ctrl_adc__generic_6_scaling__out;
    // Generated from the component: dq_STATCOM_react_ctrl.C function PI voltage controller
    _dq_statcom_react_ctrl_c_function_pi_voltage_controller__reset_int = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var4;
    _dq_statcom_react_ctrl_c_function_pi_voltage_controller__v_dc = _dq_statcom_react_ctrl_adc__generic_7_scaling__out;
    _dq_statcom_react_ctrl_c_function_pi_voltage_controller__v_dc_ref = _dq_statcom_react_ctrl_limit1__out;
    {
        _dq_statcom_react_ctrl_c_function_pi_voltage_controller__p_ref = - ( 0.22f * m_States->_dq_statcom_react_ctrl_c_function_pi_voltage_controller__e_dc + m_States->_dq_statcom_react_ctrl_c_function_pi_voltage_controller__y_dc ) ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.C function powers
    _dq_statcom_react_ctrl_c_function_powers__i_a = _dq_statcom_react_ctrl_adc__generic_8_scaling__out;
    _dq_statcom_react_ctrl_c_function_powers__i_b = _dq_statcom_react_ctrl_adc__generic_9_scaling__out;
    _dq_statcom_react_ctrl_c_function_powers__i_c = _dq_statcom_react_ctrl_adc__generic_10_scaling__out;
    _dq_statcom_react_ctrl_c_function_powers__v_a = _dq_statcom_react_ctrl_adc__generic_4_scaling__out;
    _dq_statcom_react_ctrl_c_function_powers__v_b = _dq_statcom_react_ctrl_adc__generic_5_scaling__out;
    _dq_statcom_react_ctrl_c_function_powers__v_c = _dq_statcom_react_ctrl_adc__generic_6_scaling__out;
    {
        _dq_statcom_react_ctrl_c_function_powers__p = _dq_statcom_react_ctrl_c_function_powers__v_a * _dq_statcom_react_ctrl_c_function_powers__i_a + _dq_statcom_react_ctrl_c_function_powers__v_b * _dq_statcom_react_ctrl_c_function_powers__i_b + _dq_statcom_react_ctrl_c_function_powers__v_c * _dq_statcom_react_ctrl_c_function_powers__i_c ;
        _dq_statcom_react_ctrl_c_function_powers__q = 1 / sqrt ( 3 ) * ( _dq_statcom_react_ctrl_c_function_powers__i_c * ( _dq_statcom_react_ctrl_c_function_powers__v_a - _dq_statcom_react_ctrl_c_function_powers__v_b ) + _dq_statcom_react_ctrl_c_function_powers__i_a * ( _dq_statcom_react_ctrl_c_function_powers__v_b - _dq_statcom_react_ctrl_c_function_powers__v_c ) + _dq_statcom_react_ctrl_c_function_powers__i_b * ( _dq_statcom_react_ctrl_c_function_powers__v_c - _dq_statcom_react_ctrl_c_function_powers__v_a ) ) ;
        _dq_statcom_react_ctrl_c_function_powers__p_f = m_States->_dq_statcom_react_ctrl_c_function_powers__p_fil ;
        _dq_statcom_react_ctrl_c_function_powers__q_f = m_States->_dq_statcom_react_ctrl_c_function_powers__q_fil ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.C function PLL
    _dq_statcom_react_ctrl_c_function_pll__abc[0] = _dq_statcom_react_ctrl_bus_join4__out[0];
    _dq_statcom_react_ctrl_c_function_pll__abc[1] = _dq_statcom_react_ctrl_bus_join4__out[1];
    _dq_statcom_react_ctrl_c_function_pll__abc[2] = _dq_statcom_react_ctrl_bus_join4__out[2];
    _dq_statcom_react_ctrl_c_function_pll__init_pll = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var3;
    {
        _dq_statcom_react_ctrl_c_function_pll__d = 2.0f / 3.0f * ( cos ( m_States->_dq_statcom_react_ctrl_c_function_pll__theta ) * _dq_statcom_react_ctrl_c_function_pll__abc [ 0 ] + cos ( m_States->_dq_statcom_react_ctrl_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_pll__abc [ 1 ] + cos ( m_States->_dq_statcom_react_ctrl_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_pll__abc [ 2 ] ) ;
        _dq_statcom_react_ctrl_c_function_pll__q = 2.0f / 3.0f * ( - sin ( m_States->_dq_statcom_react_ctrl_c_function_pll__theta ) * _dq_statcom_react_ctrl_c_function_pll__abc [ 0 ] - sin ( m_States->_dq_statcom_react_ctrl_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_pll__abc [ 1 ] - sin ( m_States->_dq_statcom_react_ctrl_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_pll__abc [ 2 ] ) ;
        _dq_statcom_react_ctrl_c_function_pll__e_q = _dq_statcom_react_ctrl_c_function_pll__q ;
        _dq_statcom_react_ctrl_c_function_pll__omega_pll = 1.8f * _dq_statcom_react_ctrl_c_function_pll__e_q + m_States->_dq_statcom_react_ctrl_c_function_pll__y_q ;
        _dq_statcom_react_ctrl_c_function_pll__theta_pll = m_States->_dq_statcom_react_ctrl_c_function_pll__theta ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.C function1
    _dq_statcom_react_ctrl_c_function1__q_gen = _dq_statcom_react_ctrl_c_function_powers__q_f;
    _dq_statcom_react_ctrl_c_function1__q_ref_gen = _dq_statcom_react_ctrl_q_ref_gen__out;
    _dq_statcom_react_ctrl_c_function1__react_power_comp = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var2;
    {
        _dq_statcom_react_ctrl_c_function1__q_ref = - ( 0.01f * m_States->_dq_statcom_react_ctrl_c_function1__e_qref + m_States->_dq_statcom_react_ctrl_c_function1__y_qref ) ;
    }
    _dq_statcom_react_ctrl_bus_join6__out[0] = _dq_statcom_react_ctrl_c_function_pll__d;
    _dq_statcom_react_ctrl_bus_join6__out[1] = _dq_statcom_react_ctrl_c_function_pll__q;
    // Generated from the component: dq_STATCOM_react_ctrl.C function abc to dq
    _dq_statcom_react_ctrl_c_function_abc_to_dq__abc[0] = _dq_statcom_react_ctrl_bus_join3__out[0];
    _dq_statcom_react_ctrl_c_function_abc_to_dq__abc[1] = _dq_statcom_react_ctrl_bus_join3__out[1];
    _dq_statcom_react_ctrl_c_function_abc_to_dq__abc[2] = _dq_statcom_react_ctrl_bus_join3__out[2];
    _dq_statcom_react_ctrl_c_function_abc_to_dq__theta = _dq_statcom_react_ctrl_c_function_pll__theta_pll;
    {
        _dq_statcom_react_ctrl_c_function_abc_to_dq__d = 2.0f / 3.0f * ( cos ( _dq_statcom_react_ctrl_c_function_abc_to_dq__theta ) * _dq_statcom_react_ctrl_c_function_abc_to_dq__abc [ 0 ] + cos ( _dq_statcom_react_ctrl_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_abc_to_dq__abc [ 1 ] + cos ( _dq_statcom_react_ctrl_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_abc_to_dq__abc [ 2 ] ) ;
        _dq_statcom_react_ctrl_c_function_abc_to_dq__q = 2.0f / 3.0f * ( - sin ( _dq_statcom_react_ctrl_c_function_abc_to_dq__theta ) * _dq_statcom_react_ctrl_c_function_abc_to_dq__abc [ 0 ] - sin ( _dq_statcom_react_ctrl_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_abc_to_dq__abc [ 1 ] - sin ( _dq_statcom_react_ctrl_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.SCI Send1.advanced c function
    _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var1 = _dq_statcom_react_ctrl_adc__generic_7_scaling__out;
    _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var2 = _dq_statcom_react_ctrl_c_function_powers__q_f;
    _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var3 = _dq_statcom_react_ctrl_c_function_pll__omega_pll;
    _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var4 = _dq_statcom_react_ctrl_c_function_pll__d;
    {
        real_t tx_array[4] = {
            _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var1
            , _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var2
            , _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var3
            , _dq_statcom_react_ctrl_sci_send1_advanced_c_function__var4
        };
        Transmit_data(&SerialComm, tx_array, 4, 0, 0);
    }
    _dq_statcom_react_ctrl_bus_join7__out[0] = _dq_statcom_react_ctrl_c_function_pi_voltage_controller__p_ref;
    _dq_statcom_react_ctrl_bus_join7__out[1] = _dq_statcom_react_ctrl_c_function1__q_ref;
    // Generated from the component: dq_STATCOM_react_ctrl.Bus Join5
    _dq_statcom_react_ctrl_bus_join5__out[0] = _dq_statcom_react_ctrl_c_function_abc_to_dq__d;
    _dq_statcom_react_ctrl_bus_join5__out[1] = _dq_statcom_react_ctrl_c_function_abc_to_dq__q;
    // Generated from the component: dq_STATCOM_react_ctrl.C function current refer
    _dq_statcom_react_ctrl_c_function_current_refer__pq_ref[0] = _dq_statcom_react_ctrl_bus_join7__out[0];
    _dq_statcom_react_ctrl_c_function_current_refer__pq_ref[1] = _dq_statcom_react_ctrl_bus_join7__out[1];
    _dq_statcom_react_ctrl_c_function_current_refer__reset_int = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var4;
    _dq_statcom_react_ctrl_c_function_current_refer__vs_dq[0] = _dq_statcom_react_ctrl_bus_join6__out[0];
    _dq_statcom_react_ctrl_c_function_current_refer__vs_dq[1] = _dq_statcom_react_ctrl_bus_join6__out[1];
    {
        _dq_statcom_react_ctrl_c_function_current_refer__is_d_ref = 0 ;
        _dq_statcom_react_ctrl_c_function_current_refer__is_q_ref = 0 ;
        if ( _dq_statcom_react_ctrl_c_function_current_refer__reset_int > 0.5f )     {
            _dq_statcom_react_ctrl_c_function_current_refer__is_d_ref = 2.0f / 3.0f * ( _dq_statcom_react_ctrl_c_function_current_refer__pq_ref [ 0 ] * _dq_statcom_react_ctrl_c_function_current_refer__vs_dq [ 0 ] - _dq_statcom_react_ctrl_c_function_current_refer__pq_ref [ 1 ] * _dq_statcom_react_ctrl_c_function_current_refer__vs_dq [ 1 ] ) / ( pow ( _dq_statcom_react_ctrl_c_function_current_refer__vs_dq [ 0 ] , 2 ) + pow ( _dq_statcom_react_ctrl_c_function_current_refer__vs_dq [ 1 ] , 2 ) ) ;
            _dq_statcom_react_ctrl_c_function_current_refer__is_q_ref = 2.0f / 3.0f * ( _dq_statcom_react_ctrl_c_function_current_refer__pq_ref [ 0 ] * _dq_statcom_react_ctrl_c_function_current_refer__vs_dq [ 1 ] - _dq_statcom_react_ctrl_c_function_current_refer__pq_ref [ 1 ] * _dq_statcom_react_ctrl_c_function_current_refer__vs_dq [ 0 ] ) / ( pow ( _dq_statcom_react_ctrl_c_function_current_refer__vs_dq [ 0 ] , 2 ) + pow ( _dq_statcom_react_ctrl_c_function_current_refer__vs_dq [ 1 ] , 2 ) ) ;
        }
    }
    // Generated from the component: dq_STATCOM_react_ctrl.Bus Join12
    _dq_statcom_react_ctrl_bus_join12__out[0] = _dq_statcom_react_ctrl_c_function_current_refer__is_d_ref;
    _dq_statcom_react_ctrl_bus_join12__out[1] = _dq_statcom_react_ctrl_c_function_current_refer__is_q_ref;
    // Generated from the component: dq_STATCOM_react_ctrl.C function PI current controller
    _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq[0] = _dq_statcom_react_ctrl_bus_join5__out[0];
    _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq[1] = _dq_statcom_react_ctrl_bus_join5__out[1];
    _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq_ref[0] = _dq_statcom_react_ctrl_bus_join12__out[0];
    _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq_ref[1] = _dq_statcom_react_ctrl_bus_join12__out[1];
    _dq_statcom_react_ctrl_c_function_pi_current_controller__omega_pll = _dq_statcom_react_ctrl_c_function_pll__omega_pll;
    _dq_statcom_react_ctrl_c_function_pi_current_controller__reset_int = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var4;
    _dq_statcom_react_ctrl_c_function_pi_current_controller__v_dc = _dq_statcom_react_ctrl_adc__generic_7_scaling__out;
    _dq_statcom_react_ctrl_c_function_pi_current_controller__vs_dq[0] = _dq_statcom_react_ctrl_bus_join6__out[0];
    _dq_statcom_react_ctrl_c_function_pi_current_controller__vs_dq[1] = _dq_statcom_react_ctrl_bus_join6__out[1];
    {
        _dq_statcom_react_ctrl_c_function_pi_current_controller__eta_d = ( 2 / _dq_statcom_react_ctrl_c_function_pi_current_controller__v_dc ) * ( 5.0f * m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__e_d + m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_d - 0.005f * _dq_statcom_react_ctrl_c_function_pi_current_controller__omega_pll * _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq [ 1 ] + _dq_statcom_react_ctrl_c_function_pi_current_controller__vs_dq [ 0 ] ) ;
        _dq_statcom_react_ctrl_c_function_pi_current_controller__eta_q = ( 2 / _dq_statcom_react_ctrl_c_function_pi_current_controller__v_dc ) * ( 5.0f * m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__e_q + m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_q + 0.005f * _dq_statcom_react_ctrl_c_function_pi_current_controller__omega_pll * _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq [ 0 ] + _dq_statcom_react_ctrl_c_function_pi_current_controller__vs_dq [ 1 ] ) ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.Bus Join8
    _dq_statcom_react_ctrl_bus_join8__out[0] = _dq_statcom_react_ctrl_c_function_pi_current_controller__eta_d;
    _dq_statcom_react_ctrl_bus_join8__out[1] = _dq_statcom_react_ctrl_c_function_pi_current_controller__eta_q;
    // Generated from the component: dq_STATCOM_react_ctrl.C function dq to abc
    _dq_statcom_react_ctrl_c_function_dq_to_abc__dq[0] = _dq_statcom_react_ctrl_bus_join8__out[0];
    _dq_statcom_react_ctrl_c_function_dq_to_abc__dq[1] = _dq_statcom_react_ctrl_bus_join8__out[1];
    _dq_statcom_react_ctrl_c_function_dq_to_abc__theta = _dq_statcom_react_ctrl_c_function_pll__theta_pll;
    {
        _dq_statcom_react_ctrl_c_function_dq_to_abc__a = cos ( _dq_statcom_react_ctrl_c_function_dq_to_abc__theta ) * _dq_statcom_react_ctrl_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_statcom_react_ctrl_c_function_dq_to_abc__theta ) * _dq_statcom_react_ctrl_c_function_dq_to_abc__dq [ 1 ] ;
        _dq_statcom_react_ctrl_c_function_dq_to_abc__b = cos ( _dq_statcom_react_ctrl_c_function_dq_to_abc__theta - 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_statcom_react_ctrl_c_function_dq_to_abc__theta - 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_dq_to_abc__dq [ 1 ] ;
        _dq_statcom_react_ctrl_c_function_dq_to_abc__c = cos ( _dq_statcom_react_ctrl_c_function_dq_to_abc__theta + 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_dq_to_abc__dq [ 0 ] - sin ( _dq_statcom_react_ctrl_c_function_dq_to_abc__theta + 2.0f / 3.0f * M_PI ) * _dq_statcom_react_ctrl_c_function_dq_to_abc__dq [ 1 ] ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.Bus Join9
    _dq_statcom_react_ctrl_bus_join9__out[0] = _dq_statcom_react_ctrl_c_function_dq_to_abc__a;
    _dq_statcom_react_ctrl_bus_join9__out[1] = _dq_statcom_react_ctrl_c_function_dq_to_abc__b;
    _dq_statcom_react_ctrl_bus_join9__out[2] = _dq_statcom_react_ctrl_c_function_dq_to_abc__c;
    // Generated from the component: dq_STATCOM_react_ctrl.Sum1
    _dq_statcom_react_ctrl_sum1__out[0] = _dq_statcom_react_ctrl_bus_join9__out[0] + _dq_statcom_react_ctrl_constant1__out;
    _dq_statcom_react_ctrl_sum1__out[1] = _dq_statcom_react_ctrl_bus_join9__out[1] + _dq_statcom_react_ctrl_constant1__out;
    _dq_statcom_react_ctrl_sum1__out[2] = _dq_statcom_react_ctrl_bus_join9__out[2] + _dq_statcom_react_ctrl_constant1__out;
    // Generated from the component: dq_STATCOM_react_ctrl.Gain1
    _dq_statcom_react_ctrl_gain1__out[0] = 0.5f * _dq_statcom_react_ctrl_sum1__out[0];
    _dq_statcom_react_ctrl_gain1__out[1] = 0.5f * _dq_statcom_react_ctrl_sum1__out[1];
    _dq_statcom_react_ctrl_gain1__out[2] = 0.5f * _dq_statcom_react_ctrl_sum1__out[2];
    // Generated from the component: dq_STATCOM_react_ctrl.Bus Split1
    _dq_statcom_react_ctrl_bus_split1__out = _dq_statcom_react_ctrl_gain1__out[0];
    _dq_statcom_react_ctrl_bus_split1__out1 = _dq_statcom_react_ctrl_gain1__out[1];
    _dq_statcom_react_ctrl_bus_split1__out2 = _dq_statcom_react_ctrl_gain1__out[2];
    // Generated from the component: dq_STATCOM_react_ctrl.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA
    _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in = _dq_statcom_react_ctrl_bus_split1__out;
    {
        _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out = _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA
    _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in = _dq_statcom_react_ctrl_bus_split1__out1;
    {
        _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out = _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA
    _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in = _dq_statcom_react_ctrl_bus_split1__out2;
    {
        _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out = _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ePWM (Generic)1.ePWM 1.advanced c function
    _dq_statcom_react_ctrl_epwm__generic_1_epwm_1_advanced_c_function__CMPA = _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out;
    {
        EPwm1Regs.CMPA.bit.CMPA = _dq_statcom_react_ctrl_epwm__generic_1_epwm_1_advanced_c_function__CMPA;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ePWM (Generic)1.ePWM 2.advanced c function
    _dq_statcom_react_ctrl_epwm__generic_1_epwm_2_advanced_c_function__CMPA = _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out;
    {
        EPwm2Regs.CMPA.bit.CMPA = _dq_statcom_react_ctrl_epwm__generic_1_epwm_2_advanced_c_function__CMPA;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.ePWM (Generic)1.ePWM 3.advanced c function
    _dq_statcom_react_ctrl_epwm__generic_1_epwm_3_advanced_c_function__CMPA = _dq_statcom_react_ctrl_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out;
    {
        EPwm3Regs.CMPA.bit.CMPA = _dq_statcom_react_ctrl_epwm__generic_1_epwm_3_advanced_c_function__CMPA;
    }
    m_Sinks->_dq_statcom_react_ctrl_is_d_ref_in = _dq_statcom_react_ctrl_c_function_current_refer__is_d_ref;
    m_Sinks->_dq_statcom_react_ctrl_is_q_ref_in = _dq_statcom_react_ctrl_c_function_current_refer__is_q_ref;
    // Generated from the component: dq_STATCOM_react_ctrl.Delay1
    m_States->_dq_statcom_react_ctrl_delay1__state[m_States->_dq_statcom_react_ctrl_delay1__cbi] = _dq_statcom_react_ctrl_sum2__out;
    if (m_States->_dq_statcom_react_ctrl_delay1__cbi < 0)
        m_States->_dq_statcom_react_ctrl_delay1__cbi++;
    else
        m_States->_dq_statcom_react_ctrl_delay1__cbi = 0;
    // Generated from the component: dq_STATCOM_react_ctrl.Rate Limiter1
    _dq_statcom_react_ctrl_rate_limiter1__rising_rate_lim[0] = 10000.0f * 5e-05;
    _dq_statcom_react_ctrl_rate_limiter1__falling_rate_lim[0] = -10000.0f * 5e-05;
    if (_dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1 - m_States->_dq_statcom_react_ctrl_rate_limiter1__state > _dq_statcom_react_ctrl_rate_limiter1__rising_rate_lim[0])
        m_States->_dq_statcom_react_ctrl_rate_limiter1__state += _dq_statcom_react_ctrl_rate_limiter1__rising_rate_lim[0];
    else  if (_dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1 - m_States->_dq_statcom_react_ctrl_rate_limiter1__state < _dq_statcom_react_ctrl_rate_limiter1__falling_rate_lim[0])
        m_States->_dq_statcom_react_ctrl_rate_limiter1__state += (_dq_statcom_react_ctrl_rate_limiter1__falling_rate_lim[0]);
    else
        m_States->_dq_statcom_react_ctrl_rate_limiter1__state = _dq_statcom_react_ctrl_sci_receive1_advanced_c_function__var1;
    m_States->_dq_statcom_react_ctrl_rate_limiter1__first_step = 0;
    // Generated from the component: dq_STATCOM_react_ctrl.C function PI voltage controller
    {
        m_States->_dq_statcom_react_ctrl_c_function_pi_voltage_controller__e_dc = pow ( _dq_statcom_react_ctrl_c_function_pi_voltage_controller__v_dc_ref , 2 ) - pow ( _dq_statcom_react_ctrl_c_function_pi_voltage_controller__v_dc , 2 ) ;
        m_States->_dq_statcom_react_ctrl_c_function_pi_voltage_controller__y_dc = m_States->_dq_statcom_react_ctrl_c_function_pi_voltage_controller__y_dc + 2.2f * 5e-05 * m_States->_dq_statcom_react_ctrl_c_function_pi_voltage_controller__e_dc ;
        if ( _dq_statcom_react_ctrl_c_function_pi_voltage_controller__reset_int < 0.5f )     {
            m_States->_dq_statcom_react_ctrl_c_function_pi_voltage_controller__y_dc = 0 ;
        }
    }
    // Generated from the component: dq_STATCOM_react_ctrl.C function powers
    {
        m_States->_dq_statcom_react_ctrl_c_function_powers__p_fil = m_States->_dq_statcom_react_ctrl_c_function_powers__p_fil + 5e-05 * 2 * M_PI * 30.0f * ( _dq_statcom_react_ctrl_c_function_powers__p - m_States->_dq_statcom_react_ctrl_c_function_powers__p_fil ) ;
        m_States->_dq_statcom_react_ctrl_c_function_powers__q_fil = m_States->_dq_statcom_react_ctrl_c_function_powers__q_fil + 5e-05 * 2 * M_PI * 30.0f * ( _dq_statcom_react_ctrl_c_function_powers__q - m_States->_dq_statcom_react_ctrl_c_function_powers__q_fil ) ;
    }
    // Generated from the component: dq_STATCOM_react_ctrl.C function PLL
    {
        m_States->_dq_statcom_react_ctrl_c_function_pll__y_q = m_States->_dq_statcom_react_ctrl_c_function_pll__y_q + 717.1314741035857f * 5e-05 * _dq_statcom_react_ctrl_c_function_pll__e_q ;
        m_States->_dq_statcom_react_ctrl_c_function_pll__theta = m_States->_dq_statcom_react_ctrl_c_function_pll__theta + 5e-05 * _dq_statcom_react_ctrl_c_function_pll__omega_pll ;
        if ( _dq_statcom_react_ctrl_c_function_pll__init_pll < 0.5f )     {
            m_States->_dq_statcom_react_ctrl_c_function_pll__theta = 0 ;
            m_States->_dq_statcom_react_ctrl_c_function_pll__y_q = 0 ;
        }
        if ( m_States->_dq_statcom_react_ctrl_c_function_pll__theta >= 2 * M_PI )     {
            m_States->_dq_statcom_react_ctrl_c_function_pll__theta = m_States->_dq_statcom_react_ctrl_c_function_pll__theta - 2 * M_PI ;
        }
        if ( m_States->_dq_statcom_react_ctrl_c_function_pll__theta < 0.0f )     {
            m_States->_dq_statcom_react_ctrl_c_function_pll__theta = m_States->_dq_statcom_react_ctrl_c_function_pll__theta + abs ( m_States->_dq_statcom_react_ctrl_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: dq_STATCOM_react_ctrl.C function1
    {
        m_States->_dq_statcom_react_ctrl_c_function1__e_qref = _dq_statcom_react_ctrl_c_function1__q_ref_gen - _dq_statcom_react_ctrl_c_function1__q_gen ;
        m_States->_dq_statcom_react_ctrl_c_function1__y_qref = m_States->_dq_statcom_react_ctrl_c_function1__y_qref + 10.0f * 5e-05 * m_States->_dq_statcom_react_ctrl_c_function1__e_qref ;
        if ( _dq_statcom_react_ctrl_c_function1__react_power_comp < 0.5f )     {
            m_States->_dq_statcom_react_ctrl_c_function1__y_qref = 0 ;
        }
    }
    // Generated from the component: dq_STATCOM_react_ctrl.C function PI current controller
    {
        m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__e_d = _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq_ref [ 0 ] - _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq [ 0 ] ;
        m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__e_q = _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq_ref [ 1 ] - _dq_statcom_react_ctrl_c_function_pi_current_controller__is_dq [ 1 ] ;
        m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_d = m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_d + 157.07963267948966f * 5e-05 * m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__e_d ;
        m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_q = m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_q + 157.07963267948966f * 5e-05 * m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__e_q ;
        if ( _dq_statcom_react_ctrl_c_function_pi_current_controller__reset_int < 0.5f )     {
            m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_d = 0 ;
            m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_q = 0 ;
        }
    }
    AdccRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcbRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
}


void dq_statcom_react_ctrl_init0(dq_statcom_react_ctrl_ModelData *p_m_Data) {
    // Initialize variables
    dq_statcom_react_ctrl_ExtIn *ext_In = (dq_statcom_react_ctrl_ExtIn *) p_m_Data->p_extIn;
    dq_statcom_react_ctrl_ModelStates *m_States = (dq_statcom_react_ctrl_ModelStates *) p_m_Data->p_States;
    // Init tunable properties if they exist
    AdcSetMode(ADC_ADCC, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	AdcSetMode(ADC_ADCB, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	AdcSetMode(ADC_ADCA, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	// dq_STATCOM_react_ctrl.GPIO DO (Generic)2.GPIO DO
	GpioCtrlRegs.GPADIR.bit.GPIO24 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO24 = 1;
	// dq_STATCOM_react_ctrl.ePWM (Generic)2.ePWM 1
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
	// dq_STATCOM_react_ctrl.ADC (Generic)9.ADC
	AdccRegs.ADCSOC5CTL.bit.TRIGSEL = 15;
	AdccRegs.ADCSOC5CTL.bit.CHSEL = 5;
	AdccRegs.ADCSOC5CTL.bit.ACQPS = 28;
	AdccRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdccRegs.ADCINTSEL1N2.bit.INT1SEL = 2;
	AdccRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdccRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdccRegs.ADCCTL2.bit.PRESCALE = 6;
	AdccRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// dq_STATCOM_react_ctrl.ADC (Generic)7.ADC
	AdcaRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdcaRegs.ADCSOC2CTL.bit.ACQPS = 28;
	AdcaRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdcaRegs.ADCINTSEL1N2.bit.INT1SEL = 14;
	AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdcaRegs.ADCCTL2.bit.PRESCALE = 6;
	AdcaRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// dq_STATCOM_react_ctrl.GPIO DO (Generic)1.GPIO DO
	GpioCtrlRegs.GPADIR.bit.GPIO9 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO9 = 1;
	// dq_STATCOM_react_ctrl.ADC (Generic)1.ADC
	AdcaRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdcaRegs.ADCSOC3CTL.bit.ACQPS = 28;
	// dq_STATCOM_react_ctrl.SCI Setup1
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
	// dq_STATCOM_react_ctrl.ePWM (Generic)1.ePWM 3
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
	EPwm3Regs.DBRED.bit.DBRED = 100;
	EPwm3Regs.DBFED.bit.DBFED = 100;
	EPwm3Regs.ETSEL.bit.SOCAEN = 0;
	EPwm3Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm3Regs.ETPS.bit.SOCAPRD = ET_DISABLE;
	EPwm3Regs.ETSEL.bit.SOCBEN = 0;
	EPwm3Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm3Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm3Regs.ETSEL.bit.INTEN = 0;
	EPwm3Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm3Regs.ETPS.bit.INTPRD = ET_DISABLE;
	// dq_STATCOM_react_ctrl.ePWM (Generic)1.ePWM 1
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
	EPwm1Regs.DBRED.bit.DBRED = 100;
	EPwm1Regs.DBFED.bit.DBFED = 100;
	EPwm1Regs.ETSEL.bit.SOCAEN = 0;
	EPwm1Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm1Regs.ETPS.bit.SOCAPRD = ET_1ST;
	EPwm1Regs.ETSEL.bit.SOCBEN = 0;
	EPwm1Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm1Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm1Regs.ETSEL.bit.INTEN = 0;
	EPwm1Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm1Regs.ETPS.bit.INTPRD = ET_1ST;
	// dq_STATCOM_react_ctrl.ePWM (Generic)1.ePWM 2
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
	EPwm2Regs.DBRED.bit.DBRED = 100;
	EPwm2Regs.DBFED.bit.DBFED = 100;
	EPwm2Regs.ETSEL.bit.SOCAEN = 0;
	EPwm2Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm2Regs.ETPS.bit.SOCAPRD = ET_DISABLE;
	EPwm2Regs.ETSEL.bit.SOCBEN = 0;
	EPwm2Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm2Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm2Regs.ETSEL.bit.INTEN = 0;
	EPwm2Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm2Regs.ETPS.bit.INTPRD = ET_DISABLE;
	// dq_STATCOM_react_ctrl.ADC (Generic)6.ADC
	AdcbRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdcbRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdcbRegs.ADCSOC3CTL.bit.ACQPS = 28;
	AdcbRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdcbRegs.ADCINTSEL1N2.bit.INT1SEL = 2;
	AdcbRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdcbRegs.ADCCTL2.bit.PRESCALE = 6;
	AdcbRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// dq_STATCOM_react_ctrl.ADC (Generic)5.ADC
	AdccRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdccRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdccRegs.ADCSOC3CTL.bit.ACQPS = 28;
	// dq_STATCOM_react_ctrl.ADC (Generic)8.ADC
	AdcaRegs.ADCSOC15CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC15CTL.bit.CHSEL = 15;
	AdcaRegs.ADCSOC15CTL.bit.ACQPS = 28;
	// dq_STATCOM_react_ctrl.ADC (Generic)4.ADC
	AdcaRegs.ADCSOC14CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC14CTL.bit.CHSEL = 14;
	AdcaRegs.ADCSOC14CTL.bit.ACQPS = 28;
	// dq_STATCOM_react_ctrl.ADC (Generic)10.ADC
	AdcbRegs.ADCSOC5CTL.bit.TRIGSEL = 15;
	AdcbRegs.ADCSOC5CTL.bit.CHSEL = 5;
	AdcbRegs.ADCSOC5CTL.bit.ACQPS = 28;
	// dq_STATCOM_react_ctrl.ADC (Generic)3.ADC
	AdcbRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdcbRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdcbRegs.ADCSOC2CTL.bit.ACQPS = 28;
	// dq_STATCOM_react_ctrl.ADC (Generic)2.ADC
	AdccRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdccRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdccRegs.ADCSOC2CTL.bit.ACQPS = 28;
    uint_t _dq_statcom_react_ctrl_delay1__i;
    for (_dq_statcom_react_ctrl_delay1__i = 0; _dq_statcom_react_ctrl_delay1__i < 1; _dq_statcom_react_ctrl_delay1__i++) {
        m_States->_dq_statcom_react_ctrl_delay1__state[_dq_statcom_react_ctrl_delay1__i] =  0.0f;
    }
    m_States->_dq_statcom_react_ctrl_delay1__cbi = 0;
    {
        SerialComm.rx_defined = 1;
    }
    m_States->_dq_statcom_react_ctrl_rate_limiter1__state = 0;
    m_States->_dq_statcom_react_ctrl_rate_limiter1__first_step = 1;
    {
        m_States->_dq_statcom_react_ctrl_c_function_pi_voltage_controller__y_dc = 0 ;
        m_States->_dq_statcom_react_ctrl_c_function_pi_voltage_controller__e_dc = 0 ;
    }
    {
        m_States->_dq_statcom_react_ctrl_c_function_powers__p_fil = 0 ;
        m_States->_dq_statcom_react_ctrl_c_function_powers__q_fil = 0 ;
    }
    {
        m_States->_dq_statcom_react_ctrl_c_function_pll__y_q = 0 ;
        m_States->_dq_statcom_react_ctrl_c_function_pll__theta = 0 ;
    }
    {
        m_States->_dq_statcom_react_ctrl_c_function1__y_qref = 0 ;
        m_States->_dq_statcom_react_ctrl_c_function1__e_qref = 0 ;
    }
    {
        m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__e_d = 0.0f ;
        m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__e_q = 0.0f ;
        m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_d = 0.0f ;
        m_States->_dq_statcom_react_ctrl_c_function_pi_current_controller__y_q = 0.0f ;
    }
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
}


#pragma CODE_SECTION(dq_statcom_react_ctrl_step1, ".TI.ramfunc")
void dq_statcom_react_ctrl_step1(dq_statcom_react_ctrl_ModelData *p_m_Data) {
    dq_statcom_react_ctrl_ExtIn *ext_In = (dq_statcom_react_ctrl_ExtIn *) p_m_Data->p_extIn;
    dq_statcom_react_ctrl_ExtOut *ext_Out = (dq_statcom_react_ctrl_ExtOut *) p_m_Data->p_extOut;
    dq_statcom_react_ctrl_ModelSinks *m_Sinks = (dq_statcom_react_ctrl_ModelSinks *) p_m_Data->p_Sinks;
    dq_statcom_react_ctrl_ModelStates *m_States = (dq_statcom_react_ctrl_ModelStates *) p_m_Data->p_States;
    // Local variables
    real_t _dq_statcom_react_ctrl_sci_setup1_constant1__out = 1.0f;
    real_t _dq_statcom_react_ctrl_sci_setup1_advanced_c_function__outdata;
    // Set tunable parameters
    // Generated from the component: dq_STATCOM_react_ctrl.SCI Setup1.Constant1
    // Output block
    // Generated from the component: dq_STATCOM_react_ctrl.SCI Setup1.advanced c function
    _dq_statcom_react_ctrl_sci_setup1_advanced_c_function__outdata = _dq_statcom_react_ctrl_sci_setup1_constant1__out;
}


void dq_statcom_react_ctrl_init1(dq_statcom_react_ctrl_ModelData *p_m_Data) {
    // Initialize variables
    dq_statcom_react_ctrl_ExtIn *ext_In = (dq_statcom_react_ctrl_ExtIn *) p_m_Data->p_extIn;
    dq_statcom_react_ctrl_ModelStates *m_States = (dq_statcom_react_ctrl_ModelStates *) p_m_Data->p_States;
    // Init tunable properties if they exist
}
