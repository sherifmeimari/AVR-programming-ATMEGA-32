#ifndef _EXTI_REG_H
#define _EXTI_REG_H

#define MCUCR	*((volatile u8*) 0x55)
#define GICR	*((volatile u8*) 0x5B)
#define GIFR	*((volatile u8*) 0x5A)

#endif