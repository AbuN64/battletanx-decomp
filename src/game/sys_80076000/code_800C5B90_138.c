#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"





EffectKind0A *func_800DD970(f32 *pos, s32 arg)
{
    EffectKind0A *effect;

    if (func_800EC644() != 0) {
        return 0;
    }
    effect = func_8008AD10(1, 0xA, 0x20);
    if (effect == 0) {
        return 0;
    }
    effect->value0C = 0;
    effect->value14 = pos[1];
    effect->value10 = pos[0];
    effect->value1C = arg;
    effect->value18 = D_auto_8007438C;
    return effect;
}

