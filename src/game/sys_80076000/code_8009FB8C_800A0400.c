#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800A0400);
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
void func_800A04F0(Obj80137A3C *arg0, s32 *arg1) {
    s32 temp_a0;

    temp_a0 = arg0->unk20;
    if (temp_a0 != 0) {
        func_80107170(temp_a0);
    }
    *arg1 = 2;
}

s32 func_800A052C(ShotEffect *object)
{
    switch (object->kind) {
    case 0:
        return D_auto_802D5A5A;
    case 2:
        return D_auto_802D5A8E;
    case 1:
        if (object->alternate) {
            return D_auto_802D5AC0;
        }
        return D_auto_802D5A76;
    }
    return 0;
}

INCLUDE_ASM("span_1000", func_800A05A0);
INCLUDE_ASM("span_1000", func_800A06F8);
INCLUDE_ASM("span_1000", func_800A0908);
INCLUDE_ASM("span_1000", func_800A0930);
INCLUDE_ASM("span_1000", func_800A0AD4);
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"
void func_800A0B8C(ShotEffect *effect, s32 arg1, u32 message, s32 arg3, PositionReport *report)
{
    s32 sound;

    switch (message) {
    case 0:
        func_800A06F8(effect, arg1, arg3, report);
        break;
    case 2:
        if (effect->alternate == 0) {
            report->valid = 1;
            report->x = effect->position[0];
            report->z = effect->position[2];
        }
        break;
    case 3:
        func_800A0930(effect, 0, arg3, 0);
        break;
    case 4:
        switch (effect->kind) {
        case 0:
            sound = D_auto_802D5A5A;
            break;
        case 2:
            sound = D_auto_802D5A8E;
            break;
        case 1:
            if (effect->alternate != 0) {
                sound = D_auto_802D5AC0;
            } else {
                sound = D_auto_802D5A76;
            }
            break;
        default:
            sound = 0;
            break;
        }
        func_800905D8(sound, effect->position, 0, effect->volume, 0, effect->soundClass, 0);
        func_8008B89C(effect);
        break;
    }
}

INCLUDE_DATA("span_1000", D_800A0CD4);
