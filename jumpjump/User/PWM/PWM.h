#ifndef _PWM_H_
#define _PWM_H_
#include "sys.h"//IO操作有关封装
#define PWM_out_pin GPIO_Pin_6
#define PWM_GPIO GPIOB
void PWM_config(void);
void PWM_change(void);

#endif
