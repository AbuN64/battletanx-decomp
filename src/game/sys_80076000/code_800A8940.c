#include "include_asm.h"

#include "shared/bt_span_1000_code_800A8940.h"
#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
#include "shared/bt_menu_render.h"
#include "span_1000/code_80077930.h"
#include "span_1000/code_80094704.h"




s32 func_800A8940(void) {
    u8 pattern;
    s32 i;
    s32 result;

    osCreateMesgQueue(D_802DF5B0, D_802DF5C8, 1);
    osCreateMesgQueue(D_802DF5D0, D_802DF5E8, 2);
    osCreateThread(D_802DF5F0, 5, func_800A8C88, 0, &D_802E17A0, 0x10);
    osStartThread(D_802DF5F0);
    osCreateMesgQueue(D_802DF360, D_802DF380, 4);
    osSetEventMesg(5, D_802DF360, 1);
    if (D_8000030C != 0) {
        while (osGetTime() < 0x2000000) {
        }
    }
    osContInit(D_802DF360, &pattern, D_802DF390);
    bzero(D_802E17B8, 0x18);
    bzero(D_802E17D8, 0x18);
    for (i = 0; i < 4; i++) {
        D_802DF540[i] = -1;
        D_802DF560[i] = 1;
        D_802DF570[i] = 0;
        D_802DF550[i] = -1;
        D_802E17A8[i] = -1;
    }
    D_80126714 = 0;
    for (i = 0; i < 4; i++) {
        if (((pattern >> i) & 1) && !(D_802DF390[i].errnum & 8) && (D_802DF390[i].type & 4)
            && (D_802DF390[i].type & 1)) {
            D_802E17A8[D_80126714] = i;
            if (D_802DF390[i].status & 1) {
                result = func_80116C70(D_802DF360, &D_802DF3A0[i], i);
                if (result == 10) {
                    if (func_80113C40(D_802DF360, &D_802DF3A0[i], i) == 0) {
                        D_802DF540[D_80126714] = i;
                    } else {
                        D_802DF550[D_80126714] = i;
                    }
                } else if (result != 11) {
                    D_802DF550[D_80126714] = i;
                }
            }
            D_80126714++;
        }
    }
    while (osRecvMesg(D_802DF360, 0, 0) == 0) {
    }
    osSendMesg(D_802DF5B0, &D_802E17A0, 0);
    return D_80126714;
}

INCLUDE_ASM("span_1000", func_800A8C88);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
void func_800A8E9C(void)
{
    s32 message = 0;
    osSendMesg(D_802DF5D0, &message, 0);
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800A8ECC(void) {
    D_802E17D0 = 1;
}

INCLUDE_ASM("span_1000", func_800A8EE0);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A8940.h"
void func_800A8EF8(s32 slot, s32 value, s32 param, s32 period)
{
    s32 mappedSlot;
    mappedSlot = D_802DF540[slot];
    if (mappedSlot >= 0 && func_800EC644() == 0) {
        D_802DF580[mappedSlot] = (param = (param != 0) ? param : 1);
        D_802DF590[mappedSlot] = -((period > 0) ? period : 1);
        D_802DF5A0[mappedSlot] = -1;
        D_802DF570[mappedSlot] = value;
    }
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_80077930.h"
#include "game/sys_801121E0.h"


void func_800A8FB8(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_802DF540[arg0];
    if ((temp_s0 >= 0) && (func_800EC644() == 0)) {
        D_802DF570[temp_s0] = 1;
    }
}

void func_800A9010(void) {
    s32 i;

    osRecvMesg(D_802DF5B0, &D_802E17A0, 1);
    for (i = 0; i < 4; i++) {
        if (D_802DF540[i] != -1) {
            D_802DF570[i] = 0;
            func_80113C40(D_802DF360, &D_802DF3A0[i], i);
            func_801137F0(&D_802DF3A0[i]);
        }
    }
    osSendMesg(D_802DF5B0, &D_802E17A0, 0);
}

#include "shared/bt_span_1000_code_800A8940.h"
#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
#include "span_1000/code_80077930.h"
#include "span_1000/code_80094704.h"




s32 func_800A90E0(void)
{
    s32 i;
    s32 result;

    osRecvMesg(D_802DF5B0, &D_802E17A0, 1);
    while (osRecvMesg(D_802DF360, 0, 0) == 0) {
    }
    osContStartQuery(D_802DF360);
    osRecvMesg(D_802DF360, 0, 1);
    osContGetQuery(D_802DF390);
    for (i = 0; i < 4; i++) {
        D_802DF540[i] = -1;
        D_802DF550[i] = -1;
        D_802E17A8[i] = -1;
    }
    D_80126714 = 0;
    for (i = 0; i < 4; i++) {
        if (!(D_802DF390[i].errnum & 8) && (D_802DF390[i].type & 4) && (D_802DF390[i].type & 1)) {
            D_802E17A8[D_80126714] = i;
            if (D_802DF390[i].status & 1) {
                result = func_80116C70(D_802DF360, &D_802DF3A0[i], i);
                if (result == 2) {
                    D_80126710 = result;
                }
                if (result == 10) {
                    if (func_80113C40(D_802DF360, &D_802DF3A0[i], i) == 0) {
                        D_802DF540[D_80126714] = i;
                    } else {
                        D_802DF550[D_80126714] = i;
                    }
                } else if (result != 11) {
                    D_802DF550[D_80126714] = i;
                }
            }
            D_80126714++;
        }
    }
    osSendMesg(D_802DF5B0, &D_802E17A0, 0);
    return D_80126714;
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
s32 func_800A933C(void)
{
    s32 stillPresent;
    s32 i;
    func_800A90E0();
    stillPresent = 1;
    for (i = 0; i < D_80134E58; i++) {
        if (D_802DF560[i] != 0 && D_802DF540[i] == -1) {
            stillPresent = 0;
            break;
        }
        D_802DF560[i] = D_802DF540[i] != -1;
    }
    return stillPresent;
}
void func_800A93C8(void)
{
    s32 i;
    func_800A90E0();
    for (i = 0; i < D_80134E58; i++) {
        D_802DF560[i] = D_802DF540[i] != -1;
    }
}

INCLUDE_ASM("span_1000", func_800A942C);
#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
#include "span_1000/code_80077930.h"

s32 func_800A9484(s32 channel)
{
    s32 status;

    osRecvMesg(D_802DF5B0, &D_802E17A0, 1);
    channel--;
    status = func_80116C70(D_802DF360, &D_802DF3A0[channel], channel);
    if (status == 10 && func_80113C40(D_802DF360, &D_802DF3A0[channel], channel) == 0) {
        status = 1;
    }
    osSendMesg(D_802DF5B0, &D_802E17A0, 0);
    if (status == 2) {
        D_80126710 = status;
    }
    return status;
}

INCLUDE_ASM("span_1000", func_800A9564);
INCLUDE_ASM("span_1000", func_800A95C0);
INCLUDE_ASM("span_1000", func_800A96CC);
INCLUDE_ASM("span_1000", func_800A979C);
INCLUDE_ASM("span_1000", func_800A9850);
INCLUDE_ASM("span_1000", func_800A9920);
#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
#include "span_1000/code_80077930.h"

s32 func_800A9AB0(s32 channel)
{
    s32 status;

    osRecvMesg(D_802DF5B0, &D_802E17A0, 1);
    channel--;
    status = func_801181B0(&D_802DF3A0[channel]);
    osSendMesg(D_802DF5B0, &D_802E17A0, 0);
    return status;
}

INCLUDE_ASM("span_1000", func_800A9B44);
INCLUDE_ASM("span_1000", func_800A9B70);
INCLUDE_DATA("span_1000", D_800A9C14);
