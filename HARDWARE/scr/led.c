#include "led.h"
#include "delay.h"
 	   
//��ʼ�������.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��-PB12~PB15
void LED_Init(void)
{ 
 GPIO_InitTypeDef  GPIO_InitStructure; 	
	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;				
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
		
 GPIO_SetBits(GPIOB,GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15);				
}
 

//����LED���ĳ��򣬴����Ӧ��LED�˿ںţ��øö˿ںŵ�LED����
void LED_ON(u8 num)
{
	switch (num)
	{
		case 0:LED0=0;break;
		case 1:LED1=0;break;
		case 2:LED2=0;break;
		case 3:LED3=0;break;
		default :delay_us(10);break;
	}
}


//Ϩ���Ӧ��LED
void LED_OFF(u8 num)
{
	switch (num)
	{
		case 0:LED0=1;break;
		case 1:LED1=1;break;
		case 2:LED2=1;break;
		case 3:LED3=1;break;
		default :delay_us(10);break;
	}
}


//�ĸ�LEDѭ����tmsʱ����������ʱ��ˮһ��
void LED_Water(u16 tms)
{
	LED0=0;delay_ms (tms);LED0=1;
	LED1=0;delay_ms (tms);LED1=1;
	LED2=0;delay_ms (tms);LED2=1;
	LED3=0;delay_ms (tms);LED3=1;
}


//LED��tms���������˸
void LED_Turn(u8 num,u16 tms)
{
	switch(num)
	{
		case 0:LED_ON(0);delay_ms(tms);LED_OFF(0);break;
		case 1:LED_ON(1);delay_ms(tms);LED_OFF(1);break;
		case 2:LED_ON(2);delay_ms(tms);LED_OFF(2);break;
		case 3:LED_ON(3);delay_ms(tms);LED_OFF(3);break;
		default :delay_us(tms);break;
	}
}
