// API_debounce.c

#include "API_debounce.h"

static debounceState_t state;
static delay_t debounceDelay;
static delay_t blinkDelay; // Nuevo delay para controlar el parpadeo de los LEDs

static bool_t key_state = false;

void debounceFSM_init(void) {
    state = BUTTON_UP;
    delayInit(&blinkDelay); // Inicializar el delay para el parpadeo de los LEDs
    delayWrite(&blinkDelay, 1000); // Inicialmente parpadear cada 100 ms
}

void debounceFSM_update(void) {
    delayInit(&debounceDelay, 40);

    switch (state) {
        case BUTTON_UP:
            if (BSP_PB_GetState(BUTTON_USER)) {
                state = BUTTON_FALLING;
            }
            break;

        case BUTTON_FALLING:
            delayRead(&debounceDelay);
            if (BSP_PB_GetState(BUTTON_USER)) {
                state = BUTTON_DOWN;
                key_state = true;
                buttonPressed();
                // Cambiar la duración del parpadeo al presionar el botón
                delayWrite(&blinkDelay, 5000); // Parpadear cada 500 ms
            } else {
                state = BUTTON_UP;
            }
            break;

        case BUTTON_DOWN:
            if (!BSP_PB_GetState(BUTTON_USER)) {
                state = BUTTON_RAISING;
            }
            break;

        case BUTTON_RAISING:
            delayRead(&debounceDelay);
            if (!BSP_PB_GetState(BUTTON_USER)) {
                state = BUTTON_UP;
                buttonReleased();
                // Restaurar la duración del parpadeo al soltar el botón
                delayWrite(&blinkDelay, 100); // Parpadear cada 100 ms
            } else {
                state = BUTTON_DOWN;
            }
            break;
    }

    // Controlar el parpadeo de los LEDs
    if (delayRead(&blinkDelay)) {
        static bool_t led_state = false;
        if (led_state) {
            BSP_LED_Off(LED1);
            BSP_LED_Off(LED2);
            BSP_LED_Off(LED3);
        } else {
            BSP_LED_On(LED1);
            BSP_LED_On(LED2);
            BSP_LED_On(LED3);
        }
        led_state = !led_state;
    }
}

void buttonPressed(void) {
    // No es necesario realizar ninguna acción adicional aquí
}

void buttonReleased(void) {
    // No es necesario realizar ninguna acción adicional aquí
}

bool_t readKey() {
    if (key_state) {
        key_state = false;
        return true;
    } else {
        return false;
    }
}