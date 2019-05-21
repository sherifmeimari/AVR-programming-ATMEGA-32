/*
 * SWITCH_prog.c
 *
 *  Created on: May 19, 2019
 *      Author: Sherif Meimari
 */

#include "std_types.h"
#include "Bit_math.h"
#include "DIO_int.h"
#include "LED_priv.h"
#include "LED_config.h"
#include "LED_int.h"

void LED_voidInit(void) {

	return;
}

void LED_ON(u8 LED_NUM) {

	switch(LED_NUM) {

		case LED_0:
			#if(LED_0_MODE == FORWARD) {
				DIO_u8SetPin(LED_0_PIN, DIO_HIGH);
			}
			#elif(LED_0_MODE == REVERSE) {
				DIO_u8SetPin(LED_0_PIN, DIO_LOW);
			}
			#else
    			#error "Wrong Mode"
      		#endif
      		break;

		case LED_1:
			#if(LED_1_MODE == FORWARD) {
				DIO_u8SetPin(LED_1_PIN, DIO_HIGH);
			}
			#elif(LED_1_MODE == REVERSE) {
				DIO_u8SetPin(LED_1_PIN, DIO_LOW);
			}
			#else
    			#error "Wrong Mode"
      		#endif
      		break;

		case LED_2:
			#if(LED_2_MODE == FORWARD) {
				DIO_u8SetPin(LED_2_PIN, DIO_HIGH);
			}
			#elif(LED_2_MODE == REVERSE) {
				DIO_u8SetPin(LED_2_PIN, DIO_LOW);
			}
			#else
    			#error "Wrong Mode"
      		#endif
      		break;
	}
}

void LED_OFF(u8 LED_NUM) {

	switch(LED_NUM) {

		case LED_0:
			#if(LED_0_MODE == FORWARD) {
				DIO_u8SetPin(LED_0_PIN, DIO_LOW);
			}
			#elif(LED_0_MODE == REVERSE) {
				DIO_voidSetPin(LED_0_PIN, DIO_HIGH);
			}
			#else
    			#error "Wrong Mode"
      		#endif
      		break;

		case LED_1:
			#if(LED_1_MODE == FORWARD) {
				DIO_u8SetPin(LED_1_PIN, DIO_LOW);
			}
			#elif(LED_1_MODE == REVERSE) {
				DIO_voidSetPin(LED_1_PIN, DIO_HIGH);
			}
			#else
    			#error "Wrong Mode"
      		#endif
      		break;

		case LED_2:
			#if(LED_2_MODE == FORWARD) {
				DIO_u8SetPin(LED_2_PIN, DIO_LOW);
			}
			#elif(LED_2_MODE == REVERSE) {
				DIO_voidSetPin(LED_2_PIN, DIO_HIGH);
			}
			#else
    			#error "Wrong Mode"
      		#endif
      		break;
	}
}

void LED_TOGGLE(u8 LED_NUM) {

	switch(LED_NUM) {

		case LED_0:
			if(DIO_u8GetPin(LED_0_PIN) == DIO_HIGH) {
				DIO_u8SetPin(LED_0_PIN, DIO_LOW);
			} else {
				DIO_voidSetPin(LED_0_PIN, DIO_HIGH);
			}
		case LED_1:
			if(DIO_u8GetPin(LED_1_PIN) == DIO_HIGH) {
				DIO_u8SetPin(LED_1_PIN, DIO_LOW);
			} else {
				DIO_voidSetPin(LED_1_PIN, DIO_HIGH);
			}
		case LED_2:
			if(DIO_u8GetPin(LED_2_PIN) == DIO_HIGH) {
				DIO_u8SetPin(LED_2_PIN, DIO_LOW);
			} else {
				DIO_voidSetPin(LED_2_PIN, DIO_HIGH);
			}
	}
}
