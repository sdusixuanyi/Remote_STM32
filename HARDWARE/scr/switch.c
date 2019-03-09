#include "switch.h"
#include "delay.h"

void Switch_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//使能PORTA时钟	
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11;//PA15
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //设置成上拉输入
 	GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化GPIOA15
	
}



u8 Switch_Scan(void)
{
	u8 Switch_Num;
	u8 S0=0,S1=0,S2=0,S3=0;
	if(Switch0==0)S0=0; else S0=1;
	if(Switch1==0)S1=0; else S1=1;
	if(Switch2==0)S2=0; else S2=1;
	if(Switch3==0)S3=0; else S3=1;
	Switch_Num=S0+S1*2+S2*4+S3+8;
	return Switch_Num;
}





