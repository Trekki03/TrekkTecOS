#include <stdint.h>

#define SRAM_START 0x20000000U
#define SRAM_SIZE  (160 * 1024)
#define SRAM_END (SRAM_START + SRAM_SIZE)

int main(void);
extern uint32_t _endOfText;
extern uint32_t _startOfData;
extern uint32_t _endOfData;
extern uint32_t _startOfBss;
extern uint32_t _endOfBss;
extern uint32_t _la_data;

// "system interrupts"
void Reset_Handler(void);
void NMI_Handler(void) 						__attribute__ ((weak, alias ("Common_Handler")));
void HardFault_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void MemManage_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void BusFault_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void UsageFault_Handler(void)				__attribute__ ((weak, alias ("Common_Handler")));
void SVCall_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void Debug_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void PendSV_Handler(void)					__attribute__ ((weak, alias ("Common_Handler")));
void SysTick_Handler(void)					__attribute__ ((weak, alias ("Common_Handler")));

// "normal interrupts"
void WWDG_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void PVD_PVM_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void RTC_TAMP_STAMP_CSS_LSE_Handler(void) 	__attribute__ ((weak, alias ("Common_Handler")));
void RTC_WKUP_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void FLASH_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void RCC_Handler(void) 						__attribute__ ((weak, alias ("Common_Handler")));
void ETXI0_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void ETXI1_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void ETXI2_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void ETXI3_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void ETXI4_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void DMA1_CH1_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA1_CH2_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA1_CH3_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA1_CH4_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA1_CH5_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA1_CH6_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA1_CH7_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void ADC1_2_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void CAN1_TX_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void CAN1_RX0_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void CAN1_RX1_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void CAN1_SCE_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void EXTI9_5_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void TIM1_BRK_TIM15_Handler(void) 			__attribute__ ((weak, alias ("Common_Handler")));
void TIM1_UP_TIM16_Handler(void) 			__attribute__ ((weak, alias ("Common_Handler")));
void TIM1_TRG_COM_Handler(void) 			__attribute__ ((weak, alias ("Common_Handler")));
void TIM1_CC_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void TIM2_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void TIM3_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void I2C1_EV_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void I2C1_ER_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void I2C2_EV_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void I2C2_ER_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void SPI1_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void SPI2_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void USART1_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void USART2_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void USART3_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void EXTI15_10_Handler(void)				__attribute__ ((weak, alias ("Common_Handler")));
void RTC_ALARM_Handler(void)				__attribute__ ((weak, alias ("Common_Handler")));
void SDMMC1_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void SPI3_Handler(void)	 					__attribute__ ((weak, alias ("Common_Handler")));
void UART4_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void TIM6_DACUNDER_Handler(void) 			__attribute__ ((weak, alias ("Common_Handler")));
void TIM7_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void DMA2_CH1_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA2_CH2_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA2_CH3_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA2_CH4_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA2_CH5_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DFSDM1_FLT0_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DFSDM1_FLT1_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void COMP_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void LPTIM1_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void LPTIM2_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void USB_FS_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void DMA2_CH6_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void DMA2_CH7_Handler(void) 				__attribute__ ((weak, alias ("Common_Handler")));
void LPUART1_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void QUADSPI_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void I2C3_EV_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void I2C3_ER_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void SAI1_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void SWPMI1_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void TSC_Handler(void) 						__attribute__ ((weak, alias ("Common_Handler")));
void LCD_Handler(void) 						__attribute__ ((weak, alias ("Common_Handler")));
void AES_Handler(void) 						__attribute__ ((weak, alias ("Common_Handler")));
void RNG_Handler(void) 						__attribute__ ((weak, alias ("Common_Handler")));
void FPU_Handler(void) 						__attribute__ ((weak, alias ("Common_Handler")));
void CRS_Handler(void) 						__attribute__ ((weak, alias ("Common_Handler")));
void I2C4_EV_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));
void I2C4_ER_Handler(void) 					__attribute__ ((weak, alias ("Common_Handler")));


uint32_t isr_vectors[] __attribute__ ((section (".isr_vectors"))) =
{
	SRAM_END,
	// "system interrupts"
	(uint32_t)&Reset_Handler,
	(uint32_t)&NMI_Handler,
	(uint32_t)&HardFault_Handler,
	(uint32_t)&MemManage_Handler,
	(uint32_t)&BusFault_Handler,
	(uint32_t)&UsageFault_Handler,
	0,
	(uint32_t)&SVCall_Handler,
	(uint32_t)&Debug_Handler,
	0,
	(uint32_t)&PendSV_Handler,
	(uint32_t)&SysTick_Handler,
	// "normal interrupts"
	(uint32_t)&WWDG_Handler,
	(uint32_t)&PVD_PVM_Handler,
	(uint32_t)&RTC_TAMP_STAMP_CSS_LSE_Handler,
	(uint32_t)&RTC_WKUP_Handler,
	(uint32_t)&FLASH_Handler,
	(uint32_t)&RCC_Handler,
	(uint32_t)&ETXI0_Handler,
	(uint32_t)&ETXI1_Handler,
	(uint32_t)&ETXI2_Handler,
	(uint32_t)&ETXI3_Handler,
	(uint32_t)&ETXI4_Handler,
	(uint32_t)&DMA1_CH1_Handler,
	(uint32_t)&DMA1_CH2_Handler,
	(uint32_t)&DMA1_CH3_Handler,
	(uint32_t)&DMA1_CH4_Handler,
	(uint32_t)&DMA1_CH5_Handler,
	(uint32_t)&DMA1_CH6_Handler,
	(uint32_t)&DMA1_CH7_Handler,
	(uint32_t)&ADC1_2_Handler,
	(uint32_t)&CAN1_TX_Handler,
	(uint32_t)&CAN1_RX0_Handler,
	(uint32_t)&CAN1_RX1_Handler,
	(uint32_t)&CAN1_SCE_Handler,
	(uint32_t)&EXTI9_5_Handler,
	(uint32_t)&TIM1_BRK_TIM15_Handler,
	(uint32_t)&TIM1_UP_TIM16_Handler,
	(uint32_t)&TIM1_TRG_COM_Handler,
	(uint32_t)&TIM1_CC_Handler,
	(uint32_t)&TIM2_Handler,
	(uint32_t)&TIM3_Handler,
	0,
	(uint32_t)&I2C1_EV_Handler,
	(uint32_t)&I2C1_ER_Handler,
	(uint32_t)&I2C2_EV_Handler,
	(uint32_t)&I2C2_ER_Handler,
	(uint32_t)&SPI1_Handler,
	(uint32_t)&SPI2_Handler,
	(uint32_t)&USART1_Handler,
	(uint32_t)&USART2_Handler,
	(uint32_t)&USART3_Handler,
	(uint32_t)&EXTI15_10_Handler,
	(uint32_t)&RTC_ALARM_Handler,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(uint32_t)&SDMMC1_Handler,
	0,
	(uint32_t)&SPI3_Handler,
	(uint32_t)&UART4_Handler,
	0,
	(uint32_t)&TIM6_DACUNDER_Handler,
	(uint32_t)&TIM7_Handler,
	(uint32_t)&DMA2_CH1_Handler,
	(uint32_t)&DMA2_CH2_Handler,
	(uint32_t)&DMA2_CH3_Handler,
	(uint32_t)&DMA2_CH4_Handler,
	(uint32_t)&DMA2_CH5_Handler,
	(uint32_t)&DFSDM1_FLT0_Handler,
	(uint32_t)&DFSDM1_FLT1_Handler,
	0,
	(uint32_t)&COMP_Handler,
	(uint32_t)&LPTIM1_Handler,
	(uint32_t)&LPTIM2_Handler,
	(uint32_t)&USB_FS_Handler,
	(uint32_t)&DMA2_CH6_Handler,
	(uint32_t)&DMA2_CH7_Handler,
	(uint32_t)&LPUART1_Handler,
	(uint32_t)&QUADSPI_Handler,
	(uint32_t)&I2C3_EV_Handler,
	(uint32_t)&I2C3_ER_Handler,
	(uint32_t)&SAI1_Handler,
	0,
	(uint32_t)&SWPMI1_Handler,
	(uint32_t)&TSC_Handler,
	(uint32_t)&LCD_Handler,
	(uint32_t)&AES_Handler,
	(uint32_t)&RNG_Handler,
	(uint32_t)&FPU_Handler,
	(uint32_t)&CRS_Handler,
	(uint32_t)&I2C4_EV_Handler,
	(uint32_t)&I2C3_ER_Handler
};

void Common_Handler(void)
{
	while(1);
}


void Reset_Handler(void)
{
	// copy .data to sram
uint32_t size = &_endOfData - &_startOfData;

	uint8_t* pDst = (uint8_t*)&_startOfData; //sram
	uint8_t* pSrc = (uint8_t*)&_la_data;	//flash

	for (uint32_t i = 0; i < size; i++)
	{
		*pDst++ = *pSrc++;
	}


	// Init .bss section in sram to 0

	size = &_endOfBss - &_startOfBss;

	pDst = (uint8_t*)&_startOfBss;

	for (uint32_t i = 0; i < size; i++)
	{
		*pDst++ = 0;
	}

	//call main
	main();
}