/*
 * main.c
 *
 *  Created on: May 19, 2019
 *      Author: Sherif Meimari
 */

#include "avr/delay.h"
#include "DIO_int.h"
#include "SWITCH_int.h"
#include "LED_int.h"
#include "avr/io.h"


int main() {

	DIO_voidInit();
	SWITCH_voidInit();
	LED_voidInit();

	while(1) {

		// Check first LED
		if(SWITCH_ISPressed(SWITCH_0) == IS_PRESSED) {
			LED_ON(LED_0);
		} else {
			LED_OFF(LED_0);
		}

		// Check second LED
		if(SWITCH_ISPressed(SWITCH_1) == IS_PRESSED) {
			LED_ON(LED_1);
		} else {
			LED_OFF(LED_1);
		}

		// Check third LED
		if(SWITCH_ISPressed(SWITCH_2) == IS_PRESSED) {
			LED_ON(LED_2);
		} else {
			LED_OFF(LED_2);
		}

	}

	return 0;

}
