
#include "AppFunc.h"

static typAppFuncCount vAppFunc_AlliveCount;

void AppFunc_1ms(void){
	vAppFunc_AlliveCount.vAppFunc_1ms++;
}

void AppFunc_10ms_ComRx(void){
	vAppFunc_AlliveCount.vAppFunc_10ms_ComRx++;
}

void AppFunc_10ms_Task00(void){
	vAppFunc_AlliveCount.vAppFunc_10ms_Task00++;
}

void AppFunc_10ms_Task01(void){
	vAppFunc_AlliveCount.vAppFunc_10ms_Task01++;
}

void AppFunc_10ms_Task02(void){
	vAppFunc_AlliveCount.vAppFunc_10ms_Task02++;
}

void AppFunc_10ms_ComTx(void){
	vAppFunc_AlliveCount.vAppFunc_10ms_ComTx++;
}

void AppFunc_100ms_Task00(void){
	vAppFunc_AlliveCount.vAppFunc_100ms_Task00++;
}

void AppFunc_100ms_Task01(void){
	vAppFunc_AlliveCount.vAppFunc_100ms_Task01++;
}

void AppFunc_100ms_Task02(void){
	vAppFunc_AlliveCount.vAppFunc_100ms_Task02++;
}

void AppFunc_1sec_Task(void){
	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
	vAppFunc_AlliveCount.vAppFunc_1sec_Task++;
}
