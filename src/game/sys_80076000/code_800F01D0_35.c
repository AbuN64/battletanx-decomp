#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"





s32 func_800F15A0(f32 *pos, s16 value18, s8 value1A, s16 value1C, s32 value20, s32 value24,
                         s32 value28, s32 value2C)
{
    EffectKind0D *effect;

    effect = func_8008AD10(1, 0xD, sizeof(EffectKind0D));
    if (effect == 0) {
        return -1;
    }
    effect->value0C = pos[0];
    effect->value10 = pos[1];
    effect->value14 = pos[2];
    effect->value18 = value18;
    effect->value1A = value1A;
    effect->value1C = value1C;
    effect->value20 = value20;
    effect->value24 = value24;
    effect->value28 = value28;
    effect->value2C = value2C;
    return 1;
}

