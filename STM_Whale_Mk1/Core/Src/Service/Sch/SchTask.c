
#include "SchTask.h"

static typSchTask vSchTask_Info[SCHTASK_NUM];

static void SchTask_Cfg(uint8_t task_id, uint16_t period_ms, uint16_t offset_ms, void (*func_ptr)());

void SchTask_Init(void){
	/* 1ms Task */
	SchTask_Cfg(SCHTASK_ID_00, 	1, 		0, 		AppFunc_1ms);

	/* 10ms Task */
	SchTask_Cfg(SCHTASK_ID_01, 	10, 	0, 		AppFunc_10ms_ComRx);
	SchTask_Cfg(SCHTASK_ID_02, 	10, 	2, 		AppFunc_10ms_Task00);
	SchTask_Cfg(SCHTASK_ID_03, 	10, 	4, 		AppFunc_10ms_Task01);
	SchTask_Cfg(SCHTASK_ID_04, 	10, 	6, 		AppFunc_10ms_Task02);
	SchTask_Cfg(SCHTASK_ID_05, 	10, 	8, 		AppFunc_10ms_ComTx);

	/* 100ms Task */
	SchTask_Cfg(SCHTASK_ID_06, 	100, 	0, 		AppFunc_100ms_Task00);
	SchTask_Cfg(SCHTASK_ID_07, 	100, 	25, 	AppFunc_100ms_Task01);
	SchTask_Cfg(SCHTASK_ID_08, 	100, 	75, 	AppFunc_100ms_Task02);

	/* 1sec Task */
	SchTask_Cfg(SCHTASK_ID_09, 	1000, 	0, 		AppFunc_1sec_Task);
}

void SchTask_Background(void){
	uint8_t i;

	for(i = 0;i < SCHTASK_NUM;i++){
		if(vSchTask_Info[i].activation == TRUE){
			vSchTask_Info[i].func_ptr();
			vSchTask_Info[i].activation = FALSE;
		}
		else{
			// Do Nothing
		}
	}
}

void SchTask_TimeManager(void){
	uint8_t i;

	for(i = 0;i < SCHTASK_NUM;i++){
		if(vSchTask_Info[i].offset_ms > 0){
			vSchTask_Info[i].offset_ms--;
		}	// Wait for Offset Time
		else{
			vSchTask_Info[i].curtick_ms++;
			if(vSchTask_Info[i].curtick_ms == vSchTask_Info[i].period_ms){
				vSchTask_Info[i].activation = TRUE;
				vSchTask_Info[i].curtick_ms = 0;
			}
			else{
				// Do Nothing
			}
		}
	}
}

static void SchTask_Cfg(uint8_t task_id, uint16_t period_ms, uint16_t offset_ms, void (*func_ptr)()){
	if(task_id < SCHTASK_NUM){
		vSchTask_Info[task_id].period_ms = period_ms;
		vSchTask_Info[task_id].offset_ms = offset_ms;
		vSchTask_Info[task_id].curtick_ms = 0;

		vSchTask_Info[task_id].func_ptr = func_ptr;

		vSchTask_Info[task_id].activation = FALSE;
	}
	else{
		// Error
	}
}
