/*
 * AppTask_M7.c
 *
 *  Created on: Oct 16, 2024
 *      Author: exon9
 */


#include "AppTask_M7.h"


void AppTask_1ms_Task_M7(void){
	AppMon_Cal_CpuLoad_M7();
}

void AppTask_10ms_0ms_Task_M7(void){

}

void AppTask_10ms_3ms_Task_M7(void){

}

void AppTask_10ms_8ms_Task_M7(void){

}

void AppTask_100ms_1ms_Task_M7(void){

}

void AppTask_100ms_25ms_Task_M7(void){

}

void AppTask_100ms_75ms_Task_M7(void){

}

void AppTask_1sec_Task_M7(void){
	HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
	HAL_GPIO_TogglePin(TestPin_02_GPIO_Port, TestPin_02_Pin);
}
