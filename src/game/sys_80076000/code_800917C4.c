#include "include_asm.h"

#include "shared/bt_span_1000_code_8008F248.h"
#include "shared/bt_types.h"
#include "span_1000/code_8008F4EC.h"

struct Unknown800917C4;




/*
 * Copies the two 16-bit fields at offsets 8 and 0xA from one structure to
 * another.  Both loads are `lhu` and both stores are `sh`, which fixes the
 * fields as unsigned 16-bit halfwords, and the single register reused for both
 * copies is what a named temporary variable produces.
 */



void func_800917C4(Unknown800917C4 *src, Unknown800917C4 *dst) {
    unsigned short value;

    value = src->unk8;
    dst->unk8 = value;
    value = src->unkA;
    dst->unkA = value;
}

struct E;




/* func_800917D8 -- copies the pair of halfwords at 0x8 and 0xA from each of n 16-byte records to another array. */


void func_800917D8(int n, E *src, E *dst) {
    int i;
    for (i = 0; i < n; i++) {
        dst[i].a = src[i].a;
        dst[i].b = src[i].b;
    }
}

INCLUDE_ASM("span_1000", func_80091814);
#include "game/sys_80076000.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8009189C(s32 t, Unknown8009189C *start, Unknown8009189C *end, Unknown8009189C *out)
{
    out->value00 = start->value00 + (((end->value00 - start->value00) * t) >> 8);
    out->value02 = start->value02 + (((end->value02 - start->value02) * t) >> 8);
    out->value04 = start->value04 + (((end->value04 - start->value04) * t) >> 8);
    out->value0C = start->value0C + (((s32)(end->value0C - start->value0C) * t) >> 8);
    out->value0D = start->value0D + (((s32)(end->value0D - start->value0D) * t) >> 8);
    out->value0E = start->value0E + (((s32)(end->value0E - start->value0E) * t) >> 8);
}
INCLUDE_ASM("span_1000", func_8009196C);
INCLUDE_ASM("span_1000", func_80091A60);
Unknown80091CA4 *func_80091CA4(s32 value0C, s32 value10, s32 value14)
{
    Unknown80091CA4 *effect;

    effect = func_8008AD10(0, 0x13, sizeof(Unknown80091CA4));
    if (effect == 0) {
        return 0;
    }
    effect->value0C = value0C;
    effect->value10 = value10;
    effect->value14 = value14;
    return effect;
}
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E0B00.h"
#include "game/sys_80076000.h"
/* func_80091D04 -- stores 2 through its second argument and returns 2. */

int func_80091D04(void *unused, int *out) {
    *out = 2;
    return 2;
}

void func_80091D10(Data80135834Ptr *arg0) {
    func_80084CC4(func_800821C0(), arg0->unkC, 0, arg0->unk10, 6, 0, arg0->unk14, D_80071E90);
}

Unknown80091D6C *func_80091D6C(s32 index, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u16 flags, u8 value0C)
{
    Unknown80091D6C *effect;
    Unknown80091D6C_3 *context;
    Unknown80091D6C_2 *slot;
    Unknown80091D6C_1 *entry;

    effect = func_8008AD10(0, 9, 0x20);
    if (effect == 0) {
        return 0;
    }
    effect->value0C = value0C;
    effect->value12 = index;
    context = func_800821C0();
    entry = &context->value568[effect->value12];
    slot = &context->value56C[entry->value52];
    effect->value14 = func_80106D18(effect, arg1, arg2, arg3, arg4, arg5, arg6, 0x56, flags);
    {
        Unknown80091D6C *e = effect;
        u8 v = slot->value00;
        e->value0E = 0;
        e->value10 = 0;
        e->value1C = 0xA;
        e->value18 = 0;
        e->value0D = v;
        return e;
    }
}
Unknown80091E98_3 *func_80091E98(s32 group, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u16 arg7,
                                 s32 flags, u8 arg9) {
    Unknown80091E98_3 *effect;
    Unknown80091E98_2 *tables;
    Unknown80091E98 *groupInfo;
    Unknown80091E98_1 *set;
    s16 attr;
    u8 mode;

    effect = func_8008AD10(0, 5, 0x28);
    mode = flags;
    if (effect == 0) {
        return 0;
    }
    effect->value14 = group;
    tables = func_800821C0();
    groupInfo = &tables->value568[effect->value14];
    set = &tables->value56C[groupInfo->value52];
    effect->value18 = func_80106D18(effect, arg1, arg2, arg3, arg4, arg5, arg6, 0xF85F, arg7);
    if (flags & 8) {
        effect->value0D = set->value00 - 2;
    } else if (flags & 4) {
        effect->value0D = set->value00 - 1;
    } else {
        effect->value0D = set->value00;
    }
    attr = (-((mode & 0x20) == 0) & 0x11) | 1;
    effect->value0E = 0;
    effect->value10 = 0;
    effect->value0C = mode;
    effect->value12 = attr;
    effect->value24 = 0;
    effect->value1C = 0;
    effect->value16 = arg9;
    return effect;
}
INCLUDE_ASM("span_1000", func_8009201C);
INCLUDE_ASM("span_1000", func_80092408);
void func_8009249C(Unknown8009249C *effect)
{
    f32 scale;

    scale = D_80071E9C;
    effect->value06 = (s32)(effect->value06 * scale);
    effect->value08 = (s32)(effect->value08 * scale);
    effect->value0A = (s32)(effect->value0A * scale);
    effect->value0C = (s32)(effect->value0C * scale);
    effect->value0E = (s32)(effect->value0E * scale);
}
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_span_1000_code_80107168.h"
/* Scale the query box, collect nearby results, and dispatch their callbacks. */
#include "shared/bt_types.h"
void func_80092534(QueryObject *object) {
    QueryWork work;
    int i;
    float f0, f1, f2, f3, f4;
    work.box = D_803B8254[object->index].box;
    f0 = work.box.values[3] * D_80071EA0;
    f1 = work.box.values[4] * D_80071EA0;
    f2 = work.box.values[5] * D_80071EA0;
    f3 = work.box.values[6] * D_80071EA0;
    f4 = work.box.values[7] * D_80071EA0;
    work.box.values[3] = (int)f0;
    work.box.values[4] = (int)f1;
    work.box.values[5] = (int)f2;
    work.box.values[6] = (int)f3;
    work.box.values[7] = (int)f4;
    func_80107A14(&work.box, 0x20, work.results, &work.count);
    for (i = 0; i < work.count; i++) {
        if ((u32)work.results[i] >= 4 && D_802C3804[work.results[i]->kind].callback != 0) {
            D_802C3804[work.results[i]->kind].callback(work.results[i], object, 0, work.callbackData, work.callbackOutput);
        }
    }
}

INCLUDE_ASM("span_1000", func_80092734);
INCLUDE_ASM("span_1000", func_80093080);
INCLUDE_ASM("span_1000", func_80093338);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"
void func_800933B8(SequenceEffect *effect)
{
    if (effect->step < effect->stepCount - 1) {
        func_8008B89C();
        func_80093F3C(effect);
        effect->flags |= 0x10;
    }
}

void func_80093410(SequenceEffect *effect)
{
    if (effect->step < effect->stepCount - 1) {
        func_8008B89C();
        func_80093F3C(effect);
    }
}
INCLUDE_ASM("span_1000", func_8009345C);
INCLUDE_ASM("span_1000", func_80093590);
INCLUDE_ASM("span_1000", func_80093744);
INCLUDE_ASM("span_1000", func_800937BC);
INCLUDE_ASM("span_1000", func_8009390C);
INCLUDE_ASM("span_1000", func_80093A5C);
INCLUDE_DATA("span_1000", D_80093D2C);
