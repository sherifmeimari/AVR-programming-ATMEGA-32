/*
 * Bit_math.h
 *
 *  Created on: May 14, 2019
 *      Author: Sherif Meimari
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define CONCAT_HELPER(a,b,c,d,e,f,g,h) (0b##a##b##c##d##e##f##g##h)
#define CONCAT(a,b,c,d,e,f,g,h) (CONCAT_HELPER(a,b,c,d,e,f,g,h))
#define SET_BIT(REGISTER,PIN) (REGISTER) =(REGISTER | 1<<PIN)
#define CLEAR_BIT(REGISTER,PIN) (REGISTER) =((REGISTER) & ~((1) << (PIN)))
#define TOGGLE_BIT(REGISTER,PIN) (REGISTER) =(REGISTER^(1<<PIN))
#define CHECK_BIT(REGISTER,PIN) ((REGISTER>>PIN)&1)

#endif /* BIT_MATH_H_ */
