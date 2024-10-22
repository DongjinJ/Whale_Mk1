/*
 * SchMain.h
 *
 *  Created on: Sep 20, 2024
 *      Author: exon9
 */

#ifndef SERVICE_SCH_SCHMAIN_H_
#define SERVICE_SCH_SCHMAIN_H_

#include "stm32h7xx_hal.h"

#define SCHMAIN_CORE_M4	(0U)
#define SCHMAIN_CORE_M7	(1U)

typedef struct{
	uint16_t tick;
	uint16_t period;
	uint16_t offset;

	uint16_t exe_time_us;

	uint8_t activation;
	void (*func_ptr)(void);
}typSchTask;


extern typSchTask SchMain_CfgTask(uint16_t period, uint16_t offset, void (*func_ptr)());
extern void SchMain_TimerManger(typSchTask *task, uint8_t task_size);
extern uint32_t SchMain_GetTime_us(uint8_t core_id);

#endif /* SERVICE_SCH_SCHMAIN_M4_H_ */
