/*
 * AppTask_M7.c
 *
 *  Created on: Oct 16, 2024
 *      Author: exon9
 */


#include "AppTask_M4.h"


void AppTask_1ms_Task_M4(void){
	AppMon_Cal_CpuLoad_M4();
}

void AppTask_10ms_0ms_Task_M4(void){

}

void AppTask_10ms_3ms_Task_M4(void){

}

void AppTask_10ms_8ms_Task_M4(void){

}

void AppTask_100ms_1ms_Task_M4(void){

}

void AppTask_100ms_25ms_Task_M4(void){

}

void AppTask_100ms_75ms_Task_M4(void){

}

void AppTask_1sec_Task_M4(void){
	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
	HAL_GPIO_TogglePin(TestPin_01_GPIO_Port, TestPin_01_Pin);
}
