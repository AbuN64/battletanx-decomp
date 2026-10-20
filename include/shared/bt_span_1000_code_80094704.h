#ifndef SHARED_BT_SPAN_1000_CODE_80094704_H
#define SHARED_BT_SPAN_1000_CODE_80094704_H
#include "shared/bt_types.h"
extern int func_80096760();


extern void func_800968FC(int a, int b);


/* A six-byte button binding: a controller button mask (D-pad and C buttons mirrored on use), a mode and a channel. */
typedef struct ButtonBinding {
    u16 buttons;
    u8 mode;
    u8 channel;
    u8 reserved4[2];
} ButtonBinding;
/* The resolved binding at D_802D8140: mode, channel, the held mask and what only one of the two tables holds. */
typedef struct ButtonState {
    u8 mode;
    u8 channel;
    u8 reserved2[2];
    s32 buttons;
} ButtonState;
extern ButtonState *func_80096784(int arg0);











#endif
