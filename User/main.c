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

int e=0;  //Ƶ�� ���� ״̬
int p=1;  //����

uint32_t lBufInArray[NPT];
uint32_t lBufOutArray[NPT];
float lBufMagArray[NPT];
int c=279999;  //��ʱ
int d=300;   //����  
int b=128;  //����


int F[10];     //FFT�任��ʼֵ

extern void delay(__IO uint32_t nCount);	

int main(void)
{
	    uint16_t i,j;
 
      /********** ϵͳ��ʼ�� **********/
	    USART1_Config();	   		 
     
	    RGBLED_GPIO_Config();
	    EXTI_Config();
	    b=8;
	    e=0;
	    Reset();
	
	    printf("�¸¸� \n"); 
	for(j=0;j<4;j++)
	  {  
			 Circle() ;	
	    }
		
			ADC1_Init();
			
	    while(1)
			{
						 
		     while(flag == 0xff);
				
	       cr4_fft_1024_stm32(lBufOutArray, lBufInArray, NPT);  //FFT����
	       GetPowerMag();                                       //�����г����ֵ 
	
//	      for(i=0; i<573; i++)
//	       { 
//					  ADC = lBufMagArray[i] / 4096 *3.3;	
//					 if(ADC>0.015)					 
//  					printf("%4d, Ƶ�ʣ�%4d, ��ֵ��%f V, IN = %08X, OUT = %08X\n",i,(uint16_t)((float)i*Fs/NPT),ADC*1000,lBufInArray[i],lBufOutArray[i]);                   							
//					 	delay(0x2FFFF);							
//         }
	
				
////////////////////////////////////////////////////////////////////////						  
					         ADC = lBufMagArray[2] / 4096 *3.3;
						       F[0]=(ADC)*d-4;			 
					      if(F[0]>8)
					      F[0]=8;
								if(F[0]<0)
					      F[0]=0;
				     //   printf(" Ƶ�ʣ�0~80Hz, ��ֵ��%f V\n",F[0]);
					 
///////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[3] / 4096 *3.3;
						       F[1]=(ADC)*d-4;					 
					      if(F[1]>8)
					      F[1]=8;
								if(F[1]<0)
					      F[1]=0;
				      //  printf(" Ƶ�ʣ�81~180Hz, ��ֵ��%f V\n",F[1]);
					 
////////////////////////////////////////////////////////////////////////
					        ADC = lBufMagArray[9] / 4096 *3.3;
						      F[2]=(ADC)*d-3;					 
					     if(F[2]>8)
					     F[2]=8;
							 if(F[2]<0)
					     F[2]=0;
				     //  printf(" Ƶ�ʣ�181~300Hz, ��ֵ��%f V\n",F[2]);
					 
/////////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[11] / 4096 *3.3;
						       F[3]=(ADC)*d*2-6;				 
					     if(F[3]>8)
					     F[3]=8;
							 if(F[3]<0)
					     F[3]=0;
				     //  printf(" Ƶ�ʣ�301~500Hz, ��ֵ��%f V\n",F[3]);
					 
//////////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[14] / 4096 *3.3;
						       F[4]=(ADC)*d*2-7;					 
					     if(F[4]>8)
					     F[4]=8;
							 if(F[4]<0)
					     F[4]=0;
				     //  printf(" Ƶ�ʣ�501~1000Hz, ��ֵ��%f V\n",F[4]);
					 
///////////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[30] / 4096 *3.3;
						       F[5]=(ADC)*d*3-7;					 
					     if(F[5]>8)
					     F[5]=8;
							 if(F[5]<0)
					     F[5]=0;
				      // printf(" Ƶ�ʣ�1001~1800Hz, ��ֵ��%f V\n",F[5]);
					 
////////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[90] / 4096 *3.3;
						       F[6]=(ADC)*d*4-7;					 
					     if(F[6]>8)
					     F[6]=8;
							 if(F[6]<0)
					     F[6]=0;
				     //  printf(" Ƶ�ʣ�1801~3000Hz, ��ֵ��%f V\n",F[6]);
					 
//////////////////////////////////////////////////////////////////////////////
					        ADC = lBufMagArray[150] / 4096 *3.3;
						      F[7]=(ADC)*d*4-6;				 
					     if(F[7]>8)
					     F[7]=8;
							 if(F[7]<0)
					     F[7]=0;
				     //  printf(" Ƶ�ʣ�3001~6000Hz, ��ֵ��%f V\n",F[7]);
					 
///////////////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[170] / 4096 *3.3;
					      F[8]=(ADC)*d*4-8;					 
					     if(F[8]>8)
					     F[8]=8;
							 if(F[8]<0)
					     F[8]=0;
				      // printf(" Ƶ�ʣ�6001~12000Hz, ��ֵ��%f V\n",F[8]);
					 
//////////////////////////////////////////////////////////////////
					         ADC = lBufMagArray[270] / 4096 *3.3;
						       F[9]=(ADC)*d*4-5;
					     if(F[9]>8)
					     F[9]=8;
							 if(F[9]<0)
					     F[9]=0;
				      // printf(" Ƶ�ʣ�12001~20000Hz, ��ֵ��%f V\n",F[9]);
							 
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

