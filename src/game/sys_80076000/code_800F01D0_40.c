#include "game/sys_80076000.h"
void func_800F2ED4(EffectKind19 *effect, s32 *state)
{
    effect->frame++;
    if (effect->frame >= effect->frameLimit) {
        *state = 2;
    }
}
