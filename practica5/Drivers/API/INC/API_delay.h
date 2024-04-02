//API_delay.h

#ifndef __API_DELAY_H
#define __API_DELAY_H


#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"  		// Hardware Abstraction Layer (HAL) for STM32F4xx
#include "stm32f4xx_nucleo_144.h" // Board Support Package (BSP) for Nucleo-144

#include <stdbool.h> // Tipos booleanos estándar


typedef uint32_t tick_t; // Definir un tipo entero
typedef bool bool_t; //Definir un tipo booleano


typedef struct{
   tick_t startTime; //Tiempo inicial del delay
   tick_t duration; //Duracion del delay
   bool_t running; //Delay esta corriendo o no
} delay_t;

#endif
