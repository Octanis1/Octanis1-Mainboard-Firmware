/*
 *  File: main.c
 *  Description: RTOS, main task handling
 *  Author: Sam Sulaimanov
 *
 *	STYLE GUIDE:
 *	1) Prefix header functions with the modules names i.e. "wheel_stop()".
 *	2) Use the static keyword for private functions.
 *	3) Write tests.
 *
 */

/*
 * TI RTOS
 */
#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

/*
 * System modules enabling a command line, testing and logging.
 */
#include "tests/minunit.h"
#include "core/cli.h"
#include "core/log.h"


/*
 * Peripheral models needing constant updating via a task.
 */
#include "peripherals/imu.h"
#include "peripherals/sonar.h"
#include "peripherals/weather.h"

/*
 * Rover mobility.
 */
#include "nav/drive.h"
#include "nav/pose.h"


Int main()
{ 
    Task_Handle task;
    Error_Block eb;


    /*
    Error_init(&eb);
    task = Task_create(taskFxn, NULL, &eb);
    if (task == NULL) {
        System_printf("Task_create() failed!\n");
        BIOS_exit(0);
    }

    BIOS_start();
    */
    return(0);
}
