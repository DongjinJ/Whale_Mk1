#ifndef __SCHTASK_H
#define __SCHTASK_H

#include "../../../Inc/Whale_Type.h"

#include "../AppFunc/AppFunc.h"

#define SCHTASK_NUM			(10U)

#define SCHTASK_ID_00		(0U)
#define SCHTASK_ID_01		(1U)
#define SCHTASK_ID_02		(2U)
#define SCHTASK_ID_03		(3U)
#define SCHTASK_ID_04		(4U)
#define SCHTASK_ID_05		(5U)
#define SCHTASK_ID_06		(6U)
#define SCHTASK_ID_07		(7U)
#define SCHTASK_ID_08		(8U)
#define SCHTASK_ID_09		(9U)

typedef struct{
	uint16_t period_ms;
	uint16_t offset_ms;
	uint16_t curtick_ms;

	void (*func_ptr)(void);
	bool activation;
}typSchTask;

extern void SchTask_Init(void);
extern void SchTask_TimeManager(void);
extern void SchTask_Background(void);

#endif
