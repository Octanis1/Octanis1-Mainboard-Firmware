/*
 *  File: radio.c
 *  Description: Model for vhf radio HX1 to do FSK
 *  Author:
 */

/* Board Header files */
#include "../Board.h"

#include "radio.h"



Void radioTask(UArg arg0, UArg arg1){

	GPIO_write(MSP_OCT1_432P401RLP_5V_EN, 1);
	GPIO_write(MSP_OCT1_432P401RLP_HX1_EN, 1);

	while(true){
		GPIO_write(MSP_OCT1_432P401RLP_HX1_TX, 1);
		Task_sleep(1000);
		GPIO_write(MSP_OCT1_432P401RLP_HX1_TX, 0);

		Task_sleep(3000);
	}
}
