//API_delay.c

#include "API_delay.h"
#include <stdlib.h>

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

	  uartInit();
	  /* Initialize BSP Led for LEDS */
	  BSP_LED_Init(LED1);
	  BSP_LED_Init(LED2);
	  BSP_LED_Init(LED3);

	  BSP_PB_Init(BUTTON_USER, BUTTON_MODE_GPIO);

	  //Initialize delay_a
	  delayInit(&delay_a);
}