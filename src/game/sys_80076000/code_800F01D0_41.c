#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
void func_800F0234(EffectKind21 *effect)
{
    SceneObject *object;
    u8 flags;
    object = &func_800821C0()->objects[effect->slot];
    flags = object->flags;
    if ((flags & 15) == 15) {
        object->flags = flags & 240;
    }
}
