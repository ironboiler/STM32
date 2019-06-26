#ifndef KEY_H
#define KEY_H

#include "gpio.h"

#define WK_UP	HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)
#define KEY0	HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_4)
#define KEY1	HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_3)
#define KEY2  HAL_GPIO_ReadPin(GPIOE,GPIO_PIN_2)

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

#endif
