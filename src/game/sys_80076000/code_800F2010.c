#include "include_asm.h"
#include "shared/bt_span_1000_code_8008B1F0.h"

#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
#include <ultra64.h>
#include "game/sys_80076000.h"

void func_800F2010(EffectKind20 *arg0, s32 *arg1) {
    if (arg0->value18 <= 0) {
        *arg1 = 2;
        func_80107170(arg0->value1C);
    }
}

INCLUDE_ASM("span_1000", func_800F2044);
#include "shared/audio_callbacks.h"
#include "shared/bt_callback_state.h"
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
    func_80109364(&D_803B8254[effect->motion], box.values[3] * D_80074E00, box.values[4] * D_80074E00,
        box.values[5] * D_80074E00, box.values[6] * D_80074E00);
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
    func_80109364(&D_803B8254[effect->motion], box.values[3] * D_80074E04, box.values[4] * D_80074E04,
        box.values[5] * D_80074E04, box.values[6] * D_80074E04);
        break;
    case 4:
        effect->active = 0;
        break;
    }
}

#include "span_1000/code_800A6864.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"
int func_800F2614(EffectKind18 *arg0, s32 *arg1) {
    if (arg0->frame >= 0x10) {
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
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800F2E50(s8 value0C, s8 value0D, s8 value0E, s32 value10, s32 value18)
{
    Unknown800F2E50 *effect;

    effect = func_8008AD10(1, 0x19, sizeof(Unknown800F2E50));
    if (effect != 0) {
        effect->value0C = value0C;
        effect->value0D = value0D;
        effect->value0E = value0E;
        effect->value10 = value10;
        effect->value14 = 0;
        effect->value18 = value18;
    }
}
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







#include "span_1000/code_8008F4EC.h"


     /* extern */

void func_800F3014(s8 arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, u8 arg5, s32 arg6, s32 arg7) {
    EffectKind20 *effect;

    effect = func_8008AD10(1, 0x20, 0x20);
    if (effect != ((void *)0)) {
        effect->value0C = arg0;
        effect->value0D = arg1;
        effect->value0E = arg2;
        effect->value0F = arg3;
        effect->value10 = arg4;
        effect->value11 = arg5;
        effect->value14 = arg6;
        effect->value18 = 0;
        effect->value1C = arg7;
    }
}

#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800F30C8(Unknown800F30C8 *effect, s32 *state) {
    Unknown800F30C8 *next;
    s32 mode;

    if (++effect->value18 < effect->value14) {
        return;
    }
    *state = 2;
    mode = effect->value1C;
    switch (mode) {
    case 0:
        return;
    case 1: {
        u8 a = effect->value0C[3];
        u8 b = effect->value0C[4];
        u8 c = effect->value0C[5];
        u8 d = effect->value0C[0];
        u8 e = effect->value0C[1];
        u8 g = effect->value0C[2];
        s32 duration = effect->value14;

        next = func_8008AD10(1, 0x20, 0x20);
        if (next == 0) {
            return;
        }
        next->value0C[0] = a;
        next->value0C[1] = b;
        next->value0C[2] = c;
        next->value0C[3] = d;
        next->value0C[4] = e;
        next->value0C[5] = g;
        next->value14 = duration;
        next->value18 = 0;
        next->value1C = mode;
        break;
    }
    case 2: {
        u8 r = func_800F38F4();
        u8 g = func_800F38F4();
        u8 b = func_800F38F4();
        u8 a = effect->value0C[3];
        u8 c = effect->value0C[4];
        u8 d = effect->value0C[5];
        s32 duration = effect->value14;
        s32 nextMode = effect->value1C;

        next = func_8008AD10(1, 0x20, 0x20);
        if (next == 0) {
            return;
        }
        next->value0C[0] = a;
        next->value0C[1] = c;
        next->value0C[2] = d;
        next->value0C[3] = r;
        next->value0C[4] = g;
        next->value0C[5] = b;
        next->value14 = duration;
        next->value18 = 0;
        next->value1C = nextMode;
        break;
    }
    }
}
void func_800F3234(Unknown800F3234 *fade) {
    s32 elapsed = fade->value18;
    s32 duration = fade->value14;

    func_8007D430((u8)(fade->value0C + ((fade->value0F - fade->value0C) * elapsed) / duration),
                  (u8)(fade->value0D + ((fade->value10 - fade->value0D) * elapsed) / duration),
                  (u8)(fade->value0E + ((fade->value11 - fade->value0E) * elapsed) / duration));
}
INCLUDE_ASM("span_1000", func_800F3344);
