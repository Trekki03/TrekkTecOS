#include <mcu/stm32l496zg/stm32l496zg_uart.h>

uint32_t* uartCrRegisterMap[5][3] =
{
    { (uint32_t*) &(USART1->CR1), (uint32_t*) &(USART1->CR2), (uint32_t*) &(USART1->CR3)},
    { (uint32_t*) &(USART2->CR1), (uint32_t*) &(USART2->CR2), (uint32_t*) &(USART2->CR3)},
    { (uint32_t*) &(USART3->CR1), (uint32_t*) &(USART3->CR2), (uint32_t*) &(USART3->CR3)},
    { (uint32_t*) &(UART4->CR1), (uint32_t*) &(UART4->CR2), (uint32_t*) &(UART4->CR3)},
    { (uint32_t*) &(UART5->CR1), (uint32_t*) &(UART5->CR2), (uint32_t*) &(UART5->CR3)}
};

uint32_t* uartBRRegisterMap[5] = 
{
    (uint32_t*) &(USART1->BRR),
    (uint32_t*) &(USART2->BRR),
    (uint32_t*) &(USART3->BRR),
    (uint32_t*) &(UART4->BRR),
    (uint32_t*) &(UART5->BRR)
};

