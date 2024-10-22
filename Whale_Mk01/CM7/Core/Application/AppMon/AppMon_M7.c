/*
 * AppMon.c
 *
 *  Created on: Oct 18, 2024
 *      Author: exon9
 */


#include "AppMon_M7.h"

static uint16_t vAppMon_CpuLoad_M7;

void AppMon_Cal_CpuLoad_M7(void){
	vAppMon_CpuLoad_M7 = (uint16_t)(PrjSch_Get_TotalExeTime_us() / 100U);		 // Tenths Place Value [Unit: 0.1]
}
