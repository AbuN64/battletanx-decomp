#include "game/sys_80076000.h"
void func_800F16E4(EffectKind23 *effect, s32 *state)
{
    effect->age--;
    if (effect->age == 0) {
        *state = 2;
    }
}
