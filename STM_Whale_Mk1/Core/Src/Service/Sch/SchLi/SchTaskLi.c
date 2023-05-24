
#include "SchTaskLi.h"

static uint16_t vSchTask_Cnt = 0;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	if(htim->Instance == TIM2){
		vSchTask_Cnt++;
		if(vSchTask_Cnt == 1000){
			vSchTask_Cnt = 0;
			HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
		}

	}
}
