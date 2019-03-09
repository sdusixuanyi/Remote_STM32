#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "key.h"
#include "spi.h"
#include "24l01.h"  
#include "switch.h"
#include "beep.h"
//ALIENTEK Mini STM32�����巶������24
//����ͨ��ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾  
void Init()
{
	delay_init();	    	 	//��ʱ������ʼ��	
	LED_Init();		  			//��ʼ����LED���ӵ�Ӳ���ӿ�	
 	KEY_Init();						//������ʼ��
	Switch_Init();				//���뿪�س�ʼ��
	uart_init(9600);	 		//���ڳ�ʼ��Ϊ9600
 	NRF24L01_Init();    	//��ʼ��NRF24L01  
	Beep_Init();					//��ʼ��������ģ��
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// �����ж����ȼ�����2
}
	int main(void)
 {
//	u8 i;
//	u16 t=0;			 
	u8 tmp_buf[33]="sagjasitfefryiwfkjd"; 
	Init();
 	while(NRF24L01_Check())	//���NRF24L01�Ƿ���λ.	
	{
		delay_ms(200);
		LED_ON(1);
	}
	 NRF24L01_TX_Mode();	
	 while(1)
	 {
			NRF24L01_TxPacket(tmp_buf);
		 LED_Water (500);
		 LED_ON(1);
		 delay_ms(500);
		 LED_OFF(1);
	 }		
}



























