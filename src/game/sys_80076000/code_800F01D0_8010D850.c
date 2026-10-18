#include "include_asm.h"

INCLUDE_ASM("span_1000", func_8010D850);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_8010D984(void) {
    D_auto_803C4D70 += 1;
}

void func_8010D9A0(void) {
    D_auto_803C4D70 = 0;
}

INCLUDE_ASM("span_1000", func_8010D9B0);
INCLUDE_ASM("span_1000", func_8010DAA0);
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
void func_8010DC0C(EffectKind1D *effect, s32 *state)
{
    f32 point[3];
    if (effect->startTick == 0) {
        point[0] = effect->center.x;
        point[1] = 0.0f;
        point[2] = effect->center.z;
        func_800ED8C0(point, 13);
        if (effect->motion != 0) {
            func_80107170(effect->motion);
        }
        func_80085B4C(5, effect->center.x, effect->center.z);
        effect->startTick = D_auto_801B4AA8;
    } else if (effect->startTick + 8 < D_auto_801B4AA8) {
        func_8009F958(effect, &effect->center, 108.0f, 20.0f, (u8)effect->owner);
        *state = 2;
    }
}

#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_types.h"




















#include "span_1000/code_8008F4EC.h"


                 /* extern */









/* Checks the pending action and updates its result fields when the timer allows it. */
void func_8010DCD0(func_8010DCD0_S1_Shared8010DCD0 *arg0, func_8010DCD0_S2_Shared8010DCD0 *arg1, s32 arg2, func_8010DCD0_S3_Shared8010DCD0 *arg3) {
    s32 action;
    s32 result;

    if (arg0->unk1C == 0) {
        action = arg1->unk8;
        switch (action) {
        case 0:
            if ((arg0->unk18 + 0x3C) < D_auto_801B4AA8) {
                func_8008B89C(arg0);
                arg3->unk0 = 8;
                arg3->unk4 = 0x1E;
                arg3->unk8 = arg0->unk24;
                return;
            }
            result = 1;
            break;
        case 29:
            func_8008B89C(arg0);
            return;
        default:
            result = 1;
            break;
        }
        arg3->unk0 = result;
    }
}

INCLUDE_ASM("span_1000", func_8010DD78);
#include "span_1000/code_8008F4EC.h"

void func_8010DD94(void) {
    func_8008B89C();
}

#include "span_1000/code_8008F4EC.h"
void func_8010DDB4(void) {
    func_8008B89C();
}

INCLUDE_ASM("span_1000", func_8010DDD4);
INCLUDE_ASM("span_1000", func_8010DED4);
