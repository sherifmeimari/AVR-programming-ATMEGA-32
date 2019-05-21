/*
 * SEVEN_SEGMENT_prog.c
 *
 *  Created on: May 19, 2019
 *      Author: Sherif Meimari
 */

#include "std_types.h"
#include "Bit_math.h"
#include "DIO_int.h"
#include "SEVEN_SEGMENT_priv.h"
#include "SEVEN_SEGMENT_config.h"
#include "SEVEN_SEGMENT_int.h"

void SEVEN_SEGMENT_ENABLE(SEVEN_SEGMENT_NUM) {

	switch(SEVEN_SEGMENT_NUM) {

		case SEVEN_SEGMENT_0:
			#if(SEVEN_SEGMENT_0_MODE == CATHODE) {
				DIO_voidClearPin(SEVEN_SEGMENT_EN_0_PIN);
			}
			#elif(SEVEN_SEGMENT_0_MODE == ANODE) {
				DIO_u8SetPin(SEVEN_SEGMENT_EN_0_PIN, DIO_HIGH);
			}
			#else
    			#error "Wrong Mode"
      		#endif
      		break;
		case SEVEN_SEGMENT_1:
			#if(SEVEN_SEGMENT_1_MODE == CATHODE) {
				DIO_voidClearPin(SEVEN_SEGMENT_EN_1_PIN);
			}
			#elif(SEVEN_SEGMENT_1_MODE == ANODE) {
				DIO_u8SetPin(SEVEN_SEGMENT_EN_1_PIN, DIO_HIGH);
			}
			#else
    			#error "Wrong Mode"
      		#endif
			break;
		}
}

void SEVEN_SEGMENT_DISABLE(SEVEN_SEGMENT_NUM) {

	switch(SEVEN_SEGMENT_NUM) {

		case SEVEN_SEGMENT_0:
			#if(SEVEN_SEGMENT_0_MODE == CATHODE) {
				DIO_u8SetPin(SEVEN_SEGMENT_EN_0_PIN, DIO_HIGH);
			}
			#elif(SEVEN_SEGMENT_0_MODE == ANODE) {
				DIO_voidClearPin(SEVEN_SEGMENT_EN_0_PIN);
			}
			#else
    			#error "Wrong Mode"
      		#endif
			break;
		case SEVEN_SEGMENT_1:
			#if(SEVEN_SEGMENT_1_MODE == CATHODE) {
				DIO_u8SetPin(SEVEN_SEGMENT_EN_0_PIN, DIO_HIGH);
			}
			#elif(SEVEN_SEGMENT_1_MODE == ANODE) {
				DIO_voidClearPin(SEVEN_SEGMENT_EN_0_PIN);
			}
			#else
    			#error "Wrong Mode"
      		#endif
			break;
	}
}

void SEVEN_SEGMENT_DISPLAY(u8 SEVEN_SEGMENT_NUM, u8 data) {

	switch(SEVEN_SEGMENT_NUM) {
		case SEVEN_SEGMENT_0:
			SEVEN_SEGMENT_ENABLE(SEVEN_SEGMENT_0);
			SEVEN_SEGMENT_DISABLE(SEVEN_SEGMENT_1);
			break;
		case SEVEN_SEGMENT_1:
			SEVEN_SEGMENT_ENABLE(SEVEN_SEGMENT_1);
			SEVEN_SEGMENT_DISABLE(SEVEN_SEGMENT_0);
			break;
	}

	if(data >= 0 && data <= 9) {

		switch(data) {

			case 0;
				DIO_voidClearPin(SEVEN_SEGMENT_A_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_B_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_C_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_D_PIN);
				break;
			case 1;
				DIO_u8SetPin(SEVEN_SEGMENT_A_PIN, DIO_HIGH);
				DIO_voidClearPin(SEVEN_SEGMENT_B_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_C_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_D_PIN);
				break;
			case 2;
				DIO_voidClearPin(SEVEN_SEGMENT_A_PIN);
				DIO_u8SetPin(SEVEN_SEGMENT_B_PIN, DIO_HIGH);
				DIO_voidClearPin(SEVEN_SEGMENT_C_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_D_PIN);
				break;
			case 3;
				DIO_u8SetPin(SEVEN_SEGMENT_A_PIN, DIO_HIGH);
				DIO_u8SetPin(SEVEN_SEGMENT_B_PIN, DIO_HIGH);
				DIO_voidClearPin(SEVEN_SEGMENT_C_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_D_PIN);
				break;
			case 4;
				DIO_voidClearPin(SEVEN_SEGMENT_A_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_B_PIN);
				DIO_u8SetPin(SEVEN_SEGMENT_C_PIN, DIO_HIGH);
				DIO_voidClearPin(SEVEN_SEGMENT_D_PIN);
				break;
			case 5;
				DIO_u8SetPin(SEVEN_SEGMENT_A_PIN, DIO_HIGH);
				DIO_voidClearPin(SEVEN_SEGMENT_B_PIN);
				DIO_u8SetPin(SEVEN_SEGMENT_C_PIN, DIO_HIGH);
				DIO_voidClearPin(SEVEN_SEGMENT_D_PIN);
				break;
			case 6;
				DIO_u8SetPin(SEVEN_SEGMENT_A_PIN, DIO_HIGH);
				DIO_u8SetPin(SEVEN_SEGMENT_B_PIN, DIO_HIGH);
				DIO_u8SetPin(SEVEN_SEGMENT_C_PIN, DIO_HIGH);
				DIO_voidClearPin(SEVEN_SEGMENT_D_PIN);
				break;
			case 7;
				DIO_voidClearPin(SEVEN_SEGMENT_A_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_B_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_C_PIN);
				DIO_u8SetPin(SEVEN_SEGMENT_D_PIN, DIO_HIGH);
				break;
			case 8;
				DIO_u8SetPin(SEVEN_SEGMENT_A_PIN, DIO_HIGH);
				DIO_voidClearPin(SEVEN_SEGMENT_B_PIN);
				DIO_voidClearPin(SEVEN_SEGMENT_C_PIN);
				DIO_u8SetPin(SEVEN_SEGMENT_D_PIN, DIO_HIGH);
				break;
			case 9;
				DIO_u8SetPin(SEVEN_SEGMENT_A_PIN, DIO_HIGH);
				DIO_u8SetPin(SEVEN_SEGMENT_B_PIN, DIO_HIGH);
				DIO_voidClearPin(SEVEN_SEGMENT_C_PIN);
				DIO_u8SetPin(SEVEN_SEGMENT_D_PIN, DIO_HIGH);
				break;
		}
	} 
}













