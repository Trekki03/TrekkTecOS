#include "trekktecos.h"
#include <stdint.h>

static char buffer[128] = {0};

void setup()
{

    Rcc_ToggleDmaClock (DMA_1_ENABLE_BIT, on); // Enable DMA Clock
    Dma_ToggleTransferCompleteInterrupt(1, 4, on); //Enable Transfer Complete Interrupt
    Dma_SetTransferDirection(1, 4, DIRECTION_READ_FROM_MEMORY);   //Direction Memory to Data
    Dma_ToggleCircularMode(1, 4, off); // No circular Mode
    Dma_TogglePeripheralIncrement(1, 4, off);   //No peripheral increment
    Dma_ToggleMemoryIncrement(1, 4, on); //Memory increment
    Dma_SetPeripheralSize(1, 4, PERIPHERAL_SIZE_8_BIT); //peripheral size 8bit
    Dma_SetChannelPriority(1,4,CHANNEL_PRIORITY_MEDIUM); //medium priority
    Dma_ToggleMemToMemMode(1,4,false); // No MemToMem
    Dma_SetDmaChannelRequest(DMA1,4,DMA_1_CHANNEL_4_REQUEST_2); // USART1_TX Request
    Dma_SetPeripheralAddress(1, 4, &(USART1->TDR));
    Dma_SetMemoryAddress(1, 4, (uint32_t*) &buffer);


	//USART1
    //Register_WriteIntoRegister(&(RCC->APB2ENR), 1, 1, 14);   //Enable USART1 clock
    Rcc_ToggleUartClock(1, on);
    Register_WriteIntoRegister(&(USART1->CR1), 0b00, 2, 28); //Set bit length to 8
    Register_WriteIntoRegister(&(USART1->CR1), 0, 1, 15);    //Set oversampling to 16
    Register_WriteIntoRegister(&(USART1->BRR), 8334, 16, 0); //Set baude rate to 9600 (80000000/9600 = 8334)
    Register_WriteIntoRegister(&(USART1->CR2), 0b00, 2, 12); //Set 1 Stop Bits
	Register_WriteIntoRegister(&(USART1->CR3), 0b1, 1, 7); 	//Enable DMA Transmit
    Register_WriteIntoRegister(&(USART1->CR1), 0b1, 1, 0);   //Enable USART1
    Register_WriteIntoRegister(&(USART1->CR1), 0b1, 1, 3);   //Set TE to 1    
	

	//Pins for check
    Gpio_SetPinMode(GPIOB_6, GPIO_ALTERNATE_FUNCTION_MODE);  //Set PB6 to AF
    Register_WriteIntoRegister(&(GPIOB->AFRL), 0b0111, 4, 24);   //Set PB6 to AF7
	Gpio_SetPinMode(GPIOG_0, GPIO_OUTPUT_MODE);
	Gpio_SetPinSpeed(GPIOG_0, GPIO_VERY_HIGH_SPEED);

	//Initial Delay
	Register_WriteIntoRegister((uint32_t*) 0xE000E100, 0b1, 1, 14);
    Systick_Delay(100);

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
		Register_WriteIntoRegister(&(DMA1->CNDTR4),size, 16, 0); //Set String length in DMA
		Register_WriteIntoRegister(&(DMA1->CCR4), 1, 1, 0);
		sended = false;
	}
}

void DMA1_CH4_Handler_isr(void)
{
	if(Register_ReadRegister(&(DMA1->ISR),1,13)) //Falls Transfer Complete Interrupt
	{
		Register_WriteIntoRegister(&(DMA1->CCR4), 0b0, 1, 0); //Disable DMA1 Channel 4
		Register_WriteIntoRegister(&(DMA1->IFCR), 0b1, 1, 13); //Reset Interrup; //Reset Interrupt
		sended = true;
	}
}

void loop()
{
	static uint32_t lastTime = 0;
	if((Systick_GetMilliTicks() - lastTime) > 100)
	{
        SendMessage("Test", 4);
        lastTime = Systick_GetMilliTicks();
	}
	


}
