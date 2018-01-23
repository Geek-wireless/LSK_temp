#include "jump.h"
#include "bsp_usart.h"
#include "stm32f10x.h"
void JUMP(int Length)
{
	int tim=Length/32.5;
	printf("%d len\n",Length);
	
	USART_SendData(USART1,Length);

	TIM_SetCompare1(TIM4,2);
	wait(tim);
	TIM_SetCompare1(TIM4,3);
}
