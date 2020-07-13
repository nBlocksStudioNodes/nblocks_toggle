#include "Toggle.h"

/**
* @brief    nBlock_Toggle()
*/

nBlock_Toggle :: nBlock_Toggle (uint32_t dummy) {  	
	_dummy = dummy;
	return;
}

/**
* @brief    triggerInput()
* @details  When an Input is triggered the _state will be toggled.* 
*/

void nBlock_Toggle :: triggerInput(uint32_t inputNumber,uint32_t value){
		
	_state ^= 1; //Toggle _state		
}

void nBlock_Toggle :: endFrame(){
	output[0] = _state;
	available[0] = 1;		
}