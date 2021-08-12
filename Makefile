SOURCE_PATH = src/
INCLUDE_PATH = include
BUILD_PATH = build/

CONTROLLER = STM32L452RE

CC = arm-none-eabi-gcc
MACHINE = cortex-m4
CFLAGS = -c -mcpu=$(MACHINE) -Wall -D$(CONTROLLER) -mthumb -std=gnu11 -O0 -I$(INCLUDE_PATH)

all: $(BUILD_PATH)main.o $(BUILD_PATH)flash.o $(BUILD_PATH)gpio.o $(BUILD_PATH)power.o $(BUILD_PATH)rcc.o $(BUILD_PATH)register.o $(BUILD_PATH)stm32l452re.o $(BUILD_PATH)usermain.o $(BUILD_PATH)startup.o

clean:
	rm -rf $(BUILD_PATH)*.o $(BUILD_PATH)*.elf

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

$(BUILD_PATH)stm32l452re.o : $(SOURCE_PATH)stm32l452re.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_PATH)usermain.o : $(SOURCE_PATH)usermain.c
	$(CC) $(CFLAGS) $^ -o $@


$(BUILD_PATH)startup.o : startup.c
	$(CC) $(CFLAGS) $^ -o $@