#include "bsp_it.h"

/********************************嵌套向量中断初始化**********************************************/
void NVIC_Configuration(void)
{
   NVIC_InitTypeDef NVIC_InitStructure;
  
   NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);                         //中断向量分组
	
   /* 频谱 按键中断 */
	 NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;                      //6、7、8、9线
   NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;               //抢占优先级1
   NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;                      //响应优先级0
   NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;                         //使能
   NVIC_Init(&NVIC_InitStructure);
	
	 NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;	                               //中断线
	 NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;                        //抢占优先级1
	 NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;                               //响应优先级0
	 NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;                                  //开中断
	 NVIC_Init(&NVIC_InitStructure);                                                  //写入寄存器
	
}
/***********************************外部中断初始化********************************************/

void EXTI_Config(void)
{
	 GPIO_InitTypeDef GPIO_InitStructure; 
	 EXTI_InitTypeDef EXTI_InitStructure;

	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC |   RCC_APB2Periph_AFIO,ENABLE);  //开 PC引脚和AFIO时钟	
	
   NVIC_Configuration();                                                       //必须在中断初始化函数里调用
	
	 /* 频率 */
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	                              // 上拉输入
   GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6; 
   GPIO_Init(GPIOC, &GPIO_InitStructure);	                                     //选引脚PC0

   GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource6);                 
   EXTI_InitStructure.EXTI_Line = EXTI_Line6;                                  //选线0
   EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;                         //中断模式
   EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;                     //下降沿中断
   EXTI_InitStructure.EXTI_LineCmd = ENABLE;                                   //开中断
   EXTI_Init(&EXTI_InitStructure);                                             //写入寄存器
	
	 /* 波形 */
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	                              // 上拉输入
   GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7; 
   GPIO_Init(GPIOC, &GPIO_InitStructure);	                                     //选引脚PC13

   GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource7);                 
   EXTI_InitStructure.EXTI_Line = EXTI_Line7;                                  //选线13
   EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;                         //中断模式
   EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;                     //下降沿中断
   EXTI_InitStructure.EXTI_LineCmd = ENABLE;                                   //开中断
   EXTI_Init(&EXTI_InitStructure);                                             //写入寄存器
	 
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	                              // 上拉输入
   GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8; 
   GPIO_Init(GPIOC, &GPIO_InitStructure);	                                     //选引脚PC13

   GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource8);                 
   EXTI_InitStructure.EXTI_Line = EXTI_Line8;                                  //选线13
   EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;                         //中断模式
   EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;                     //下降沿中断
   EXTI_InitStructure.EXTI_LineCmd = ENABLE;                                   //开中断
   EXTI_Init(&EXTI_InitStructure);                                             //写入寄存器
	 
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	                              // 上拉输入
   GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9; 
   GPIO_Init(GPIOC, &GPIO_InitStructure);	                                     //选引脚PC13

   GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource9);                 
   EXTI_InitStructure.EXTI_Line = EXTI_Line9;                                  //选线13
   EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;                         //中断模式
   EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;                     //下降沿中断
   EXTI_InitStructure.EXTI_LineCmd = ENABLE;                                   //开中断
   EXTI_Init(&EXTI_InitStructure);                                             //写入寄存器
	
}
