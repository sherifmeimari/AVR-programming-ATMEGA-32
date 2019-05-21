/*
 * main.c
 *
 *  Created on: May 19, 2019
 *      Author: Sherif Meimari
 */

#include "avr/delay.h"
#include "DIO_int.h"
#include "SWITCH_int.h"
#include "avr/io.h"


int main() {

	DIO_voidInit();
	SWITCH_voidInit();

	while(1) {

		if(SWITCH_ISPressed(SWITCH_0) == IS_PRESSED) {
			DIO_voidSetPin(DIO_PIN_31, DIO_HIGH);
		} else {
			DIO_voidSetPin(DIO_PIN_31, DIO_LOW);
		}
	}

	return 0;

}
