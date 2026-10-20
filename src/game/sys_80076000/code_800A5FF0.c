#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800A5FF0);
INCLUDE_ASM("span_1000", func_800A6688);
#include "game/sys_80076000.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_800A5050.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A51E8.h"

              /* size 0x0 */


s32 func_800A66B0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    return (s32) D_802DF34A;
}

/* func_800A66C0 -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_800A66C0(void) {
}

INCLUDE_ASM("span_1000", func_800A66C8);
