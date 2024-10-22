/*
 * PrjSch_M7.h
 *
 *  Created on: Oct 16, 2024
 *      Author: exon9
 */

#ifndef PRJCFG_M7_PRJSCH_M7_H_
#define PRJCFG_M7_PRJSCH_M7_H_

#include "../../../Common/Service/Sch/SchMain.h"
#include "../Application/AppTask_M7.h"

#define PRJSCH_TASK_M7_NUM			(8U)

#define PRJSCH_TASK_0_M7			(0U)
#define PRJSCH_TASK_0_M7_PERIOD		(1U)
#define PRJSCH_TASK_0_M7_OFSSET		(0U)

#define PRJSCH_TASK_1_M7			(1U)
#define PRJSCH_TASK_1_M7_PERIOD		(10U)
#define PRJSCH_TASK_1_M7_OFSSET		(0U)

#define PRJSCH_TASK_2_M7			(2U)
#define PRJSCH_TASK_2_M7_PERIOD		(10U)
#define PRJSCH_TASK_2_M7_OFSSET		(3U)

#define PRJSCH_TASK_3_M7			(3U)
#define PRJSCH_TASK_3_M7_PERIOD		(10U)
#define PRJSCH_TASK_3_M7_OFSSET		(8U)

#define PRJSCH_TASK_4_M7			(4U)
#define PRJSCH_TASK_4_M7_PERIOD		(100U)
#define PRJSCH_TASK_4_M7_OFSSET		(1U)

#define PRJSCH_TASK_5_M7			(5U)
#define PRJSCH_TASK_5_M7_PERIOD		(100U)
#define PRJSCH_TASK_5_M7_OFSSET		(25U)

#define PRJSCH_TASK_6_M7			(6U)
#define PRJSCH_TASK_6_M7_PERIOD		(100U)
#define PRJSCH_TASK_6_M7_OFSSET		(75U)

#define PRJSCH_TASK_7_M7			(7U)
#define PRJSCH_TASK_7_M7_PERIOD		(1000U)
#define PRJSCH_TASK_7_M7_OFSSET		(2U)

extern uint32_t PrjSch_Get_TotalExeTime_us(void);
extern void PrjSch_Init(void);
extern void PrjSch_Main(void);
extern void PrjSch_TimerManager(void);

#endif /* PRJCFG_M7_PRJSCH_M7_H_ */
