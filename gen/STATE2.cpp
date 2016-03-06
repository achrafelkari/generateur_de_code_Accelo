
#include "./runner.h"
#include "./io.h"
 // byAcceleo
    #include "./STATE1.h"
 // byAcceleo
    #include "./STATE2.h"


void STATE2::initialize() {
	StateMachine::initialize();
}

STATE2::STATE2() :StateMachine() {
	initialize();
}

void STATE2::activate() {
	StateMachine::activate();
out(MOTOR,true,-1);
    
	StateMachine::activate();
}

void STATE2::handleActivation() {
	if (running && finished ) {
		activate();
	}
}

void STATE2::handleExits() { 
	if (running && !finished &&  ev_master_stop) { //emergency stop the FB machine
		finish();
		 state1->tick();
	}
}

void STATE2::tick() { 
        StateMachine::tick();
    	handleActivation();
    	handleExits();
}

