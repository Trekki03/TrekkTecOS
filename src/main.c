#include "trekktecos.h"
#include "register.h"

//User Functions
void setup (void);
void loop (void);

void InitalSetup (void)
{
    Rcc_ToggleHSEByPass (on);
    Rcc_ToggleHSE (on);
    Rcc_TogglePowerInterfaceClock (on);
    Power_SetVoltageRegulatorScale (VOLTAGE_SCALE_2);
    Flash_ToggleDataCache (on);
    Flash_ToggleInstructionCache (on);
    Flash_TogglePrefetchBuffer (on);
    Flash_SetFlashLatency (FLASH_LATENCY_4_WAIT_STATES);
    Rcc_SetAHBPrescaler (AHB_NOT_DIVIDED);
    Rcc_SetAPB1Prescaler (APB1_NOT_DIVIDED);
    Rcc_SetAPB2Prescaler (APB2_NOT_DIVIDED);
    Rcc_SetPLLSource (PLL_SOURCE_HSE);
    Rcc_SetPLLM (PLLM_DIVIDER_NO_DIVIDER);
    Rcc_SetPLLN (PLLN_DIVIDER_20);
    Rcc_SetPLLR (PLLR_DIVIDER_2);
    Rcc_TogglePLLOutput (on);
    Rcc_TogglePLL (on);
    Rcc_SetSystemClockSource (SYSCLOCK_PLL_SOURCE);
    Rcc_ToggleGpioClock (GPIO_A_ENABLE_PORT, on);
    Rcc_ToggleGpioClock (GPIO_B_ENABLE_PORT, on);
    Rcc_ToggleGpioClock (GPIO_C_ENABLE_PORT, on);
    Rcc_ToggleGpioClock (GPIO_D_ENABLE_PORT, on);
    Rcc_ToggleGpioClock (GPIO_E_ENABLE_PORT, on);
    Rcc_ToggleGpioClock (GPIO_H_ENABLE_PORT, on);
    Register_WriteIntoRegister (&(STK->CTRL), 0b1, 1uL, 0uL);
    Register_WriteIntoRegister (&(STK->CTRL), 0b1, 1uL, 1uL);
    Register_WriteIntoRegister (&(STK->CTRL), 0b1, 1uL, 2uL);
    Register_WriteIntoRegister (&(STK->LOAD), 319uL, 24uL, 0uL);
    Register_WriteIntoRegister (&(STK->VAL), 0b0, 32uL, 0uL);
}


int main (void)
{
    InitalSetup ();
    setup ();

    //Main loop
    for(;;)
    {
        loop ();
    }

    return 0;
}
