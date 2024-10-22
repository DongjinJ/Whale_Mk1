/*
 * AppMon.c
 *
 *  Created on: Oct 18, 2024
 *      Author: exon9
 */


#include "AppMon_M4.h"

static uint16_t vAppMon_CpuLoad_M4;

void AppMon_Cal_CpuLoad_M4(void){
	vAppMon_CpuLoad_M4 = (uint16_t)(PrjSch_Get_TotalExeTime_us() / 100U);			// Tenths Place Value [Unit: 0.1]
}

uint16_t AppMon_Get_CpuLoad_M4(void){
	uint16_t cpuload;

	cpuload = vAppMon_CpuLoad_M4;
	return cpuload;
}
