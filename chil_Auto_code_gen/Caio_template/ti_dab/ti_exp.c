/*
************************************************************
* NOTE: Automatically generated file. DO NOT MODIFY!
************************************************************
*
* File: ti_exp.c
*
* Code generated from model             : 'model3_dab_chil_rcp_updated'.
* Subsystem selected for code generation: 'ti_exp'.
*
* Schematic Editor version              : 2025.1 SP1
* C source code generated on            : 20-May-2025 @ 01:49:41 PM
*
* Generated using TI C2000 Toolbox. Platform: LAUNCHXL-F28379D
*
*/
#include "ti_exp.h"
// custom defines
// Model entry point functions


#pragma CODE_SECTION(ti_exp_step0, ".TI.ramfunc")
void ti_exp_step0(ti_exp_ModelData *p_m_Data) {
    ti_exp_ExtIn *ext_In = (ti_exp_ExtIn *) p_m_Data->p_extIn;
    ti_exp_ExtOut *ext_Out = (ti_exp_ExtOut *) p_m_Data->p_extOut;
    ti_exp_ModelSinks *m_Sinks = (ti_exp_ModelSinks *) p_m_Data->p_Sinks;
    ti_exp_ModelStates *m_States = (ti_exp_ModelStates *) p_m_Data->p_States;
    // Local variables
    real_t _ti_exp_adc__generic_1_adc_advanced_c_function__out;
    real_t _ti_exp_adc__generic_1_offset__out = 1.5f;
    real_t _ti_exp_adc__generic_1_raw_offset__out = 0.0f;
    real_t _ti_exp_constant17__out = 180.0f;
    real_t _ti_exp_constant18__out = 0.5f;
    int_t _ti_exp_gpio___hil_do1_gpio_di_advanced_c_function__out;
    real_t _ti_exp_sci_receive1_advanced_c_function__var1;
    real_t _ti_exp_adc__generic_1_sum2__out;
    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__in;
    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__out;
    uint_t _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__phsdir;
    real_t _ti_exp_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in;
    real_t _ti_exp_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out;
    real_t _ti_exp_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in;
    real_t _ti_exp_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out;
    real_t _ti_exp_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in;
    real_t _ti_exp_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out;
    real_t _ti_exp_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in;
    real_t _ti_exp_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out;
    real_t _ti_exp_adc__generic_1_12_bit_to_refv__out;
    uint_t _ti_exp_epwm__generic_1_epwm_1_advanced_c_function__CMPA;
    int_t _ti_exp_epwm__generic_1_epwm_1_advanced_c_function__A;
    int_t _ti_exp_epwm__generic_1_epwm_1_advanced_c_function__B;
    uint_t _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__CMPA;
    uint_t _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__PHSDIR;
    uint_t _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__TBPHS;
    int_t _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__A;
    int_t _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__B;
    real_t _ti_exp_adc__generic_1_sum1__out;
    real_t _ti_exp_adc__generic_1_scaling__out;
    real_t _ti_exp_sum19__out;
    real_t _ti_exp_pid_controller3__out;
    real_t _ti_exp_pid_controller3__pi_reg_out_int;
    real_t _ti_exp_rad2deg__out;
    real_t _ti_exp_limit3__out;
    real_t _ti_exp_gain10__out;
    real_t _ti_exp_sum20__out;
    real_t _ti_exp_epwm__generic_1_rel_angle3__out;
    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__in;
    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__out;
    uint_t _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__phsdir;
    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__in;
    real_t _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__out;
    uint_t _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__phsdir;
    uint_t _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__CMPA;
    uint_t _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__PHSDIR;
    uint_t _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__TBPHS;
    int_t _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__A;
    int_t _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__B;
    uint_t _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__CMPA;
    uint_t _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__PHSDIR;
    uint_t _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__TBPHS;
    int_t _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__A;
    int_t _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__B;
    // Set tunable parameters
    // Output block
    AdcaRegs.ADCSOCFRC1.bit.SOC14 = 1;
	while(AdcaRegs.ADCCTL1.bit.ADCBSY);
    // Generated from the component: ti_exp.ADC (Generic)1.ADC.advanced c function
    {
        _ti_exp_adc__generic_1_adc_advanced_c_function__out = AdcaResultRegs.ADCRESULT14;
    }
    // Generated from the component: ti_exp.GPIO - HIL DO1.GPIO DI.advanced c function
    {
        _ti_exp_gpio___hil_do1_gpio_di_advanced_c_function__out = GpioDataRegs.GPBDAT.bit.GPIO61;
    }
    // Generated from the component: ti_exp.SCI Receive1.advanced c function
    {
        Receive_data(&SerialComm, m_States->_ti_exp_sci_receive1_advanced_c_function__state_var, 1);
        _ti_exp_sci_receive1_advanced_c_function__var1 = m_States->_ti_exp_sci_receive1_advanced_c_function__state_var[0];
    }
    // Generated from the component: ti_exp.ADC (Generic)1.Sum2
    _ti_exp_adc__generic_1_sum2__out = _ti_exp_adc__generic_1_adc_advanced_c_function__out - _ti_exp_adc__generic_1_raw_offset__out;
    // Generated from the component: ti_exp.ePWM (Generic)1.deg_to_TBPHS 2.deg_to_TBPHS
    _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__in = _ti_exp_constant17__out;
    {
        m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__in_fmd = fmod ( _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__in , 360 ) ;
        m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__target_angle = ( m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__in_fmd < 0 ? m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__in_fmd + 360 : m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__in_fmd ) ;
        if ( m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__target_angle < 180 )     {
            _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__phsdir = 1 ;
            m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__delay = 2 ;
        }
        else     {
            m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__target_angle = 360 - m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__target_angle ;
            _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__phsdir = 0 ;
            m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__delay = - 2 ;
        }
        _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__out = m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__target_angle / 180.0f * 1000 + m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__delay ;
    }
    // Generated from the component: ti_exp.ePWM (Generic)1.D_to_CMPA 1.D_to_CMPA
    _ti_exp_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in = _ti_exp_constant18__out;
    {
        _ti_exp_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out = _ti_exp_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__in * 1000 ;
    }
    // Generated from the component: ti_exp.ePWM (Generic)1.D_to_CMPA 2.D_to_CMPA
    _ti_exp_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in = _ti_exp_constant18__out;
    {
        _ti_exp_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out = _ti_exp_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__in * 1000 ;
    }
    // Generated from the component: ti_exp.ePWM (Generic)1.D_to_CMPA 3.D_to_CMPA
    _ti_exp_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in = _ti_exp_constant18__out;
    {
        _ti_exp_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out = _ti_exp_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__in * 1000 ;
    }
    // Generated from the component: ti_exp.ePWM (Generic)1.D_to_CMPA 4.D_to_CMPA
    _ti_exp_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in = _ti_exp_constant18__out;
    {
        _ti_exp_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out = _ti_exp_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__in * 1000 ;
    }
    // Generated from the component: ti_exp.Rate Transition1.Input
    m_States->_ti_exp_rate_transition1_output__state = _ti_exp_sci_receive1_advanced_c_function__var1;
    // Generated from the component: ti_exp.ADC (Generic)1.12_bit_to_refV
    _ti_exp_adc__generic_1_12_bit_to_refv__out = 0.0007326007326007326f * _ti_exp_adc__generic_1_sum2__out;
    // Generated from the component: ti_exp.ePWM (Generic)1.ePWM 1.advanced c function
    _ti_exp_epwm__generic_1_epwm_1_advanced_c_function__CMPA = _ti_exp_epwm__generic_1_d_to_cmpa_1_d_to_cmpa__out;
    {
        EPwm1Regs.CMPA.bit.CMPA = _ti_exp_epwm__generic_1_epwm_1_advanced_c_function__CMPA;
    }
    // Generated from the component: ti_exp.ePWM (Generic)1.ePWM 2.advanced c function
    _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__CMPA = _ti_exp_epwm__generic_1_d_to_cmpa_2_d_to_cmpa__out;
    _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__PHSDIR = _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__phsdir;
    _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__TBPHS = _ti_exp_epwm__generic_1_deg_to_tbphs_2_deg_to_tbphs__out;
    {
        EPwm2Regs.CMPA.bit.CMPA = _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__CMPA;
        EPwm2Regs.TBPHS.bit.TBPHS = _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__TBPHS;
        EPwm2Regs.TBCTL.bit.PHSDIR = _ti_exp_epwm__generic_1_epwm_2_advanced_c_function__PHSDIR;
    }
    // Generated from the component: ti_exp.ADC (Generic)1.Sum1
    _ti_exp_adc__generic_1_sum1__out = _ti_exp_adc__generic_1_12_bit_to_refv__out - _ti_exp_adc__generic_1_offset__out;
    _ti_exp_adc__generic_1_scaling__out = 100.0f * _ti_exp_adc__generic_1_sum1__out;
    // Generated from the component: ti_exp.Rate Transition2.Input
    m_States->_ti_exp_rate_transition2_output__state = _ti_exp_adc__generic_1_scaling__out;
    // Generated from the component: ti_exp.Sum19
    _ti_exp_sum19__out = _ti_exp_sci_receive1_advanced_c_function__var1 - _ti_exp_adc__generic_1_scaling__out;
    // Generated from the component: ti_exp.PID controller3
    _ti_exp_pid_controller3__pi_reg_out_int = m_States->_ti_exp_pid_controller3__integrator_state + 0.001404962946208145f * _ti_exp_sum19__out;
    if (_ti_exp_pid_controller3__pi_reg_out_int < -1.5707963267948966f)
        m_States->_ti_exp_pid_controller3__av_active = -1;
    else if (_ti_exp_pid_controller3__pi_reg_out_int > 1.5707963267948966f)
        m_States->_ti_exp_pid_controller3__av_active = 1;
    else
        m_States->_ti_exp_pid_controller3__av_active = 0;
    _ti_exp_pid_controller3__out = MIN(MAX(_ti_exp_pid_controller3__pi_reg_out_int, -1.5707963267948966f), 1.5707963267948966f);
    // Generated from the component: ti_exp.rad2deg
    _ti_exp_rad2deg__out = 57.29577951308232f * _ti_exp_pid_controller3__out;
    // Generated from the component: ti_exp.Limit3
    _ti_exp_limit3__out = MIN(MAX(_ti_exp_rad2deg__out, -90.0f), 90.0f);
    // Generated from the component: ti_exp.Gain10
    _ti_exp_gain10__out = -1.0f * _ti_exp_limit3__out;
    // Generated from the component: ti_exp.Rate Transition3.Input
    m_States->_ti_exp_rate_transition3_output__state = _ti_exp_limit3__out;
    // Generated from the component: ti_exp.Sum20
    _ti_exp_sum20__out = _ti_exp_constant17__out + _ti_exp_gain10__out;
    // Generated from the component: ti_exp.ePWM (Generic)1.rel_angle3
    _ti_exp_epwm__generic_1_rel_angle3__out =  - _ti_exp_constant17__out + _ti_exp_gain10__out;
    // Generated from the component: ti_exp.ePWM (Generic)1.deg_to_TBPHS 4.deg_to_TBPHS
    _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__in = _ti_exp_sum20__out;
    {
        m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__in_fmd = fmod ( _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__in , 360 ) ;
        m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__target_angle = ( m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__in_fmd < 0 ? m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__in_fmd + 360 : m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__in_fmd ) ;
        if ( m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__target_angle < 180 )     {
            _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__phsdir = 1 ;
            m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__delay = 2 ;
        }
        else     {
            m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__target_angle = 360 - m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__target_angle ;
            _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__phsdir = 0 ;
            m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__delay = - 2 ;
        }
        _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__out = m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__target_angle / 180.0f * 1000 + m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__delay ;
    }
    // Generated from the component: ti_exp.ePWM (Generic)1.deg_to_TBPHS 3.deg_to_TBPHS
    _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__in = _ti_exp_epwm__generic_1_rel_angle3__out;
    {
        m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__in_fmd = fmod ( _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__in , 360 ) ;
        m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__target_angle = ( m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__in_fmd < 0 ? m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__in_fmd + 360 : m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__in_fmd ) ;
        if ( m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__target_angle < 180 )     {
            _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__phsdir = 1 ;
            m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__delay = 2 ;
        }
        else     {
            m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__target_angle = 360 - m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__target_angle ;
            _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__phsdir = 0 ;
            m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__delay = - 2 ;
        }
        _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__out = m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__target_angle / 180.0f * 1000 + m_States->_ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__delay ;
    }
    // Generated from the component: ti_exp.ePWM (Generic)1.ePWM 4.advanced c function
    _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__CMPA = _ti_exp_epwm__generic_1_d_to_cmpa_4_d_to_cmpa__out;
    _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__PHSDIR = _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__phsdir;
    _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__TBPHS = _ti_exp_epwm__generic_1_deg_to_tbphs_4_deg_to_tbphs__out;
    {
        EPwm4Regs.CMPA.bit.CMPA = _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__CMPA;
        EPwm4Regs.TBPHS.bit.TBPHS = _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__TBPHS;
        EPwm4Regs.TBCTL.bit.PHSDIR = _ti_exp_epwm__generic_1_epwm_4_advanced_c_function__PHSDIR;
    }
    // Generated from the component: ti_exp.ePWM (Generic)1.ePWM 3.advanced c function
    _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__CMPA = _ti_exp_epwm__generic_1_d_to_cmpa_3_d_to_cmpa__out;
    _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__PHSDIR = _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__phsdir;
    _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__TBPHS = _ti_exp_epwm__generic_1_deg_to_tbphs_3_deg_to_tbphs__out;
    {
        EPwm3Regs.CMPA.bit.CMPA = _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__CMPA;
        EPwm3Regs.TBPHS.bit.TBPHS = _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__TBPHS;
        EPwm3Regs.TBCTL.bit.PHSDIR = _ti_exp_epwm__generic_1_epwm_3_advanced_c_function__PHSDIR;
    }
    // Generated from the component: ti_exp.PID controller3
    if (((_ti_exp_gpio___hil_do1_gpio_di_advanced_c_function__out > 0.0f) && (m_States->_ti_exp_pid_controller3__reset_state <= 0)) || ((_ti_exp_gpio___hil_do1_gpio_di_advanced_c_function__out <= 0.0f) && (m_States->_ti_exp_pid_controller3__reset_state == 1))) {
        m_States->_ti_exp_pid_controller3__integrator_state = 0.0f;
        m_States->_ti_exp_pid_controller3__filter_state = 0.0f;
    }
    if (!m_States->_ti_exp_pid_controller3__av_active || ((m_States->_ti_exp_pid_controller3__av_active < 0 && _ti_exp_sum19__out > 0 ) || (m_States->_ti_exp_pid_controller3__av_active > 0 && _ti_exp_sum19__out < 0 ))) {
        m_States->_ti_exp_pid_controller3__integrator_state += 30.90918481657919f * _ti_exp_sum19__out * 5e-05;
    }
    if (_ti_exp_gpio___hil_do1_gpio_di_advanced_c_function__out > 0)
        m_States->_ti_exp_pid_controller3__reset_state = 1.0f;
    else if (_ti_exp_gpio___hil_do1_gpio_di_advanced_c_function__out < 0)
        m_States->_ti_exp_pid_controller3__reset_state = -1.0f;
    else
        m_States->_ti_exp_pid_controller3__reset_state = 0.0f;
}


void ti_exp_init0(ti_exp_ModelData *p_m_Data) {
    // Initialize variables
    ti_exp_ExtIn *ext_In = (ti_exp_ExtIn *) p_m_Data->p_extIn;
    ti_exp_ModelStates *m_States = (ti_exp_ModelStates *) p_m_Data->p_States;
    // Init tunable properties if they exist
    AdcSetMode(ADC_ADCA, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);
	// ti_exp.GPIO - HIL DO1.GPIO DI
	GpioCtrlRegs.GPBDIR.bit.GPIO61 = 0;
	GpioCtrlRegs.GPBPUD.bit.GPIO61 = 0;
	// ti_exp.ADC (Generic)1.ADC
	AdcaRegs.ADCSOC14CTL.bit.CHSEL = 14;
	AdcaRegs.ADCSOC14CTL.bit.ACQPS = 28;
	AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
	AdcaRegs.ADCCTL2.bit.PRESCALE = 6;
	AdcaRegs.ADCCTL1.bit.ADCPWDNZ = 1;
	// ti_exp.SCI Setup1
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
	// ti_exp.ePWM (Generic)1.ePWM 3
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
	EPwm3Regs.TBPRD = 1000;
	EPwm3Regs.TBCTL.bit.PHSEN = 1;
	EPwm3Regs.TBCTL2.bit.PRDLDSYNC = 1;
	EPwm3Regs.TBPHS.bit.TBPHS = 0;
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
	EPwm3Regs.DBRED.bit.DBRED = 10;
	EPwm3Regs.DBFED.bit.DBFED = 10;
	EPwm3Regs.ETSEL.bit.SOCAEN = 0;
	EPwm3Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm3Regs.ETPS.bit.SOCAPRD = ET_DISABLE;
	EPwm3Regs.ETSEL.bit.SOCBEN = 0;
	EPwm3Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm3Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm3Regs.ETSEL.bit.INTEN = 0;
	EPwm3Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm3Regs.ETPS.bit.INTPRD = ET_DISABLE;
	// ti_exp.ePWM (Generic)1.ePWM 2
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
	EPwm2Regs.TBPRD = 1000;
	EPwm2Regs.TBCTL.bit.PHSEN = 1;
	EPwm2Regs.TBCTL2.bit.PRDLDSYNC = 1;
	EPwm2Regs.TBPHS.bit.TBPHS = 0;
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
	EPwm2Regs.DBRED.bit.DBRED = 10;
	EPwm2Regs.DBFED.bit.DBFED = 10;
	EPwm2Regs.ETSEL.bit.SOCAEN = 0;
	EPwm2Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm2Regs.ETPS.bit.SOCAPRD = ET_DISABLE;
	EPwm2Regs.ETSEL.bit.SOCBEN = 0;
	EPwm2Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm2Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm2Regs.ETSEL.bit.INTEN = 0;
	EPwm2Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm2Regs.ETPS.bit.INTPRD = ET_DISABLE;
	// ti_exp.ePWM (Generic)1.ePWM 1
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
	EPwm1Regs.TBPRD = 1000;
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
	EPwm1Regs.DBRED.bit.DBRED = 10;
	EPwm1Regs.DBFED.bit.DBFED = 10;
	EPwm1Regs.ETSEL.bit.SOCAEN = 0;
	EPwm1Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm1Regs.ETPS.bit.SOCAPRD = ET_1ST;
	EPwm1Regs.ETSEL.bit.SOCBEN = 0;
	EPwm1Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm1Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm1Regs.ETSEL.bit.INTEN = 0;
	EPwm1Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm1Regs.ETPS.bit.INTPRD = ET_1ST;
	// ti_exp.ePWM (Generic)1.ePWM 4
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
	EPwm4Regs.TBPRD = 1000;
	EPwm4Regs.TBCTL.bit.PHSEN = 1;
	EPwm4Regs.TBCTL2.bit.PRDLDSYNC = 1;
	EPwm4Regs.TBPHS.bit.TBPHS = 0;
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
	EPwm4Regs.DBRED.bit.DBRED = 10;
	EPwm4Regs.DBFED.bit.DBFED = 10;
	EPwm4Regs.ETSEL.bit.SOCAEN = 0;
	EPwm4Regs.ETSEL.bit.SOCASEL = ET_CTR_ZERO;
	EPwm4Regs.ETPS.bit.SOCAPRD = ET_DISABLE;
	EPwm4Regs.ETSEL.bit.SOCBEN = 0;
	EPwm4Regs.ETSEL.bit.SOCBSEL = ET_CTR_ZERO;
	EPwm4Regs.ETPS.bit.SOCBPRD = ET_DISABLE;
	EPwm4Regs.ETSEL.bit.INTEN = 0;
	EPwm4Regs.ETSEL.bit.INTSEL = ET_CTR_ZERO;
	EPwm4Regs.ETPS.bit.INTPRD = ET_DISABLE;
    {
        SerialComm.rx_defined = 1;
    }
    m_States->_ti_exp_pid_controller3__integrator_state =  0.0f;
    m_States->_ti_exp_pid_controller3__filter_state =  0.0f;
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
}


#pragma CODE_SECTION(ti_exp_step1, ".TI.ramfunc")
void ti_exp_step1(ti_exp_ModelData *p_m_Data) {
    ti_exp_ExtIn *ext_In = (ti_exp_ExtIn *) p_m_Data->p_extIn;
    ti_exp_ExtOut *ext_Out = (ti_exp_ExtOut *) p_m_Data->p_extOut;
    ti_exp_ModelSinks *m_Sinks = (ti_exp_ModelSinks *) p_m_Data->p_Sinks;
    ti_exp_ModelStates *m_States = (ti_exp_ModelStates *) p_m_Data->p_States;
    // Local variables
    real_t _ti_exp_rate_transition1_output__out;
    real_t _ti_exp_rate_transition2_output__out;
    real_t _ti_exp_rate_transition3_output__out;
    real_t _ti_exp_sci_setup1_constant1__out = 1.0f;
    real_t _ti_exp_sci_send1_advanced_c_function__var1;
    real_t _ti_exp_sci_send1_advanced_c_function__var2;
    real_t _ti_exp_sci_setup1_advanced_c_function__outdata;
    // Set tunable parameters
    // Generated from the component: ti_exp.SCI Setup1.Constant1
    // Output block
    // Generated from the component: ti_exp.Rate Transition1.Output
    _ti_exp_rate_transition1_output__out = m_States->_ti_exp_rate_transition1_output__state;
    // Generated from the component: ti_exp.Rate Transition2.Output
    _ti_exp_rate_transition2_output__out = m_States->_ti_exp_rate_transition2_output__state;
    // Generated from the component: ti_exp.Rate Transition3.Output
    _ti_exp_rate_transition3_output__out = m_States->_ti_exp_rate_transition3_output__state;
    // Generated from the component: ti_exp.SCI Send1.advanced c function
    _ti_exp_sci_send1_advanced_c_function__var1 = _ti_exp_rate_transition2_output__out;
    _ti_exp_sci_send1_advanced_c_function__var2 = _ti_exp_rate_transition3_output__out;
    {
        real_t tx_array[2] = {
            _ti_exp_sci_send1_advanced_c_function__var1
            , _ti_exp_sci_send1_advanced_c_function__var2
        };
        Transmit_data(&SerialComm, tx_array, 2, 0, 0);
    }
    // Generated from the component: ti_exp.SCI Setup1.advanced c function
    _ti_exp_sci_setup1_advanced_c_function__outdata = _ti_exp_sci_setup1_constant1__out;
}


void ti_exp_init1(ti_exp_ModelData *p_m_Data) {
    // Initialize variables
    ti_exp_ExtIn *ext_In = (ti_exp_ExtIn *) p_m_Data->p_extIn;
    ti_exp_ModelStates *m_States = (ti_exp_ModelStates *) p_m_Data->p_States;
    // Init tunable properties if they exist
    m_States->_ti_exp_rate_transition1_output__state =  0.0f;
    m_States->_ti_exp_rate_transition2_output__state =  0.0f;
    m_States->_ti_exp_rate_transition3_output__state =  0.0f;
}
