#include "./iic/iic.h"

void I2c_confige(void)
{
	I2C_InitTypeDef I2C_struct;
	GPIO_InitTypeDef GPIO_struct;
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C1,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);//≥ı º ±÷”
	
	GPIO_struct.GPIO_Mode=GPIO_Mode_AF_OD;
	GPIO_struct.GPIO_Pin=I2C1_SDA_PIN|I2C1_SCL_PIN;
	GPIO_struct.GPIO_Speed=GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOB , &GPIO_struct);//≥ı ºgpio
	
	I2C_struct.I2C_Ack=I2C_Ack_Enable;
	I2C_struct.I2C_AcknowledgedAddress=I2C_AcknowledgedAddress_7bit;
	I2C_struct.I2C_ClockSpeed=100000;
	I2C_struct.I2C_DutyCycle=I2C_DutyCycle_2;
	I2C_struct.I2C_Mode=I2C_Mode_I2C;
	//I2C_struct.I2C_OwnAddress1=
	
	I2C_Init(I2C1, &I2C_struct);
	
}
