/*
 * PrjSch_M7.c
 *
 *  Created on: Oct 16, 2024
 *      Author: exon9
 */


#include "PrjSch_M7.h"

static uint32_t vPrjSch_M7_ExeTime_us = 0;
static typSchTask vPrjSch_M7_Task[PRJSCH_TASK_M7_NUM];

uint32_t PrjSch_Get_TotalExeTime_us(void){
	uint32_t total_exe;

	total_exe = vPrjSch_M7_ExeTime_us;
	vPrjSch_M7_ExeTime_us = 0U;

	return total_exe;
}

void PrjSch_Init(void){
	vPrjSch_M7_Task[PRJSCH_TASK_0_M7] = SchMain_CfgTask(PRJSCH_TASK_0_M7_PERIOD, PRJSCH_TASK_0_M7_OFSSET, AppTask_1ms_Task_M7);
	vPrjSch_M7_Task[PRJSCH_TASK_1_M7] = SchMain_CfgTask(PRJSCH_TASK_1_M7_PERIOD, PRJSCH_TASK_1_M7_OFSSET, AppTask_10ms_0ms_Task_M7);
	vPrjSch_M7_Task[PRJSCH_TASK_2_M7] = SchMain_CfgTask(PRJSCH_TASK_2_M7_PERIOD, PRJSCH_TASK_2_M7_OFSSET, AppTask_10ms_3ms_Task_M7);
	vPrjSch_M7_Task[PRJSCH_TASK_3_M7] = SchMain_CfgTask(PRJSCH_TASK_3_M7_PERIOD, PRJSCH_TASK_3_M7_OFSSET, AppTask_10ms_8ms_Task_M7);
	vPrjSch_M7_Task[PRJSCH_TASK_4_M7] = SchMain_CfgTask(PRJSCH_TASK_4_M7_PERIOD, PRJSCH_TASK_4_M7_OFSSET, AppTask_100ms_1ms_Task_M7);
	vPrjSch_M7_Task[PRJSCH_TASK_5_M7] = SchMain_CfgTask(PRJSCH_TASK_5_M7_PERIOD, PRJSCH_TASK_5_M7_OFSSET, AppTask_100ms_25ms_Task_M7);
	vPrjSch_M7_Task[PRJSCH_TASK_6_M7] = SchMain_CfgTask(PRJSCH_TASK_6_M7_PERIOD, PRJSCH_TASK_6_M7_OFSSET, AppTask_100ms_75ms_Task_M7);
	vPrjSch_M7_Task[PRJSCH_TASK_7_M7] = SchMain_CfgTask(PRJSCH_TASK_7_M7_PERIOD, PRJSCH_TASK_7_M7_OFSSET, AppTask_1sec_Task_M7);
}


void PrjSch_Main(void){
	uint8_t i;
	uint32_t time_us;

	for(i = 0U;i < PRJSCH_TASK_M7_NUM;i++){
		if(vPrjSch_M7_Task[i].activation == 1U){
			time_us = SchMain_GetTime_us(SCHMAIN_CORE_M7);
			vPrjSch_M7_Task[i].func_ptr();
			vPrjSch_M7_Task[i].activation = 0U;

			vPrjSch_M7_Task[i].exe_time_us = (uint16_t)(SchMain_GetTime_us(SCHMAIN_CORE_M7) - time_us);
			vPrjSch_M7_ExeTime_us = vPrjSch_M7_Task[i].exe_time_us;
			break;
		}
	}
}

void PrjSch_TimerManager(void){
	SchMain_TimerManger(vPrjSch_M7_Task, PRJSCH_TASK_M7_NUM);
}
