#ifndef __ADC_H
#define __ADC_H	
#include "sys.h"


void Adc_Init(void);//��ʼ����������ADC��CH1ͨ����ʼ��
u16  Get_Adc(u8 ch); //�õ�һ��ADC�ɼ���ֵ��chΪͨ����1
u16 Get_Adc_Average(u8 ch,u8 times); //��ȡ��β�����ƽ��ֵ��chΪͨ����1
 
#endif 
