
#include "IpcMain.h"


static IPC_DATA typIpcMsg vIpcMain_Message;

uint32_t IpcMain_Get_IpcMsg(uint8_t msg_num){
	uint32_t return_data;

	return_data = vIpcMain_Message.data.word;

	return return_data;
}

void IpcMain_Set_IpcMsg(uint8_t msg_num, uint32_t data){
	vIpcMain_Message.data.word = data;
}
