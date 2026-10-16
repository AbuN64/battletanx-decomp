#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800F0DE0(EffectKind0C *effect, s32 *state)
{
    f32 remaining = effect->remaining - D_auto_80074D20;
    s32 sound;

    effect->remaining = remaining;
    if (remaining <= 0.0f) {
        sound = effect->sound;
        if (sound != -1) {
            func_800796F0(sound, 0);
        }
        *state = 2;
    }
}
