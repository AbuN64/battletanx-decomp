#include "include_asm.h"
#include "shared/bt_span_1000_code_8008B1F0.h"

INCLUDE_ASM("span_1000", func_800ECC1C);
INCLUDE_ASM("span_1000", func_800ECD30);
INCLUDE_ASM("span_1000", func_800ECE4C);
INCLUDE_ASM("span_1000", func_800ED358);
INCLUDE_ASM("span_1000", func_800ED380);
INCLUDE_ASM("span_1000", func_800ED5C8);
#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_span_1000_code_800EC380.h"
#include "shared/bt_types.h"














#include "span_1000/code_800EC410.h"


             /* extern */
   /* extern */





/* extern */

void func_800ED810(EffectKind10 *arg0, s32 arg1, u32 arg2, s32 arg3, PositionReport *arg4) {
    switch (arg2) {                                 /* irregular */
    case 0:
        func_800ECE4C(arg0, arg1, arg3, arg4);
        return;
    case 2:
        if (arg0->hidden == 0) {
            arg4->valid = 1;
            arg4->x = arg0->position.x;
            arg4->z = arg0->position.z;
            return;
        }
        return;
    case 3:
        func_800ED380(arg0, 0, arg3, 0);
        return;
    case 7:
        func_800ED5C8(arg0, arg1, arg3);
        break;
    }
}

INCLUDE_ASM("span_1000", func_800ED8BC);
INCLUDE_ASM("span_1000", func_800ED8C0);
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8008B1F0.h"







static inline s32 script_has_step(EffectScriptStep *script, s32 step) {
    EffectScriptStep *entry = &script[step];

    return entry->handler != 0;
}

void func_800ED994(ScriptedEffect *effect, s32 *status) {
    EffectScriptStep *script = D_80138F3C[effect->script];
    s32 step;
    s32 next;
    u32 now;
    EffectScriptStep *cur;

    now = (u32)func_8007B268() >> 16;
    step = effect->step;
    effect->now = now;
    effect->elapsed = now - effect->startTime;
    if (script_has_step(script, step)) {
        do {
            cur = &script[(u8)step];
            if (cur->handler(effect, cur->a, cur->b) == 0) {
                break;
            }
            next = effect->step + 1;
            effect->step = next;
            step = next;
        } while (script_has_step(script, (u8)next));
        if (script_has_step(script, effect->step)) {
            return;
        }
    }
    *status = 2;
}

#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800EDA98(Obj80137A3C *arg0, u32 arg1) {
    return (u16) arg0->unk12 >= (u32) (arg1 >> 0x10);
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


s32 func_800EDAAC(s32 arg0, s32 arg1) {
    func_80079AB4(func_800796F0(arg1, 0), 0x64);
    return 1;
}

INCLUDE_ASM("span_1000", func_800EDADC);
