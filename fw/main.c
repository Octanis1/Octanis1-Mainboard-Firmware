/* Example/Board Header files */
#include "../Board.h"

/* External libraries */
#include "lib/minmea/minmea.h"



/*
 *  ======== ledFxn ========
 *  Task for this function is also created statically. See the project's .cfg file.
 */
Void ledFxn(UArg arg0, UArg arg1){

    System_printf("LED task started");
    System_flush();


	while (true) {
		GPIO_write(Board_LED0, Board_LED_ON);
		Task_sleep(300);
		GPIO_write(Board_LED0, Board_LED_OFF);
		Task_sleep(300);
	}

}

Void gsmFxn(UArg arg0, UArg arg1){
    GPIO_write(Board_LED1, Board_LED_ON);

	System_printf("entering GSM task and wait \n");
	System_flush();

	int ret;
	UART_Handle handle;
	UART_Params params;

	UART_Params_init(&params);
	params.baudRate = 115200;
	params.writeDataMode = UART_DATA_BINARY;
	params.readDataMode = UART_DATA_BINARY;
	params.readReturnMode = UART_RETURN_FULL;
	params.readEcho = UART_ECHO_OFF;
	params.readMode = UART_MODE_BLOCKING;
	params.dataLength = UART_LEN_8;
	params.readTimeout = 8000;

	handle = UART_open(Board_UART0, &params);
	if (!handle) {
		System_printf("UART did not open");
	}else{
		System_printf("UART opened!");
	}


	const char txBuffer[] = "AT+CBC\r";
	char rxBuffer[40];


	UART_write(handle, txBuffer, sizeof(txBuffer));

	ret = UART_readPolling(handle,rxBuffer,sizeof(rxBuffer));
		//check buffer
		System_printf("yes! %d", ret);


	System_printf("\n");
	System_flush();



	//Task_setPri(task3, -1); //sets task to be inactive

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

    /* Turn on user LED */
    GPIO_write(Board_LED0, Board_LED_OFF);

    GPIO_write(Board_LED0, Board_LED_ON);

    GPIO_write(Board_LED1, Board_LED_OFF);

    GPIO_write(Board_LED1, Board_LED_ON);


    /* Start BIOS */
    BIOS_start();

    return (0);
}
