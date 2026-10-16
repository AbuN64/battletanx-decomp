#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_unit.h"
#include "span_1000/code_8008F4EC.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
static inline void release_gate(EffectKind21 *effect)
{
    SceneObject *object = &func_800821C0()->objects[effect->slot];
    if ((object->flags & 15) == 15) object->flags &= 240;
    func_8008B89C(effect);
}
void func_800F0738(EffectKind21 *effect, void *sender, void *input, void *output)
{
    struct QueryResult *message = sender;
    s32 *result = output;
    CombatUnit *unit;
    s32 now;
    switch (message->kind) {
    case 2:
    case 12:
    case 22:
    case 34:
        if (effect->flags & 4) break;
        effect->flags |= 2;
        release_gate(effect);
        *result = 0;
        break;
    case 0:
        if (effect->hits != 0) {
            unit = message->object;
            unit->value3D0 -= 6.0;
            if (effect->hits & 1) unit->value3D4 -= 2.0f;
            else unit->value3D4 += 2.0f;
            effect->hits--;
            if (effect->hits == 0) func_80106CCC(effect->motion, 0x10);
            *result = 0;
            break;
        }
        if (effect->count == 0) {
            release_gate(effect);
            effect->flags |= 4;
            func_800821C0()->objects[effect->slot].flags &= 15;
            now = D_auto_801B4AA8;
            if (effect->lastTick + 10 < now) {
                *result = 5;
                effect->lastTick = now;
                break;
            }
        } else {
            now = D_auto_801B4AA8;
            if (effect->lastTick + 10 < now) {
                *result = 4;
                effect->lastTick = now;
                break;
            }
        }
        *result = 1;
        break;
    default:
        *result = 1;
        break;
    }
}
