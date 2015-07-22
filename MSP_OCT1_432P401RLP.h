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
/** ============================================================================
 *  @file       MSP_OCT1_432P401RLP.h
 *
 *  @brief      MSP_OCT1_432P401RLP Board Specific APIs
 *
 *  The MSP_OCT1_432P401RLP header file should be included in an application as
 *  follows:
 *  @code
 *  #include <MSP_OCT1_432P401RLP.h>
 *  @endcode
 *
 *  ============================================================================
 */
#ifndef __MSP_OCT1_432P401RLP_H
#define __MSP_OCT1_432P401RLP_H

#ifdef __cplusplus
extern "C" {
#endif

/* LEDs on MSP_OCT1_432P401RLP are active high. */
#define MSP_OCT1_432P401RLP_LED_OFF (0)
#define MSP_OCT1_432P401RLP_LED_ON  (1)

/*!
 *  @def    MSP_OCT1_432P401RLP_GPIOName
 *  @brief  Enum of GPIO names on the MSP_OCT1_432P401RLP dev board
 */
typedef enum MSP_OCT1_432P401RLP_GPIOName {
	MSP_OCT1_432P401RLP_LED0 = 0, //P9.3
	MSP_OCT1_432P401RLP_LED1, //P5.7
	MSP_OCT1_432P401RLP_HX1_EN, //P5.6
	MSP_OCT1_432P401RLP_5V_EN, //P2.1
	MSP_OCT1_432P401RLP_M1234SLEEP, //P2.2
	MSP_OCT1_432P401RLP_M5678SLEEP, //P3.2

	MSP_OCT1_432P401RLP_M1IN1, //P2.3
	MSP_OCT1_432P401RLP_M1IN2, //P2.4
	MSP_OCT1_432P401RLP_M2IN1, //P2.5
	MSP_OCT1_432P401RLP_M2IN2, //P2.6
	MSP_OCT1_432P401RLP_M3IN1, //P2.7
	MSP_OCT1_432P401RLP_M3IN2, //P10.4
	MSP_OCT1_432P401RLP_M4IN1, //P10.5
	MSP_OCT1_432P401RLP_M4IN2, //P7.4
	MSP_OCT1_432P401RLP_M5IN1, //P7.5
	MSP_OCT1_432P401RLP_M5IN2, //P7.6
	MSP_OCT1_432P401RLP_M6IN1, //P7.7
	MSP_OCT1_432P401RLP_M6IN2, //P8.0
	MSP_OCT1_432P401RLP_M7IN1, //P3.0
	MSP_OCT1_432P401RLP_M7IN2, //P8.1
	MSP_OCT1_432P401RLP_M8IN1, //P3.1
	MSP_OCT1_432P401RLP_M8IN2, //P8.2


    MSP_OCT1_432P401RLP_GPIOCOUNT
} MSP_OCT1_432P401RLP_GPIOName;

/*!
 *  @def    MSP_OCT1_432P401RLP_I2CName
 *  @brief  Enum of I2C names on the MSP_OCT1_432P401RLP dev board
 */
typedef enum MSP_OCT1_432P401RLP_I2CName {
    MSP_OCT1_432P401RLP_I2CB0 = 0,

    MSP_OCT1_432P401RLP_I2CCOUNT
} MSP_OCT1_432P401RLP_I2CName;

/*!
 *  @def    MSP_OCT1_432P401RLP_PWMName
 *  @brief  Enum of PWM names on the MSP_OCT1_432P401RLP dev board
 */
typedef enum MSP_OCT1_432P401RLP_PWMName {
    MSP_OCT1_432P401RLP_PWM_TA1_1 = 0,
    MSP_OCT1_432P401RLP_PWM_TA1_2,

    MSP_OCT1_432P401RLP_PWMCOUNT
} MSP_OCT1_432P401RLP_PWMName;

/*!
 *  @def    MSP_OCT1_432P401RLP_SDSPIName
 *  @brief  Enum of SDSPI names on the MSP_OCT1_432P401RLP dev board
 */
typedef enum MSP_OCT1_432P401RLP_SDSPIName {
    MSP_OCT1_432P401RLP_SDSPIB0 = 0,

    MSP_OCT1_432P401RLP_SDSPICOUNT
} EMSP_OCT1_432P401RLP_SDSPIName;

/*!
 *  @def    MSP_OCT1_432P401RLP_SPIName
 *  @brief  Enum of SPI names on the MSP_OCT1_432P401RLP dev board
 */
typedef enum MSP_OCT1_432P401RLP_SPIName {
    MSP_OCT1_432P401RLP_SPIB0 = 0,
    MSP_OCT1_432P401RLP_SPIB2,

    MSP_OCT1_432P401RLP_SPICOUNT
} MSP_OCT1_432P401RLP_SPIName;

/*!
 *  @def    MSP_OCT1_432P401RLP_UARTName
 *  @brief  Enum of UART names on the MSP_OCT1_432P401RLP dev board
 */
typedef enum MSP_OCT1_432P401RLP_UARTName {
    MSP_OCT1_432P401RLP_UARTA0 = 0, //TX: P1.3, RX: P1.2, "backchannel", "debugger cable"

    MSP_OCT1_432P401RLP_UARTCOUNT
} MSP_OCT1_432P401RLP_UARTName;

/*!
 *  @def    MSP_OCT1_432P401RLP_WatchdogName
 *  @brief  Enum of Watchdog names on the MSP_OCT1_432P401RLP dev board
 */
typedef enum MSP_OCT1_432P401RLP_WatchdogName {
    MSP_OCT1_432P401RLP_WATCHDOG = 0,

    MSP_OCT1_432P401RLP_WATCHDOGCOUNT
} MSP_OCT1_432P401RLP_WatchdogName;


/*!
 *  @brief  Initialize the general board specific settings
 *
 *  This function initializes the general board specific settings.
 */
extern void MSP_OCT1_432P401RLP_initGeneral(void);

/*!
 *  @brief  Initialize board specific GPIO settings
 *
 *  This function initializes the board specific GPIO settings and
 *  then calls the GPIO_init API to initialize the GPIO module.
 *
 *  The GPIOs controlled by the GPIO module are determined by the GPIO_PinConfig
 *  variable.
 */
extern void MSP_OCT1_432P401RLP_initGPIO(void);

/*!
 *  @brief  Initialize board specific I2C settings
 *
 *  This function initializes the board specific I2C settings and then calls
 *  the I2C_init API to initialize the I2C module.
 *
 *  The I2C peripherals controlled by the I2C module are determined by the
 *  I2C_config variable.
 */
extern void MSP_OCT1_432P401RLP_initI2C(void);

/*!
 *  @brief  Initialize board specific PWM settings
 *
 *  This function initializes the board specific PWM settings and then calls
 *  the PWM_init API to initialize the PWM module.
 *
 *  The PWM peripherals controlled by the PWM module are determined by the
 *  PWM_config variable.
 */
extern void MSP_OCT1_432P401RLP_initPWM(void);

/*!
 *  @brief  Initialize board specific SDSPI settings
 *
 *  This function initializes the board specific SDSPI settings and then calls
 *  the SDSPI_init API to initialize the SDSPI module.
 *
 *  The SDSPI peripherals controlled by the SDSPI module are determined by the
 *  SDSPI_config variable.
 */
extern void MSP_OCT1_432P401RLP_initSDSPI(void);

/*!
 *  @brief  Initialize board specific SPI settings
 *
 *  This function initializes the board specific SPI settings and then calls
 *  the SPI_init API to initialize the SPI module.
 *
 *  The SPI peripherals controlled by the SPI module are determined by the
 *  SPI_config variable.
 */
extern void MSP_OCT1_432P401RLP_initSPI(void);

/*!
 *  @brief  Initialize board specific UART settings
 *
 *  This function initializes the board specific UART settings and then calls
 *  the UART_init API to initialize the UART module.
 *
 *  The UART peripherals controlled by the UART module are determined by the
 *  UART_config variable.
 */
extern void MSP_OCT1_432P401RLP_initUART(void);

/*!
 *  @brief  Initialize board specific Watchdog settings
 *
 *  This function initializes the board specific Watchdog settings and then
 *  calls the Watchdog_init API to initialize the Watchdog module.
 *
 *  The Watchdog peripherals controlled by the Watchdog module are determined
 *  by the Watchdog_config variable.
 */
extern void MSP_OCT1_432P401RLP_initWatchdog(void);


#ifdef __cplusplus
}
#endif

#endif /* __MSP_OCT1_432P401RLP_H */