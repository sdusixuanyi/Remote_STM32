#ifndef _SWITCH_H_
#define _SWITCH_H_

#include "sys.h"

#define Switch0  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_8)//读取拨码开关0
#define Switch1  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_9)//读取拨码开关1
#define Switch2  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_10)//读取拨码开关2 
#define Switch3  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_11)//读取拨码开关3 



void Switch_Init(void);		//IO初始化
u8 Switch_Scan(void);  		//拨码开关扫描程序返回值为当前模式0~3高电平为1，低电平为0，二进制累加



#endif



