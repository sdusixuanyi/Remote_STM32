#ifndef __LED_H
#define __LED_H	 
#include "sys.h"

#define LED0 PBout(12)	// PC12
#define LED1 PBout(13)	// PC13	
#define LED2 PBout(14)	// PC14	
#define LED3 PBout(15)	// PC15


void LED_Init(void);//初始
void LED_ON(u8 num);//点亮LED
void LED_OFF(u8 num);//关闭LED
void LED_Water(u16 tms);//LED流水
void LED_Turn(u8 num,u16 tms);//led以tms间隔进行闪烁
		 				    
#endif
