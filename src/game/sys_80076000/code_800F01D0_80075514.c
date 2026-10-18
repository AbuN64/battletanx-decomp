#include "include_asm.h"

#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "span_1000/code_8008F4EC.h"









EffectKind2B *func_8010BDA0(EffectKind2BParams *params)
{
    EffectKind2B *effect;
    u8 index;

    effect = func_8008AD10(1, 0x2B, 0x44);
    if (effect == 0) {
        return 0;
    }
    effect->value0C = params->value00;
    effect->position = params->position;
    effect->value28 = params->value10;
    effect->value24 = params->value14;
    effect->value2C = params->value18;
    effect->lifetime = params->lifetime;
    effect->value20 = params->value20;
    effect->value22 = (u32)(params->value22 * D_auto_80075510);
    effect->value32 = params->value24;
    effect->value34 = params->value26;
    effect->value36 = params->value28;
    effect->drift = D_auto_80075518 / effect->value32;
    effect->mode = 0;
    index = func_800F38F4() & 7;
    effect->currentIndex = index;
    effect->nextIndex = D_auto_80142B70[index];
    effect->value3E = func_800F38F4();
    effect->value3F = func_800F38F4();
    effect->blend = 0;
    effect->blendStep = 0x40;
    return effect;
}

INCLUDE_RODATA("span_1000", R_80075518);
