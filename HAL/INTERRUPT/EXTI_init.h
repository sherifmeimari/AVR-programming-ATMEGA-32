#ifndef _EXTI_INT_H
#define _EXTI_INT_H

/*this function shall initialize the EXTI and 	*/
/*set it's operation initialy disabled			*/
void EXTI_voidInitialize(void);

/* this function shall set the callback pointer */
/*to the recived address						*/
void EXTI_voidSetCallBack( void(*ptr_Cpy)(void) );

/*this function shall enable the External interrupt*/
void EXTI_voidEnable(void);

/*this function shall disable the External interrupt*/
void EXTI_voidDisable(void);

#endif