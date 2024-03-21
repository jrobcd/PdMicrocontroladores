# MicroControllers-Programming

## Description
This repository is going to be used to upload every task assigned in the Microcontrollers Programming class.

## "practica2"

### File Structure

The project consists of two main files:
 
- Inc/main.h: Declarations and prototypes for a delay structure and its associated functions are added in this file.

- Src/main.c: The actual implementation of the delay structure and functions is provided here.

### Main Function

The main function initiates the LED and the delay structure. It enters a loop that follows this sequence:

1. Turns the LED on for 100 ms.
2. Waits for the delay to complete.
3. Turns the LED off for 100 ms.
4. Waits for the delay to complete.

This loop results in the LED blinking on and off in a periodic manner.

### Building and Execution

After implementing the code, it needs to be built and uploaded to the development board. This process activates the LED, causing it to blink in the specified pattern.

Feel free to explore each task directory for further details and specific implementations.

### Note

This task was tested using QEMU simulator.

## "practica3"

### File Structure

The project consists of four main files:
 
- Inc/main.h: Includes <API_delay.h>

- Src/main.c: The actual implementation of the delay structure and functions is provided here.

- Drivers/API/INC/API_delay.h: Declarations and prototypes for a delay structure and its associated functions are added in this file.

- Drivers/API/SRC/API_delay.c: Where main functions and flow of the functionality is.

### Main Function

The flow of the code is as follows:

1. The functionInit() function is called to initialize the LEDs and the delay variable.

2. The ledCycle() function is called repeatedly in an infinite loop.

3. Inside the ledCycle() function, the LEDs are turned on and off in a specific pattern.

4. For each LED, the BSP_LED_On() function is called to turn the LED on, and the BSP_LED_Off() function is called to turn the LED off.

5. The delayWrite() function is called to set the delay for each LED, and the delayRead() function is called to wait for the delay to finish.

6. The pattern is repeated 5 times for each LED.

7. After all the LEDs have been cycled through, the ledCycle() function is called again to start the pattern over from the beginning.

8. This process continues indefinitely until the program is stopped or reset.

### Building and Execution

After implementing the code, it needs to be built and uploaded to the development board. This process activates the LEDS, causing it to blink in the specified pattern.

Feel free to explore each task directory for further details and specific implementations.