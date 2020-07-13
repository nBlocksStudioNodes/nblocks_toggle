#include "constant.h"


/**
* @brief    nBlock_Toggle()
* @details  
* @param    
* @return   NA.
* 
*/

nBlock_Toggle :: nBlock_Toggle(uint32_t value): {  
	
		
	
}

/**
* @brief    triggerInput()
* @details  When an Input is triggered the output will be toggled.
* @param    No parametres 
* @return   NA.
* 
*/

void nBlock_Constant :: triggerInput(uint32_t inputNumber,uint32_t value){
	
	
	_state = ^_state; //Toggle _state
	
	
}

void nBlock_Constant :: endFrame(){
	
	output[0] = _state;
	
	available[0] = 1;
	
	
}