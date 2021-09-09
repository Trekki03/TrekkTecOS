#Change according to the controller:
LINKER     = stm32l496zg.ld
CONTROLLER = STM32L496ZG
STARTUP    = stm32l496zg_startup
#-----------------------------------

CC = arm-none-eabi-gcc
MACHINE = cortex-m4
CFLAGS = -c -g -mcpu=$(MACHINE) -Wall -D$(CONTROLLER) -mthumb -std=gnu11 -O0 -I$(INCLUDE_PATH)
LDFlAGS = -nostdlib -T $(LINKER_PATH)$(LINKER) -Wl,-Map=$(BUILD_PATH)final.map
SOURCE_PATH = src/
INCLUDE_PATH = include
BUILD_PATH = build/
LINKER_PATH = linkerscripts/
STARTUP_PATH = startupCodes/


all: $(BUILD_PATH)main.o $(BUILD_PATH)flash.o $(BUILD_PATH)gpio.o\
	 $(BUILD_PATH)power.o $(BUILD_PATH)rcc.o $(BUILD_PATH)register.o\
	 $(BUILD_PATH)usermain.o $(BUILD_PATH)$(STARTUP).o $(BUILD_PATH)systick.o\
	 $(BUILD_PATH)final.elf

clean:
	rm -rf $(BUILD_PATH)*.o $(BUILD_PATH)mcu/*.o $(BUILD_PATH)*.elf $(BUILD_PATH)*map

$(BUILD_PATH)main.o : $(SOURCE_PATH)main.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)flash.o : $(SOURCE_PATH)flash.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)gpio.o : $(SOURCE_PATH)gpio.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)power.o : $(SOURCE_PATH)power.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)rcc.o : $(SOURCE_PATH)rcc.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)register.o : $(SOURCE_PATH)register.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)mcu/$(CONTROLLER).o : $(SOURCE_PATH)mcu/$(CONTROLLER).c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)usermain.o : $(SOURCE_PATH)usermain.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)systick.o : $(SOURCE_PATH)systick.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)$(STARTUP).o : $(STARTUP_PATH)$(STARTUP).c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)final.elf : $(BUILD_PATH)main.o $(BUILD_PATH)flash.o\
						 $(BUILD_PATH)gpio.o $(BUILD_PATH)power.o\
						 $(BUILD_PATH)rcc.o $(BUILD_PATH)register.o\
						 $(BUILD_PATH)usermain.o $(BUILD_PATH)$(STARTUP).o\
						 $(BUILD_PATH)systick.o
	$(CC) $(LDFlAGS) $^ -o $@