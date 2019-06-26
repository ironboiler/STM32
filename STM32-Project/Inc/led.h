#ifndef LED_H
#define LED_H

#include "gpio.h"

#define LED_RED_ON()		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET)
#define LED_RED_OFF()		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET)

#define LED_GREEN_ON()		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_5,GPIO_PIN_RESET)
#define LED_GREEN_OFF()		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_5,GPIO_PIN_SET)

#define LED_RED_TOGGLE()		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5)
#define LED_GREEN_TOGGLE()	HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_5)

#endif
