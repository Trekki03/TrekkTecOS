cmake_minimum_required(VERSION 3.11.1)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_CROSSCOMPILING 1)

set(CMAKE_BUILD_TYPE Debug)

set(GCC_PATH /Users/tobias/Dev/Microcontroller/ARM/bin)
set(CMAKE_C_COMPILER ${GCC_PATH}/arm-none-eabi-gcc CACHE PATH "" FORCE)

SET (CMAKE_C_COMPILER_WORKS 1)
SET (CMAKE_CXX_COMPILER_WORKS 1)
set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")

set(CMAKE_C_FLAGS " -mcpu=cortex-m4 -Wall -mthumb")
set(CMAKE_C_FLAGS_DEBUG "-O0 -g")
set(CMAKE_EXE_LINKER_FLAGS "-nostdlib -T ../linkerscripts/stm32l496zg.ld -Wl,-Map=final.map")

set(SOURCES src/flash.c src/gpio.c src/main.c src/power.c src/rcc.c src/register.c src/systick.c src/usermain.c startupCodes/stm32l496zg_startup.c)
add_definitions(-DSTM32L496ZG)

project(TrekkTecOs)

include_directories(include)
add_executable(${PROJECT_NAME}.elf ${SOURCES})

set(CMAKE_C_OBJCOPY ${GCC_PATH}/arm-none-eabi-objcopy CACHE PATH "" FORCE)

add_custom_target(${PROJECT_NAME}.bin ALL DEPENDS ${PROJECT_NAME}.elf)
add_custom_command(TARGET ${PROJECT_NAME}.bin
        COMMAND ${CMAKE_C_OBJCOPY} ARGS -O binary ${PROJECT_NAME}.elf ${PROJECT_NAME}.bin)