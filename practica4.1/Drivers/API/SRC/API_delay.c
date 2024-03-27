//API_delay.c

#include "API_delay.h"
#include <stdlib.h>
#define delayL1 1000
#define delayL2 200
#define delayL3 100

/* Private function prototypes -----------------------------------------------*/

void delayInit( delay_t * delay); //Funcion para inicializar el delay
bool_t delayRead( delay_t * delay ); //Funcion para leer el estado del delay
void delayWrite( delay_t * delay, tick_t duration ); //Funcion para escribir la duracion del delay

//Funcion para inicializar delay
void delayInit(delay_t * delay) {
    delay->startTime = 0;
    delay->running = false;
}



delay_t delay_a;
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */

//Funcion oara leer el estado del delay
bool_t delayRead(delay_t *delay) {
    if (!delay->running) {
        delay->startTime = HAL_GetTick();
        delay->running = true;
    } else {
        if (HAL_GetTick() - delay->startTime >= delay->duration) {
            delay->running = false;
            return true;
        }
    }
    return false;
}

//Funcion para modificar la duracion al delay
void delayWrite(delay_t *delay, tick_t duration) {
    delay->duration = duration;
}

void functionInit(){
	  /* Initialize BSP Led for LEDS */
	  BSP_LED_Init(LED1);
	  BSP_LED_Init(LED2);
	  BSP_LED_Init(LED3);

	  //Initialize delay_a
	  delayInit(&delay_a);
}

void ledCycle(){
	//Ciclo entre leds
    for (int i = 0; i < 5; i++) {
        //Se enciende la led
    	BSP_LED_On(LED1);

    	//Se establece el delay
        delayWrite(&delay_a, delayL1);

        //Se espera el delay
        while (!delayRead(&delay_a));

        //Se apaga la led
        BSP_LED_Off(LED1);

        //Se establece el delay
        delayWrite(&delay_a, delayL1);

        //Se espera el delay
        while (!delayRead(&delay_a));
    }

    //Se repite el ciclo
    for (int i = 0; i < 5; i++) {
        BSP_LED_On(LED2);

        delayWrite(&delay_a, delayL2);
        while (!delayRead(&delay_a));

        BSP_LED_Off(LED2);

        delayWrite(&delay_a, delayL2);
        while (!delayRead(&delay_a));
    }

    //Se repite el ciclo
    for (int i = 0; i < 5; i++) {
        BSP_LED_On(LED3);

        delayWrite(&delay_a, delayL3);
        while (!delayRead(&delay_a));

        BSP_LED_Off(LED3);

        delayWrite(&delay_a, delayL3);
        while (!delayRead(&delay_a));
    }
}
