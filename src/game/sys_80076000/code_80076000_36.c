#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8008F248.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"
#include "span_1000/code_80077930.h"
#include "span_1000/code_8008F4EC.h"

void func_80090EE0(void) {
    func_80110C00((s32) D_auto_802D5BA0, 0x17);
    D_auto_802D5BB7 = 0;
}

/* func_80090F10 -- picks an index at random, weighted by the byte table D_auto_802D5BA0 whose total is D_auto_802D5BB7. */

int func_80090F10(void) {
    int r;
    int i = 0;
    r = func_800F38F4() % D_auto_802D5BB7;
    while (r >= D_auto_802D5BA0[i]) {
        r -= D_auto_802D5BA0[i++];
    }
    return i;
}
