#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800EF2D0);
INCLUDE_ASM("span_1000", func_800EF380);
INCLUDE_ASM("span_1000", func_800EF440);
INCLUDE_ASM("span_1000", func_800EF984);
INCLUDE_ASM("span_1000", func_800EFAD8);
#include <ultra64.h>
#include "game/sys_80076000.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800EFCA8(Unknown800EFCA8 *effect, s32 arg1, s32 arg2, Unknown800EFCA8_1 *report)
{
    if (effect->value18 == 0) {
        report->value00 = 1;
        report->value08 = effect->value10;
        report->value04 = effect->value0C;
    }
}
#include "span_1000/code_8008F4EC.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_span_1000_code_8008011C.h"

void func_800EFCD0(Unknown800EFCD0 *effect, s32 arg1, Unknown800EFCD0_3 *pos) {
    Unknown800EFCD0_2 *session;
    f32 dz;
    f32 dx;

    if (effect->value18 != 0) {
        return;
    }
    session = func_800821C0();
    func_8008B89C(effect);
    effect->value18 = 1;
    dz = pos->value04 - effect->value10;
    dx = pos->value00 - effect->value0C;
    if ((dz != 0.0f) | (dx != 0.0f)) {
        if (-dz < 0.0f) {
            effect->value16 = -func_800F3BE4(-dx / sqrtf(dz * dz + dx * dx));
        } else {
            effect->value16 = func_800F3BE4(-dx / sqrtf(dz * dz + dx * dx));
        }
    } else {
        effect->value16 = 0;
    }
    session->value568[effect->value20].value00 &= 0xF;
    if (effect->value1C >= 0) {
        func_80107170(effect->value1C);
        effect->value1C = -1;
    }
}
INCLUDE_ASM("span_1000", func_800EFE4C);
INCLUDE_ASM("span_1000", func_800EFFC8);
