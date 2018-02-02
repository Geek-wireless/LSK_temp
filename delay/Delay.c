#include "stm32f10x.h"
#include "Delay.h"


void delay_ms(u16 nms)
{
    while(nms--)delay_us(1000);	 	 	    
}   		    								   
void delay_us(u32 nus)
{		
    u32 temp;
     SysTick->LOAD=9*nus;         //??????, 72MHZ?
     SysTick->CTRL=0X01;         //??,???????,???????
     SysTick->VAL=0;                //?????
     do
     {
         temp=SysTick->CTRL;           //????????
     }
     while((temp&0x01)&&(!(temp&(1<<16))));     //??????
     SysTick->CTRL=0;    //?????
    SysTick->VAL=0;        //?????
}
