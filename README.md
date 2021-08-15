![Alt text](github/images/Logo.png?raw=true "TrekkTecOS Logo")

### TrekkTecOs
TrekkTecOS is an framework for STM32 Nucleo Boards. It brings basic functions, comparable with the Arduino framework, like for exemple pinMode() but also more complex functions 
for manipulating the lower lying functions like configuring the PLL or the clock source.
TrekkTecOS is build with no underlying standart like cmsis or STM HAL. Everything from the linker script to the startup file is self build.  
##### WIP
Only a small part of the features exists yet. And the features that exist are not in their final form. For example, you have to hand over the GPIO port and pin for the pinMode() function instead of only the pin, this will change in the future, to be more "Arduino like" 

## Supported Devices 
| Devices               | Define         |Supported? | Status               |
|-----------------------|----------------|-----------|----------------------|
| Nucleo64 STM32L452RE  |  STM32L452RE   | partly    | currently worked on  | 
| Nucleo144 STM32L496   |  STM32L496     | no yet    | next target          | 

## How to get started
All you need to do is download the repository and exute the make file. Your code comes in the usermain.c or how ever you want to call you main file.\
**IMPORTANT** is, that you don't create your own main methode, you only have to create a setup and a loop function. Everything in the setup function will be exectued after a default setup and befor the while(1) loop. Even their is a default setup, which lets the mcu run at 80MHz, you can change these values in the setup function. Everything in the loop function will be executed on repeate.\
The usermain also have to include the TrekkTecOS.h header file and you have to set the correct define for your device in the make file (see table above).\
Later on, the framework will be a lib to add, but for now on you have to use it that way.\
**Be warned, at this point of development, the framwork isn't really useable. But if you are intressted, don't hesitate to star the repo.**