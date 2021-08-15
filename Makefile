SOURCE_PATH = src/
INCLUDE_PATH = include
BUILD_PATH = build/
LINKERS_PATH = linker.ld
CONTROLLER = STM32L452RE

CC = arm-none-eabi-gcc
MACHINE = cortex-m4
CFLAGS = -c -g -mcpu=$(MACHINE) -Wall -D$(CONTROLLER) -mthumb -std=gnu11 -O0 -I$(INCLUDE_PATH)
LDFlAGS = -nostdlib -T $(LINKERS_PATH) -Wl,-Map=$(BUILD_PATH)final.map

all: $(BUILD_PATH)main.o $(BUILD_PATH)flash.o $(BUILD_PATH)gpio.o $(BUILD_PATH)power.o $(BUILD_PATH)rcc.o $(BUILD_PATH)register.o $(BUILD_PATH)mcu/stm32l452re.o $(BUILD_PATH)usermain.o $(BUILD_PATH)startup.o $(BUILD_PATH)final.elf

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

$(BUILD_PATH)mcu/stm32l452re.o : $(SOURCE_PATH)mcu/stm32l452re.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)usermain.o : $(SOURCE_PATH)usermain.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)startup.o : startup.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)final.elf : $(BUILD_PATH)main.o $(BUILD_PATH)flash.o $(BUILD_PATH)gpio.o $(BUILD_PATH)power.o $(BUILD_PATH)rcc.o $(BUILD_PATH)register.o $(BUILD_PATH)mcu/stm32l452re.o $(BUILD_PATH)usermain.o $(BUILD_PATH)startup.o
	$(CC) $(LDFlAGS) $^ -o $@