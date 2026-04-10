#ifndef SP_EXPORT_DEFINES_H_
#define SP_EXPORT_DEFINES_H_


#define _CONCATENATE(A, B)         		       A ## B
#define CONCATENATE(A, B)        	           _CONCATENATE(A, B)
#define INPUTS                  	           p_extIn
#define OUTPUTS                 	           p_extOut
#define SINKS                   	           p_Sinks
#define STATES                                 p_States
#define INPUTS_TYPE_NAME          		       CONCATENATE(SUBSYS_NAME, _ExtIn)
#define INPUTS_DATA        		               CONCATENATE(SUBSYS_NAME, _ext_In)
#define OUTPUTS_TYPE_NAME       		       CONCATENATE(SUBSYS_NAME, _ExtOut)
#define OUTPUTS_DATA                   		   CONCATENATE(SUBSYS_NAME, _ext_Out)
#define SINKS_TYPE_NAME   		               CONCATENATE(SUBSYS_NAME, _ModelSinks)
#define SINKS_DATA              		       CONCATENATE(SUBSYS_NAME, _m_Sinks)
#define STATES_TYPE_NAME                	   CONCATENATE(SUBSYS_NAME, _ModelStates)
#define STATES_DATA    		                   CONCATENATE(SUBSYS_NAME, _m_States)
#define DATA_TYPE_NAME        		           CONCATENATE(SUBSYS_NAME, _ModelData)
#define MODEL_DATA                  	       CONCATENATE(SUBSYS_NAME, _m_Data)

#define INIT_SP_EXPORT_R0()                        CONCATENATE(SUBSYS_NAME, _init(&MODEL_DATA))
#define STEP_SP_EXPORT_R0()                        CONCATENATE(SUBSYS_NAME, _step(&MODEL_DATA))
            


//*****************************************************************************
//
// Define the variables that are used to interract with the model data
//
//*****************************************************************************
// Define the variables needed for init and step function operation

// External input
INPUTS_TYPE_NAME INPUTS_DATA;
// External output
OUTPUTS_TYPE_NAME OUTPUTS_DATA;
// Sinks
SINKS_TYPE_NAME SINKS_DATA;
// States
STATES_TYPE_NAME STATES_DATA;
// Model data structure
DATA_TYPE_NAME MODEL_DATA = {.INPUTS = &INPUTS_DATA,
							 .OUTPUTS = &OUTPUTS_DATA,
							 .SINKS = &SINKS_DATA,
							 .STATES = &STATES_DATA};


#endif /* SP_EXPORT_DEFINES_H_ */
