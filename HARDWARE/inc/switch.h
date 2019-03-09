#ifndef _SWITCH_H_
#define _SWITCH_H_

#include "sys.h"

#define Switch0  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_8)//��ȡ���뿪��0
#define Switch1  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_9)//��ȡ���뿪��1
#define Switch2  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_10)//��ȡ���뿪��2 
#define Switch3  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_11)//��ȡ���뿪��3 



void Switch_Init(void);		//IO��ʼ��
u8 Switch_Scan(void);  		//���뿪��ɨ����򷵻�ֵΪ��ǰģʽ0~3�ߵ�ƽΪ1���͵�ƽΪ0���������ۼ�



#endif



