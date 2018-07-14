#include "stm32f10x.h"
#include "stm32_dsp.h"
#include "bsp_ADC.h"
#include "bsp_FFT.h"
#include "bsp_USART.h"
#include "bsp_rgbled.h"
#include "bsp_it.h"  


uint8_t flag = 0xff;
float ADC;


int max_V=0;
float max_F=0;

extern __IO uint16_t ADC_ConvertedValue[2048];

int e=0;  //频谱 波形 状态
int p=1;  //静音

uint32_t lBufInArray[NPT];
uint32_t lBufOutArray[NPT];
float lBufMagArray[NPT];
int c=279999;  //延时
int d=300;   //倍数  
int b=128;  //亮度


int F[10];     //FFT变换初始值

extern void delay(__IO uint32_t nCount);	

int main(void)
{
	    uint16_t i,j;
 
      /********** 系统初始化 **********/
	    USART1_Config();	   		 
     
	    RGBLED_GPIO_Config();
	    EXTI_Config();
	    b=8;
	    e=0;
	    Reset();
	
	    printf("嘎嘎嘎 \n"); 
	for(j=0;j<4;j++)
	  {  
			 Circle() ;	
	    }
		
			ADC1_Init();
			
	    while(1)
			{
						 
		     while(flag == 0xff);
				
	       cr4_fft_1024_stm32(lBufOutArray, lBufInArray, NPT);  //FFT处理
	       GetPowerMag();                                       //计算各谐波幅值 
	
//	      for(i=0; i<573; i++)
//	       { 
//					  ADC = lBufMagArray[i] / 4096 *3.3;	
//					 if(ADC>0.015)					 
//  					printf("%4d, 频率：%4d, 幅值：%f V, IN = %08X, OUT = %08X\n",i,(uint16_t)((float)i*Fs/NPT),ADC*1000,lBufInArray[i],lBufOutArray[i]);                   							
//					 	delay(0x2FFFF);							
//         }
	
				
////////////////////////////////////////////////////////////////////////						  
					         ADC = lBufMagArray[2] / 4096 *3.3;
						       F[0]=(ADC)*d-4;			 
					      if(F[0]>8)
					      F[0]=8;
								if(F[0]<0)
					      F[0]=0;
				     //   printf(" 频率：0~80Hz, 幅值：%f V\n",F[0]);
					 
///////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[3] / 4096 *3.3;
						       F[1]=(ADC)*d-4;					 
					      if(F[1]>8)
					      F[1]=8;
								if(F[1]<0)
					      F[1]=0;
				      //  printf(" 频率：81~180Hz, 幅值：%f V\n",F[1]);
					 
////////////////////////////////////////////////////////////////////////
					        ADC = lBufMagArray[9] / 4096 *3.3;
						      F[2]=(ADC)*d-3;					 
					     if(F[2]>8)
					     F[2]=8;
							 if(F[2]<0)
					     F[2]=0;
				     //  printf(" 频率：181~300Hz, 幅值：%f V\n",F[2]);
					 
/////////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[11] / 4096 *3.3;
						       F[3]=(ADC)*d*2-6;				 
					     if(F[3]>8)
					     F[3]=8;
							 if(F[3]<0)
					     F[3]=0;
				     //  printf(" 频率：301~500Hz, 幅值：%f V\n",F[3]);
					 
//////////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[14] / 4096 *3.3;
						       F[4]=(ADC)*d*2-7;					 
					     if(F[4]>8)
					     F[4]=8;
							 if(F[4]<0)
					     F[4]=0;
				     //  printf(" 频率：501~1000Hz, 幅值：%f V\n",F[4]);
					 
///////////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[30] / 4096 *3.3;
						       F[5]=(ADC)*d*3-7;					 
					     if(F[5]>8)
					     F[5]=8;
							 if(F[5]<0)
					     F[5]=0;
				      // printf(" 频率：1001~1800Hz, 幅值：%f V\n",F[5]);
					 
////////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[90] / 4096 *3.3;
						       F[6]=(ADC)*d*4-7;					 
					     if(F[6]>8)
					     F[6]=8;
							 if(F[6]<0)
					     F[6]=0;
				     //  printf(" 频率：1801~3000Hz, 幅值：%f V\n",F[6]);
					 
//////////////////////////////////////////////////////////////////////////////
					        ADC = lBufMagArray[150] / 4096 *3.3;
						      F[7]=(ADC)*d*4-6;				 
					     if(F[7]>8)
					     F[7]=8;
							 if(F[7]<0)
					     F[7]=0;
				     //  printf(" 频率：3001~6000Hz, 幅值：%f V\n",F[7]);
					 
///////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[170] / 4096 *3.3;
					      F[8]=(ADC)*d*4-8;					 
					     if(F[8]>8)
					     F[8]=8;
							 if(F[8]<0)
					     F[8]=0;
				      // printf(" 频率：6001~12000Hz, 幅值：%f V\n",F[8]);
					 
//////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[270] / 4096 *3.3;
						       F[9]=(ADC)*d*4-5;
					     if(F[9]>8)
					     F[9]=8;
							 if(F[9]<0)
					     F[9]=0;
				      // printf(" 频率：12001~20000Hz, 幅值：%f V\n",F[9]);
							 
	   	switch (e)
					     {
				        case 0:
					             {
						    			 
					             Spectrum_Display(F[0],F[1],F[2],F[3],F[4],F[5],F[6],F[7],F[8],F[9]);					 
					            
				               }break;
					      case 1:
				               {
												   for(i=0;i<5;i++) 
                              
                                 if(F[i]>max_V) { 

                                  max_V=F[i]; 
																	 
																	max_F=i;

                                     } 
												 
												 Waveform_Display((max_F+5),(max_V/2)); 
					          
				               }break;
     }
							  F[0]=F[1]=F[2]=F[3]=F[4]=F[5]=F[6]=F[7]=F[8]=F[9]=0;
                max_V=0; 
								max_F=0;


					
			//delay(0x5FFFF);	
			 flag = 0xff;
			 
			  
       }			 
}





/*********************************************END OF FILE**********************/

