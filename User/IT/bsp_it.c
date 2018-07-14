#include "bsp_it.h"

/********************************Ƕ�������жϳ�ʼ��**********************************************/
void NVIC_Configuration(void)
{
   NVIC_InitTypeDef NVIC_InitStructure;
  
   NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);                         //�ж���������
	
   /* Ƶ�� �����ж� */
	 NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;                      //6��7��8��9��
   NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;               //��ռ���ȼ�1
   NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;                      //��Ӧ���ȼ�0
   NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;                         //ʹ��
   NVIC_Init(&NVIC_InitStructure);
	
	 NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;	                               //�ж���
	 NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;                        //��ռ���ȼ�1
	 NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;                               //��Ӧ���ȼ�0
	 NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;                                  //���ж�
	 NVIC_Init(&NVIC_InitStructure);                                                  //д��Ĵ���
	
}
/***********************************�ⲿ�жϳ�ʼ��********************************************/

void EXTI_Config(void)
{
	 GPIO_InitTypeDef GPIO_InitStructure; 
	 EXTI_InitTypeDef EXTI_InitStructure;

	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC |   RCC_APB2Periph_AFIO,ENABLE);  //�� PC���ź�AFIOʱ��	
	
   NVIC_Configuration();                                                       //�������жϳ�ʼ�����������
	
	 /* Ƶ�� */
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	                              // ��������
   GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6; 
   GPIO_Init(GPIOC, &GPIO_InitStructure);	                                     //ѡ����PC0

   GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource6);                 
   EXTI_InitStructure.EXTI_Line = EXTI_Line6;                                  //ѡ��0
   EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;                         //�ж�ģʽ
   EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;                     //�½����ж�
   EXTI_InitStructure.EXTI_LineCmd = ENABLE;                                   //���ж�
   EXTI_Init(&EXTI_InitStructure);                                             //д��Ĵ���
	
	 /* ���� */
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	                              // ��������
   GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7; 
   GPIO_Init(GPIOC, &GPIO_InitStructure);	                                     //ѡ����PC13

   GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource7);                 
   EXTI_InitStructure.EXTI_Line = EXTI_Line7;                                  //ѡ��13
   EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;                         //�ж�ģʽ
   EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;                     //�½����ж�
   EXTI_InitStructure.EXTI_LineCmd = ENABLE;                                   //���ж�
   EXTI_Init(&EXTI_InitStructure);                                             //д��Ĵ���
	 
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	                              // ��������
   GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8; 
   GPIO_Init(GPIOC, &GPIO_InitStructure);	                                     //ѡ����PC13

   GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource8);                 
   EXTI_InitStructure.EXTI_Line = EXTI_Line8;                                  //ѡ��13
   EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;                         //�ж�ģʽ
   EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;                     //�½����ж�
   EXTI_InitStructure.EXTI_LineCmd = ENABLE;                                   //���ж�
   EXTI_Init(&EXTI_InitStructure);                                             //д��Ĵ���
	 
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	                              // ��������
   GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9; 
   GPIO_Init(GPIOC, &GPIO_InitStructure);	                                     //ѡ����PC13

   GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource9);                 
   EXTI_InitStructure.EXTI_Line = EXTI_Line9;                                  //ѡ��13
   EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;                         //�ж�ģʽ
   EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;                     //�½����ж�
   EXTI_InitStructure.EXTI_LineCmd = ENABLE;                                   //���ж�
   EXTI_Init(&EXTI_InitStructure);                                             //д��Ĵ���
	
}
