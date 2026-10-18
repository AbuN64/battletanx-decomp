#include "include_asm.h"

#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
void func_800F01D0(EffectKind21 *effect)
{
    SceneObject *object = &func_800821C0()->objects[effect->slot];
    if (object->alternateModel != -1) {
        u16 model = effect->secondaryModel;
        object->kind = 28;
        object->model = model;
    }
}

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

INCLUDE_ASM("span_1000", func_800F0294);
INCLUDE_ASM("span_1000", func_800F03B4);
INCLUDE_ASM("span_1000", func_800F05F4);
