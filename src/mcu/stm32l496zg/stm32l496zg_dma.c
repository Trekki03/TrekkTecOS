#include "mcu/stm32l496zg/stm32l496zg_dma.h"
#include "mcu/stm32l496zg/stm32l496zg_uart.h"
 uint32_t* const dma_ccr_channels[7][2] =
{
    { ((uint32_t*) &(DMA1->CCR1)), ((uint32_t*) &(DMA2->CCR1)) },
    { ((uint32_t*) &(DMA1->CCR2)), ((uint32_t*) &(DMA2->CCR2)) },
    { ((uint32_t*) &(DMA1->CCR3)), ((uint32_t*) &(DMA2->CCR3)) },
    { ((uint32_t*) &(DMA1->CCR4)), ((uint32_t*) &(DMA2->CCR4)) },
    { ((uint32_t*) &(DMA1->CCR5)), ((uint32_t*) &(DMA2->CCR5)) },
    { ((uint32_t*) &(DMA1->CCR6)), ((uint32_t*) &(DMA2->CCR6)) },
    { ((uint32_t*) &(DMA1->CCR7)), ((uint32_t*) &(DMA2->CCR7)) }
};

uint32_t* const dma_cpar_channels[7][2] =
{
    { ((uint32_t*) &(DMA1->CPAR1)), ((uint32_t*) &(DMA2->CPAR1)) },
    { ((uint32_t*) &(DMA1->CPAR2)), ((uint32_t*) &(DMA2->CPAR2)) },
    { ((uint32_t*) &(DMA1->CPAR3)), ((uint32_t*) &(DMA2->CPAR3)) },
    { ((uint32_t*) &(DMA1->CPAR4)), ((uint32_t*) &(DMA2->CPAR4)) },
    { ((uint32_t*) &(DMA1->CPAR5)), ((uint32_t*) &(DMA2->CPAR5)) },
    { ((uint32_t*) &(DMA1->CPAR6)), ((uint32_t*) &(DMA2->CPAR6)) },
    { ((uint32_t*) &(DMA1->CPAR7)), ((uint32_t*) &(DMA2->CPAR7)) }
};

uint32_t* const dma_cmar_channels[7][2] =
{
    { ((uint32_t*) &(DMA1->CMAR1)), ((uint32_t*) &(DMA2->CMAR1)) },
    { ((uint32_t*) &(DMA1->CMAR2)), ((uint32_t*) &(DMA2->CMAR2)) },
    { ((uint32_t*) &(DMA1->CMAR3)), ((uint32_t*) &(DMA2->CMAR3)) },
    { ((uint32_t*) &(DMA1->CMAR4)), ((uint32_t*) &(DMA2->CMAR4)) },
    { ((uint32_t*) &(DMA1->CMAR5)), ((uint32_t*) &(DMA2->CMAR5)) },
    { ((uint32_t*) &(DMA1->CMAR6)), ((uint32_t*) &(DMA2->CMAR6)) },
    { ((uint32_t*) &(DMA1->CMAR7)), ((uint32_t*) &(DMA2->CMAR7)) }
};

uint32_t const uart_send_dma_channel_requestcode_map[5][3] = 
{
    // DMA, CHANNEL, REQUESTCODE
    {  1,   4,       0b0010}, // USART 1
    {  1,   7,       0b0010}, // USART 2
    {  1,   2,       0b0010}, // USART 3
    {  2,   3,       0b0010}, // USART 4
    {  2,   1,       0b0010}  // USART 5
};

volatile uint32_t* const uart_send_data_register_addr_map[5] = 
{
    &(USART1->TDR),
    &(USART2->TDR),
    &(USART3->TDR),
    &(UART4->TDR),
    &(UART5->TDR)
};

volatile static char usart1TransmitBuffer[128] = {0};
volatile static char usart2TransmitBuffer[128] = {0};
volatile static char usart3TransmitBuffer[128] = {0};
volatile static char uart4TransmitBuffer[128] = {0};
volatile static char uart5TransmitBuffer[128] = {0};

volatile uint32_t* uart_send_buffer_addr_map[5] = 
{
    (uint32_t*) usart1TransmitBuffer,
    (uint32_t*) usart2TransmitBuffer,
    (uint32_t*) usart3TransmitBuffer,
    (uint32_t*) uart4TransmitBuffer,
    (uint32_t*) uart5TransmitBuffer
};