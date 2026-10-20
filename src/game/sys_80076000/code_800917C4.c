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
INCLUDE_ASM("span_1000", func_8009189C);
INCLUDE_ASM("span_1000", func_8009196C);
INCLUDE_ASM("span_1000", func_80091A60);
INCLUDE_ASM("span_1000", func_80091CA4);
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

INCLUDE_ASM("span_1000", func_80091D6C);
INCLUDE_ASM("span_1000", func_80091E98);
INCLUDE_ASM("span_1000", func_8009201C);
INCLUDE_ASM("span_1000", func_80092408);
INCLUDE_ASM("span_1000", func_8009249C);
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
