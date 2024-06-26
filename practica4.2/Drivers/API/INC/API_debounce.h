//API_debounce.h

#ifndef __API_DEBOUNCE_H
#define __API_DEBOUNCE_H

#include "API_delay.h"

typedef enum{
	BUTTON_UP,
	BUTTON_FALLING,
	BUTTON_DOWN,
	BUTTON_RAISING,
} debounceState_t;

void debounceFSM_init();		// debe cargar el estado inicial
void debounceFSM_update();	// debe leer las entradas, resolver la lógica de
					// transición de estados y actualizar las salidas
void buttonPressed();			// debe encender el LED
void buttonReleased();		// debe apagar el LED

// La función readKey lee una variable interna del módulo y devolver true o false si la tecla fue presionada.
bool_t readKey();

#endif
