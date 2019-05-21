/*
 * DIO_int.h
 *
 *  Created on: May 14, 2019
 *      Author: Sherif Meimari
 */

#define DIO_HIGH 1
#define DIO_LOW 0

void DIO_voidInit(void);

// setPin gives a value to pin 
// from the beginning it should be an output already
void DIO_voidSetPin(u8 DIO_Pin, u8 value);

u8 DIO_u8GetPin(u8 DIO_Pin);

#define DIO_PIN_0 0
#define DIO_PIN_1 1
#define DIO_PIN_2 2
#define DIO_PIN_3 3
#define DIO_PIN_4 4
#define DIO_PIN_5 5
#define DIO_PIN_6 6
#define DIO_PIN_7 7
#define DIO_PIN_8 8
#define DIO_PIN_9 9
#define DIO_PIN_10 10
#define DIO_PIN_11 11
#define DIO_PIN_12 12
#define DIO_PIN_13 13
#define DIO_PIN_14 14
#define DIO_PIN_15 15
#define DIO_PIN_16 16
#define DIO_PIN_17 17
#define DIO_PIN_18 18
#define DIO_PIN_19 19
#define DIO_PIN_20 20
#define DIO_PIN_21 21
#define DIO_PIN_22 22
#define DIO_PIN_23 23
#define DIO_PIN_24 24
#define DIO_PIN_25 25
#define DIO_PIN_26 26
#define DIO_PIN_27 27
#define DIO_PIN_28 28
#define DIO_PIN_29 29
#define DIO_PIN_30 30
#define DIO_PIN_31 31