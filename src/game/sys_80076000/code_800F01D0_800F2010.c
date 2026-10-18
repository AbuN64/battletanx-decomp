#include "include_asm.h"

#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

void func_800F2010(struct Func_800F3014_View0_Shared800F3014 *arg0, s32 *arg1) {
    if (arg0->field_18 <= 0) {
        *arg1 = 2;
        func_80107170(arg0->field_1c);
    }
}

INCLUDE_ASM("span_1000", func_800F2044);
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_callback_state.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800F01D0.h"
#include "game/sys_80076000.h"



              /* size 0x0 */

void func_800F2120(struct CallbackState *arg0) {
    ((arg0))->state = 0;
}

void func_800F2128(EffectKind17 *effect, void *sender, s32 *index)
{
    QueryBox box;
    box = D_803B8254[*index].box;
    effect->x = box.values[1];
    effect->z = box.values[2];
    func_801074AC(effect->motion, box.values[1], box.values[2], box.values[8]);
    func_80109364(&D_803B8254[effect->motion], box.values[3] * D_auto_80074E00, box.values[4] * D_auto_80074E00,
        box.values[5] * D_auto_80074E00, box.values[6] * D_auto_80074E00);
}

INCLUDE_ASM("span_1000", func_800F2270);
#include "game/sys_80076000.h"
void func_800F2478(EffectKind17 *effect, void *sender, u32 event, s32 *index, void *output)
{
    QueryBox box;
    switch (event) {
    case 0:
        func_800F2270(effect, sender, index, output);
        break;
    case 5:
    box = D_803B8254[*index].box;
    effect->x = box.values[1];
    effect->z = box.values[2];
    func_801074AC(effect->motion, box.values[1], box.values[2], box.values[8]);
    func_80109364(&D_803B8254[effect->motion], box.values[3] * D_auto_80074E04, box.values[4] * D_auto_80074E04,
        box.values[5] * D_auto_80074E04, box.values[6] * D_auto_80074E04);
        break;
    case 4:
        effect->active = 0;
        break;
    }
}

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

INCLUDE_ASM("span_1000", func_800F26B4);
INCLUDE_ASM("span_1000", func_800F29EC);
INCLUDE_ASM("span_1000", func_800F29F0);
INCLUDE_ASM("span_1000", func_800F2AE4);
INCLUDE_ASM("span_1000", func_800F2D58);
INCLUDE_ASM("span_1000", func_800F2E50);
#include "game/sys_80076000.h"
void func_800F2ED4(EffectKind19 *effect, s32 *state)
{
    effect->frame++;
    if (effect->frame >= effect->frameLimit) {
        *state = 2;
    }
}

INCLUDE_ASM("span_1000", func_800F2EFC);
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"







#include "span_1000/code_8008F4EC.h"


     /* extern */

void func_800F3014(s8 arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, u8 arg5, s32 arg6, s32 arg7) {
    void *temp_v0;

    temp_v0 = func_8008AD10(1, 0x20, 0x20);
    if (temp_v0 != ((void *)0)) {
        ((struct Func_800F3014_View0_Shared800F3014 *)temp_v0)->field_c = arg0;
        ((struct Func_800F3014_View0_Shared800F3014 *)temp_v0)->field_d = arg1;
        ((struct Func_800F3014_View0_Shared800F3014 *)temp_v0)->field_e = arg2;
        ((struct Func_800F3014_View0_Shared800F3014 *)temp_v0)->field_f = arg3;
        ((struct Func_800F3014_View0_Shared800F3014 *)temp_v0)->field_10 = arg4;
        ((struct Func_800F3014_View0_Shared800F3014 *)temp_v0)->field_11 = arg5;
        ((struct Func_800F3014_View0_Shared800F3014 *)temp_v0)->field_14 = arg6;
        ((struct Func_800F3014_View0_Shared800F3014 *)temp_v0)->field_18 = 0;
        ((struct Func_800F3014_View0_Shared800F3014 *)temp_v0)->field_1c = arg7;
    }
}

INCLUDE_ASM("span_1000", func_800F30C8);
INCLUDE_ASM("span_1000", func_800F3234);
INCLUDE_ASM("span_1000", func_800F3344);
