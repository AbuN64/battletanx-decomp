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

    func_80111510(D_auto_802DF5B0, D_auto_802DF5C8, 1);
    func_80111510(D_auto_802DF5D0, D_auto_802DF5E8, 2);
    func_80111540(D_auto_802DF5F0, 5, func_800A8C88, 0, &D_auto_802E17A0, 0x10);
    func_8011D1A0(D_auto_802DF5F0);
    func_80111510(D_auto_802DF360, D_auto_802DF380, 4);
    func_8011BA10(5, D_auto_802DF360, 1);
    if (D_auto_8000030C != 0) {
        while (func_801120A0() < 0x2000000) {
        }
    }
    func_80110FE0(D_auto_802DF360, &pattern, D_auto_802DF390);
    func_80110C00(D_auto_802E17B8, 0x18);
    func_80110C00(D_auto_802E17D8, 0x18);
    for (i = 0; i < 4; i++) {
        D_auto_802DF540[i] = -1;
        D_auto_802DF560[i] = 1;
        D_auto_802DF570[i] = 0;
        D_auto_802DF550[i] = -1;
        D_auto_802E17A8[i] = -1;
    }
    D_auto_80126714 = 0;
    for (i = 0; i < 4; i++) {
        if (((pattern >> i) & 1) && !(D_auto_802DF390[i].errnum & 8) && (D_auto_802DF390[i].type & 4)
            && (D_auto_802DF390[i].type & 1)) {
            D_auto_802E17A8[D_auto_80126714] = i;
            if (D_auto_802DF390[i].status & 1) {
                result = func_80116C70(D_auto_802DF360, &D_auto_802DF3A0[i], i);
                if (result == 10) {
                    if (func_80113C40(D_auto_802DF360, &D_auto_802DF3A0[i], i) == 0) {
                        D_auto_802DF540[D_auto_80126714] = i;
                    } else {
                        D_auto_802DF550[D_auto_80126714] = i;
                    }
                } else if (result != 11) {
                    D_auto_802DF550[D_auto_80126714] = i;
                }
            }
            D_auto_80126714++;
        }
    }
    while (func_80119240(D_auto_802DF360, 0, 0) == 0) {
    }
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
    return D_auto_80126714;
}

INCLUDE_ASM("span_1000", func_800A8C88);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
void func_800A8E9C(void)
{
    s32 message = 0;
    func_801193E0(D_auto_802DF5D0, &message, 0);
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800A8ECC(void) {
    D_auto_802E17D0 = 1;
}

INCLUDE_ASM("span_1000", func_800A8EE0);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A8940.h"
void func_800A8EF8(s32 slot, s32 value, s32 param, s32 period)
{
    s32 mappedSlot;
    mappedSlot = D_auto_802DF540[slot];
    if (mappedSlot >= 0 && func_800EC644() == 0) {
        D_auto_802DF580[mappedSlot] = (param = (param != 0) ? param : 1);
        D_auto_802DF590[mappedSlot] = -((period > 0) ? period : 1);
        D_auto_802DF5A0[mappedSlot] = -1;
        D_auto_802DF570[mappedSlot] = value;
    }
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_80077930.h"
#include "game/sys_801121E0.h"


void func_800A8FB8(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_auto_802DF540[arg0];
    if ((temp_s0 >= 0) && (func_800EC644() == 0)) {
        D_auto_802DF570[temp_s0] = 1;
    }
}

void func_800A9010(void) {
    s32 i;

    func_80119240(D_auto_802DF5B0, &D_auto_802E17A0, 1);
    for (i = 0; i < 4; i++) {
        if (D_auto_802DF540[i] != -1) {
            D_auto_802DF570[i] = 0;
            func_80113C40(D_auto_802DF360, &D_auto_802DF3A0[i], i);
            func_801137F0(&D_auto_802DF3A0[i]);
        }
    }
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
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

    func_80119240(D_auto_802DF5B0, &D_auto_802E17A0, 1);
    while (func_80119240(D_auto_802DF360, 0, 0) == 0) {
    }
    func_80110CA0(D_auto_802DF360);
    func_80119240(D_auto_802DF360, 0, 1);
    func_80110D24(D_auto_802DF390);
    for (i = 0; i < 4; i++) {
        D_auto_802DF540[i] = -1;
        D_auto_802DF550[i] = -1;
        D_auto_802E17A8[i] = -1;
    }
    D_auto_80126714 = 0;
    for (i = 0; i < 4; i++) {
        if (!(D_auto_802DF390[i].errnum & 8) && (D_auto_802DF390[i].type & 4) && (D_auto_802DF390[i].type & 1)) {
            D_auto_802E17A8[D_auto_80126714] = i;
            if (D_auto_802DF390[i].status & 1) {
                result = func_80116C70(D_auto_802DF360, &D_auto_802DF3A0[i], i);
                if (result == 2) {
                    D_auto_80126710 = result;
                }
                if (result == 10) {
                    if (func_80113C40(D_auto_802DF360, &D_auto_802DF3A0[i], i) == 0) {
                        D_auto_802DF540[D_auto_80126714] = i;
                    } else {
                        D_auto_802DF550[D_auto_80126714] = i;
                    }
                } else if (result != 11) {
                    D_auto_802DF550[D_auto_80126714] = i;
                }
            }
            D_auto_80126714++;
        }
    }
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
    return D_auto_80126714;
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
s32 func_800A933C(void)
{
    s32 stillPresent;
    s32 i;
    func_800A90E0();
    stillPresent = 1;
    for (i = 0; i < D_auto_80134E58; i++) {
        if (D_auto_802DF560[i] != 0 && D_auto_802DF540[i] == -1) {
            stillPresent = 0;
            break;
        }
        D_auto_802DF560[i] = D_auto_802DF540[i] != -1;
    }
    return stillPresent;
}
void func_800A93C8(void)
{
    s32 i;
    func_800A90E0();
    for (i = 0; i < D_auto_80134E58; i++) {
        D_auto_802DF560[i] = D_auto_802DF540[i] != -1;
    }
}

#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
extern s32 D_auto_80126714;
extern s32 D_auto_802DF550;

s32 func_800A942C(void) {
    s32 *var_v1;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;

    var_a0 = 0;
    var_a1 = 0;
    if (D_auto_80126714 > 0) {
        var_v1 = &D_auto_802DF550;
loop_2:
        temp_v0 = *var_v1;
        if (temp_v0 == -1) {
            var_a0 += 1;
            var_v1 += 4;
            if (var_a0 < D_auto_80126714) {
                goto loop_2;
            }
        } else {
            var_a1 = temp_v0 + 1;
        }
    }
    return var_a1;
}
#else
INCLUDE_ASM("span_1000", func_800A942C);
#endif
#include "game/sys_80076000.h"
#include "game/sys_801121E0.h"
#include "span_1000/code_80077930.h"

s32 func_800A9484(s32 channel)
{
    s32 status;

    func_80119240(D_auto_802DF5B0, &D_auto_802E17A0, 1);
    channel--;
    status = func_80116C70(D_auto_802DF360, &D_auto_802DF3A0[channel], channel);
    if (status == 10 && func_80113C40(D_auto_802DF360, &D_auto_802DF3A0[channel], channel) == 0) {
        status = 1;
    }
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
    if (status == 2) {
        D_auto_80126710 = status;
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

    func_80119240(D_auto_802DF5B0, &D_auto_802E17A0, 1);
    channel--;
    status = func_801181B0(&D_auto_802DF3A0[channel]);
    func_801193E0(D_auto_802DF5B0, &D_auto_802E17A0, 0);
    return status;
}

#ifdef NON_MATCHING
#include "shared/bt_types.h"
int func_800A9B44(s32 arg0) {
    s32 var_a1;
    u8 *var_v1;
    u8 temp_v0;

    var_a1 = 0;
    var_v1 = arg0 + 4;
    do {
        temp_v0 = *var_v1;
        var_v1 += 1;
        var_a1 += temp_v0;
    } while ((s32) var_v1 < (arg0 + 0x100));
    return var_a1;
}
#else
INCLUDE_ASM("span_1000", func_800A9B44);
#endif
INCLUDE_DATA("span_1000", D_800A9C14);
