#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "span_1000/code_8008F4EC.h"










s32 func_8010CB60(EffectKind2DParams *params)
{
    EffectKind2D *effect;
    u8 phase;

    effect = func_8008AD10(1, 0x2D, 0x3C);
    if (effect == 0) {
        return -1;
    }
    effect->value0C = params->value00;
    effect->value18 = params->value0C;
    effect->value1C = params->value10;
    effect->value20 = params->value14;
    effect->value24 = params->value18;
    effect->value28 = params->value1C;
    effect->value2C = params->value20;
    phase = func_800F38F4() & 7;
    effect->value30 = phase;
    effect->value32 = 0x80;
    effect->value31 = (phase + 1) % D_auto_80142CD0;
    effect->value34 = func_800F38F4();
    effect->value35 = func_800F38F4();
    effect->value36 = 0;
    effect->value38 = 0x80;
    return 0;
}

