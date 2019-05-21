/*
 * DIO_prog.c
 *
 *  Created on: May 14, 2019
 *      Author: Sherif Meimari
 */

#include "std_types.h"
#include "Bit_math.h"
#include "DIO_priv.h"
#include "DIO_config.h"
#include "DIO_int.h"
#include "avr/io.h"
#include "avr/delay.h"

void DIO_voidInit(void) {
    DDRA = CONC(DIO_PIN_7_DIRECTION, DIO_PIN_6_DIRECTION, DIO_PIN_5_DIRECTION, DIO_PIN_4_DIRECTION, DIO_PIN_3_DIRECTION, DIO_PIN_2_DIRECTION, DIO_PIN_1_DIRECTION, DIO_PIN_0_DIRECTION);
    DDRB = CONC(DIO_PIN_15_DIRECTION, DIO_PIN_14_DIRECTION, DIO_PIN_13_DIRECTION, DIO_PIN_12_DIRECTION, DIO_PIN_11_DIRECTION, DIO_PIN_10_DIRECTION, DIO_PIN_9_DIRECTION, DIO_PIN_8_DIRECTION);
    DDRC = CONC(DIO_PIN_23_DIRECTION, DIO_PIN_22_DIRECTION, DIO_PIN_21_DIRECTION, DIO_PIN_20_DIRECTION, DIO_PIN_19_DIRECTION, DIO_PIN_18_DIRECTION, DIO_PIN_17_DIRECTION, DIO_PIN_16_DIRECTION);
    DDRD = CONC(DIO_PIN_31_DIRECTION, DIO_PIN_30_DIRECTION, DIO_PIN_29_DIRECTION, DIO_PIN_28_DIRECTION, DIO_PIN_27_DIRECTION, DIO_PIN_26_DIRECTION, DIO_PIN_25_DIRECTION, DIO_PIN_24_DIRECTION);
}

void DIO_voidSetPin(u8 DIO_Pin, u8 value) {
    if(DIO_Pin < 8) {
        if(value == DIO_HIGH) {
            SET_BIT(PORTA, DIO_Pin);
        } else {
        	CLEAR_BIT(PORTA, DIO_Pin);
        }
    } else if(DIO_Pin < 16) {
    	if(value == DIO_HIGH) {
            SET_BIT(PORTB, DIO_Pin - 8);
        } else {
        	CLEAR_BIT(PORTB, DIO_Pin - 8);
        }
    } else if(DIO_Pin < 24) {
    	if(value == DIO_HIGH) {
            SET_BIT(PORTC, DIO_Pin - 16);
        } else {
        	CLEAR_BIT(PORTC, DIO_Pin - 16);
        }
    } else if(DIO_Pin < 32) {
    	if(value == DIO_HIGH) {
            SET_BIT(PORTD, DIO_Pin - 24);
        } else {
        	CLEAR_BIT(PORTD, DIO_Pin - 24);
        }
    }
}

u8 DIO_u8GetPin(u8 DIO_Pin) {

	if(DIO_Pin < 8) {
        return CHECK_BIT(PINA, DIO_Pin);
    } else if(DIO_Pin < 16) {
        return CHECK_BIT(PINB, DIO_Pin - 8);
    } else if(DIO_Pin < 24) {
        return CHECK_BIT(PINC, DIO_Pin - 16); 
    } else if(DIO_Pin < 31) {
        return CHECK_BIT(PIND, DIO_Pin - 24);
    }

}












