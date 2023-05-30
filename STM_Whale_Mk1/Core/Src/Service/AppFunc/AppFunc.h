#ifndef __APPFUNC_H
#define __APPFUNC_H

#include "../../../Inc/Whale_Type.h"

typedef struct{
	uint16_t vAppFunc_1ms;

	uint16_t vAppFunc_10ms_ComRx;
	uint16_t vAppFunc_10ms_Task00;
	uint16_t vAppFunc_10ms_Task01;
	uint16_t vAppFunc_10ms_Task02;
	uint16_t vAppFunc_10ms_ComTx;

	uint16_t vAppFunc_100ms_Task00;
	uint16_t vAppFunc_100ms_Task01;
	uint16_t vAppFunc_100ms_Task02;

	uint16_t vAppFunc_1sec_Task;
}typAppFuncCount;

extern void AppFunc_1ms(void);

extern void AppFunc_10ms_ComRx(void);
extern void AppFunc_10ms_Task00(void);
extern void AppFunc_10ms_Task01(void);
extern void AppFunc_10ms_Task02(void);
extern void AppFunc_10ms_ComTx(void);

extern void AppFunc_100ms_Task00(void);
extern void AppFunc_100ms_Task01(void);
extern void AppFunc_100ms_Task02(void);

extern void AppFunc_1sec_Task(void);

#endif
