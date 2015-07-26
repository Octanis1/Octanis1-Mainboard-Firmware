/*
 *  File: drive.c
 *  Description: High level driving functions
 *  Author:
 */



/* Board Header files */
#include "../Board.h"

#include "drive.h"
#include "../peripherals/wheel.h"

int debugBit0 = 0;
int debugBit1 = 0;
int debugBit2 = 0;
int debugBit3 = 0;

Void driveTask(UArg arg0, UArg arg1){



	GPIO_write(MSP_OCT1_432P401RLP_M5678SLEEP, Board_HBRIDGE_SLEEP_OFF);

	GPIO_write(MSP_OCT1_432P401RLP_M1234SLEEP, Board_HBRIDGE_SLEEP_OFF);
	GPIO_write(MSP_OCT1_432P401RLP_M1IN1, 1);
	GPIO_write(MSP_OCT1_432P401RLP_M1IN2, 1);

	GPIO_write(MSP_OCT1_432P401RLP_M2IN1, 1);
	GPIO_write(MSP_OCT1_432P401RLP_M2IN2, 1);


	GPIO_write(MSP_OCT1_432P401RLP_M3IN1, 1);
	GPIO_write(MSP_OCT1_432P401RLP_M3IN2, 1);


	GPIO_write(MSP_OCT1_432P401RLP_M4IN1, 1);
	GPIO_write(MSP_OCT1_432P401RLP_M4IN2, 1);

	GPIO_write(MSP_OCT1_432P401RLP_M5IN1, 1);
	GPIO_write(MSP_OCT1_432P401RLP_M5IN2, 1);


	GPIO_write(MSP_OCT1_432P401RLP_M6IN1, 1);
	GPIO_write(MSP_OCT1_432P401RLP_M6IN2, 1);


	GPIO_write(MSP_OCT1_432P401RLP_M7IN1, 1);
	GPIO_write(MSP_OCT1_432P401RLP_M7IN2, 1);


	GPIO_write(MSP_OCT1_432P401RLP_M8IN1, 1);
	GPIO_write(MSP_OCT1_432P401RLP_M8IN2, 1);


	GPIO_write(MSP_OCT1_432P401RLP_5V_EN, 0);
	GPIO_write(MSP_OCT1_432P401RLP_HX1_EN, 1);



	while(true){

		if(debugBit0 || debugBit1 || debugBit2 || debugBit3){
			GPIO_write(MSP_OCT1_432P401RLP_M1IN1, 1);
				GPIO_write(MSP_OCT1_432P401RLP_M1IN2, 0);

				GPIO_write(MSP_OCT1_432P401RLP_M2IN1, 1);
				GPIO_write(MSP_OCT1_432P401RLP_M2IN2, 0);


				GPIO_write(MSP_OCT1_432P401RLP_M3IN1, 0);
				GPIO_write(MSP_OCT1_432P401RLP_M3IN2, 0);


				GPIO_write(MSP_OCT1_432P401RLP_M4IN1, 0);
				GPIO_write(MSP_OCT1_432P401RLP_M4IN2, 1);

				GPIO_write(MSP_OCT1_432P401RLP_M5IN1, 0);
				GPIO_write(MSP_OCT1_432P401RLP_M5IN2, 0);


				GPIO_write(MSP_OCT1_432P401RLP_M6IN1, 1);
				GPIO_write(MSP_OCT1_432P401RLP_M6IN2, 1);


				GPIO_write(MSP_OCT1_432P401RLP_M7IN1, 1);
				GPIO_write(MSP_OCT1_432P401RLP_M7IN2, 0);


				GPIO_write(MSP_OCT1_432P401RLP_M8IN1, 0);
				GPIO_write(MSP_OCT1_432P401RLP_M8IN2, 0);


		}


	}


}



void debugCb0(void)
{
    if(debugBit0){
    	debugBit0 = 0;
    }else{
    	debugBit0 = 1;
    }

}

void debugCb1(void)
{
    if(debugBit1){
    	debugBit1 = 0;
    }else{
    	debugBit1 = 1;
    }


}

void debugCb2(void)
{
    if(debugBit2){
    	debugBit2 = 0;
    }else{
    	debugBit2 = 1;
    }


}

void debugCb3(void)
{
    if(debugBit3){
    	debugBit3 = 0;
    }else{
    	debugBit3 = 1;
    }

}
