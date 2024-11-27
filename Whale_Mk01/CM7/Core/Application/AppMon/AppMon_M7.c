/*
 * AppMon.c
 *
 *  Created on: Oct 18, 2024
 *      Author: exon9
 */


#include "AppMon_M7.h"

static uint16_t vAppMon_CpuLoad_M7;
static uint32_t vAppMon_Cnt_M7;

void AppMon_Cal_CpuLoad_M7(void){
	vAppMon_Cnt_M7++;
	vAppMon_CpuLoad_M7 = (uint16_t)(PrjSch_Get_TotalExeTime_us() / 100U);		 // Tenths Place Value [Unit: 0.1]
	IpcMain_Set_IpcMsg(0, (uint32_t)vAppMon_Cnt_M7);
}
