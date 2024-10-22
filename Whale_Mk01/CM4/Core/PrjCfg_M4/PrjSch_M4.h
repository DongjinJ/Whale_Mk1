/*
 * PrjSch.h
 *
 *  Created on: Oct 15, 2024
 *      Author: exon9
 */

#ifndef PRJCFG_M4_PRJSCH_M4_H_
#define PRJCFG_M4_PRJSCH_M4_H_

#include "../../../Common/Service/Sch/SchMain.h"
#include "../Application/AppTask_M4.h"

#define PRJSCH_TASK_M4_NUM			(8U)

#define PRJSCH_TASK_0_M4			(0U)
#define PRJSCH_TASK_0_M4_PERIOD		(1U)
#define PRJSCH_TASK_0_M4_OFSSET		(0U)

#define PRJSCH_TASK_1_M4			(1U)
#define PRJSCH_TASK_1_M4_PERIOD		(10U)
#define PRJSCH_TASK_1_M4_OFSSET		(0U)

#define PRJSCH_TASK_2_M4			(2U)
#define PRJSCH_TASK_2_M4_PERIOD		(10U)
#define PRJSCH_TASK_2_M4_OFSSET		(3U)

#define PRJSCH_TASK_3_M4			(3U)
#define PRJSCH_TASK_3_M4_PERIOD		(10U)
#define PRJSCH_TASK_3_M4_OFSSET		(8U)

#define PRJSCH_TASK_4_M4			(4U)
#define PRJSCH_TASK_4_M4_PERIOD		(100U)
#define PRJSCH_TASK_4_M4_OFSSET		(1U)

#define PRJSCH_TASK_5_M4			(5U)
#define PRJSCH_TASK_5_M4_PERIOD		(100U)
#define PRJSCH_TASK_5_M4_OFSSET		(25U)

#define PRJSCH_TASK_6_M4			(6U)
#define PRJSCH_TASK_6_M4_PERIOD		(100U)
#define PRJSCH_TASK_6_M4_OFSSET		(75U)

#define PRJSCH_TASK_7_M4			(7U)
#define PRJSCH_TASK_7_M4_PERIOD		(1000U)
#define PRJSCH_TASK_7_M4_OFSSET		(2U)

extern uint32_t PrjSch_Get_TotalExeTime_us(void);
extern void PrjSch_Init(void);
extern void PrjSch_Main(void);
extern void PrjSch_TimerManager(void);
#endif /* PRJCFG_M4_PRJSCH_M4_H_ */
