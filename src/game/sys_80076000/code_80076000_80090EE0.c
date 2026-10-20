#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8008F248.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"
#include "span_1000/code_80077930.h"
#include "span_1000/code_8008F4EC.h"

void func_80090EE0(void) {
    func_80110C00((s32) D_802D5BA0, 0x17);
    D_802D5BB7 = 0;
}

/* func_80090F10 -- picks an index at random, weighted by the byte table D_802D5BA0 whose total is D_802D5BB7. */

int func_80090F10(void) {
    int r;
    int i = 0;
    r = func_800F38F4() % D_802D5BB7;
    while (r >= D_802D5BA0[i]) {
        r -= D_802D5BA0[i++];
    }
    return i;
}

INCLUDE_ASM("span_1000", func_80090F94);
#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"


void func_80091108(struct PolygonPoint *origin, struct PolygonPoint *out) {
    Quad2f quad;
    s32 i;
    quad = D_80071E64;
    for (i = 0; i < 4; i++) {
        out[i].x = quad.points[i].x + origin->x;
        out[i].y = quad.points[i].y + origin->y;
    }
}

INCLUDE_ASM("span_1000", func_800911A0);
INCLUDE_ASM("span_1000", func_800913AC);
#include "shared/bt_span_1000_code_8008F248.h"
#include "shared/bt_types.h"
#include "span_1000/code_8008F4EC.h"





















                      /* extern */
                             /* extern */
                             /* extern */





void func_80091608(HandlerEffect *arg0, HandlerSender *arg1, void *arg2, HandlerReply *arg3) {
    if (arg0->unk20 == 0) {
        if ((arg1->unk8 == 0) && ((func_8009FBE4(arg1->unkC) & 0xFF) != arg0->unk2C) && (func_800E3460(arg1->unkC) == 0)) {
            arg3->code = 3;
            arg3->value = (s32) arg0->unk18;
            arg0->unk20 = 1U;
            func_8008B89C(arg0);
            return;
        }
        goto block_6;
    }
block_6:
    arg3->code = 1;
}















                      /* extern */
                             /* extern */
                             /* extern */

void func_800916B8(HandlerEffect *arg0, HandlerSender *arg1, s32 arg2, void *arg3, HandlerReply *arg4) {
    s32 temp_v0;
    s32 local_arr[1];

    local_arr[0] = (s32) arg1;
    if (arg2 == 0) {
        if ((arg0->unk20 == 0) && (arg1->unk8 == 0) && ((func_8009FBE4(arg1->unkC) & 0xFF) != arg0->unk2C) && (func_800E3460(arg1->unkC) == 0)) {
            arg4->code = 3;
            temp_v0 = (s32) arg0->unk18;
            arg4->value = temp_v0;
            arg0->unk20 = 1U;
            func_8008B89C(arg0);
            return;
        }
        arg4->code = 1;
    }
}

INCLUDE_DATA("span_1000", D_8009176C);
