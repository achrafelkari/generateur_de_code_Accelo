
#include "./runner.h"
#include "./io.h"
 // byAcceleo
    #include "./STATE1.h"
 // byAcceleo
    #include "./STATE2.h"
 // byAcceleo
    #include "./STATE3.h"


void STATE3::initialize() {
	StateMachine::initialize();
}

STATE3::STATE3() :StateMachine() {
	initialize();
}

void STATE3::activate() {
	StateMachine::activate();
out(MOTOR,false,-1);
out(SB,true,-1);
    
	StateMachine::activate();
}

void STATE3::handleActivation() {
	if (running && finished ) {
		activate();
	}
}

void STATE3::handleExits() { 
	if (running && !finished &&  ev_sb_stop) { //emergency stop the FB machine
		finish();
		 state2->tick();
	}
}

void STATE3::tick() { 
        StateMachine::tick();
    	handleActivation();
    	handleExits();
}

