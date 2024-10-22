/*
 * PrjSch.c
 *
 *  Created on: Oct 15, 2024
 *      Author: exon9
 */


#include "PrjSch_M4.h"

static uint32_t vPrjSch_M4_ExeTime_us = 0;
static typSchTask vPrjSch_M4_Task[PRJSCH_TASK_M4_NUM];

uint32_t PrjSch_Get_TotalExeTime_us(void){
	uint32_t total_exe;

	total_exe = vPrjSch_M4_ExeTime_us;
	vPrjSch_M4_ExeTime_us = 0U;

	return total_exe;
}

void PrjSch_Init(void){
	vPrjSch_M4_Task[PRJSCH_TASK_0_M4] = SchMain_CfgTask(PRJSCH_TASK_0_M4_PERIOD, PRJSCH_TASK_0_M4_OFSSET, AppTask_1ms_Task_M4);
	vPrjSch_M4_Task[PRJSCH_TASK_1_M4] = SchMain_CfgTask(PRJSCH_TASK_1_M4_PERIOD, PRJSCH_TASK_1_M4_OFSSET, AppTask_10ms_0ms_Task_M4);
	vPrjSch_M4_Task[PRJSCH_TASK_2_M4] = SchMain_CfgTask(PRJSCH_TASK_2_M4_PERIOD, PRJSCH_TASK_2_M4_OFSSET, AppTask_10ms_3ms_Task_M4);
	vPrjSch_M4_Task[PRJSCH_TASK_3_M4] = SchMain_CfgTask(PRJSCH_TASK_3_M4_PERIOD, PRJSCH_TASK_3_M4_OFSSET, AppTask_10ms_8ms_Task_M4);
	vPrjSch_M4_Task[PRJSCH_TASK_4_M4] = SchMain_CfgTask(PRJSCH_TASK_4_M4_PERIOD, PRJSCH_TASK_4_M4_OFSSET, AppTask_100ms_1ms_Task_M4);
	vPrjSch_M4_Task[PRJSCH_TASK_5_M4] = SchMain_CfgTask(PRJSCH_TASK_5_M4_PERIOD, PRJSCH_TASK_5_M4_OFSSET, AppTask_100ms_25ms_Task_M4);
	vPrjSch_M4_Task[PRJSCH_TASK_6_M4] = SchMain_CfgTask(PRJSCH_TASK_6_M4_PERIOD, PRJSCH_TASK_6_M4_OFSSET, AppTask_100ms_75ms_Task_M4);
	vPrjSch_M4_Task[PRJSCH_TASK_7_M4] = SchMain_CfgTask(PRJSCH_TASK_7_M4_PERIOD, PRJSCH_TASK_7_M4_OFSSET, AppTask_1sec_Task_M4);
}

void PrjSch_Main(void){
	uint8_t i;
	uint32_t time_us;

	for(i = 0U;i < PRJSCH_TASK_M4_NUM;i++){
		if(vPrjSch_M4_Task[i].activation == 1U){
			time_us = SchMain_GetTime_us(SCHMAIN_CORE_M4);
			vPrjSch_M4_Task[i].func_ptr();
			vPrjSch_M4_Task[i].activation = 0U;

			vPrjSch_M4_Task[i].exe_time_us = (uint16_t)(SchMain_GetTime_us(SCHMAIN_CORE_M4) - time_us);
			vPrjSch_M4_ExeTime_us += vPrjSch_M4_Task[i].exe_time_us;

			break;
		}
	}
}

void PrjSch_TimerManager(void){
	SchMain_TimerManger(vPrjSch_M4_Task, PRJSCH_TASK_M4_NUM);
}
