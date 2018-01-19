在中断文件中包含
加
extern int time_count;

void  BASIC_TIM_IRQHandler (void)
{

	if ( TIM_GetITStatus( BASIC_TIM, TIM_IT_Update) != RESET ) 
	{	
		time_count++;
		TIM_ClearITPendingBit(BASIC_TIM , TIM_FLAG_Update);  		 
	}		 	
}