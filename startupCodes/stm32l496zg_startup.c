#include <stdint.h>

#define SRAM_START 0x20000000U
#define SRAM_SIZE  (320uL * 1024uL)
#define SRAM_END (SRAM_START + SRAM_SIZE)

int main(void);
extern uint32_t _endOfText;
extern uint32_t _startOfData;
extern uint32_t _endOfData;
extern uint32_t _startOfBss;
extern uint32_t _endOfBss;
extern uint32_t _la_data;

// "system interrupts"
void Reset_Handler_isr (void);
void NMI_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void HardFault_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void MemManage_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void BusFault_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void UsageFault_Handler_isr (void)				__attribute__ ((weak, alias ("Common_Handler_isr")));
void SVCall_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void Debug_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void PendSV_Handler_isr (void)					__attribute__ ((weak, alias ("Common_Handler_isr")));
void SysTick_Handler_isr (void)					__attribute__ ((weak, alias ("Common_Handler_isr")));

// "normal interrupts"
void WWDG_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void PVD_PVM_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void RTC_TAMP_STAMP_CSS_LSE_Handler_isr (void) 	__attribute__ ((weak, alias ("Common_Handler_isr")));
void RTC_WKUP_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void FLASH_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void RCC_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void ETXI0_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void ETXI1_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void ETXI2_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void ETXI3_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void ETXI4_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA1_CH1_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA1_CH2_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA1_CH3_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA1_CH4_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA1_CH5_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA1_CH6_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA1_CH7_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void ADC1_2_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void CAN1_TX_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void CAN1_RX0_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void CAN1_RX1_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void CAN1_SCE_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void EXTI9_5_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void TIM1_BRK_TIM15_Handler_isr (void) 			__attribute__ ((weak, alias ("Common_Handler_isr")));
void TIM1_UP_TIM16_Handler_isr (void) 			__attribute__ ((weak, alias ("Common_Handler_isr")));
void TIM1_TRG_COM_Handler_isr (void) 			__attribute__ ((weak, alias ("Common_Handler_isr")));
void TIM1_CC_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void TIM2_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void TIM3_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void I2C1_EV_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void I2C1_ER_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void I2C2_EV_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void I2C2_ER_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void SPI1_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void SPI2_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void USART1_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void USART2_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void USART3_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void EXTI15_10_Handler_isr (void)				__attribute__ ((weak, alias ("Common_Handler_isr")));
void RTC_ALARM_Handler_isr (void)				__attribute__ ((weak, alias ("Common_Handler_isr")));
void SDMMC1_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void SPI3_Handler_isr (void)	 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void UART4_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void TIM6_DACUNDER_Handler_isr (void) 			__attribute__ ((weak, alias ("Common_Handler_isr")));
void TIM7_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA2_CH1_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA2_CH2_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA2_CH3_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA2_CH4_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA2_CH5_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DFSDM1_FLT0_Handler_isr (void) 			__attribute__ ((weak, alias ("Common_Handler_isr")));
void DFSDM1_FLT1_Handler_isr (void) 			__attribute__ ((weak, alias ("Common_Handler_isr")));
void COMP_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void LPTIM1_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void LPTIM2_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void USB_FS_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA2_CH6_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void DMA2_CH7_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void LPUART1_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void QUADSPI_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void I2C3_EV_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void I2C3_ER_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void SAI1_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void SWPMI1_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void TSC_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void LCD_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void AES_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void RNG_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void FPU_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void CRS_Handler_isr (void) 					__attribute__ ((weak, alias ("Common_Handler_isr")));
void I2C4_EV_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));
void I2C4_ER_Handler_isr (void) 				__attribute__ ((weak, alias ("Common_Handler_isr")));


uint32_t isr_vectors[] __attribute__ ((section (".isr_vectors"))) =
{
	SRAM_END,
	// "system interrupts"
	(uint32_t)&Reset_Handler_isr,
	(uint32_t)&NMI_Handler_isr,
	(uint32_t)&HardFault_Handler_isr,
	(uint32_t)&MemManage_Handler_isr,
	(uint32_t)&BusFault_Handler_isr,
	(uint32_t)&UsageFault_Handler_isr,
	(uint32_t)0uL,
	(uint32_t)0uL,
	(uint32_t)0uL,
	(uint32_t)0uL,
	(uint32_t)&SVCall_Handler_isr,
	(uint32_t)&Debug_Handler_isr,
	(uint32_t)0uL,
	(uint32_t)&PendSV_Handler_isr,
	(uint32_t)&SysTick_Handler_isr,
	// "normal interrupts"
	(uint32_t)&WWDG_Handler_isr,
	(uint32_t)&PVD_PVM_Handler_isr,
	(uint32_t)&RTC_TAMP_STAMP_CSS_LSE_Handler_isr,
	(uint32_t)&RTC_WKUP_Handler_isr,
	(uint32_t)&FLASH_Handler_isr,
	(uint32_t)&RCC_Handler_isr,
	(uint32_t)&ETXI0_Handler_isr,
	(uint32_t)&ETXI1_Handler_isr,
	(uint32_t)&ETXI2_Handler_isr,
	(uint32_t)&ETXI3_Handler_isr,
	(uint32_t)&ETXI4_Handler_isr,
	(uint32_t)&DMA1_CH1_Handler_isr,
	(uint32_t)&DMA1_CH2_Handler_isr,
	(uint32_t)&DMA1_CH3_Handler_isr,
	(uint32_t)&DMA1_CH4_Handler_isr,
	(uint32_t)&DMA1_CH5_Handler_isr,
	(uint32_t)&DMA1_CH6_Handler_isr,
	(uint32_t)&DMA1_CH7_Handler_isr,
	(uint32_t)&ADC1_2_Handler_isr,
	(uint32_t)&CAN1_TX_Handler_isr,
	(uint32_t)&CAN1_RX0_Handler_isr,
	(uint32_t)&CAN1_RX1_Handler_isr,
	(uint32_t)&CAN1_SCE_Handler_isr,
	(uint32_t)&EXTI9_5_Handler_isr,
	(uint32_t)&TIM1_BRK_TIM15_Handler_isr,
	(uint32_t)&TIM1_UP_TIM16_Handler_isr,
	(uint32_t)&TIM1_TRG_COM_Handler_isr,
	(uint32_t)&TIM1_CC_Handler_isr,
	(uint32_t)&TIM2_Handler_isr,
	(uint32_t)&TIM3_Handler_isr,
	(uint32_t)0uL,
	(uint32_t)&I2C1_EV_Handler_isr,
	(uint32_t)&I2C1_ER_Handler_isr,
	(uint32_t)&I2C2_EV_Handler_isr,
	(uint32_t)&I2C2_ER_Handler_isr,
	(uint32_t)&SPI1_Handler_isr,
	(uint32_t)&SPI2_Handler_isr,
	(uint32_t)&USART1_Handler_isr,
	(uint32_t)&USART2_Handler_isr,
	(uint32_t)&USART3_Handler_isr,
	(uint32_t)&EXTI15_10_Handler_isr,
	(uint32_t)&RTC_ALARM_Handler_isr,
	(uint32_t)0uL,
	(uint32_t)0uL,
	(uint32_t)0uL,
	(uint32_t)0uL,
	(uint32_t)0uL,
	(uint32_t)0uL,
	(uint32_t)0uL,
	(uint32_t)&SDMMC1_Handler_isr,
	(uint32_t)0uL,
	(uint32_t)&SPI3_Handler_isr,
	(uint32_t)&UART4_Handler_isr,
	(uint32_t)0uL,
	(uint32_t)&TIM6_DACUNDER_Handler_isr,
	(uint32_t)&TIM7_Handler_isr,
	(uint32_t)&DMA2_CH1_Handler_isr,
	(uint32_t)&DMA2_CH2_Handler_isr,
	(uint32_t)&DMA2_CH3_Handler_isr,
	(uint32_t)&DMA2_CH4_Handler_isr,
	(uint32_t)&DMA2_CH5_Handler_isr,
	(uint32_t)&DFSDM1_FLT0_Handler_isr,
	(uint32_t)&DFSDM1_FLT1_Handler_isr,
	(uint32_t)0uL,
	(uint32_t)&COMP_Handler_isr,
	(uint32_t)&LPTIM1_Handler_isr,
	(uint32_t)&LPTIM2_Handler_isr,
	(uint32_t)&USB_FS_Handler_isr,
	(uint32_t)&DMA2_CH6_Handler_isr,
	(uint32_t)&DMA2_CH7_Handler_isr,
	(uint32_t)&LPUART1_Handler_isr,
	(uint32_t)&QUADSPI_Handler_isr,
	(uint32_t)&I2C3_EV_Handler_isr,
	(uint32_t)&I2C3_ER_Handler_isr,
	(uint32_t)&SAI1_Handler_isr,
	(uint32_t)0uL,
	(uint32_t)&SWPMI1_Handler_isr,
	(uint32_t)&TSC_Handler_isr,
	(uint32_t)&LCD_Handler_isr,
	(uint32_t)&AES_Handler_isr,
	(uint32_t)&RNG_Handler_isr,
	(uint32_t)&FPU_Handler_isr,
	(uint32_t)&CRS_Handler_isr,
	(uint32_t)&I2C4_EV_Handler_isr,
	(uint32_t)&I2C3_ER_Handler_isr
};

void __attribute__ ((interrupt)) Common_Handler_isr(void)
{
	while(1);
}


void __attribute__ ((interrupt)) Reset_Handler_isr(void) 
{
	// copy .data to sram
uint32_t size = (uint32_t)&_endOfData - (uint32_t)&_startOfData;

	uint8_t* pDst = (uint8_t*)&_startOfData; //sram
	uint8_t* pSrc = (uint8_t*)&_la_data;	//flash

	for (uint32_t i = 0; i < size; i++)
	{
		*pDst++ = *pSrc++;
	}


	// Init .bss section in sram to 0

	size = (uint32_t)&_endOfBss - (uint32_t)&_startOfBss;

	pDst = (uint8_t*)&_startOfBss;

	for (uint32_t i = 0; i < size; i++)
	{
		*pDst++ = 0;
	}

	//call main
	main();
}