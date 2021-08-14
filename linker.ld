ENTRY(Reset_Handler)

MEMORY
{
    FLASH(rx) : ORIGIN = 0x08000000, LENGTH = 512K
    SRAM(rwx) : ORIGIN = 0x20000000, LENGTH = 160K
}

SECTIONS
{
    .text : 
    {
        *(.isr_vectors)
        *(.text)
        *(.rodata) 
        . = ALIGN(4);
        _endOfText = .;
    } > FLASH

    _la_data = LOADADDR(.data);

    .data :
    {
        _startOfData = .;
        *(.data)
        . = ALIGN(4);
        _endOfData = .;
    } > SRAM AT > FLASH

    .bss : 
    {
        _startOfBss = .;
        *(.bss)
        *(COMMON)
        . = ALIGN(4);
        _endOfBss = .;
    } > SRAM

} 