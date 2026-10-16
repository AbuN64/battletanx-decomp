#include "shared/bt_types.h"
#include "span_1000/code_800A6864.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"
int func_800F2614(struct N *arg0, s32 *arg1) {
    if (arg0->unk24 >= 0x10) {
        *arg1 = 2;
    }
}

void func_800F2630(EffectHeader *owner, Vec3f *position, s16 angle)
{
    EffectKind18 *effect = func_8008AD10(1, 0x18, sizeof(EffectKind18));
    if (effect != 0) {
        effect->position = *position;
        effect->angle = angle;
        effect->owner = owner;
        effect->ownerSerial = owner->serial;
        effect->frame = 0;
    }
}
