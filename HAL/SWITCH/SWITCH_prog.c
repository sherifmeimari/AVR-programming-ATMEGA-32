/*
 * SWITCH_prog.c
 *
 *  Created on: May 19, 2019
 *      Author: Sherif Meimari
 */

#include "std_types.h"
#include "Bit_math.h"
#include "DIO_int.h"
#include "SWITCH_priv.h"
#include "SWITCH_config.h"
#include "SWITCH_int.h"

void SWITCH_voidInit(void) {

	return;
}

u8 SWITCH_ISPressed(u8 SWITCH_NUM) {

	switch(SWITCH_NUM) {

   	case SWITCH_0:
      
    	#if(SWITCH_0_MODE == PULL_DOWN) {
	      	if(DIO_u8GetPin(SWITCH_0_PIN) == DIO_HIGH) {

				return IS_PRESSED;
			} else {

				return IS_NOT_PRESSED;
			}
    	} 
    	#elif(WITCH_0_MODE == PULL_UP) {

	      	if(DIO_u8GetPin(SWITCH_0_PIN) == DIO_HIGH) {

				return IS_NOT_PRESSED;
			} else {

				return IS_PRESSED;
			}
    	}
    	#else
    		#error "Wrong Mode"
      	#endif
      	break;
	
	case SWITCH_1:

    	#if(SWITCH_1_MODE == PULL_DOWN) {
	      	if(DIO_u8GetPin(SWITCH_1_PIN) == DIO_HIGH) {

				return IS_PRESSED;
			} else {

				return IS_NOT_PRESSED;
			}
    	} 
    	#elif(SWITCH_1_MODE == PULL_UP) {
      	
	      	if(DIO_u8GetPin(SWITCH_1_PIN) == DIO_HIGH) {

				return IS_NOT_PRESSED;
			} else {

				return IS_PRESSED;
			}
    	}
    	#else
    		#error "Wrong Mode"
      	#endif
      	break; 

    case SWITCH_2:
    	
    	#if(SWITCH_2_MODE == PULL_DOWN) {
	      	if(DIO_u8GetPin(SWITCH_2_PIN) == DIO_HIGH) {

				return IS_PRESSED;
			} else {

				return IS_NOT_PRESSED;
			}
      	} 
    	#elif(SWITCH_2_MODE == PULL_UP) {
      	
	      	if(DIO_u8GetPin(SWITCH_2_PIN) == DIO_HIGH) {

				return IS_NOT_PRESSED;
			} else {

				return IS_PRESSED;
			}
     	}
     	#else
    		#error "Wrong Mode"
      	#endif
      	break; 

	}

}