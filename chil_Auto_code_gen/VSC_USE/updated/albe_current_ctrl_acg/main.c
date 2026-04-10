//
// Included Files
//
#include "scheduler.h"
#include "albe_current_ctrl.h"


//*****************************************************************************
//
// Define the name of the subsystem in the model. Same like the names
// of the generated .h and .c files
//
//*****************************************************************************
#define SUBSYS_NAME                   albe_current_ctrl


//*****************************************************************************
//
// Include the defines for function-like macros that are used to
// interract with model data
//
//*****************************************************************************
#include "sp_export_defines.h"


//*****************************************************************************
//
// Definition of function array - DO NOT MODIFY
//
//*****************************************************************************

<<<<<<< HEAD
void (*TickFunctsArray[3])(void) = { TickFct_R0, TickFct_R1, TickFct_Idle};
=======
void (*TickFunctsArray[2])(void) = { TickFct_R0, TickFct_Idle};
>>>>>>> aea9860927cf4b779f5bda26fb65a58d9e991a5c

// GLOBAL VARIABLES


//
// Main
//
void main(void)
{

    // Initializes device clock and peripherals
    InitSysCtrl();
    

    // Initializes PIE and clears PIE registers. Disables CPU interrupts.
    InitPieCtrl();
    IER = 0x0000;
    IFR = 0x0000;

    // Initializes the PIE vector table with pointers to the shell Interrupt
    // Service Routines (ISR).
    InitPieVectTable();

    // This function sets up the scheduler
    SETUP_SCHEDULER(TickFunctsArray);

    // Init the exported subsystems
    EALLOW;
    
	INIT_SP_EXPORT_R0();
<<<<<<< HEAD
	INIT_SP_EXPORT_R1();
=======
>>>>>>> aea9860927cf4b779f5bda26fb65a58d9e991a5c
	
    EDIS;
    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
    EnableUserInterrupts();

    // IDLE loop. Just sit and loop forever (optional)
    while(1) {
        CpuStatus();
    }
}



void TickFct_R0(void) {

    STEP_SP_EXPORT_R0();         //execute subsystem step function

}
        
<<<<<<< HEAD
void TickFct_R1(void) {

    STEP_SP_EXPORT_R1();         //execute subsystem step function

}
        
=======
>>>>>>> aea9860927cf4b779f5bda26fb65a58d9e991a5c


//*****************************************************************************
//
// Tick function for Idle task
//
//*****************************************************************************
void TickFct_Idle(void) {

}
//
// End of File
//
