#include "include_asm.h"
#include "shared/bt_span_1000_code_8008B1F0.h"

#include <ultra64.h>
#include "game/sys_80076000.h"


void func_80093D30(void) {
    D_80125D40 = 0;
    D_80125D44 = 0;
    D_80125D48 = 0;
}

INCLUDE_ASM("span_1000", func_80093D50);
#include "span_1000/code_800A6864.h"
#include "game/sys_80076000.h"

int func_80093EF8(EffectKind04 *arg0, s32 *arg1) {
    s32 temp_a0;

    temp_a0 = arg0->value24;
    if (temp_a0 != 0) {
        func_8010CB4C(temp_a0, 0);
    }
    *arg1 = 2;
}

#include "shared/bt_span_1000_code_80091A60.h"
/* func_80093F34 -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_80093F34(void) {
}

INCLUDE_ASM("span_1000", func_80093F3C);
INCLUDE_DATA("span_1000", D_8009405C);
