#ifndef _ALIENFX_H_
#define _ALIENFX_H_
#include <windows.h>

#define ALIENFX_USER_CONTROLS 0x01
#define ALIENFX_SLEEP_LIGHTS 0x02
#define ALIENFX_ALL_OFF 0x03
#define ALIENFX_ALL_ON 0x04

#define ALIENFX_MORPH 0x01
#define ALIENFX_BLINK 0x02
#define ALIENFX_STAY 0x03
#define ALIENFX_BATTERY_STATE 0x0F

#define ALIENFX_TOUCHPAD        0x000001
#define ALIENFX_LIGHTPIPE       0x000020
#define ALIENFX_ALIENWARE_LOGO  0x000080
#define ALIENFX_ALIENHEAD       0x000100
#define ALIENFX_POWER_BUTTON    0x008000
#define ALIENFX_TOUCH_PANEL     0x010000

#define ALIENFX_DEVICE_RESET 0x06
#define ALIENFX_READY 0x10
#define ALIENFX_BUSY 0x11
#define ALIENFX_UNKOWN_COMMAND 0x12

bool AlienfxInit();
void AlienfxDeinit();

void AlienfxReset(byte pOptions);
void AlienfxSetColor(byte pAction, byte pSetId, int pLeds, int pColor);
void AlienfxEndLoopBlock();
void AlienfxEndTransmitionAndExecute();
void AlienfxStoreNextInstruction(byte pStorageId);
void AlienfxEndStorageBlock();
void AlienfxSaveStorageData();
void AlienfxSetSpeed(int pSpeed);
byte AlienfxGetDeviceStatus();
byte AlienfxWaitForReady();
byte AlienfxWaitForBusy();
bool AlienfxReinit();


#endif // _ALIENFX_H_
