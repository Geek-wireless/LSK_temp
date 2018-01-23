 
#include "sys.h"//IO操作有关封装
#include "bsp_usart.h"
#include "PWM.h"
#include "jump.h"
#include "clock.h"
#include "test.h"
	int Length=-1;
int main(void)
{
	USART_Config();
	BASIC_TIM_Init();
	PWM_config();
	//test_config();
	while(1)
	{
	while(Length==-1);
	JUMP(Length);
	Length=-1;
	}
}





