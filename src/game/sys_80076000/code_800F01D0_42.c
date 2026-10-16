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
