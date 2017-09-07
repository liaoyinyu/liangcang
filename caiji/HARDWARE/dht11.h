#ifndef __DHT11_H
#define __DHT11_H 
#include "sys.h"   
//////////////////////////////////////////////////////////////////////////////////	 

//DHT11������ʪ�ȴ�������������	   
//ʹ��PB11�˿�
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////
 
//IO��������
#define DHT11_IO_IN()  {GPIOB->CRH&=0XFFFFFFF0;GPIOB->CRH|=8;}
#define DHT11_IO_OUT() {GPIOB->CRH&=0XFFFFFFF0;GPIOB->CRH|=3;}
////IO��������											   
#define	DHT11_DQ_OUT PBout(8) //���ݶ˿�	PB8
#define	DHT11_DQ_IN  PBin(8)  //���ݶ˿�	PB8


u8 DHT11_Init(void);//��ʼ��DHT11
u8 DHT11_Read_Data(u8 *temp,u8 *humi);//��ȡ��ʪ��
u8 DHT11_Read_Byte(void);//����һ���ֽ�
u8 DHT11_Read_Bit(void);//����һ��λ
u8 DHT11_Check(void);//����Ƿ����DHT11
void DHT11_Rst(void);//��λDHT11    
#endif















