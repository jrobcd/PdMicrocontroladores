//API_debounce.c


#include "API_debounce.h"

static debounceState_t state;

static delay_t debounceDelay;

static bool_t key_state = false;


void debounceFSM_init(void){
	state = BUTTON_UP;
}

void debounceFSM_update(void){
	delayInit(&debounceDelay, 40);

	switch (state){
	case BUTTON_UP:
		if (BSP_PB_GetState(BUTTON_USER)){
			state = BUTTON_FALLING;
		}
		break;


	case BUTTON_FALLING:
		delayRead(&debounceDelay);
		if (BSP_PB_GetState(BUTTON_USER)){
			state = BUTTON_DOWN;
			key_state = true;
			buttonPressed();
		}else {
			state = BUTTON_UP;
		}
		break;

	case BUTTON_DOWN:
		if(!BSP_PB_GetState(BUTTON_USER)){
			state = BUTTON_RAISING;

		}
		break;

	case BUTTON_RAISING:
		delayRead(&debounceDelay);
		if (!BSP_PB_GetState(BUTTON_USER)){
			state = BUTTON_UP;
			buttonReleased();
		}else {
			state = BUTTON_DOWN;
		}
		break;
	}
}

void buttonPressed(void){
	BSP_LED_On(LED1);
	BSP_LED_On(LED2);
	BSP_LED_On(LED3);

}

void buttonReleased(void){
	BSP_LED_Off(LED1);
	BSP_LED_Off(LED2);
	BSP_LED_Off(LED3);
}


bool_t readKey(){

	if (key_state){
		key_state = false;
		return true;
	} else {
		return false;
	}
}
