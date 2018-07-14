#ifndef __RGBLED_H
#define	__RGBLED_H

#include "stm32f10x.h"

void RGBLED_GPIO_Config(void);

void delay(__IO uint32_t nCount);

void One(void);
void Zero(void);
void Reset(void);

void Black(void);
void Green(void);
void Red(void);
void Blue(void);

void Red1(void);
void Red2(void);
void Red3(void);
void Red4(void);
void Red5(void);
void Red6(void);
void Red7(void);
void Blue1(void);
void Blue2(void);
void Blue3(void);
void Blue4(void);
void Blue5(void);
void Blue6(void);
void Blue7(void);
void Green1(void);
void Green2(void);
void Green3(void);
void Green4(void);
void Green5(void);
void Green6(void);
void Green7(void);

void Spectrum_Display(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10);
void Waveform_Display(uint16_t x1, uint16_t x2);

void Flash_Red(void);
void Flash_Blue(void);
void Flash_Green(void);

void Circle(void);

#endif /* __RGBLED_H */
