/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: ole_3ph4w_v1.c
*
* Code generated from model             : 'ol_3ph4w_v1'.
* Subsystem selected for code generation: 'ole_3ph4w_v1'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 07-Jun-2025 @ 04:33:26 PM
*
* Generated using TI C2000 Toolbox. Platform: LAUNCHXL-F28379D
*
*/
#include "ole_3ph4w_v1.h"
// custom defines
// Model entry point functions


#pragma CODE_SECTION(ole_3ph4w_v1_step0, ".TI.ramfunc")
void ole_3ph4w_v1_step0(ole_3ph4w_v1_ModelData *p_m_Data) {
    ole_3ph4w_v1_ExtIn *ext_In = (ole_3ph4w_v1_ExtIn *) p_m_Data->p_extIn;
    ole_3ph4w_v1_ExtOut *ext_Out = (ole_3ph4w_v1_ExtOut *) p_m_Data->p_extOut;
    ole_3ph4w_v1_ModelSinks *m_Sinks = (ole_3ph4w_v1_ModelSinks *) p_m_Data->p_Sinks;
    ole_3ph4w_v1_ModelStates *m_States = (ole_3ph4w_v1_ModelStates *) p_m_Data->p_States;
    // Local variables
    real_t _ole_3ph4w_v1_adc__generic_1_adc_advanced_c_function__out;
    real_t _ole_3ph4w_v1_adc__generic_1_offset__out = 1.5f;
    real_t _ole_3ph4w_v1_adc__generic_1_raw_offset__out = 0.0f;
    real_t _ole_3ph4w_v1_adc__generic_2_adc_advanced_c_function__out;
    real_t _ole_3ph4w_v1_adc__generic_2_offset__out = 1.5f;
    real_t _ole_3ph4w_v1_adc__generic_2_raw_offset__out = 0.0f;
    real_t _ole_3ph4w_v1_adc__generic_3_adc_advanced_c_function__out;
    real_t _ole_3ph4w_v1_adc__generic_3_offset__out = 1.5f;
    real_t _ole_3ph4w_v1_adc__generic_3_raw_offset__out = 0.0f;
    real_t _ole_3ph4w_v1_adc__generic_4_adc_advanced_c_function__out;
    real_t _ole_3ph4w_v1_adc__generic_4_offset__out = 1.5f;
    real_t _ole_3ph4w_v1_adc__generic_4_raw_offset__out = 0.0f;
    real_t _ole_3ph4w_v1_adc__generic_5_adc_advanced_c_function__out;
    real_t _ole_3ph4w_v1_adc__generic_5_offset__out = 1.5f;
    real_t _ole_3ph4w_v1_adc__generic_5_raw_offset__out = 0.0f;
    real_t _ole_3ph4w_v1_adc__generic_6_adc_advanced_c_function__out;
    real_t _ole_3ph4w_v1_adc__generic_6_offset__out = 1.5f;
    real_t _ole_3ph4w_v1_adc__generic_6_raw_offset__out = 0.0f;
    real_t _ole_3ph4w_v1_adc__generic_7_adc_advanced_c_function__out;
    real_t _ole_3ph4w_v1_adc__generic_7_offset__out = 1.5f;
    real_t _ole_3ph4w_v1_adc__generic_7_raw_offset__out = 0.0f;
    real_t _ole_3ph4w_v1_constant1__out = 1.0f;
    real_t _ole_3ph4w_v1_constant2__out = 0.5f;
    real_t _ole_3ph4w_v1_constant4__out = 1.0f;
    real_t _ole_3ph4w_v1_constant5__out = 0.0f;
    real_t _ole_3ph4w_v1_constant6__out = 1.0f;
    real_t _ole_3ph4w_v1_constant7__out = 800.0f;
    real_t _ole_3ph4w_v1_delay1__out;
    real_t _ole_3ph4w_v1_sci_receive1_advanced_c_function__var1;
    real_t _ole_3ph4w_v1_sci_receive1_advanced_c_function__var2;
    real_t _ole_3ph4w_v1_sci_receive1_advanced_c_function__var3;
    real_t _ole_3ph4w_v1_sci_receive1_advanced_c_function__var4;
    real_t _ole_3ph4w_v1_current_ctrl_constant1__out = 0.0f;
    real_t _ole_3ph4w_v1_current_ctrl_constant2__out = 0.0f;
    real_t _ole_3ph4w_v1_current_ctrl_constant3__out = 0.0f;
    real_t _ole_3ph4w_v1_current_ctrl_constant4__out = 314.1592653589793f;
    real_t _ole_3ph4w_v1_current_ctrl_constant5__out = 314.1592653589793f;
    real_t _ole_3ph4w_v1_current_ctrl_constant6__out = 314.1592653589793f;
    real_t _ole_3ph4w_v1_current_ctrl_constant7__out = 0.0f;
    real_t _ole_3ph4w_v1_current_ctrl_constant8__out = 314.1592653589793f;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__out;
    real_t _ole_3ph4w_v1_adc__generic_1_sum2__out;
    real_t _ole_3ph4w_v1_adc__generic_2_sum2__out;
    real_t _ole_3ph4w_v1_adc__generic_3_sum2__out;
    real_t _ole_3ph4w_v1_adc__generic_4_sum2__out;
    real_t _ole_3ph4w_v1_adc__generic_5_sum2__out;
    real_t _ole_3ph4w_v1_adc__generic_6_sum2__out;
    real_t _ole_3ph4w_v1_adc__generic_7_sum2__out;
    real_t _ole_3ph4w_v1_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in;
    real_t _ole_3ph4w_v1_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out;
    real_t _ole_3ph4w_v1_sum2__out;
    real_t _ole_3ph4w_v1_bus_join11__out[2];
    real_t _ole_3ph4w_v1_gpio_do__generic_1_gpio_do_advanced_c_function__in;
    real_t _ole_3ph4w_v1_current_ctrl_integrator_rollover1__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_product1__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_product1__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_product1__out;
    real_t _ole_3ph4w_v1_adc__generic_1_12_bit_to_refv__out;
    real_t _ole_3ph4w_v1_adc__generic_2_12_bit_to_refv__out;
    real_t _ole_3ph4w_v1_adc__generic_3_12_bit_to_refv__out;
    real_t _ole_3ph4w_v1_adc__generic_4_12_bit_to_refv__out;
    real_t _ole_3ph4w_v1_adc__generic_5_12_bit_to_refv__out;
    real_t _ole_3ph4w_v1_adc__generic_6_12_bit_to_refv__out;
    real_t _ole_3ph4w_v1_adc__generic_7_12_bit_to_refv__out;
    uint_t _ole_3ph4w_v1_epwm__generic_2_epwm_1_advanced_c_function__CMPA;
    int_t _ole_3ph4w_v1_epwm__generic_2_epwm_1_advanced_c_function__A;
    int_t _ole_3ph4w_v1_epwm__generic_2_epwm_1_advanced_c_function__B;
    real_t _ole_3ph4w_v1_gpio_do__generic_2_gpio_do_advanced_c_function__in;
    real_t _ole_3ph4w_v1_c_function_dq_to_abc2__dq[2];
    real_t _ole_3ph4w_v1_c_function_dq_to_abc2__theta;
    real_t _ole_3ph4w_v1_c_function_dq_to_abc2__a;
    real_t _ole_3ph4w_v1_c_function_dq_to_abc2__b;
    real_t _ole_3ph4w_v1_c_function_dq_to_abc2__c;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0f};
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__a_coeff[2] = {1.0f, -1.0f};
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__a_sum;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__b_sum;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0f};
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__a_coeff[2] = {1.0f, -1.0f};
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__a_sum;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__b_sum;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0f};
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__a_coeff[2] = {1.0f, -1.0f};
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__a_sum;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__b_sum;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in;
    real_t _ole_3ph4w_v1_adc__generic_1_sum1__out;
    real_t _ole_3ph4w_v1_adc__generic_2_sum1__out;
    real_t _ole_3ph4w_v1_adc__generic_3_sum1__out;
    real_t _ole_3ph4w_v1_adc__generic_4_sum1__out;
    real_t _ole_3ph4w_v1_adc__generic_5_sum1__out;
    real_t _ole_3ph4w_v1_adc__generic_6_sum1__out;
    real_t _ole_3ph4w_v1_adc__generic_7_sum1__out;
    real_t _ole_3ph4w_v1_product1__out;
    real_t _ole_3ph4w_v1_rms_value2__out;
    real_t _ole_3ph4w_v1_adc__generic_1_scaling__out;
    real_t _ole_3ph4w_v1_adc__generic_2_scaling__out;
    real_t _ole_3ph4w_v1_adc__generic_3_scaling__out;
    real_t _ole_3ph4w_v1_adc__generic_4_scaling__out;
    real_t _ole_3ph4w_v1_adc__generic_5_scaling__out;
    real_t _ole_3ph4w_v1_adc__generic_6_scaling__out;
    real_t _ole_3ph4w_v1_adc__generic_7_scaling__out;
    real_t _ole_3ph4w_v1_bus_join10__out[3];
    real_t _ole_3ph4w_v1_bus_join14__out[3];
    real_t _ole_3ph4w_v1_rms_value1__out;
    real_t _ole_3ph4w_v1_bus_join12__out[3];
    real_t _ole_3ph4w_v1_bus_join13__out[3];
    real_t _ole_3ph4w_v1_current_ctrl_bus_split1__out;
    real_t _ole_3ph4w_v1_current_ctrl_bus_split1__out1;
    real_t _ole_3ph4w_v1_current_ctrl_bus_split1__out2;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc[3];
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__theta;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__d;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__q;
    real_t _ole_3ph4w_v1_sum1__out[3];
    real_t _ole_3ph4w_v1_current_ctrl_bus_split2__out;
    real_t _ole_3ph4w_v1_current_ctrl_bus_split2__out1;
    real_t _ole_3ph4w_v1_current_ctrl_bus_split2__out2;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc[3];
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__theta;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__d;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__q;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_pll__abc[3];
    real_t _ole_3ph4w_v1_current_ctrl_c_function_pll__d;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_pll__e_q;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_pll__omega_pll;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_pll__q;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_pll__theta_pll;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc[3];
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__theta;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__d;
    real_t _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__q;
    real_t _ole_3ph4w_v1_current_ctrl_sum1__out;
    real_t _ole_3ph4w_v1_gain1__out[3];
    real_t _ole_3ph4w_v1_current_ctrl_sum10__out;
    real_t _ole_3ph4w_v1_current_ctrl_sum2__out;
    real_t _ole_3ph4w_v1_current_ctrl_sum5__out;
    real_t _ole_3ph4w_v1_bus_split1__out;
    real_t _ole_3ph4w_v1_bus_split1__out1;
    real_t _ole_3ph4w_v1_bus_split1__out2;
    real_t _ole_3ph4w_v1_current_ctrl_sum8__out;
    real_t _ole_3ph4w_v1_current_ctrl_gain1__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_gain1__out;
    real_t _ole_3ph4w_v1_current_ctrl_gain3__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_gain1__out;
    real_t _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in;
    real_t _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out;
    real_t _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in;
    real_t _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out;
    real_t _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in;
    real_t _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out;
    real_t _ole_3ph4w_v1_current_ctrl_gain5__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_gain1__out;
    real_t _ole_3ph4w_v1_current_ctrl_sum3__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem6_sum1__out;
    real_t _ole_3ph4w_v1_current_ctrl_sum6__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem7_sum1__out;
    uint_t _ole_3ph4w_v1_epwm__generic_1_epwm_1_advanced_c_function__CMPA;
    int_t _ole_3ph4w_v1_epwm__generic_1_epwm_1_advanced_c_function__A;
    int_t _ole_3ph4w_v1_epwm__generic_1_epwm_1_advanced_c_function__B;
    uint_t _ole_3ph4w_v1_epwm__generic_1_epwm_2_advanced_c_function__CMPA;
    int_t _ole_3ph4w_v1_epwm__generic_1_epwm_2_advanced_c_function__A;
    int_t _ole_3ph4w_v1_epwm__generic_1_epwm_2_advanced_c_function__B;
    uint_t _ole_3ph4w_v1_epwm__generic_1_epwm_3_advanced_c_function__CMPA;
    int_t _ole_3ph4w_v1_epwm__generic_1_epwm_3_advanced_c_function__A;
    int_t _ole_3ph4w_v1_epwm__generic_1_epwm_3_advanced_c_function__B;
    real_t _ole_3ph4w_v1_current_ctrl_sum9__out;
    real_t _ole_3ph4w_v1_current_ctrl_subsystem8_sum1__out;
    real_t _ole_3ph4w_v1_current_ctrl_sum4__out;
    real_t _ole_3ph4w_v1_current_ctrl_sum7__out;
    real_t _ole_3ph4w_v1_current_ctrl_gain6__out;
    real_t _ole_3ph4w_v1_current_ctrl_gain2__out;
    real_t _ole_3ph4w_v1_current_ctrl_gain4__out;
    real_t _ole_3ph4w_v1_current_ctrl_product4__out;
    real_t _ole_3ph4w_v1_current_ctrl_product2__out;
    real_t _ole_3ph4w_v1_current_ctrl_product3__out;
    real_t _ole_3ph4w_v1_current_ctrl_product5__out;
    real_t _ole_3ph4w_v1_current_ctrl_bus_join1__out[2];
    real_t _ole_3ph4w_v1_rms_value3__out;
    real_t _ole_3ph4w_v1_sum3__out;
    real_t _ole_3ph4w_v1_c_function_dq_to_abc1__dq[2];
    real_t _ole_3ph4w_v1_c_function_dq_to_abc1__theta;
    real_t _ole_3ph4w_v1_c_function_dq_to_abc1__a;
    real_t _ole_3ph4w_v1_c_function_dq_to_abc1__b;
    real_t _ole_3ph4w_v1_c_function_dq_to_abc1__c;
    real_t _ole_3ph4w_v1_sci_send1_advanced_c_function__var1;
    real_t _ole_3ph4w_v1_sci_send1_advanced_c_function__var2;
    real_t _ole_3ph4w_v1_sci_send1_advanced_c_function__var3;
    real_t _ole_3ph4w_v1_sci_send1_advanced_c_function__var4;
    real_t _ole_3ph4w_v1_gain3__out;
    real_t _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in;
    real_t _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out;
    uint_t _ole_3ph4w_v1_epwm__generic_1_epwm_4_advanced_c_function__CMPA;
    int_t _ole_3ph4w_v1_epwm__generic_1_epwm_4_advanced_c_function__A;
    int_t _ole_3ph4w_v1_epwm__generic_1_epwm_4_advanced_c_function__B;
    // Set tunable parameters
    // Output block
    while(AdcaRegs.ADCCTL1.bit.ADCBSY);
	while(AdcbRegs.ADCCTL1.bit.ADCBSY);
	while(AdccRegs.ADCCTL1.bit.ADCBSY);
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)1.ADC.advanced c function
    {
        _ole_3ph4w_v1_adc__generic_1_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT3;
    }
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)2.ADC.advanced c function
    {
        _ole_3ph4w_v1_adc__generic_2_adc_advanced_c_function__out = AdccResultRegs.ADCRESULT2;
    }
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)3.ADC.advanced c function
    {
        _ole_3ph4w_v1_adc__generic_3_adc_advanced_c_function__out = AdcbResultRegs.ADCRESULT2;
    }
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)4.ADC.advanced c function
    {
        _ole_3ph4w_v1_adc__generic_4_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT14;
    }
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)5.ADC.advanced c function
    {
        _ole_3ph4w_v1_adc__generic_5_adc_advanced_c_function__out = AdccResultRegs.ADCRESULT3;
    }
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)6.ADC.advanced c function
    {
        _ole_3ph4w_v1_adc__generic_6_adc_advanced_c_function__out = AdcbResultRegs.ADCRESULT3;
    }
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)7.ADC.advanced c function
    {
        _ole_3ph4w_v1_adc__generic_7_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT2;
    }
    // Generated from the component: ole_3ph4w_v1.Delay1
    _ole_3ph4w_v1_delay1__out = m_States->_ole_3ph4w_v1_delay1__state[m_States->_ole_3ph4w_v1_delay1__cbi];
    // Generated from the component: ole_3ph4w_v1.SCI Receive1.advanced c function
    {
        Receive_data(&SerialComm, m_States->_ole_3ph4w_v1_sci_receive1_advanced_c_function__state_var, 4);
        _ole_3ph4w_v1_sci_receive1_advanced_c_function__var1 = m_States->_ole_3ph4w_v1_sci_receive1_advanced_c_function__state_var[0];
        _ole_3ph4w_v1_sci_receive1_advanced_c_function__var2 = m_States->_ole_3ph4w_v1_sci_receive1_advanced_c_function__state_var[1];
        _ole_3ph4w_v1_sci_receive1_advanced_c_function__var3 = m_States->_ole_3ph4w_v1_sci_receive1_advanced_c_function__state_var[2];
        _ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 = m_States->_ole_3ph4w_v1_sci_receive1_advanced_c_function__state_var[3];
    }
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem6.Integrator1
    _ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__out = m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__state;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem7.Integrator1
    _ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__out = m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__state;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem8.Integrator1
    _ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__out = m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__state;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)1.Sum2
    _ole_3ph4w_v1_adc__generic_1_sum2__out = _ole_3ph4w_v1_adc__generic_1_adc_advanced_c_function__out - _ole_3ph4w_v1_adc__generic_1_raw_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)2.Sum2
    _ole_3ph4w_v1_adc__generic_2_sum2__out = _ole_3ph4w_v1_adc__generic_2_adc_advanced_c_function__out - _ole_3ph4w_v1_adc__generic_2_raw_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)3.Sum2
    _ole_3ph4w_v1_adc__generic_3_sum2__out = _ole_3ph4w_v1_adc__generic_3_adc_advanced_c_function__out - _ole_3ph4w_v1_adc__generic_3_raw_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)4.Sum2
    _ole_3ph4w_v1_adc__generic_4_sum2__out = _ole_3ph4w_v1_adc__generic_4_adc_advanced_c_function__out - _ole_3ph4w_v1_adc__generic_4_raw_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)5.Sum2
    _ole_3ph4w_v1_adc__generic_5_sum2__out = _ole_3ph4w_v1_adc__generic_5_adc_advanced_c_function__out - _ole_3ph4w_v1_adc__generic_5_raw_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)6.Sum2
    _ole_3ph4w_v1_adc__generic_6_sum2__out = _ole_3ph4w_v1_adc__generic_6_adc_advanced_c_function__out - _ole_3ph4w_v1_adc__generic_6_raw_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)7.Sum2
    _ole_3ph4w_v1_adc__generic_7_sum2__out = _ole_3ph4w_v1_adc__generic_7_adc_advanced_c_function__out - _ole_3ph4w_v1_adc__generic_7_raw_offset__out;
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)2.D_to_CMPA 1.D_to_CMPA
    _ole_3ph4w_v1_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in = _ole_3ph4w_v1_constant2__out;
    {
        _ole_3ph4w_v1_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out = _ole_3ph4w_v1_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__in * 5000 ;
    }
    // Generated from the component: ole_3ph4w_v1.Sum2
    _ole_3ph4w_v1_sum2__out = _ole_3ph4w_v1_constant4__out - _ole_3ph4w_v1_delay1__out;
    // Generated from the component: ole_3ph4w_v1.Bus Join11
    _ole_3ph4w_v1_bus_join11__out[0] = _ole_3ph4w_v1_sci_receive1_advanced_c_function__var1;
    _ole_3ph4w_v1_bus_join11__out[1] = _ole_3ph4w_v1_sci_receive1_advanced_c_function__var2;
    // Generated from the component: ole_3ph4w_v1.GPIO DO (Generic)1.GPIO DO.advanced c function
    _ole_3ph4w_v1_gpio_do__generic_1_gpio_do_advanced_c_function__in = _ole_3ph4w_v1_sci_receive1_advanced_c_function__var4;
    {
        if ( _ole_3ph4w_v1_gpio_do__generic_1_gpio_do_advanced_c_function__in > 0.5f )     {
            GpioDataRegs.GPASET.bit.GPIO9 = 1;
        }
        else     {
            GpioDataRegs.GPACLEAR.bit.GPIO9 = 1 ;
        }
    }
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Integrator Rollover1
    m_States->_ole_3ph4w_v1_current_ctrl_integrator_rollover1__state += 5e-05 * _ole_3ph4w_v1_current_ctrl_constant8__out;
    if (m_States->_ole_3ph4w_v1_current_ctrl_integrator_rollover1__state >= 6.283185307f) {
        m_States->_ole_3ph4w_v1_current_ctrl_integrator_rollover1__state = m_States->_ole_3ph4w_v1_current_ctrl_integrator_rollover1__state - 6.283185307; //0.0;
    }
    _ole_3ph4w_v1_current_ctrl_integrator_rollover1__out = m_States->_ole_3ph4w_v1_current_ctrl_integrator_rollover1__state;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem6.Product1
    _ole_3ph4w_v1_current_ctrl_subsystem6_product1__out = (_ole_3ph4w_v1_current_ctrl_constant4__out * _ole_3ph4w_v1_current_ctrl_constant4__out * _ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__out);
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem7.Product1
    _ole_3ph4w_v1_current_ctrl_subsystem7_product1__out = (_ole_3ph4w_v1_current_ctrl_constant5__out * _ole_3ph4w_v1_current_ctrl_constant5__out * _ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__out);
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem8.Product1
    _ole_3ph4w_v1_current_ctrl_subsystem8_product1__out = (_ole_3ph4w_v1_current_ctrl_constant6__out * _ole_3ph4w_v1_current_ctrl_constant6__out * _ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__out);
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)1.12_bit_to_refV
    _ole_3ph4w_v1_adc__generic_1_12_bit_to_refv__out = 0.0007326007326007326f * _ole_3ph4w_v1_adc__generic_1_sum2__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)2.12_bit_to_refV
    _ole_3ph4w_v1_adc__generic_2_12_bit_to_refv__out = 0.0007326007326007326f * _ole_3ph4w_v1_adc__generic_2_sum2__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)3.12_bit_to_refV
    _ole_3ph4w_v1_adc__generic_3_12_bit_to_refv__out = 0.0007326007326007326f * _ole_3ph4w_v1_adc__generic_3_sum2__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)4.12_bit_to_refV
    _ole_3ph4w_v1_adc__generic_4_12_bit_to_refv__out = 0.0007326007326007326f * _ole_3ph4w_v1_adc__generic_4_sum2__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)5.12_bit_to_refV
    _ole_3ph4w_v1_adc__generic_5_12_bit_to_refv__out = 0.0007326007326007326f * _ole_3ph4w_v1_adc__generic_5_sum2__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)6.12_bit_to_refV
    _ole_3ph4w_v1_adc__generic_6_12_bit_to_refv__out = 0.0007326007326007326f * _ole_3ph4w_v1_adc__generic_6_sum2__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)7.12_bit_to_refV
    _ole_3ph4w_v1_adc__generic_7_12_bit_to_refv__out = 0.0007326007326007326f * _ole_3ph4w_v1_adc__generic_7_sum2__out;
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)2.ePWM 1.advanced c function
    _ole_3ph4w_v1_epwm__generic_2_epwm_1_advanced_c_function__CMPA = _ole_3ph4w_v1_epwm__generic_2_d_to_cmpa_1_d_to_cmpa__out;
    {
        EPwm6Regs.CMPA.bit.CMPA = _ole_3ph4w_v1_epwm__generic_2_epwm_1_advanced_c_function__CMPA;
    }
    // Generated from the component: ole_3ph4w_v1.GPIO DO (Generic)2.GPIO DO.advanced c function
    _ole_3ph4w_v1_gpio_do__generic_2_gpio_do_advanced_c_function__in = _ole_3ph4w_v1_sum2__out;
    {
        if ( _ole_3ph4w_v1_gpio_do__generic_2_gpio_do_advanced_c_function__in > 0.5f )     {
            GpioDataRegs.GPASET.bit.GPIO24 = 1;
        }
        else     {
            GpioDataRegs.GPACLEAR.bit.GPIO24 = 1 ;
        }
    }
    // Generated from the component: ole_3ph4w_v1.C function dq to abc2
    _ole_3ph4w_v1_c_function_dq_to_abc2__dq[0] = _ole_3ph4w_v1_bus_join11__out[0];
    _ole_3ph4w_v1_c_function_dq_to_abc2__dq[1] = _ole_3ph4w_v1_bus_join11__out[1];
    _ole_3ph4w_v1_c_function_dq_to_abc2__theta = _ole_3ph4w_v1_current_ctrl_integrator_rollover1__out;
    {
        _ole_3ph4w_v1_c_function_dq_to_abc2__a = cos ( _ole_3ph4w_v1_c_function_dq_to_abc2__theta ) * _ole_3ph4w_v1_c_function_dq_to_abc2__dq [ 0 ] - sin ( _ole_3ph4w_v1_c_function_dq_to_abc2__theta ) * _ole_3ph4w_v1_c_function_dq_to_abc2__dq [ 1 ] ;
        _ole_3ph4w_v1_c_function_dq_to_abc2__b = cos ( _ole_3ph4w_v1_c_function_dq_to_abc2__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_c_function_dq_to_abc2__dq [ 0 ] - sin ( _ole_3ph4w_v1_c_function_dq_to_abc2__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_c_function_dq_to_abc2__dq [ 1 ] ;
        _ole_3ph4w_v1_c_function_dq_to_abc2__c = cos ( _ole_3ph4w_v1_c_function_dq_to_abc2__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_c_function_dq_to_abc2__dq [ 0 ] - sin ( _ole_3ph4w_v1_c_function_dq_to_abc2__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_c_function_dq_to_abc2__dq [ 1 ] ;
    }
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem6.Discrete Transfer Function2
    uint_t _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i;
    _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__a_sum = 0.0f;
    _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__b_sum = 0.0f;
    _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i = 0; _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i < 1; _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i++) {
        _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__b_sum += _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__b_coeff[_ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i + 1] * m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__states[_ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i];
    }
    _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__a_sum += m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__states[0] * _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__a_coeff[1];
    _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in = _ole_3ph4w_v1_current_ctrl_subsystem6_product1__out - _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__a_sum;
    _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__b_sum += _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__b_coeff[0] * _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in;
    _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__out = _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__b_sum;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem7.Discrete Transfer Function2
    uint_t _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i;
    _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__a_sum = 0.0f;
    _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__b_sum = 0.0f;
    _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i = 0; _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i < 1; _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i++) {
        _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__b_sum += _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__b_coeff[_ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i + 1] * m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__states[_ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i];
    }
    _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__a_sum += m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__states[0] * _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__a_coeff[1];
    _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in = _ole_3ph4w_v1_current_ctrl_subsystem7_product1__out - _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__a_sum;
    _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__b_sum += _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__b_coeff[0] * _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in;
    _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__out = _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__b_sum;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem8.Discrete Transfer Function2
    uint_t _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i;
    _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__a_sum = 0.0f;
    _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__b_sum = 0.0f;
    _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i = 0; _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i < 1; _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i++) {
        _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__b_sum += _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__b_coeff[_ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i + 1] * m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__states[_ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i];
    }
    _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__a_sum += m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__states[0] * _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__a_coeff[1];
    _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in = _ole_3ph4w_v1_current_ctrl_subsystem8_product1__out - _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__a_sum;
    _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__b_sum += _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__b_coeff[0] * _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in;
    _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__out = _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__b_sum;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)1.Sum1
    _ole_3ph4w_v1_adc__generic_1_sum1__out = _ole_3ph4w_v1_adc__generic_1_12_bit_to_refv__out - _ole_3ph4w_v1_adc__generic_1_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)2.Sum1
    _ole_3ph4w_v1_adc__generic_2_sum1__out = _ole_3ph4w_v1_adc__generic_2_12_bit_to_refv__out - _ole_3ph4w_v1_adc__generic_2_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)3.Sum1
    _ole_3ph4w_v1_adc__generic_3_sum1__out = _ole_3ph4w_v1_adc__generic_3_12_bit_to_refv__out - _ole_3ph4w_v1_adc__generic_3_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)4.Sum1
    _ole_3ph4w_v1_adc__generic_4_sum1__out = _ole_3ph4w_v1_adc__generic_4_12_bit_to_refv__out - _ole_3ph4w_v1_adc__generic_4_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)5.Sum1
    _ole_3ph4w_v1_adc__generic_5_sum1__out = _ole_3ph4w_v1_adc__generic_5_12_bit_to_refv__out - _ole_3ph4w_v1_adc__generic_5_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)6.Sum1
    _ole_3ph4w_v1_adc__generic_6_sum1__out = _ole_3ph4w_v1_adc__generic_6_12_bit_to_refv__out - _ole_3ph4w_v1_adc__generic_6_offset__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)7.Sum1
    _ole_3ph4w_v1_adc__generic_7_sum1__out = _ole_3ph4w_v1_adc__generic_7_12_bit_to_refv__out - _ole_3ph4w_v1_adc__generic_7_offset__out;
    _ole_3ph4w_v1_product1__out = (_ole_3ph4w_v1_c_function_dq_to_abc2__a * _ole_3ph4w_v1_sci_receive1_advanced_c_function__var3);
    // Generated from the component: ole_3ph4w_v1.RMS value2
    if (m_States->_ole_3ph4w_v1_rms_value2__period_cnt >= 2 * M_PI) {
        m_States->_ole_3ph4w_v1_rms_value2__out_state = sqrt(m_States->_ole_3ph4w_v1_rms_value2__square_sum / (2 * M_PI));
        m_States->_ole_3ph4w_v1_rms_value2__square_sum = 0.0f;
        m_States->_ole_3ph4w_v1_rms_value2__period_cnt = fmod(m_States->_ole_3ph4w_v1_rms_value2__period_cnt, 2 * M_PI);
    }
    _ole_3ph4w_v1_rms_value2__out = m_States->_ole_3ph4w_v1_rms_value2__out_state;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)1.scaling
    _ole_3ph4w_v1_adc__generic_1_scaling__out = 30.0f * _ole_3ph4w_v1_adc__generic_1_sum1__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)2.scaling
    _ole_3ph4w_v1_adc__generic_2_scaling__out = 30.0f * _ole_3ph4w_v1_adc__generic_2_sum1__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)3.scaling
    _ole_3ph4w_v1_adc__generic_3_scaling__out = 30.0f * _ole_3ph4w_v1_adc__generic_3_sum1__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)4.scaling
    _ole_3ph4w_v1_adc__generic_4_scaling__out = 240.0f * _ole_3ph4w_v1_adc__generic_4_sum1__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)5.scaling
    _ole_3ph4w_v1_adc__generic_5_scaling__out = 240.0f * _ole_3ph4w_v1_adc__generic_5_sum1__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)6.scaling
    _ole_3ph4w_v1_adc__generic_6_scaling__out = 240.0f * _ole_3ph4w_v1_adc__generic_6_sum1__out;
    // Generated from the component: ole_3ph4w_v1.ADC (Generic)7.scaling
    _ole_3ph4w_v1_adc__generic_7_scaling__out = 30.0f * _ole_3ph4w_v1_adc__generic_7_sum1__out;
    // Generated from the component: ole_3ph4w_v1.Bus Join10
    _ole_3ph4w_v1_bus_join10__out[0] = _ole_3ph4w_v1_product1__out;
    _ole_3ph4w_v1_bus_join10__out[1] = _ole_3ph4w_v1_c_function_dq_to_abc2__b;
    _ole_3ph4w_v1_bus_join10__out[2] = _ole_3ph4w_v1_c_function_dq_to_abc2__c;
    // Generated from the component: ole_3ph4w_v1.Bus Join14
    _ole_3ph4w_v1_bus_join14__out[0] = _ole_3ph4w_v1_product1__out;
    _ole_3ph4w_v1_bus_join14__out[1] = _ole_3ph4w_v1_c_function_dq_to_abc2__b;
    _ole_3ph4w_v1_bus_join14__out[2] = _ole_3ph4w_v1_c_function_dq_to_abc2__c;
    // Generated from the component: ole_3ph4w_v1.RMS value1
    if (m_States->_ole_3ph4w_v1_rms_value1__period_cnt >= 2 * M_PI) {
        m_States->_ole_3ph4w_v1_rms_value1__out_state = sqrt(m_States->_ole_3ph4w_v1_rms_value1__square_sum / (2 * M_PI));
        m_States->_ole_3ph4w_v1_rms_value1__square_sum = 0.0f;
        m_States->_ole_3ph4w_v1_rms_value1__period_cnt = fmod(m_States->_ole_3ph4w_v1_rms_value1__period_cnt, 2 * M_PI);
    }
    _ole_3ph4w_v1_rms_value1__out = m_States->_ole_3ph4w_v1_rms_value1__out_state;
    // Generated from the component: ole_3ph4w_v1.Bus Join12
    _ole_3ph4w_v1_bus_join12__out[0] = _ole_3ph4w_v1_adc__generic_1_scaling__out;
    _ole_3ph4w_v1_bus_join12__out[1] = _ole_3ph4w_v1_adc__generic_2_scaling__out;
    _ole_3ph4w_v1_bus_join12__out[2] = _ole_3ph4w_v1_adc__generic_3_scaling__out;
    // Generated from the component: ole_3ph4w_v1.Bus Join13
    _ole_3ph4w_v1_bus_join13__out[0] = _ole_3ph4w_v1_adc__generic_4_scaling__out;
    _ole_3ph4w_v1_bus_join13__out[1] = _ole_3ph4w_v1_adc__generic_5_scaling__out;
    _ole_3ph4w_v1_bus_join13__out[2] = _ole_3ph4w_v1_adc__generic_6_scaling__out;
    _ole_3ph4w_v1_current_ctrl_bus_split1__out = _ole_3ph4w_v1_bus_join10__out[0];
    _ole_3ph4w_v1_current_ctrl_bus_split1__out1 = _ole_3ph4w_v1_bus_join10__out[1];
    _ole_3ph4w_v1_current_ctrl_bus_split1__out2 = _ole_3ph4w_v1_bus_join10__out[2];
    // Generated from the component: ole_3ph4w_v1.current_ctrl.C function abc to dq
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc[0] = _ole_3ph4w_v1_bus_join10__out[0];
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc[1] = _ole_3ph4w_v1_bus_join10__out[1];
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc[2] = _ole_3ph4w_v1_bus_join10__out[2];
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__theta = _ole_3ph4w_v1_current_ctrl_constant1__out;
    {
        _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__d = 2.0f / 3.0f * ( cos ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__theta ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc [ 0 ] + cos ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc [ 1 ] + cos ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc [ 2 ] ) ;
        _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__q = 2.0f / 3.0f * ( - sin ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__theta ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc [ 0 ] - sin ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc [ 1 ] - sin ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: ole_3ph4w_v1.Sum1
    _ole_3ph4w_v1_sum1__out[0] = _ole_3ph4w_v1_bus_join14__out[0] + _ole_3ph4w_v1_constant1__out;
    _ole_3ph4w_v1_sum1__out[1] = _ole_3ph4w_v1_bus_join14__out[1] + _ole_3ph4w_v1_constant1__out;
    _ole_3ph4w_v1_sum1__out[2] = _ole_3ph4w_v1_bus_join14__out[2] + _ole_3ph4w_v1_constant1__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Bus Split2
    _ole_3ph4w_v1_current_ctrl_bus_split2__out = _ole_3ph4w_v1_bus_join12__out[0];
    _ole_3ph4w_v1_current_ctrl_bus_split2__out1 = _ole_3ph4w_v1_bus_join12__out[1];
    _ole_3ph4w_v1_current_ctrl_bus_split2__out2 = _ole_3ph4w_v1_bus_join12__out[2];
    // Generated from the component: ole_3ph4w_v1.current_ctrl.C function abc to dq1
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc[0] = _ole_3ph4w_v1_bus_join12__out[0];
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc[1] = _ole_3ph4w_v1_bus_join12__out[1];
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc[2] = _ole_3ph4w_v1_bus_join12__out[2];
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__theta = _ole_3ph4w_v1_current_ctrl_constant2__out;
    {
        _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__d = 2.0f / 3.0f * ( cos ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__theta ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc [ 0 ] + cos ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc [ 1 ] + cos ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc [ 2 ] ) ;
        _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__q = 2.0f / 3.0f * ( - sin ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__theta ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc [ 0 ] - sin ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc [ 1 ] - sin ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__abc [ 2 ] ) ;
    }
    // Generated from the component: ole_3ph4w_v1.current_ctrl.C function PLL
    _ole_3ph4w_v1_current_ctrl_c_function_pll__abc[0] = _ole_3ph4w_v1_bus_join13__out[0];
    _ole_3ph4w_v1_current_ctrl_c_function_pll__abc[1] = _ole_3ph4w_v1_bus_join13__out[1];
    _ole_3ph4w_v1_current_ctrl_c_function_pll__abc[2] = _ole_3ph4w_v1_bus_join13__out[2];
    {
        _ole_3ph4w_v1_current_ctrl_c_function_pll__d = 2.0f / 3.0f * ( cos ( m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta ) * _ole_3ph4w_v1_current_ctrl_c_function_pll__abc [ 0 ] + cos ( m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_pll__abc [ 1 ] + cos ( m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_pll__abc [ 2 ] ) ;
        _ole_3ph4w_v1_current_ctrl_c_function_pll__q = 2.0f / 3.0f * ( - sin ( m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta ) * _ole_3ph4w_v1_current_ctrl_c_function_pll__abc [ 0 ] - sin ( m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_pll__abc [ 1 ] - sin ( m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_pll__abc [ 2 ] ) ;
        _ole_3ph4w_v1_current_ctrl_c_function_pll__e_q = _ole_3ph4w_v1_current_ctrl_c_function_pll__q ;
        _ole_3ph4w_v1_current_ctrl_c_function_pll__omega_pll = 1.8f * _ole_3ph4w_v1_current_ctrl_c_function_pll__e_q + m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__y_q ;
        _ole_3ph4w_v1_current_ctrl_c_function_pll__theta_pll = m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta ;
    }
    // Generated from the component: ole_3ph4w_v1.current_ctrl.C function abc to dq2
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc[0] = _ole_3ph4w_v1_bus_join13__out[0];
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc[1] = _ole_3ph4w_v1_bus_join13__out[1];
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc[2] = _ole_3ph4w_v1_bus_join13__out[2];
    _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__theta = _ole_3ph4w_v1_current_ctrl_constant3__out;
    {
        _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__d = 2.0f / 3.0f * ( cos ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__theta ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc [ 0 ] + cos ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc [ 1 ] + cos ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc [ 2 ] ) ;
        _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__q = 2.0f / 3.0f * ( - sin ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__theta ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc [ 0 ] - sin ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc [ 1 ] - sin ( _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__abc [ 2 ] ) ;
    }
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum1
    _ole_3ph4w_v1_current_ctrl_sum1__out =  - _ole_3ph4w_v1_current_ctrl_bus_split1__out - _ole_3ph4w_v1_current_ctrl_bus_split1__out1 - _ole_3ph4w_v1_current_ctrl_bus_split1__out2;
    // Generated from the component: ole_3ph4w_v1.Gain1
    _ole_3ph4w_v1_gain1__out[0] = 0.5f * _ole_3ph4w_v1_sum1__out[0];
    _ole_3ph4w_v1_gain1__out[1] = 0.5f * _ole_3ph4w_v1_sum1__out[1];
    _ole_3ph4w_v1_gain1__out[2] = 0.5f * _ole_3ph4w_v1_sum1__out[2];
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum10
    _ole_3ph4w_v1_current_ctrl_sum10__out =  - _ole_3ph4w_v1_current_ctrl_bus_split2__out - _ole_3ph4w_v1_current_ctrl_bus_split2__out1 - _ole_3ph4w_v1_current_ctrl_bus_split2__out2;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum2
    _ole_3ph4w_v1_current_ctrl_sum2__out = _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__d - _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__d;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum5
    _ole_3ph4w_v1_current_ctrl_sum5__out = _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq__q - _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq1__q;
    _ole_3ph4w_v1_bus_split1__out = _ole_3ph4w_v1_gain1__out[0];
    _ole_3ph4w_v1_bus_split1__out1 = _ole_3ph4w_v1_gain1__out[1];
    _ole_3ph4w_v1_bus_split1__out2 = _ole_3ph4w_v1_gain1__out[2];
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum8
    _ole_3ph4w_v1_current_ctrl_sum8__out = _ole_3ph4w_v1_current_ctrl_sum1__out - _ole_3ph4w_v1_current_ctrl_sum10__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Gain1
    _ole_3ph4w_v1_current_ctrl_gain1__out = 10.0f * _ole_3ph4w_v1_current_ctrl_sum2__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem6.Gain1
    _ole_3ph4w_v1_current_ctrl_subsystem6_gain1__out = 314.1592653589793f * _ole_3ph4w_v1_current_ctrl_sum2__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Gain3
    _ole_3ph4w_v1_current_ctrl_gain3__out = 10.0f * _ole_3ph4w_v1_current_ctrl_sum5__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem7.Gain1
    _ole_3ph4w_v1_current_ctrl_subsystem7_gain1__out = 314.1592653589793f * _ole_3ph4w_v1_current_ctrl_sum5__out;
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA
    _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in = _ole_3ph4w_v1_bus_split1__out;
    {
        _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out = _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA
    _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in = _ole_3ph4w_v1_bus_split1__out1;
    {
        _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out = _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA
    _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in = _ole_3ph4w_v1_bus_split1__out2;
    {
        _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out = _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Gain5
    _ole_3ph4w_v1_current_ctrl_gain5__out = 10.0f * _ole_3ph4w_v1_current_ctrl_sum8__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem8.Gain1
    _ole_3ph4w_v1_current_ctrl_subsystem8_gain1__out = 314.1592653589793f * _ole_3ph4w_v1_current_ctrl_sum8__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum3
    _ole_3ph4w_v1_current_ctrl_sum3__out = _ole_3ph4w_v1_current_ctrl_gain1__out + _ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem6.Sum1
    _ole_3ph4w_v1_current_ctrl_subsystem6_sum1__out = _ole_3ph4w_v1_current_ctrl_subsystem6_gain1__out - _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum6
    _ole_3ph4w_v1_current_ctrl_sum6__out = _ole_3ph4w_v1_current_ctrl_gain3__out + _ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem7.Sum1
    _ole_3ph4w_v1_current_ctrl_subsystem7_sum1__out = _ole_3ph4w_v1_current_ctrl_subsystem7_gain1__out - _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__out;
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.ePWM 1.advanced c function
    _ole_3ph4w_v1_epwm__generic_1_epwm_1_advanced_c_function__CMPA = _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out;
    {
        EPwm1Regs.CMPA.bit.CMPA = _ole_3ph4w_v1_epwm__generic_1_epwm_1_advanced_c_function__CMPA;
    }
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.ePWM 2.advanced c function
    _ole_3ph4w_v1_epwm__generic_1_epwm_2_advanced_c_function__CMPA = _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out;
    {
        EPwm2Regs.CMPA.bit.CMPA = _ole_3ph4w_v1_epwm__generic_1_epwm_2_advanced_c_function__CMPA;
    }
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.ePWM 3.advanced c function
    _ole_3ph4w_v1_epwm__generic_1_epwm_3_advanced_c_function__CMPA = _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out;
    {
        EPwm3Regs.CMPA.bit.CMPA = _ole_3ph4w_v1_epwm__generic_1_epwm_3_advanced_c_function__CMPA;
    }
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum9
    _ole_3ph4w_v1_current_ctrl_sum9__out = _ole_3ph4w_v1_current_ctrl_gain5__out + _ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem8.Sum1
    _ole_3ph4w_v1_current_ctrl_subsystem8_sum1__out = _ole_3ph4w_v1_current_ctrl_subsystem8_gain1__out - _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum4
    _ole_3ph4w_v1_current_ctrl_sum4__out = _ole_3ph4w_v1_current_ctrl_sum3__out + _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__d;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Sum7
    _ole_3ph4w_v1_current_ctrl_sum7__out = _ole_3ph4w_v1_current_ctrl_sum6__out + _ole_3ph4w_v1_current_ctrl_c_function_abc_to_dq2__q;
    _ole_3ph4w_v1_current_ctrl_gain6__out = 2.0f * _ole_3ph4w_v1_current_ctrl_sum9__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Gain2
    _ole_3ph4w_v1_current_ctrl_gain2__out = 2.0f * _ole_3ph4w_v1_current_ctrl_sum4__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Gain4
    _ole_3ph4w_v1_current_ctrl_gain4__out = 2.0f * _ole_3ph4w_v1_current_ctrl_sum7__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Product4
    _ole_3ph4w_v1_current_ctrl_product4__out = (_ole_3ph4w_v1_current_ctrl_gain6__out) * 1.0f / (_ole_3ph4w_v1_constant7__out);
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Product2
    _ole_3ph4w_v1_current_ctrl_product2__out = (_ole_3ph4w_v1_current_ctrl_gain2__out) * 1.0f / (_ole_3ph4w_v1_constant7__out);
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Product3
    _ole_3ph4w_v1_current_ctrl_product3__out = (_ole_3ph4w_v1_current_ctrl_gain4__out) * 1.0f / (_ole_3ph4w_v1_constant7__out);
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Product5
    _ole_3ph4w_v1_current_ctrl_product5__out = (_ole_3ph4w_v1_current_ctrl_product4__out * _ole_3ph4w_v1_current_ctrl_constant7__out);
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Bus Join1
    _ole_3ph4w_v1_current_ctrl_bus_join1__out[0] = _ole_3ph4w_v1_current_ctrl_product2__out;
    _ole_3ph4w_v1_current_ctrl_bus_join1__out[1] = _ole_3ph4w_v1_current_ctrl_product3__out;
    // Generated from the component: ole_3ph4w_v1.RMS value3
    if (m_States->_ole_3ph4w_v1_rms_value3__period_cnt >= 2 * M_PI) {
        m_States->_ole_3ph4w_v1_rms_value3__out_state = sqrt(m_States->_ole_3ph4w_v1_rms_value3__square_sum / (2 * M_PI));
        m_States->_ole_3ph4w_v1_rms_value3__square_sum = 0.0f;
        m_States->_ole_3ph4w_v1_rms_value3__period_cnt = fmod(m_States->_ole_3ph4w_v1_rms_value3__period_cnt, 2 * M_PI);
    }
    _ole_3ph4w_v1_rms_value3__out = m_States->_ole_3ph4w_v1_rms_value3__out_state;
    // Generated from the component: ole_3ph4w_v1.Sum3
    _ole_3ph4w_v1_sum3__out = _ole_3ph4w_v1_current_ctrl_product5__out + _ole_3ph4w_v1_constant6__out;
    // Generated from the component: ole_3ph4w_v1.C function dq to abc1
    _ole_3ph4w_v1_c_function_dq_to_abc1__dq[0] = _ole_3ph4w_v1_current_ctrl_bus_join1__out[0];
    _ole_3ph4w_v1_c_function_dq_to_abc1__dq[1] = _ole_3ph4w_v1_current_ctrl_bus_join1__out[1];
    _ole_3ph4w_v1_c_function_dq_to_abc1__theta = _ole_3ph4w_v1_constant5__out;
    {
        _ole_3ph4w_v1_c_function_dq_to_abc1__a = cos ( _ole_3ph4w_v1_c_function_dq_to_abc1__theta ) * _ole_3ph4w_v1_c_function_dq_to_abc1__dq [ 0 ] - sin ( _ole_3ph4w_v1_c_function_dq_to_abc1__theta ) * _ole_3ph4w_v1_c_function_dq_to_abc1__dq [ 1 ] ;
        _ole_3ph4w_v1_c_function_dq_to_abc1__b = cos ( _ole_3ph4w_v1_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_c_function_dq_to_abc1__dq [ 0 ] - sin ( _ole_3ph4w_v1_c_function_dq_to_abc1__theta - 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_c_function_dq_to_abc1__dq [ 1 ] ;
        _ole_3ph4w_v1_c_function_dq_to_abc1__c = cos ( _ole_3ph4w_v1_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_c_function_dq_to_abc1__dq [ 0 ] - sin ( _ole_3ph4w_v1_c_function_dq_to_abc1__theta + 2.0f / 3.0f * M_PI ) * _ole_3ph4w_v1_c_function_dq_to_abc1__dq [ 1 ] ;
    }
    // Generated from the component: ole_3ph4w_v1.SCI Send1.advanced c function
    _ole_3ph4w_v1_sci_send1_advanced_c_function__var1 = _ole_3ph4w_v1_rms_value1__out;
    _ole_3ph4w_v1_sci_send1_advanced_c_function__var2 = _ole_3ph4w_v1_rms_value2__out;
    _ole_3ph4w_v1_sci_send1_advanced_c_function__var3 = _ole_3ph4w_v1_rms_value3__out;
    _ole_3ph4w_v1_sci_send1_advanced_c_function__var4 = _ole_3ph4w_v1_current_ctrl_c_function_pll__omega_pll;
    {
        real_t tx_array[4] = {
            _ole_3ph4w_v1_sci_send1_advanced_c_function__var1
            , _ole_3ph4w_v1_sci_send1_advanced_c_function__var2
            , _ole_3ph4w_v1_sci_send1_advanced_c_function__var3
            , _ole_3ph4w_v1_sci_send1_advanced_c_function__var4
        };
        Transmit_data(&SerialComm, tx_array, 4, 0, 0);
    }
    // Generated from the component: ole_3ph4w_v1.Gain3
    _ole_3ph4w_v1_gain3__out = 0.5f * _ole_3ph4w_v1_sum3__out;
    _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in = _ole_3ph4w_v1_gain3__out;
    {
        _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out = _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in * 10000 ;
    }
    // Generated from the component: ole_3ph4w_v1.ePWM (Generic)1.ePWM 4.advanced c function
    _ole_3ph4w_v1_epwm__generic_1_epwm_4_advanced_c_function__CMPA = _ole_3ph4w_v1_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out;
    {
        EPwm4Regs.CMPA.bit.CMPA = _ole_3ph4w_v1_epwm__generic_1_epwm_4_advanced_c_function__CMPA;
    }
    // Generated from the component: ole_3ph4w_v1.Delay1
    m_States->_ole_3ph4w_v1_delay1__state[m_States->_ole_3ph4w_v1_delay1__cbi] = _ole_3ph4w_v1_sum2__out;
    if (m_States->_ole_3ph4w_v1_delay1__cbi < 0)
        m_States->_ole_3ph4w_v1_delay1__cbi++;
    else
        m_States->_ole_3ph4w_v1_delay1__cbi = 0;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem6.Integrator1
    if ((_ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 > 0.0f) && (m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__reset_state <= 0)) {
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__state = 0.0f;
    } else
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__state += _ole_3ph4w_v1_current_ctrl_subsystem6_sum1__out * 5e-05;
    if (_ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 > 0)
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__reset_state = 1;
    else if (_ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 < 0)
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__reset_state = -1;
    else
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__reset_state = 0;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem7.Integrator1
    if ((_ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 > 0.0f) && (m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__reset_state <= 0)) {
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__state = 0.0f;
    } else
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__state += _ole_3ph4w_v1_current_ctrl_subsystem7_sum1__out * 5e-05;
    if (_ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 > 0)
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__reset_state = 1;
    else if (_ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 < 0)
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__reset_state = -1;
    else
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__reset_state = 0;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem8.Integrator1
    if ((_ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 > 0.0f) && (m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__reset_state <= 0)) {
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__state = 0.0f;
    } else
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__state += _ole_3ph4w_v1_current_ctrl_subsystem8_sum1__out * 5e-05;
    if (_ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 > 0)
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__reset_state = 1;
    else if (_ole_3ph4w_v1_sci_receive1_advanced_c_function__var4 < 0)
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__reset_state = -1;
    else
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__reset_state = 0;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Integrator Rollover1
    m_States->_ole_3ph4w_v1_current_ctrl_integrator_rollover1__state = _ole_3ph4w_v1_current_ctrl_integrator_rollover1__out;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem6.Discrete Transfer Function2
    m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__states[0] = _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem7.Discrete Transfer Function2
    m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__states[0] = _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.Subsystem8.Discrete Transfer Function2
    m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__states[0] = _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in;
    // Generated from the component: ole_3ph4w_v1.RMS value2
    if (m_States->_ole_3ph4w_v1_rms_value2__period_cnt >= 2 * M_PI) {
        m_States->_ole_3ph4w_v1_rms_value2__period_cnt = fmod(m_States->_ole_3ph4w_v1_rms_value2__period_cnt, 2 * M_PI);
    }
    m_States->_ole_3ph4w_v1_rms_value2__period_cnt += 0.015707963267948967f;
    m_States->_ole_3ph4w_v1_rms_value2__square_sum += _ole_3ph4w_v1_c_function_dq_to_abc2__b * _ole_3ph4w_v1_c_function_dq_to_abc2__b * 0.015707963267948967f;
    // Generated from the component: ole_3ph4w_v1.RMS value1
    if (m_States->_ole_3ph4w_v1_rms_value1__period_cnt >= 2 * M_PI) {
        m_States->_ole_3ph4w_v1_rms_value1__period_cnt = fmod(m_States->_ole_3ph4w_v1_rms_value1__period_cnt, 2 * M_PI);
    }
    m_States->_ole_3ph4w_v1_rms_value1__period_cnt += 0.015707963267948967f;
    m_States->_ole_3ph4w_v1_rms_value1__square_sum += _ole_3ph4w_v1_product1__out * _ole_3ph4w_v1_product1__out * 0.015707963267948967f;
    // Generated from the component: ole_3ph4w_v1.current_ctrl.C function PLL
    {
        m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__y_q = m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__y_q + 717.1314741035857f * 5e-05 * _ole_3ph4w_v1_current_ctrl_c_function_pll__e_q ;
        m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta = m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta + 5e-05 * _ole_3ph4w_v1_current_ctrl_c_function_pll__omega_pll ;
        if ( m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta >= 2 * M_PI )     {
            m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta = m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta - 2 * M_PI ;
        }
        if ( m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta < 0.0f )     {
            m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta = m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta + abs ( m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: ole_3ph4w_v1.RMS value3
    if (m_States->_ole_3ph4w_v1_rms_value3__period_cnt >= 2 * M_PI) {
        m_States->_ole_3ph4w_v1_rms_value3__period_cnt = fmod(m_States->_ole_3ph4w_v1_rms_value3__period_cnt, 2 * M_PI);
    }
    m_States->_ole_3ph4w_v1_rms_value3__period_cnt += 0.015707963267948967f;
    m_States->_ole_3ph4w_v1_rms_value3__square_sum += _ole_3ph4w_v1_current_ctrl_product5__out * _ole_3ph4w_v1_current_ctrl_product5__out * 0.015707963267948967f;
    AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdccRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcbRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
}


void ole_3ph4w_v1_init0(ole_3ph4w_v1_ModelData *p_m_Data) {
    // Initialize variables
    ole_3ph4w_v1_ExtIn *ext_In = (ole_3ph4w_v1_ExtIn *) p_m_Data->p_extIn;
    ole_3ph4w_v1_ModelStates *m_States = (ole_3ph4w_v1_ModelStates *) p_m_Data->p_States;
    // Init tunable properties if they exist
    AdcSetMode(ADC_ADCC, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	AdcSetMode(ADC_ADCB, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	AdcSetMode(ADC_ADCA, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	// ole_3ph4w_v1.ADC (Generic)4.ADC
	AdcaRegs.ADCSOC14CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC14CTL.bit.CHSEL = 14;
	AdcaRegs.ADCSOC14CTL.bit.ACQPS = 28;
	AdcaRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdcaRegs.ADCINTSEL1N2.bit.INT1SEL = 3;
	AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdcaRegs.ADCCTL2.bit.PRESCALE = 6;
	AdcaRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// ole_3ph4w_v1.ADC (Generic)5.ADC
	AdccRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdccRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdccRegs.ADCSOC3CTL.bit.ACQPS = 28;
	AdccRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdccRegs.ADCINTSEL1N2.bit.INT1SEL = 2;
	AdccRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdccRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdccRegs.ADCCTL2.bit.PRESCALE = 6;
	AdccRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// ole_3ph4w_v1.ADC (Generic)3.ADC
	AdcbRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdcbRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdcbRegs.ADCSOC2CTL.bit.ACQPS = 28;
	AdcbRegs.ADCINTSEL1N2.bit.INT1E = 1;
	AdcbRegs.ADCINTSEL1N2.bit.INT1SEL = 3;
	AdcbRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
	AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdcbRegs.ADCCTL2.bit.PRESCALE = 6;
	AdcbRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// ole_3ph4w_v1.ePWM (Generic)2.ePWM 1
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
	// ole_3ph4w_v1.ADC (Generic)7.ADC
	AdcaRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdcaRegs.ADCSOC2CTL.bit.ACQPS = 28;
	// ole_3ph4w_v1.ADC (Generic)1.ADC
	AdcaRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdcaRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdcaRegs.ADCSOC3CTL.bit.ACQPS = 28;
	// ole_3ph4w_v1.ePWM (Generic)1.ePWM 3
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
	// ole_3ph4w_v1.ePWM (Generic)1.ePWM 1
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
	// ole_3ph4w_v1.ePWM (Generic)1.ePWM 2
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
	// ole_3ph4w_v1.ePWM (Generic)1.ePWM 4
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
	EPwm4Regs.DBRED.bit.DBRED = 100;
	EPwm4Regs.DBFED.bit.DBFED = 100;
	EPwm4Regs.ETSEL.bit.SOCAEN = 0;
	EPwm4Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm4Regs.ETPS.bit.SOCAPRD = ET_DISABLE;
	EPwm4Regs.ETSEL.bit.SOCBEN = 0;
	EPwm4Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm4Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm4Regs.ETSEL.bit.INTEN = 0;
	EPwm4Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm4Regs.ETPS.bit.INTPRD = ET_DISABLE;
	// ole_3ph4w_v1.GPIO DO (Generic)1.GPIO DO
	GpioCtrlRegs.GPADIR.bit.GPIO9 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO9 = 1;
	// ole_3ph4w_v1.ADC (Generic)6.ADC
	AdcbRegs.ADCSOC3CTL.bit.TRIGSEL = 15;
	AdcbRegs.ADCSOC3CTL.bit.CHSEL = 3;
	AdcbRegs.ADCSOC3CTL.bit.ACQPS = 28;
	// ole_3ph4w_v1.SCI Setup1
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
	// ole_3ph4w_v1.GPIO DO (Generic)2.GPIO DO
	GpioCtrlRegs.GPADIR.bit.GPIO24 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO24 = 1;
	// ole_3ph4w_v1.ADC (Generic)2.ADC
	AdccRegs.ADCSOC2CTL.bit.TRIGSEL = 15;
	AdccRegs.ADCSOC2CTL.bit.CHSEL = 2;
	AdccRegs.ADCSOC2CTL.bit.ACQPS = 28;
    uint_t _ole_3ph4w_v1_delay1__i;
    for (_ole_3ph4w_v1_delay1__i = 0; _ole_3ph4w_v1_delay1__i < 1; _ole_3ph4w_v1_delay1__i++) {
        m_States->_ole_3ph4w_v1_delay1__state[_ole_3ph4w_v1_delay1__i] =  0.0f;
    }
    m_States->_ole_3ph4w_v1_delay1__cbi = 0;
    {
        SerialComm.rx_defined = 1;
    }
    m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__state = 0.0f;
    m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_integrator1__reset_state = 2;
    m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__state = 0.0f;
    m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_integrator1__reset_state = 2;
    m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__state = 0.0f;
    m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_integrator1__reset_state = 2;
    m_States->_ole_3ph4w_v1_current_ctrl_integrator_rollover1__state = 0.0f;
    uint_t _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i;
    for (_ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i = 0; _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i < 1; _ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i++) {
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__states[_ole_3ph4w_v1_current_ctrl_subsystem6_discrete_transfer_function2__i] = 0;
    }
    uint_t _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i;
    for (_ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i = 0; _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i < 1; _ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i++) {
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__states[_ole_3ph4w_v1_current_ctrl_subsystem7_discrete_transfer_function2__i] = 0;
    }
    uint_t _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i;
    for (_ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i = 0; _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i < 1; _ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i++) {
        m_States->_ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__states[_ole_3ph4w_v1_current_ctrl_subsystem8_discrete_transfer_function2__i] = 0;
    }
    m_States->_ole_3ph4w_v1_rms_value2__square_sum = 0x0;
    m_States->_ole_3ph4w_v1_rms_value2__sample_cnt = 0x0;
    m_States->_ole_3ph4w_v1_rms_value2__period_cnt = 0x0;
    m_States->_ole_3ph4w_v1_rms_value2__db_timer = 0x0;
    m_States->_ole_3ph4w_v1_rms_value2__previous_filtered_value = 0x0;
    m_States->_ole_3ph4w_v1_rms_value2__previous_correction = 0x0;
    m_States->_ole_3ph4w_v1_rms_value2__correction = 0x0;
    m_States->_ole_3ph4w_v1_rms_value2__previous_value = 0x0;
    m_States->_ole_3ph4w_v1_rms_value2__out_state = 0x0;
    m_States->_ole_3ph4w_v1_rms_value1__square_sum = 0x0;
    m_States->_ole_3ph4w_v1_rms_value1__sample_cnt = 0x0;
    m_States->_ole_3ph4w_v1_rms_value1__period_cnt = 0x0;
    m_States->_ole_3ph4w_v1_rms_value1__db_timer = 0x0;
    m_States->_ole_3ph4w_v1_rms_value1__previous_filtered_value = 0x0;
    m_States->_ole_3ph4w_v1_rms_value1__previous_correction = 0x0;
    m_States->_ole_3ph4w_v1_rms_value1__correction = 0x0;
    m_States->_ole_3ph4w_v1_rms_value1__previous_value = 0x0;
    m_States->_ole_3ph4w_v1_rms_value1__out_state = 0x0;
    {
        m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__y_q = 0 ;
        m_States->_ole_3ph4w_v1_current_ctrl_c_function_pll__theta = 0 ;
    }
    m_States->_ole_3ph4w_v1_rms_value3__square_sum = 0x0;
    m_States->_ole_3ph4w_v1_rms_value3__sample_cnt = 0x0;
    m_States->_ole_3ph4w_v1_rms_value3__period_cnt = 0x0;
    m_States->_ole_3ph4w_v1_rms_value3__db_timer = 0x0;
    m_States->_ole_3ph4w_v1_rms_value3__previous_filtered_value = 0x0;
    m_States->_ole_3ph4w_v1_rms_value3__previous_correction = 0x0;
    m_States->_ole_3ph4w_v1_rms_value3__correction = 0x0;
    m_States->_ole_3ph4w_v1_rms_value3__previous_value = 0x0;
    m_States->_ole_3ph4w_v1_rms_value3__out_state = 0x0;
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
}


#pragma CODE_SECTION(ole_3ph4w_v1_step1, ".TI.ramfunc")
void ole_3ph4w_v1_step1(ole_3ph4w_v1_ModelData *p_m_Data) {
    ole_3ph4w_v1_ExtIn *ext_In = (ole_3ph4w_v1_ExtIn *) p_m_Data->p_extIn;
    ole_3ph4w_v1_ExtOut *ext_Out = (ole_3ph4w_v1_ExtOut *) p_m_Data->p_extOut;
    ole_3ph4w_v1_ModelSinks *m_Sinks = (ole_3ph4w_v1_ModelSinks *) p_m_Data->p_Sinks;
    ole_3ph4w_v1_ModelStates *m_States = (ole_3ph4w_v1_ModelStates *) p_m_Data->p_States;
    // Local variables
    real_t _ole_3ph4w_v1_sci_setup1_constant1__out = 1.0f;
    real_t _ole_3ph4w_v1_sci_setup1_advanced_c_function__outdata;
    // Set tunable parameters
    // Generated from the component: ole_3ph4w_v1.SCI Setup1.Constant1
    // Output block
    // Generated from the component: ole_3ph4w_v1.SCI Setup1.advanced c function
    _ole_3ph4w_v1_sci_setup1_advanced_c_function__outdata = _ole_3ph4w_v1_sci_setup1_constant1__out;
}


void ole_3ph4w_v1_init1(ole_3ph4w_v1_ModelData *p_m_Data) {
    // Initialize variables
    ole_3ph4w_v1_ExtIn *ext_In = (ole_3ph4w_v1_ExtIn *) p_m_Data->p_extIn;
    ole_3ph4w_v1_ModelStates *m_States = (ole_3ph4w_v1_ModelStates *) p_m_Data->p_States;
    // Init tunable properties if they exist
}
