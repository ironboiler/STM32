#include "melody.h"
#include "delay_us.h"

static void melody_pause(void);
static void melody_do(void);
static void melody_re(void);
static void melody_mi(void);
static void melody_fa(void);
static void melody_so(void);
static void melody_la(void);
static void melody_si(void);
static void melody_interval(void);

u16 count = 0;

const melody_struct melody[] = 
{
	melody_pause,
	melody_do,
	melody_re,
	melody_mi,
	melody_fa,
	melody_so,
	melody_la,
	melody_si
};

static void melody_pause(void)
{
	HAL_Delay(200);
}

static void melody_do(void)
{
	u8 count;
	for(count = 102;count!=0;count--)
	{
		BEEP_ON();
		HAL_Delay(3);
		delay_us(906);
		BEEP_OFF();
	}
	melody_interval();
}

static void melody_re(void)
{
	u8 count;
	for(count = 115;count!=0;count--)
	{
		BEEP_ON();
		HAL_Delay(3);
		delay_us(472);
		BEEP_OFF();
	}
	melody_interval();
}

static void melody_mi(void)
{
	u8 count;
	for(count = 128;count!=0;count--)
	{
		BEEP_ON();
		HAL_Delay(3);
		delay_us(125);
		BEEP_OFF();
	}
	melody_interval();
}

static void melody_fa(void)
{
	u8 count;
	for(count = 136;count!=0;count--)
	{
		BEEP_ON();
		HAL_Delay(2);
		delay_us(932);
		BEEP_OFF();
	}
	melody_interval();
}

static void melody_so(void)
{
	u8 count;
	for(count = 154;count!=0;count--)
	{
		BEEP_ON();
		HAL_Delay(2);
		delay_us(604);
		BEEP_OFF();
	}
	melody_interval();
}

static void melody_la(void)
{
	u8 count;
	for(count = 171;count!=0;count--)
	{
		BEEP_ON();
		HAL_Delay(2);
		delay_us(341);
		BEEP_OFF();
	}
	melody_interval();
}

static void melody_si(void)
{
	u8 count;
	for(count = 192;count!=0;count--)
	{
		BEEP_ON();
		HAL_Delay(2);
		delay_us(83);
		BEEP_OFF();
	}
	melody_interval();
}

static void melody_interval(void)
{
	HAL_Delay(100);
}

void music_play_a_melody(const u8* song)
{
	if(song[count] != '\0') 
	melody[song[count++]].melody_fun();
}

