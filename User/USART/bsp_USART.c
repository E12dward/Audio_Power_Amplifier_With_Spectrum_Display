 #include "bsp_USART.h"
 
 /************************************************USART1��ʼ��********************************************/
void USART1_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1 | RCC_APB2Periph_GPIOA, ENABLE);   //��USART1��PAʱ��
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;                                       //PA9
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;                                 //�������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;                               //����50MHz
	GPIO_Init(GPIOA, &GPIO_InitStructure);    

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;                                      //PA10
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;                           //��������
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	USART_InitStructure.USART_BaudRate = 115200;                                    //������=115200
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;                     //�ֳ�=8bit
	USART_InitStructure.USART_StopBits = USART_StopBits_1;                          //ֹͣλ=1
	USART_InitStructure.USART_Parity = USART_Parity_No ;                            //��żУ��ر�
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None; //Ӳ�����ر�
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;                 //��������=˫��ȫ˫��
	USART_Init(USART1, &USART_InitStructure);                                       //д��Ĵ���
	
	USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);                                  //���������ж�
//USART_ITConfig(USART1, USART_IT_TXE, ENABLE);	                                  //��ôû�п��������жϣ�
	USART_Cmd(USART1, ENABLE);                                                      //��USART1
}

/*******************************************����Ƕ�������ж������жϿ⺯��*************************************************/



/*******************************************�ض���c�⺯��printf��USART1****************************************/
int fputc(int ch, FILE *f)
{
    USART_SendData(USART1, (uint8_t) ch);		// ����һ���ֽ����ݵ�USART1

		while (USART_GetFlagStatus(USART1, USART_FLAG_TXE) == RESET);	//�ȴ��������
	
		return (ch);
}

/*******************************************�ض���c�⺯��scanf��USART1*****************************************/
int fgetc(FILE *f)
{
		while (USART_GetFlagStatus(USART1, USART_FLAG_RXNE) == RESET);//�ȴ�����1��������

		return (int)USART_ReceiveData(USART1);
}
