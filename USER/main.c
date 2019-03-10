#include "led.h"
#include "delay.h"
#include "sys.h"
#include "key.h"
#include "spi.h"
#include "24l01.h"  
#include "switch.h"
#include "beep.h"
#include "adc.h"
#include "oled.h"
#include "exti.h"
//ALIENTEK Mini STM32�����巶������24
//����ͨ��ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾  
void Init()
{
	Adc_Init();
	delay_init();	    	 	//��ʱ������ʼ��	
	LED_Init();		  			//��ʼ����LED���ӵ�Ӳ���ӿ�	
 	KEY_Init();						//������ʼ��
	EXTIX_Init();				//�ⲿ�жϳ�ʼ������
	OLED_Init();
	Switch_Init();				//���뿪�س�ʼ��
 	NRF24L01_Init();    	//��ʼ��NRF24L01  
	Beep_Init();					//��ʼ��������ģ��
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// �����ж����ȼ�����2
}
	int main(void)
 {
//	u16 t=0;			 
//	u8 tmp_buf[33]="sagjasitfefryiwfkjd"; 
	Init();
	 OLED_ShowCHinese(0,0,0);
// 	while(NRF24L01_Check())	//���NRF24L01�Ƿ���λ.	
//	{
//		delay_ms(200);
//		LED_ON(1);
//	}
//	 NRF24L01_TX_Mode();	
	 while(1)
	 {
//			NRF24L01_TxPacket(tmp_buf);
//		 OLED_Clear();
//		OLED_ShowCHinese(126,0,0);//?
		 if (Switch0 == 1)
			LED_Water (500);
	 }		
}



























