#include "include_asm.h"

#include "shared/bt_span_1000_code_8007963C.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

/* func_8007967C -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image. The interval is a bare return, so the cartridge's two
   words are the epilogue and its empty delay slot. */

void func_8007967C(void) {
}

/* func_auto_80079684 -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_auto_80079684(void) {
}

void func_8007968C(void)
{
    s32 value;
    s32 i;
    s16 *slot;
    value = 1;
    i = 31;
    slot = D_auto_801B4A96;
    do {
        *slot = value;
        i--;
        slot--;
    } while (i >= 0);
}

