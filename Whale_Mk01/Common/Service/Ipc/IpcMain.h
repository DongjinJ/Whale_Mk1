#ifndef SERVICE_IPC_IPCMAIN_H_
#define SERVICE_IPC_IPCMAIN_H_

#include "stm32h7xx_hal.h"

typedef struct{
	uint8_t id;
	uint8_t rx_new;
	union{
		uint32_t word;
		uint8_t byte[4];
	}data;
}typIpcMsg;

#define IPC_DATA __attribute__ ((section(".shared_bss")))

extern uint32_t IpcMain_Get_IpcMsg(uint8_t msg_num);
extern void IpcMain_Set_IpcMsg(uint8_t msg_num, uint32_t data);
#endif
