#include "include_asm.h"
#include "shared/bt_unit.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "shared/bt_span_1000_code_8008F248.h"

INCLUDE_ASM("span_1000", func_8010D850);
#include <ultra64.h>
#include "game/sys_80076000.h"


void func_8010D984(void) {
    D_803C4D70 += 1;
}

void func_8010D9A0(void) {
    D_803C4D70 = 0;
}

INCLUDE_ASM("span_1000", func_8010D9B0);
#include "span_1000/code_8008F4EC.h"
#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

s32 func_8010DAA0(Unknown80090A0C_1 *pos, s32 tag) {
    Unknown8010DAA0_1 *results[16];
    Unknown8010DAA0 box;
    s32 count;
    s32 i;
    Unknown8010DAA0_2 *effect;

    box.value02 = pos->value04;
    box.value04 = pos->value00;
    box.value06 = -10;
    box.value0A = -10;
    box.value08 = 10;
    box.value0C = 10;
    box.value0E = 14;
    box.value10 = 0;
    if (tag != -1) {
        if (func_80107A14(&box, 16, results, &count)) {
            for (i = 0; i < count; i++) {
                if ((u32)results[i] < 3) {
                    return -1;
                }
                if (results[i]->value08 != 0) {
                    return -1;
                }
            }
        }
    }
    effect = func_8008AD10(0, 0x1D, 0x28);
    if (effect == 0) {
        return -1;
    }
    effect->value10 = pos->value04;
    effect->value0C = pos->value00;
    effect->value1C = 0;
    effect->value24 = tag;
    effect->value18 = D_801B4AA8;
    effect->value14 = func_80106D18(effect, effect->value10, effect->value0C, -10, 10, -10, 10, 0x242, 0);
    return 0;
}
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
        effect->startTick = D_801B4AA8;
    } else if (effect->startTick + 8 < D_801B4AA8) {
        func_8009F958(effect, &effect->center, 108.0f, 20.0f, (u8)effect->owner);
        *state = 2;
    }
}

#include "shared/bt_span_1000_code_8010BFDC.h"




















#include "span_1000/code_8008F4EC.h"


                 /* extern */









/* Checks the pending action and updates its result fields when the timer allows it. */
void func_8010DCD0(EffectKind1D *arg0, HandlerSender *arg1, s32 arg2, EffectMessage *arg3) {
    s32 action;
    s32 result;

    if (arg0->startTick == 0) {
        action = arg1->unk8;
        switch (action) {
        case 0:
            if ((arg0->createTick + 0x3C) < D_801B4AA8) {
                func_8008B89C(arg0);
                arg3->code = 8;
                arg3->kind = 0x1E;
                arg3->owner = arg0->owner;
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
        arg3->code = result;
    }
}

#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8010DD78(Unknown8010DD78 *effect, void *unused1, void *unused2,
                                          Unknown8010DD78_1 *report)
{
    report->value00 = 1;
    report->value08 = effect->value10;
    report->value04 = effect->value0C;
}
#include "span_1000/code_8008F4EC.h"

void func_8010DD94(void) {
    func_8008B89C();
}

#include "span_1000/code_8008F4EC.h"
void func_8010DDB4(void) {
    func_8008B89C();
}

INCLUDE_ASM("span_1000", func_8010DDD4);
void func_8010DED4(Unknown80094704 *a, Unknown80094704 *b, Unknown80094704 *c, s32 param, u16 value30, u8 value32) {
    Unknown8010DED4 *e = func_8008AD10(1, 0x1E, 0x34);

    if (e != 0) {
        e->value14.value04 = a->value04;
        e->value14.value00 = a->value00;
        e->value1C.value04 = b->value04;
        e->value1C.value00 = b->value00;
        e->value24.value04 = c->value04;
        e->value24.value00 = c->value00;
        e->value2C = param;
        e->value10 = 0;
        e->value0C = 0;
        e->value30 = value30;
        e->value32 = value32;
    }
}
