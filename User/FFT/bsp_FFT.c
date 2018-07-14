
#include "bsp_FFT.h"
#include "table_fft.h"

extern uint16_t TableFFT[];

extern uint32_t lBufInArray[NPT];
extern uint32_t lBufOutArray[NPT];
extern float lBufMagArray[NPT];



/**
  * @name   GetPowerMag()
	* @brief  �������г����ֵ
  * @param  ��
  * @retval ��
  * @attention
	*         �Ƚ�lBufOutArray�ֽ��ʵ��(X)���鲿(Y)��Ȼ������ֵ
	*/
void GetPowerMag(void)
{
   uint16_t i;
	 int16_t lX, lY;
	 float X, Y, Mag;
	
	 for(i=0; i<NPT/2; i++)
	 {
      lX = (lBufOutArray[i] << 16) >> 16;      //ȡ��16λ�鲿
		  lY = lBufOutArray[i] >> 16;              //ȡ��16λʵ��
		  X = NPT * ((float)lX) / 32768;
		  Y = NPT * ((float)lY) / 32768;
		  Mag = sqrt(X * X + Y * Y) / NPT;         
		  
		 if(i == 0)
				 lBufMagArray[i] = (Mag * 32768);      //ֱ����������Ҫ��2
			else
				 lBufMagArray[i] = (Mag * 65536);
   }
}

