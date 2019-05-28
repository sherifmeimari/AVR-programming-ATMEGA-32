#include "std_types.h"
#include "Bit_math.h"
#include "EXTI_register.h"
#include "EXTI_config.h"
#include "EXTI_priv.h"
#include "EXTI_init.h"

/*this function shall initialize the EXTI and 	*/
/*set it's operation initialy disabled			*/
void EXTI_voidInitialize(void)
{
	/*set EXTI mode to be IOC*/
	SET_BIT(MCUCR,1);
	CLEAR_BIT(MCUCR,0);
	/*disable EXTI 0*/
	CLEAR_BIT(GICR,6);
	/*clear flag*/
	SET_BIT(GIFR,6);
}

/* this function shall set the callback pointer */
/*to the recived address						*/
void EXTI_voidSetCallBack( void(*ptr_Cpy)(void) )
{
	EXTI_Call_Back=ptr_Cpy;
}

/*this function shall enable the External interrupt*/
void EXTI_voidEnable(void)
{
	/*enable EXTI 0*/
	SET_BIT(GICR,6);
}

/*this function shall disable the External interrupt*/
void EXTI_voidDisable(void)
{
	/*disable EXTI 0*/
	CLEAR_BIT(GICR,6);
}
void __vector_1(void) __attribute__((signal,used));
void __vector_1(void)
{
	EXTI_Call_Back();
}
