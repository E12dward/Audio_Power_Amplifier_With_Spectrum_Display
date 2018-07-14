/**
  ******************************************************************************
  * @file    Project/STM32F10x_StdPeriph_Template/stm32f10x_it.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and 
  *          peripherals interrupt service routine.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_it.h"
#include "bsp_FFT.h"
#include "bsp_ADC.h"
#include "bsp_USART.h"
#include "bsp_it.h"
#include "bsp_led.h"   
#include "bsp_rgbled.h"


float AD;
extern int e;
extern int b;    //亮度
extern int p;    //静音

extern uint8_t flag;
extern uint32_t lBufInArray[NPT];
extern __IO uint16_t ADC_ConvertedValue[2048];

/** @addtogroup STM32F10x_StdPeriph_Template
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            Cortex-M3 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief  This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void)
{
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{
}

/**
  * @brief  This function handles PendSVC exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void)
{
}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void)
{
}

/******************************************************************************/
/*                 STM32F10x Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32f10x_xx.s).                                            */
/******************************************************************************/

void DMA1_Channel1_IRQHandler(void)
{
	 int i = 0;

   if(DMA_GetFlagStatus(DMA1_FLAG_HT1) == SET)    //判断是否为DMA发送过半中断 
	 {
	
      for(i=0; i<NPT; i++)
		  {
				lBufInArray[i] = ADC_ConvertedValue[i] << 16;
      }
			i = 0;

		  DMA_ClearFlag(DMA1_FLAG_HT1);
   }
	 
	 if(DMA_GetFlagStatus(DMA1_FLAG_TC1) == SET)    //判断是否为DMA发送完成中断 
	 { 
		
      for(i=0; i<NPT; i++)
		  {
         lBufInArray[i] = ADC_ConvertedValue[i+1024] << 16;
      }
			i = 0;
		
		  DMA_ClearFlag(DMA1_FLAG_TC1);
   }
	
	 flag = 0;                                       //数据采集装入完成 
}



void EXTI9_5_IRQHandler(void)
{
	if(EXTI_GetITStatus(EXTI_Line6) != RESET) 
	{ 
     e=0;
	}
	EXTI_ClearITPendingBit(EXTI_Line6);  

if(EXTI_GetITStatus(EXTI_Line7) != RESET) 
	{ 
     e=1;
	}
	EXTI_ClearITPendingBit(EXTI_Line7); 

if(EXTI_GetITStatus(EXTI_Line8) != RESET) 
	{ 
     p=p+1;
		 if(p>1)
		 {p=0;}
		 
		 if(p==0)
		 {GPIO_ResetBits(GPIOE, GPIO_Pin_6);} 
		 else if(p==1)
		 {GPIO_SetBits(GPIOE, GPIO_Pin_6);}
	}
	EXTI_ClearITPendingBit(EXTI_Line8); 

if(EXTI_GetITStatus(EXTI_Line9) != RESET) 
	{    
		  b=b*2;
      if(b>128)
       b=8;				
	} 
	EXTI_ClearITPendingBit(EXTI_Line9); 	
 }

/**
  * @brief  This function handles PPP interrupt request.
  * @param  None
  * @retval None
  */
/*void PPP_IRQHandler(void)
{
}*/

/**
  * @}
  */ 


/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
