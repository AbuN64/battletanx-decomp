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
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

s32 func_800F05F4(f32 x, f32 y, s32 slot, u16 id, s32 minX, s32 maxX, s32 minY, s32 maxY) {
    Unknown800F05F4_2 *effect;
    Unknown800F05F4_1 *session;

    effect = func_8008AD10(0, 0x21, 0x38);
    if (effect == 0) {
        return -1;
    }
    session = func_800821C0();
    effect->value20 = slot;
    effect->value2C = session->value568[slot].value54;
    effect->value30 = session->value568[slot].value54 + 1;
    effect->value2E = session->value568[slot].value54 + 2;
    effect->value14 = x;
    effect->value10 = y;
    effect->value32 = 0;
    effect->value18 = id;
    effect->value0C = 0;
    effect->value24 = 10;
    effect->value1C = func_80106D18(effect, (s32)x, (s32)y, minX, maxX, minY, maxY, 0x56, id);
    return 0;
}
