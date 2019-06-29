#ifndef MELODY_H
#define MELODY_H

#include "main.h"

#define BEEP_ON()			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_RESET)
#define BEEP_OFF()		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_SET)

extern u16 count;

typedef void (*melody_type) (void);

typedef struct {
	melody_type melody_fun;
} melody_struct;

void music_play_a_melody(const u8* song);

#endif
