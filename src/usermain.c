#include "mcu/stm32l496zg/stm32l496zg_dma.h"
#include "mcu/stm32l496zg/stm32l496zg_usart.h"
#include "register.h"
#include "trekktecos.h"
#include <stdint.h>

static char buffer[128] = {0,};

void setup()
{

	//Onboard LEDS
/*
    SetPinMode(GPIOC_7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOC_7, GPIO_VERY_HIGH_SPEED);
    SetPinMode(GPIOB_7, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB_7, GPIO_VERY_HIGH_SPEED);
    SetPinMode(GPIOB_14, GPIO_OUTPUT_MODE);
    SetPinSpeed(GPIOB_14, GPIO_VERY_HIGH_SPEED);
    //User Button
    SetPinMode(GPIOC_13, GPIO_INPUT_MODE);
    SetPullUpPullDown(GPIOC_13, PULLDOWN);
    SetPinSpeed(GPIOC_13, GPIO_LOW_SPEED);
    //MCO
    SetPinMode(GPIOA_8, GPIO_ALTERNATE_FUNCTION_MODE);
    SetPinSpeed(GPIOA_8, GPIO_VERY_HIGH_SPEED);
    WriteIntoRegister(&(RCC->CFGR), 0b000, 3, 18);
    WriteIntoRegister(&(RCC->CFGR), 0b0001, 4, 24); 

*/

	
	
	//DMA
	WriteIntoRegister(&(RCC->AHB1ENR), 0b1, 1, 0); //Enable DMA1 Clock
	WriteIntoRegister(&(DMA1->CCR4), 0b1, 1, 1);   //Enable Transfer Complete Interrupt 
	WriteIntoRegister(&(DMA1->CCR4), 0b1, 1, 4);   //Direction Memory to Data
	WriteIntoRegister(&(DMA1->CCR4), 0b0, 1, 5);   //No circular mode
	WriteIntoRegister(&(DMA1->CCR4), 0b0, 1, 6);   //No peripheral increment
	WriteIntoRegister(&(DMA1->CCR4), 0b1, 1, 7);   //Memory increment
	WriteIntoRegister(&(DMA1->CCR4), 0b00, 2, 8);  //peripheral size 8bit
	WriteIntoRegister(&(DMA1->CCR4), 0b01, 2, 12); //medium priority
	WriteIntoRegister(&(DMA1->CCR4), 0b0, 1, 14);  //No memory-to-memory-mode  
	WriteIntoRegister(&(DMA1->CSELR), 0b0010, 4, 12);
	WriteIntoRegister(&(DMA1->CPAR4), (uint32_t) &(USART1->TDR), 32, 0); //Set Address of USART1-TDR
	WriteIntoRegister(&(DMA1->CMAR4), (uint32_t) &buffer, 32, 0); //Set DMA Memory Address


	//USART1
    WriteIntoRegister(&(RCC->APB2ENR), 1, 1, 14);   //Enable USART1 clock
    WriteIntoRegister(&(USART1->CR1), 0b00, 2, 28); //Set bit length to 8
    WriteIntoRegister(&(USART1->CR1), 0, 1, 15);    //Set oversampling to 16
    WriteIntoRegister(&(USART1->BRR), 8334, 16, 0); //Set baude rate to 9600 (80000000/9600 = 8334)
    WriteIntoRegister(&(USART1->CR2), 0b00, 2, 12); //Set 1 Stop Bits
	WriteIntoRegister(&(USART1->CR3), 0b1, 1, 7); 	//Enable DMA Transmit
    WriteIntoRegister(&(USART1->CR1), 0b1, 1, 0);   //Enable USART1
    WriteIntoRegister(&(USART1->CR1), 0b1, 1, 3);   //Set TE to 1    
	

	//Pins for check
    SetPinMode(GPIOB_6, GPIO_ALTERNATE_FUNCTION_MODE);  //Set PB6 to AF
    WriteIntoRegister(&(GPIOB->AFRL), 0b0111, 4, 24);   //Set PB6 to AF7
	SetPinMode(GPIOG_0, GPIO_OUTPUT_MODE);
	SetPinSpeed(GPIOG_0, GPIO_VERY_HIGH_SPEED);

	//Initial Delay
	WriteIntoRegister((uint32_t*) 0xE000E100, 0b1, 1, 14);
    Delay(100);

}

uint32_t GetSizeOfString(const char* str)
{
	uint32_t counter = 0;
	
	while(*str != '\0')
	{
		counter++;
		str++;
	}
	return counter;
}

static bool sended = true;

void SendMessage(const char* message, uint32_t size)
{
	if(sended == true)
	{
		for (uint32_t i = 0; i < size; i++) 
		{
			buffer[i] = message[i];
		}
		WriteIntoRegister(&(DMA1->CNDTR4),size, 16, 0); //Set String length in DMA
		WriteIntoRegister(&(DMA1->CCR4), 1, 1, 0);
		sended = false;
	}
}

void DMA1_CH4_Handler(void)
{
	if(ReadRegister(&(DMA1->ISR),1,13)) //Falls Transfer Complete Interrupt
	{
		WriteIntoRegister(&(DMA1->CCR4), 0b0, 1, 0); //Disable DMA1 Channel 4
		WriteIntoRegister(&(DMA1->IFCR), 0b1, 1, 13); //Reset Interrup; //Reset Interrupt
		sended = true;
	}
}

void loop()
{
	static uint32_t lastTime = 0;
	static bool lastState = off;
	if((Systick_GetMicroTicks() - lastTime) > 40)
	{
		TogglePinOutput(GPIOG_0, !lastState);
		lastState = !lastState;
		lastTime = Systick_GetMicroTicks();
	}
	
	SendMessage("Test", 4);

}
