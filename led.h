#ifndef __LED_H
#define __LED_H


#include <stdint.h>


#define GPIOA                   (uint32_t*)0x40020000
#define GPIOD                   (uint32_t*)0x40020c00

#define PIN0                    0u
#define PIN12                   12u
#define PIN15                   15u


#define INPUT                   0x0u
#define OUTPUT                  0x1u


#define OUTPUT_PUSH_PULL        0x0u
#define OUTPUT_OPEN_DRAIN       0x1u

#define LOW_SPEED               0x0u
#define MEDIUM_Speed            0x1u
#define HIGH_SPEED              0x2u
#define VERY_HIGH_SPEED         0x3u

#define SET                     1u
#define RESET                   0u

uint8_t GPIO_Read_Pin(uint32_t *GPIOx, uint8_t Pin);
void GPIO_Write_Pin(uint32_t *GPIOx, uint8_t Pin, uint8_t PinValue);
void InputOutputConfig(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode);
void ButtonToggleLed();
#endif ButtonToggleLed()