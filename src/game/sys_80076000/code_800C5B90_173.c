#include "game/sys_80076000.h"
#include "shared/bt_ai_team.h"
#include "span_1000/code_8008F4EC.h"

EffectKind11 *func_800E66BC(u16 id, AiTeam *arg)
{
    EffectKind11 *effect;

    if (func_800EC644() != 0) {
        return 0;
    }
    effect = func_8008AD10(1, 0xB, 0x10);
    if (effect == 0) {
        return 0;
    }
    func_800E5328(id, arg);
    D_auto_8033B44A = 1;
    D_auto_8033B44C = 0;
    D_auto_8033AAE0 = 0;
    effect->active = 1;
    return effect;
}
