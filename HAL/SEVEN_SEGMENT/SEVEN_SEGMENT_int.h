/*
 * SEVEN_SEGMENT_int.h
 *
 *  Created on: May 21, 2019
 *      Author: Sherif Meimari
 */

#define SEVEN_SEGMENT_0 0
#define SEVEN_SEGMENT_1 1

void SEVEN_SEGMENT_ENABLE(u8 SEVEN_SEGMENT_NUM);
void SEVEN_SEGMENT_DISABLE(u8 SEVEN_SEGMENT_NUM);
void SEVEN_SEGMENT_DISPLAY(u8 SEVEN_SEGMENT_NUM, u8 data);
