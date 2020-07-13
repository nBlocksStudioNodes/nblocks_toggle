/**
 * @brief       Toggle.h
 * @details    	Header file for a Toggle node, this is a simple node that Toggles the Output when triggered              
 */
#ifndef __NB_TOGGLE
#define __NB_TOGGLE

#include "nworkbench.h"

class nBlock_Toggle: public nBlockSimpleNode<1>{
	
	
	
	public:
	
		nBlock_Toggle(uint32_t value);
	
		void triggerInput(uint32_t inputNumber, uint32_t value);
		void endFrame();
	
	
	private:
	
		 uint32_t _state;
	
};


#endif