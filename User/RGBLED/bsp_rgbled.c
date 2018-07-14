#include "bsp_rgbled.h"

extern int c;    //ÑÓÊ±
extern int b;    //ÁÁ¶È

void delay(__IO uint32_t nCount)	
{
	for(; nCount != 0; nCount--);
}

void RGBLED_GPIO_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
		RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOE, ENABLE); 														   
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;	
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;     
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	
		GPIO_Init(GPIOB, &GPIO_InitStructure);	

    GPIO_ResetBits(GPIOB, GPIO_Pin_6);	
	 														   
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;	
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;     
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	
		GPIO_Init(GPIOE, &GPIO_InitStructure);	

    GPIO_SetBits(GPIOE, GPIO_Pin_6);	
}

void One(void)
{
		GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;	
	  GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		
}

void Zero(void)
{
		GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	

}

void Reset(void)
{
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		 GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		 GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		 GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;


}


void  Brightness(int x)
{
   switch(x)
	 {
		 case 0:     {Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();}break;  //0
		 case 2:     {Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  One(); }break;  //1
		 case 4:     {Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  One();   One(); }break;  //3
		 case 6:     {Zero();  Zero();  Zero();  Zero();  Zero();  One();   Zero();  One(); }break;  //5
		 case 8:     {Zero();  Zero();  Zero();  Zero();  Zero();  One();   One();   One(); }break;  //7
		 case 12:    {Zero();  Zero();  Zero();  Zero();  One();  Zero();   One();   One(); }break;  //11
		 case 16:    {Zero();  Zero();  Zero();  Zero();  One();   One();   One();   One(); }break;  //15
		 case 24:    {Zero();  Zero();  Zero();  One();  Zero();   One();   One();   One(); }break;  //23
		 case 32:    {Zero();  Zero();  Zero();  One();   One();   One();   One();   One(); }break;  //31 
     case 48:    {Zero();  Zero();  One();  Zero();   One();   One();   One();   One(); }break;  //47		 
		 case 64:    {Zero();  Zero();  One();   One();   One();   One();   One();   One(); }break;  //63
		 case 128:   {Zero();  One();   One();   One();   One();   One();   One();   One(); }break;  //127
     case 256:	 {One();   One();   One();   One();   One();   One();   One();   One(); }break;  //255	 
	 }
}


void Black(void)
{
   Brightness(0);
	 
	 Brightness(0);
	
	 Brightness(0);
}

void Green(void)
{	
	 Brightness(b);
	
	 Brightness(0);
	
	 Brightness(0);	
}


void Red(void)
{
	 Brightness(0);
	
   Brightness(b);
	
	 Brightness(0);
}

void Blue(void)
{

   Brightness(0);
	
	 Brightness(0);
	
	 Brightness(b);
}
	
void Red1()
{

   Brightness(0);
	
	 Brightness(b);
	
	 Brightness(b/4);
}

void Red2()
{

   Brightness(0);
	
	 Brightness(b);
	
	 Brightness(b/2);
}

void Red3()
{
   Brightness(0);
	
	 Brightness(b);
	
	 Brightness(b/4*3);
}
	
void Red4()
{
   Brightness(0);
	
	 Brightness(b);
	
	 Brightness(b);
}

void Red5()
{
   Brightness(0);
	
	 Brightness(b/4*3);
	
	 Brightness(b);
}

void Red6()
{
   Brightness(0);
	
	 Brightness(b/2);
	
	 Brightness(b);
}

void Red7()
{
   Brightness(0);
	
	 Brightness(b/4);
	
	Brightness(b);
}

void Blue1()
{
   Brightness(b/4);
	
	 Brightness(0);
	
	 Brightness(b);
}

void Blue2()
{
   Brightness(b/2);
	
	 Brightness(0);
	
	 Brightness(b);
}

void Blue3()
{
   Brightness(b/4*3);
	
	 Brightness(0);
	
	 Brightness(b);
}

void Blue4()
{
   Brightness(b);
	
	 Brightness(0);
	
	 Brightness(b);
}

void Blue5()
{
   Brightness(b);
	
	 Brightness(0);
	
	 Brightness(b);
}

void Blue6()
{
   Brightness(b);
	
	 Brightness(0);
	
	 Brightness(b/2);
}

void Blue7()
{
   Brightness(b);
	
	 Brightness(0);
	
	 Brightness(b/4);
}

void Green1()
{
   Brightness(b);
	
	 Brightness(b/4);
	
	 Brightness(0);
}

void Green2()
{
   Brightness(b);
	
	 Brightness(b/2);
	
	 Brightness(0);
}

void Green3()
{
   Brightness(b);
	
	 Brightness(b/4*3);
	
	 Brightness(0);
}

void Green4()
{
   Brightness(b);
	
	 Brightness(b);
	
	 Brightness(0);
}

void Green5()
{
   Brightness(b/4*3);
	
	 Brightness(b);
	
	 Brightness(0);
}

void Green6()
{
   Brightness(b/2);
	
	 Brightness(b);
	
	 Brightness(0);
}

void Green7()
{
   Brightness(b/4);
	
	 Brightness(b);
	
	 Brightness(0);
}


void Spectrum_Display(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10)
{
	Reset();
  switch (x1){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		}
	
		switch (x2){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		
		switch (x3){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x4){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x5){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x6){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x7){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x8){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x9){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x10){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		
	delay(2*c);
}


void Waveform_Display(uint16_t x1, uint16_t x2)
{

	Reset();
  switch (x1){
		case 0:  {
		           switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  
									        }break;
									 case 2:{}break;
									 case 3:{}break;
									 case 4:{}break;
							            }
		         } break;
		
		case 1:  {
		            switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  
									        }break;
									 case 2:{}break;
									 case 3:{}break;
									 case 4:{}break;
							            }
		
		         } break; 
		case 2:  {
		             switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  
									        }break;
									 case 2:{}break;
									 case 3:{}break;
									 case 4:{}break;
							            }
		         } break;
		case 3:  {
		             switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  
									        }break;
									 case 2:{}break;
									 case 3:{}break;
									 case 4:{}break;
							            }
		
		         } break;
		case 4:  {
		             switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  
									        }break;
									 case 2:{}break;
									 case 3:{}break;
									 case 4:{}break;
							            }
		         } break;
		case 5:  {
		              switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Black();Green1();Black();Black();Black();  Black();Black();Black();Black();Green2();Black();Black();Black();  Black();Black();Black();Black();Green1();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Blue7();Black();Black();Black();Black();  Black();Black();Black();Blue6();Black();Black();Black();Black();  Black();Black();Black();Blue5();Black();Black();Black();Black();  Black();Black();Black();Blue4();Black();Black();Black();Black();  Black();Black();Black();Black();Blue3();Black();Black();Black();  Black();Black();Black();Black();Blue2();Black();Black();Black();
									        }break;
									 case 2:{
									        Black();Black();Black();Black();Black();Blue();Black();Black();  Black();Black();Black();Black();Blue1();Black();Black();Black();  Black();Black();Black();Black();Blue2();Black();Black();Black();  Black();Black();Black();Blue3();Black();Black();Black();Black();  Black();Black();Black();Blue4();Black();Black();Black();Black();  Black();Black();Blue5();Black();Black();Black();Black();Black();  Black();Black();Black();Blue6();Black();Black();Black();Black();  Black();Black();Black();Blue7();Black();Black();Black();Black();  Black();Black();Black();Black();Blue6();Black();Black();Black();  Black();Black();Black();Black();Blue5();Black();Black();Black();
									        }break;
									 case 3:{
									        Black();Black();Black();Black();Black();Black();Red3();Black();  Black();Black();Black();Black();Black();Red4();Black();Black();  Black();Black();Black();Black();Red5();Black();Black();Black();  Black();Black();Black();Red6();Black();Black();Black();Black();  Black();Black();Red7();Black();Black();Black();Black();Black();  Black();Blue();Black();Black();Black();Black();Black();Black();  Black();Black();Red7();Black();Black();Black();Black();Black();  Black();Black();Black();Red6();Black();Black();Black();Black();  Black();Black();Black();Black();Red5();Black();Black();Black();  Black();Black();Black();Black();Black();Red4();Black();Black();
									        }break;
									 case 4:{
									        Black();Black();Black();Black();Black();Black();Black();Blue7();  Black();Black();Black();Black();Black();Black();Red();Black();  Black();Black();Black();Black();Red1();Red1();Black();Black();  Black();Black();Red2();Red2();Black();Black();Black();Black();  Black();Red3();Black();Black();Black();Black();Black();Black();  Red4();Black();Black();Black();Black();Black();Black();Black();  Black();Red5();Black();Black();Black();Black();Black();Black();  Black();Black();Red6();Red6();Black();Black();Black();Black();  Black();Black();Black();Black();Red7();Red7();Black();Black();  Black();Black();Black();Black();Black();Black();Red6();Black();
									        }break;
							            }
		         } break;
		case 6:  {
		              switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Black();Green1();Black();Black();Black();  Black();Black();Black();Black();Green2();Black();Black();Black();  Black();Black();Black();Black();Green1();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Blue7();Black();Black();Black();Black();  Black();Black();Black();Blue6();Black();Black();Black();Black();  Black();Black();Black();Blue5();Black();Black();Black();Black();  Black();Black();Black();Blue4();Black();Black();Black();Black();  Black();Black();Black();Black();Blue3();Black();Black();Black();  Black();Black();Black();Black();Blue2();Black();Black();Black();
									        }break;
									 case 2:{
									        Black();Black();Black();Black();Black();Blue();Black();Black();  Black();Black();Black();Black();Blue2();Black();Black();Black();  Black();Black();Black();Blue2();Blue2();Black();Black();Black();  Black();Black();Black();Blue3();Black();Black();Black();Black();  Black();Black();Blue4();Black();Black();Black();Black();Black();  Black();Black();Black();Blue5();Black();Black();Black();Black();  Black();Black();Black();Blue6();Blue6();Black();Black();Black();  Black();Black();Black();Black();Blue7();Black();Black();Black();  Black();Black();Black();Black();Black();Blue6();Black();Black();  Black();Black();Black();Black();Blue5();Black();Black();Black();
									        }break;
									 case 3:{
									        Black();Black();Black();Black();Black();Black();Red3();Black();  Black();Black();Black();Black();Black();Red4();Black();Black();  Black();Black();Black();Red5();Red5();Black();Black();Black();  Black();Black();Red6();Black();Black();Black();Black();Black();  Black();Red7();Black();Black();Black();Black();Black();Black();  Black();Black();Blue();Black();Black();Black();Black();Black();  Black();Black();Black();Red7();Red7();Black();Black();Black();  Black();Black();Black();Black();Black();Red6();Black();Black();  Black();Black();Black();Black();Black();Black();Red5();Black();  Black();Black();Black();Black();Black();Red4();Black();Black();
									        }break;
									 case 4:{
									        Black();Black();Black();Black();Black();Black();Black();Blue7();  Black();Black();Black();Black();Black();Red();Red();Black();  Black();Black();Red1();Red1();Red1();Red1();Black();Black();  Black();Red2();Red2();Black();Black();Black();Black();Black();  Red3();Black();Black();Black();Black();Black();Black();Black();  Black();Red4();Red4();Black();Black();Black();Black();Black();  Black();Black();Red5();Red5();Red5();Red5();Black();Black();  Black();Black();Black();Black();Black();Red6();Red6();Black();  Black();Black();Black();Black();Black();Black();Black();Red7();  Black();Black();Black();Black();Black();Red6();Red6();Black();
									        }break;
							            }
		         } break;
		case 7:  {
		              switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Green1();Black();Black();Black();Black();  Black();Black();Black();Green2();Black();Black();Black();Black();  Black();Black();Black();Green1();Black();Black();Black();Black();  Black();Black();Black();Black();Green();Black();Black();Black();  Black();Black();Black();Black();Blue7();Black();Black();Black();  Black();Black();Black();Black();Blue6();Black();Black();Black();  Black();Black();Black();Blue5();Black();Black();Black();Black();  Black();Black();Black();Blue4();Black();Black();Black();Black();  Black();Black();Black();Blue3();Black();Black();Black();Black();  Black();Black();Black();Black();Blue2();Black();Black();Black();
									        }break;
									 case 2:{
									        Black();Black();Black();Black();Blue();Black();Black();Black();  Black();Black();Black();Black();Black();Blue1();Black();Black();  Black();Black();Black();Black();Blue2();Black();Black();Black();  Black();Black();Black();Blue3();Black();Black();Black();Black();  Black();Black();Blue4();Black();Black();Black();Black();Black();  Black();Black();Black();Blue5();Black();Black();Black();Black();  Black();Black();Black();Black();Blue6();Black();Black();Black();  Black();Black();Black();Black();Black();Blue7();Black();Black();  Black();Black();Black();Black();Blue6();Black();Black();Black();  Black();Black();Black();Blue5();Black();Black();Black();Black(); 
									        }break;
									 case 3:{
									        Black();Black();Black();Black();Red3();Red3();Black();Black();  Black();Black();Black();Black();Black();Black();Red4();Black();  Black();Black();Black();Black();Red5();Red5();Black();Black();  Black();Black();Red6();Red6();Black();Black();Black();Black();  Black();Red7();Black();Black();Black();Black();Black();Black();  Black();Black();Blue();Blue();Black();Black();Black();Black();  Black();Black();Black();Black();Red7();Red7();Black();Black();  Black();Black();Black();Black();Black();Black();Red6();Black();  Black();Black();Black();Black();Red5();Red5();Black();Black();  Black();Black();Red4();Red4();Black();Black();Black();Black();
									        }break;
									 case 4:{
									        Black();Black();Black();Black();Blue();Blue();Black();Black();  Black();Black();Black();Black();Black();Black();Red();Red();  Black();Black();Black();Black();Red1();Red1();Black();Black();  Black();Black();Red2();Red2();Black();Black();Black();Black();  Red3();Red3();Black();Black();Black();Black();Black();Black();  Black();Black();Red4();Red4();Black();Black();Black();Black();  Black();Black();Black();Black();Red5();Red5();Black();Black();  Black();Black();Black();Black();Black();Black();Red6();Red6();  Black();Black();Black();Black();Red7();Red7();Black();Black();  Black();Black();Red6();Red6();Black();Black();Black();Black();  
									        }break;
							            }
		         } break;
		case 8:  {
		               switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Black();Green1();Black();Black();Black();  Black();Black();Black();Black();Green2();Black();Black();Black();  Black();Black();Black();Green1();Black();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Blue7();Black();Black();Black();  Black();Black();Black();Black();Blue6();Black();Black();Black();  Black();Black();Black();Blue5();Black();Black();Black();Black();  Black();Black();Black();Blue4();Black();Black();Black();Black();  Black();Black();Black();Black();Blue3();Black();Black();Black();  Black();Black();Black();Black();Blue2();Black();Black();Black(); 
									        }break;
                   case 2:{
                          Black();Black();Black();Black();Black();Blue();Black();Black();  Black();Black();Black();Blue1();Blue1();Black();Black();Black();  Black();Black();Blue2();Black();Black();Black();Black();Black();  Black();Black();Black();Blue3();Blue3();Black();Black();Black();  Black();Black();Black();Black();Black();Blue4();Black();Black();  Black();Black();Black();Blue5();Blue5();Black();Black();Black();  Black();Black();Blue6();Black();Black();Black();Black();Black();  Black();Black();Black();Blue7();Blue7();Black();Black();Black();  Black();Black();Black();Black();Black();Blue6();Black();Black();  Black();Black();Black();Blue5();Blue5();Black();Black();Black(); 
									        }break;
									 case 3:{
									        Black();Black();Black();Black();Black();Red3();Red3();Black();  Black();Black();Black();Red4();Red4();Black();Black();Black();  Black();Red5();Red5();Black();Black();Black();Black();Black();  Black();Black();Black();Red6();Red6();Black();Black();Black();  Black();Black();Black();Black();Black();Red7();Red7();Black();  Black();Black();Black();Blue();Blue();Black();Black();Black();  Black();Red7();Red7();Black();Black();Black();Black();Black();  Black();Black();Black();Red6();Red6();Black();Black();Black();  Black();Black();Black();Black();Black();Red5();Red5();Black();  Black();Black();Black();Red4();Red4();Black();Black();Black(); 
									        }break;
									 case 4:{
									        Black();Black();Black();Black();Black();Black();Blue();Blue();  Black();Black();Red();Red();Red();Red();Black();Black();  Red1();Red1();Black();Black();Black();Black();Black();Black();  Black();Black();Red2();Red2();Red2();Red2();Black();Black();  Black();Black();Black();Black();Black();Black();Red3();Red3();  Black();Black();Red4();Red4();Red4();Red4();Black();Black();  Red5();Red5();Black();Black();Black();Black();Black();Black();  Black();Black();Red6();Red6();Red6();Red6();Black();Black();  Black();Black();Black();Black();Black();Black();Red7();Red7();  Black();Black();Red6();Red6();Red6();Red6();Black();Black(); 
									        }break;
							            }
		         } break;
		case 9:  {
		                switch (x2){
								   case 0:{
									        Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();  Black();Black();Black();Green();Green();Black();Black();Black();
									        }break;
									 case 1:{
									        Black();Black();Black();Black();Green1();Black();Black();Black();  Black();Black();Black();Green2();Black();Black();Black();Black();  Black();Black();Black();Black();Green1();Black();Black();Black();  Black();Black();Black();Green();Black();Black();Black();Black();  Black();Black();Black();Black();Blue7();Black();Black();Black();  Black();Black();Black();Blue6();Black();Black();Black();Black();  Black();Black();Black();Black();Blue5();Black();Black();Black();  Black();Black();Black();Blue4();Black();Black();Black();Black();  Black();Black();Black();Black();Blue3();Black();Black();Black();  Black();Black();Black();Blue2();Black();Black();Black();Black();  
									        }break;
									 case 2:{
									        Black();Black();Black();Black();Blue();Blue();Black();Black();  Black();Black();Blue1();Blue1();Black();Black();Black();Black();  Black();Black();Black();Black();Blue2();Blue2();Black();Black();  Black();Black();Blue3();Blue3();Black();Black();Black();Black();  Black();Black();Black();Black();Blue4();Blue4();Black();Black();  Black();Black();Blue5();Blue5();Black();Black();Black();Black();  Black();Black();Black();Black();Blue6();Blue6();Black();Black();  Black();Black();Blue7();Blue7();Black();Black();Black();Black();  Black();Black();Black();Black();Blue6();Blue6();Black();Black();  Black();Black();Blue5();Blue5();Black();Black();Black();Black();
									        }break;
									 case 3:{
									        Black();Black();Black();Black();Red3();Red3();Red3();Black();  Black();Red4();Red4();Red4();Black();Black();Black();Black();  Black();Black();Black();Black();Red5();Red5();Red5();Black();  Black();Red6();Red6();Red6();Black();Black();Black();Black();  Black();Black();Black();Black();Red7();Red7();Red7();Black();  Black();Blue();Blue();Blue();Black();Black();Black();Black();  Black();Black();Black();Black();Red7();Red7();Red7();Black();  Black();Red6();Red6();Red6();Black();Black();Black();Black();  Black();Black();Black();Black();Red5();Red5();Red5();Black();  Black();Red4();Red4();Red4();Black();Black();Black();Black();
									        }break;
									 case 4:{
									        Black();Black();Black();Black();Blue();Blue();Blue();Blue();  Red();Red();Red();Red();Black();Black();Black();Black();  Black();Black();Black();Black();Red1();Red1();Red1();Red1();  Red2();Red2();Red2();Red2();Black();Black();Black();Black();  Black();Black();Black();Black();Red3();Red3();Red3();Red3();  Red4();Red4();Red4();Red4();Black();Black();Black();Black();  Black();Black();Black();Black();Red5();Red5();Red5();Red5();  Red6();Red6();Red6();Red6();Black();Black();Black();Black();  Black();Black();Black();Black();Red7();Red7();Red7();Red7();  Red6();Red6();Red6();Red6();Black();Black();Black();Black();
									        }break;
							            }
		         } break;
	}
}

void Flash_Red()
{
 Reset();

		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  Zero();  One();   One();   One();   One();   One();   One();   One();   //127
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  One();   Zero();  One();   One();   One();   One();   One();   One();   //191
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  One();   One();   One();   One();   One();   One();   One();   One();   //255
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);	
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  One();   Zero();  One();   One();   One();   One();   One();   One();   //191
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  Zero();  One();   One();   One();   One();   One();   One();   One();   //127
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
}

void Flash_Blue()
{
Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  Zero();  One();   One();   One();   One();   One();   One();   One();   //127		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  One();   Zero();  One();   One();   One();   One();   One();   One();   //191		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  One();   One();   One();   One();   One();   One();   One();   One();   //255		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);	
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  One();   Zero();  One();   One();   One();   One();   One();   One();   //191		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  Zero();  One();   One();   One();   One();   One();   One();   One();   //127		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);	
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
}

void Flash_Green()
{
Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		Zero();  One();   One();   One();   One();   One();   One();   One();   //127	
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		One();   Zero();  One();   One();   One();   One();   One();   One();   //191	
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		One();   One();   One();   One();   One();   One();   One();   One();   //255		
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		One();   Zero();  One();   One();   One();   One();   One();   One();   //191	
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		Zero();  One();   One();   One();   One();   One();   One();   One();   //127	
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
}

void Circle() 
{
    Reset();
		Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();
	  Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();
	  Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();
	  Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();
		delay(c);
		
		Reset();		
		Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();
	  Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();
    Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();
	  Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();
		delay(c);
		
		Reset();
		Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();
	  Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();
	  Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();
	  Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();
		delay(c);
		
		Reset();
		Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();
		Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();
		Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();
		Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();
		delay(c);
		
		Reset();
		Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();
		Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();
		Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();
		Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();
		delay(c);
		
		Reset();
		Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();
		Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();
		Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();
		Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();
		delay(c);
		
		Reset();
		Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();
		Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();
		Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();
		Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();
		delay(c);
		
		Reset();
		Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();
		Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();
		Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();
		Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();
		delay(c);
	
		Reset();	
		Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();
		Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();
		Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();
		Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();
		delay(c);
		
    Reset();
		Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();
		Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();
		Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();
		Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();
		delay(c);
		
		Reset();	
		Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();
		Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();
		Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();
		Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();
		delay(c);
		
		Reset();	
		Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();
		Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();
		Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();
		Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();
		delay(c);
		
		Reset();	
		Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();
		Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();
		Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();
		Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();
		delay(c);
		
		Reset();
		Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();
		Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();
		Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();
		Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();
		delay(c);
		
		Reset();	
		Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();
		Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();
		Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();
		Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();
		delay(c);
		
		Reset();	
		Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();
		Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();
		Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();
		Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();
		delay(c);
		
		Reset();	
		Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();
		Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();
		Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();
		Green();Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();
		delay(c);
		
		Reset();	
		Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();
		Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();
		Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();
		Green1();Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();
		delay(c);
		
		Reset();	
		Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();
		Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();
		Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();
		Green2();Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();
		delay(c);
		
		Reset();	
		Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();
		Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();
		Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();
		Green3();Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();
		delay(c);
		
		Reset();	
		Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();
		Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();
		Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();
		Green4();Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();
		delay(c);
		
		Reset();	
		Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();
		Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();
		Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();
		Green5();Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();
		delay(c);
		
		Reset();	
		Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();
		Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();
		Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();
		Green6();Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();
		delay(c);
		
		Reset();	
		Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();
		Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();
		Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();
		Green7();Red();Red1();Red2();Red3();Red4();Red5();Red6();Red7();Blue();Blue1();Blue2();Blue3();Blue4();Blue5();Blue6();Blue7();Green();Green1();Green2();Green3();Green4();Green5();Green6();
		delay(c);


}
