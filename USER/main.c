#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "key.h"
#include "spi.h"
#include "24l01.h"  
#include "switch.h"
#include "beep.h"
//ALIENTEK Mini STM32开发板范例代码24
//无线通信实验  
//技术支持：www.openedv.com
//广州市星翼电子科技有限公司  
void Init()
{
	delay_init();	    	 	//延时函数初始化	
	LED_Init();		  			//初始化与LED连接的硬件接口	
 	KEY_Init();						//按键初始化
	Switch_Init();				//拨码开关初始化
	uart_init(9600);	 		//串口初始化为9600
 	NRF24L01_Init();    	//初始化NRF24L01  
	Beep_Init();					//初始化蜂鸣器模块
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// 设置中断优先级分组2
}
	int main(void)
 {
//	u8 i;
//	u16 t=0;			 
	u8 tmp_buf[33]="sagjasitfefryiwfkjd"; 
	Init();
 	while(NRF24L01_Check())	//检查NRF24L01是否在位.	
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



























