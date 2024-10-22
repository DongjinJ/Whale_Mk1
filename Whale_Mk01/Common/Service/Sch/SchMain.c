/*
 * SchMain.c
 *
 *  Created on: Sep 20, 2024
 *      Author: exon9
 */

#include "SchMain.h"


typSchTask SchMain_CfgTask(uint16_t period, uint16_t offset, void (*func_ptr)()){
	typSchTask task;

	task.tick = 0U;
	task.period = period;
	task.offset = offset;

	task.func_ptr = func_ptr;
	task.activation = 0U;

	return task;
}

void SchMain_TimerManger(typSchTask *task, uint8_t task_size){
	uint8_t i;

	for(i = 0;i < task_size;i++){
		if(task[i].offset > 0){
			task[i].offset--;
		}
		else{
			task[i].tick++;
		}

		if(task[i].tick == task[i].period){
			task[i].activation = 1U;
			task[i].tick = 0;
		}
		else{
			// Do Nothing
		}
	}
}

uint32_t SchMain_GetTime_us(uint8_t core_id){
	TIM_HandleTypeDef htim;
	uint32_t time_us;

	if(core_id == SCHMAIN_CORE_M4){
		htim.Instance = TIM2;
	}
	else if(core_id == SCHMAIN_CORE_M7){
		htim.Instance = TIM5;
	}
	else{
		htim.Instance = TIM2;
	}
	time_us = htim.Instance->CNT;

	return time_us;
}
