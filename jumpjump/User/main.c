 
#include "sys.h"//IO操作有关封装
#include "bsp_usart.h"
#include "PWM.h"
#include "jump.h"
#include "clock.h"
#include "test.h"

int main(void)
{
	int Length;
	USART_Config();
	BASIC_TIM_Init();
	PWM_config();
	test_config();
	
	//scanf("%d",&Length);
	
	//Jump(Length);


}





