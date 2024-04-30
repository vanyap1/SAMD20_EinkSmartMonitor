/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAMD20 has 8 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7

#define PA06 GPIO(GPIO_PORTA, 6)
#define RF_INT GPIO(GPIO_PORTA, 7)
#define PA08 GPIO(GPIO_PORTA, 8)
#define PA09 GPIO(GPIO_PORTA, 9)
#define PA10 GPIO(GPIO_PORTA, 10)
#define RF_CS GPIO(GPIO_PORTA, 14)
#define EP_CS GPIO(GPIO_PORTA, 15)
#define EP_CMD GPIO(GPIO_PORTA, 16)
#define EP_BUSY GPIO(GPIO_PORTA, 17)
#define GLD GPIO(GPIO_PORTA, 18)
#define PA22 GPIO(GPIO_PORTA, 22)
#define PA23 GPIO(GPIO_PORTA, 23)
#define RTC_INT GPIO(GPIO_PORTA, 25)
#define EP_EN GPIO(GPIO_PORTA, 27)
#define EP_RST GPIO(GPIO_PORTA, 11)
#define RF_RST GPIO(GPIO_PORTA, 19)
#endif // ATMEL_START_PINS_H_INCLUDED