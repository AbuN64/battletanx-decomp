#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
void func_800F0CF0(EffectKind21 *effect, void *sender, u32 message, void *input, PositionReport *report)
{
    SceneObject *object;
    switch (message) {
    case 0:
        func_800F0738(effect, sender, input, report);
        return;
    case 2:
        if (!(effect->flags & 4)) {
            report->valid = 1;
            object = &func_800821C0()->objects[effect->slot];
            report->x = object->x;
            report->z = object->z;
        }
        return;
    case 3:
        func_800F09D0(effect, 0, input, 0);
        return;
    case 7:
        func_800F0B60(effect, sender, input);
        break;
    }
}
