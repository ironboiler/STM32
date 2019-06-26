#include "key.h"
#include "led.h"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	HAL_Delay(10);
	
	switch(GPIO_Pin)
	{
		case GPIO_PIN_0:
			if(WK_UP==1)
			{
				//Function1
			}
			break;
		case GPIO_PIN_3:
			if(KEY1==0)
			{
				//Function2
			}
			break;
		case GPIO_PIN_4:
			if(KEY0==0)
			{
				//Function3
			}
			break;
		case GPIO_PIN_2:
			if(KEY2==0)
			{
				//Function4
			}
			break;
		}
}
