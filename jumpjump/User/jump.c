#include "jump.h"

void JUMP(int Length)
{
	int tim=(float)(Length/32.5)*1000;
	TIM_SetCompare1(TIM4,2);
	wait(tim);
	TIM_SetCompare1(TIM4,3);
}
