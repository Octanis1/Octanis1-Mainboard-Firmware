/* Example/Board Header files */
#include "../Board.h"

/* External libraries */
#include "lib/minmea/minmea.h"

/* Task modules */
#include "nav/drive.h"
#include "peripherals/radio.h"


/*
 *  ======== ledFxn ========
 *  Task for this function is also created statically. See the project's .cfg file.
 */
Void ledFxn(UArg arg0, UArg arg1){

    int d0 = 0;

	while (true) {
		if(!d0){
			GPIO_write(Board_LED0, Board_LED_ON);
			Task_sleep(300);
			GPIO_write(Board_LED0, Board_LED_OFF);
			Task_sleep(300);
		}else{
			GPIO_write(Board_LED1, Board_LED_ON);
			Task_sleep(300);
			GPIO_write(Board_LED1, Board_LED_OFF);
			Task_sleep(300);

		}

		d0 = GPIO_read(MSP_OCT1_432P401RLP_DEBUG0);

	}

}

/*
 *  ======== main ========
 */
Int main(void)
{

     /* Call board init functions */
    Board_initGeneral();
    Board_initGPIO();
    Board_initUART();
    Board_initI2C();

	GPIO_write(Board_LED0, Board_LED_ON);


	System_printf("done setting up");



    /* Start BIOS */
    BIOS_start();

    return (0);
}
