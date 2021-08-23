![Alt text](github/images/Logo.png?raw=true "TrekkTecOS Logo")

### TrekkTecOS
TrekkTecOS is a framework for STM32 Nucleo Boards. It brings basic functions, comparable to the Arduino framework, like for exemple pinMode() and also more complex functions 
for manipulating the underlying functions like configuring the PLL or the clock source.
TrekkTecOS is build with no underlying standart like cmsis or STM HAL. Everything from the linker script to the startup file is self build.  
##### WIP
Only a small part of the features exists yet. And the features that exist are not in their final form. For example, you have to hand over the GPIO port and pin for the pinMode() function instead of only the pin. This will change in the future to be more "Arduino like" 

## Supported Devices 
|         Devices       | Makefile Linker | Makefile Controller | Makefile Startup    | Supported? |        Status        |
|-----------------------|-----------------|---------------------|---------------------|------------|----------------------|
| Nucleo144 STM32L496ZG |  stm32l496zg.ld |      STM32L496ZG    | stm32l496zg_startup |  partly    | currently worked on  | 
| Nucleo64 STM32L452RE  |  stm32l452re.ld |      STM32L452RE    | stm32l452re_startup |  not yet   | next target          | 

## How to get started
All you need to do is download the repository and execute the make file. Your code goes into the usermain.c or how ever you want to call you main file.\
**IMPORTANT** is, that you don't create your own main function, you only have to create a setup and a loop function. Everything in the setup function will be exectued after a default setup and befor the while(1) loop. Even though there is a default setup, which lets the mcu run at 80MHz, you can change these values in the setup function. Everything in the loop function will be executed repeatedly.\
You also have to include the TrekkTecOS.h header file in your usermain file and you have to set the correct define for your device in the make file (see table above).\
Later on, the framework will be in the form of a library, but for now on you have to use it this way.\
**Be warned, at this point of development, the framework isn't really useable. But if you are interested, don't hesitate to star the repo.**
