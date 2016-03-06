
#ifndef _runner_H_
#define _runner_H_
#include "Arduino.h"
#include "library/StateMachine.h"
#include "iomapping.h"

//geretated by acceleo ! 
    #include "STATE1.h"
    #include "STATE2.h"
    #include "STATE3.h"


#ifdef __cplusplus
extern "C" {
#endif


#define FSIMULATE_RESET_DELAY


void SM_loop();
void SM_setup();


//by Acceleo
    class STATE1;
    extern STATE1* state1;

    class STATE2;
    extern STATE2* state2;

    class STATE3;
    extern STATE3* state3;



void nop();
void SM_setEvent();
void addSm(StateMachine* machine);
void StateMachine_loop();
void StateMachine_setup();
void StateMachine_setEvent();

#ifdef __cplusplus
} // extern "C"
#endif

#endif

