#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8008B1F0.h"







static inline s32 script_has_step(EffectScriptStep *script, s32 step) {
    EffectScriptStep *entry = &script[step];

    return entry->handler != 0;
}

void func_800ED994(ScriptedEffect *effect, s32 *status) {
    EffectScriptStep *script = D_auto_80138F3C[effect->script];
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

