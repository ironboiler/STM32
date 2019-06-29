#include "delay_us.h"
#include "core_cm3.h"

u8 fac_us;

//SYSCLK is System Clock Frequency
void delay_init(u8 SYSCLK)
{
	HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);
	fac_us = SYSCLK;
}
	

void delay_us(u32 nus)
{
	u32 ticks;
	u32 told,tnow,tcnt = 0;
	u32 reload = SysTick->LOAD;
	ticks = nus*fac_us;
	told = SysTick->VAL; //the value of counter when come in
	while(1)
	{
		tnow = SysTick->VAL;
		if(tnow!=told)
		{
			if(tnow < told)	tcnt+=told - tnow;	//SysTick is count down
			else	tcnt+=reload - tnow + told;
			told = tnow;
			if(tcnt>=ticks)	break;
		}
	}
}

