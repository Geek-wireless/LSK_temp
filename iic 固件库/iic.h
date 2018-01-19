#ifndef _IIC_H_
#define _IIC_H_

#include <stm32f10x.h>

#define I2C1_SCL_PORT GPIOB
#define I2C1_SCL_PIN GPIO_Pin_6

#define I2C1_SDA_PORT GPIOB
#define I2C1_SDA_PIN GPIO_Pin_7

void I2c_confige(void);
#endif