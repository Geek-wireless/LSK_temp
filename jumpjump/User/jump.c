#include "jump.h"

void JUMP(int Length)
{
	TIM_SetCompare1(TIM4,2);
	wait(Length);
	TIM_SetCompare1(TIM4,3);
}
