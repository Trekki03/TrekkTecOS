#include "trekktecos.h"
#include <stdint.h>

//static char buffer[128] = {0};

void setup()
{
    Dma_SetupDMAForU_s_art(1);

	//USART1
    Rcc_ToggleUartClock(1, on); //Enable USART1 clock
    Uart_SetWordLength(1, UART_WORD_LENGTH_8_BITS); //Set bit length to 8
	Uart_SetOversamling(1, UART_OVERSAMLING_MODE_16);
    Uart_SetBaudrate(1, 80000000, 115200);
    Uart_SetStopBits(1, UART_STOP_BIT_COUNT_1);
    Uart_ToggleDmaTransmit(1, on);
    Uart_ToggleUart(1, on);
    Uart_ToggleTransmitter(1, on);	

	//Pins for check
    Gpio_SetPinMode(GPIOB_6, GPIO_ALTERNATE_FUNCTION_MODE);  //Set PB6 to AF
    Gpio_SetAlternateFunction(GPIOB_6, GPIO_ALTERNATE_FUNCTION_7);
    //Register_WriteIntoRegister(&(GPIOB->AFRL), 0b0111, 4, 24);   //Set PB6 to AF7

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
            ((char*)uart_send_buffer_addr_map[0])[i] = message[i];
			//buffer[i] = message[i];
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
        SendMessage("Hallo Welt!", 11);
        lastTime = Systick_GetMilliTicks();
	}
	


}
