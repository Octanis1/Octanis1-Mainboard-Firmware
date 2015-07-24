/*
 * Copyright (c) 2015, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>

/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>
#include <ti/drivers/I2C.h>

#include <stdint.h>
#include <string.h>
#include <ctype.h>



#ifndef __BOARD_H
#define __BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "MSP_OCT1_432P401RLP.h"

#define Board_initGeneral           MSP_OCT1_432P401RLP_initGeneral
#define Board_initGPIO              MSP_OCT1_432P401RLP_initGPIO
#define Board_initI2C               MSP_OCT1_432P401RLP_initI2C
#define Board_initPWM               MSP_OCT1_432P401RLP_initPWM
#define Board_initSDSPI             MSP_OCT1_432P401RLP_initSDSPI
#define Board_initSPI               MSP_OCT1_432P401RLP_initSPI
#define Board_initUART              MSP_OCT1_432P401RLP_initUART
#define Board_initWatchdog          MSP_OCT1_432P401RLP_initWatchdog

#define Board_LED_ON                MSP_OCT1_432P401RLP_LED_ON
#define Board_LED_OFF               MSP_OCT1_432P401RLP_LED_OFF

#define Board_LED0                  MSP_OCT1_432P401RLP_LED0
#define Board_LED1                  MSP_OCT1_432P401RLP_LED1

// #define Board_HX1_EN				MSP_OCT1_432P401RLP_HX1_EN
// #define Board_HX1_TX				MSP_OCT1_432P401RLP_HX1_TX


#define Board_DEBUG0				MSP_OCT1_432P401RLP_DEBUG0
#define Board_DEBUG1				MSP_OCT1_432P401RLP_DEBUG1
#define Board_DEBUG2				MSP_OCT1_432P401RLP_DEBUG2
#define Board_DEBUG3				MSP_OCT1_432P401RLP_DEBUG3


#define Board_I2C0                  MSP_OCT1_432P401RLP_I2CB0

#define Board_PWM0                  MSP_OCT1_432P401RLP_PWM_TA1_1
#define Board_PWM1                  MSP_OCT1_432P401RLP_PWM_TA1_2

#define Board_SDSPI0                MSP_OCT1_432P401RLP_SDSPIB0

#define Board_SPI0                  MSP_OCT1_432P401RLP_SPIB0

#define Board_UART0                 MSP_OCT1_432P401RLP_UARTA0

#define Board_WATCHDOG0             MSP_OCT1_432P401RLP_WATCHDOG



/* Board specific I2C addresses */
#define Board_HMC5883L_ADDR           (0x3C >> 1)

#ifdef __cplusplus
}
#endif

#endif /* __BOARD_H */
