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

## "practica4.1"

### File Structure

The project consists of four main files:
 
- Inc/main.h: Includes <API_delay.h>

- Src/main.c: The actual implementation of the delay structure and functions is provided here.

- Drivers/API/INC/API_delay.h: Declarations and prototypes for a delay structure and its associated functions are added in this file.

- Drivers/API/SRC/API_delay.c: Where functions and flow of the functionality is.

- Drivers/API/INC/API_debounce.h: Declarations and prototypes for a debounce structure and its associated functions are added in this file.

- Drivers/API/SRC/API_debounce.c: Where functions and flow of the functionality is.

### Main Function

The flow of the code is as follows:

1. Initialize the debounce state:

    Call the debounceFSM_init() function to set the initial state to BUTTON_UP.

2. Read the button input:

    Use the HAL library function HAL_GPIO_ReadPin() to read the state of the button.

3. Check the time difference:

    Calculate the time difference between the current time and the last debounce time.

4. Update the debounce state:

    Use a switch statement to handle the different debounce states.

    For each state, check the button input and time difference to determine the next state.

5. Handle button press and release events:

    If the button is pressed (BUTTON_DOWN state), call the buttonPressed() function to turn on the LED.

    If the button is released (BUTTON_UP state), call the buttonReleased() function to turn off the LED.

6. Update the last debounce time:

    Update the lastDebounceTime variable with the current time.

7. Call the debounceFSM_update() function periodically:

    Call the debounceFSM_update() function in your main loop or using a timer interrupt to continuously update the debounce state.

### Building and Execution

After implementing the code, it needs to be built and uploaded to the development board.

Feel free to explore each task directory for further details and specific implementations.

## "practica4.2"

### File Structure

The project consists of four main files:
 
- Inc/main.h: Includes <API_delay.h>

- Src/main.c: The actual implementation of the delay structure and functions is provided here.

- Drivers/API/INC/API_delay.h: Declarations and prototypes for a delay structure and its associated functions are added in this file.

- Drivers/API/SRC/API_delay.c: Where functions and flow of the functionality is.

- Drivers/API/INC/API_debounce.h: Declarations and prototypes for a debounce structure and its associated functions are added in this file.

- Drivers/API/SRC/API_debounce.c: Where functions and flow of the functionality is.

### Main Function

The flow of the code is as follows:

1. Initialization (main.c):
        Hardware and system initialization.
        Setup GPIO and system clock.
        Initialize debounce and other necessary components.

2. Main Loop (main.c):
        Continuous loop:
            Update debounce state machine.
            Add a small delay for proper debounce operation.

3. Debounce State Machine Update (API_debounce.c):
        Check button state transitions.
        Update debounce state and handle button press/release.
        Control LED blinking based on debounce.

4. Key State Reading (API_debounce.c):
        Read the current state of the key/button.

5. Error Handling (main.c):
        Handle initialization errors by turning on LED2 and entering an infinite loop.

### Building and Execution

After implementing the code, it needs to be built and uploaded to the development board.

Feel free to explore each task directory for further details and specific implementations.

## "practica5"

### File Structure

The project consists of six main files:
 
- Inc/main.h: Includes <API_delay.h>

- Src/main.c: The actual implementation of the delay structure and functions is provided here.

- Drivers/API/INC/API_delay.h: Declarations and prototypes for a delay structure and its associated functions are added in this file.

- Drivers/API/SRC/API_delay.c: Where functions and flow of the functionality is.

- Drivers/API/INC/API_debounce.h: Declarations and prototypes for a debounce structure and its associated functions are added in this file.

- Drivers/API/SRC/API_debounce.c: Where functions and flow of the functionality is.

- Drivers/API/SRC/API_uart.h: Declarations for uart use.

- Drivers/API/SRC/API_uart.c: Uart usage and functions.

### Main Function

The flow of the code is as follows:

Same as "practica4.2" but using UART and showing the status of the button in the terminal.

### Building and Execution

After implementing the code, it needs to be built and uploaded to the development board.

Feel free to explore each task directory for further details and specific implementations.