/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           :
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/

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
