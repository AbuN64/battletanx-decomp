#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"





void func_8010BEFC(EffectKind2B *effect, s32 *result)
{
    s32 lifetime = effect->lifetime;

    if (lifetime != -1) {
        if (lifetime != 0) {
            effect->lifetime = lifetime - 1;
        } else {
            *result = 2;
            return;
        }
    }
    if (effect->mode == 1) {
        effect->value3E += (u32)effect->drift;
    }
    if (effect->mode != 3) {
        effect->blend += effect->blendStep;
        if (effect->blend >= 0x100) {
            effect->currentIndex = effect->nextIndex;
            effect->nextIndex = D_auto_80142B70[effect->nextIndex];
            effect->blend = 0;
        }
    }
}

