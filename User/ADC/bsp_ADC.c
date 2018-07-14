#include "bsp_ADC.h"

#define ADC1_DR_Address    ((uint32_t)0x40012400+0x4c)
__IO uint16_t ADC_ConvertedValue[2048];


static void ADC1_GPIO_Config(void)
{
   GPIO_InitTypeDef GPIO_InitStructure;
	 
	 RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1, ENABLE);
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1 | RCC_APB2Periph_GPIOC, ENABLE);
	
	 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
	 GPIO_Init(GPIOC, &GPIO_InitStructure);
}


static void NVIC_Config(void)
{
   NVIC_InitTypeDef   NVIC_Initstructure;
	 NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
	 
	 NVIC_Initstructure.NVIC_IRQChannel = DMA1_Channel1_IRQn;             //配置DMA1通道1为中断源
	 NVIC_Initstructure.NVIC_IRQChannelPreemptionPriority = 1;
	 NVIC_Initstructure.NVIC_IRQChannelSubPriority = 1;
	 NVIC_Initstructure.NVIC_IRQChannelCmd = ENABLE;
   NVIC_Init(&NVIC_Initstructure);
}


static void ADC1_Mode_Config(void)
{
	DMA_InitTypeDef DMA_InitStructure;
	ADC_InitTypeDef ADC_InitStructure;
	
	NVIC_Config();                                                        //配置DMA中断
	
	DMA_DeInit(DMA1_Channel1);	
	DMA_InitStructure.DMA_PeripheralBaseAddr = ADC1_DR_Address;	 			    //ADC地址
	DMA_InitStructure.DMA_MemoryBaseAddr = (uint32_t)&ADC_ConvertedValue;	//内存地址
	DMA_InitStructure.DMA_DIR = DMA_DIR_PeripheralSRC;
	DMA_InitStructure.DMA_BufferSize = 2048;
	DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;	    //外设地址固定
	DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;  				      //内存地址递增
	DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord;	//半字
	DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;
	DMA_InitStructure.DMA_Mode = DMA_Mode_Circular;										    //循环传输
	DMA_InitStructure.DMA_Priority = DMA_Priority_High;
	DMA_InitStructure.DMA_M2M = DMA_M2M_Disable;
	DMA_Init(DMA1_Channel1, &DMA_InitStructure);
	
	DMA_Cmd(DMA1_Channel1, ENABLE);                                       //使能
	
	DMA_ITConfig(DMA1_Channel1, DMA_IT_HT, ENABLE);                       //配置DMA发送过半中断
	 
	DMA_ITConfig(DMA1_Channel1, DMA_IT_TC, ENABLE);                       //配置DMA发送完成后中断
	 
	ADC_InitStructure.ADC_Mode = ADC_Mode_Independent;			              //独立ADC模式
	ADC_InitStructure.ADC_ScanConvMode = DISABLE ; 	 				              //禁止扫描模式，扫描模式用于多通道采集
	ADC_InitStructure.ADC_ContinuousConvMode = ENABLE;			              //开启连续转换模式，即不停地进行ADC转换
	ADC_InitStructure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_None;	  //不使用外部触发转换
	ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right; 	              //采集数据右对齐
	ADC_InitStructure.ADC_NbrOfChannel = 1;	 								              //要转换的通道数目1
	ADC_Init(ADC1, &ADC_InitStructure);
	
	RCC_ADCCLKConfig(RCC_PCLK2_Div8);                                     //配置ADC时钟，为PCLK2的8分频，即9MHz

	ADC_RegularChannelConfig(ADC1, ADC_Channel_12, 1, ADC_SampleTime_239Cycles5);	//配置ADC1的通道11为55.	5个采样周期，序列为1 
	
	ADC_DMACmd(ADC1, ENABLE);
	
	ADC_Cmd(ADC1, ENABLE);
	
	ADC_ResetCalibration(ADC1);                                           //复位校准寄存器  

	while(ADC_GetResetCalibrationStatus(ADC1));                           //等待校准寄存器复位完成
	
	ADC_StartCalibration(ADC1);                                           //ADC校准

	while(ADC_GetCalibrationStatus(ADC1));                                //等待校准完成
	
	ADC_SoftwareStartConvCmd(ADC1, ENABLE);                               //由于没有采用外部触发，所以使用软件触发ADC转换
}


void ADC1_Init(void)
{
   ADC1_GPIO_Config();
	 ADC1_Mode_Config();
}
