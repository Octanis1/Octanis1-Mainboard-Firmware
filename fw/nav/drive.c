/*
 *  File: drive.c
 *  Description: High level driving functions
 *  Author:
 */



/* Board Header files */
#include "../Board.h"

#include "drive.h"
#include "../peripherals/wheel.h"


Void driveTask(UArg arg0, UArg arg1){

    System_printf("drive task started");
    System_flush();

}

void debugCb0(void)
{
    /* Clear the GPIO interrupt and toggle an LED */
    GPIO_write(Board_LED1, Board_LED_OFF);



}

void debugCb1(void)
{
    /* Clear the GPIO interrupt and toggle an LED */
    GPIO_write(Board_LED1, Board_LED_OFF);

}

void debugCb2(void)
{
    /* Clear the GPIO interrupt and toggle an LED */
    GPIO_write(Board_LED1, Board_LED_OFF);

}

void debugCb3(void)
{
    /* Clear the GPIO interrupt and toggle an LED */
    GPIO_write(Board_LED1, Board_LED_OFF);

}
