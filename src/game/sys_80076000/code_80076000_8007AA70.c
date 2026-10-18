#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"

struct S;

void func_8007AA70(void) {
    func_8007AB04();
    func_8007AC20(0);
    func_8007C298();
}

                 /* size 0x0 */

s32 func_8007AAA0(void) {
    return (*((s32 *)&(D_801B4AB4)));
}

s32 func_8007AAB0(void) {
    return D_auto_801B4AB8;
}

/* func_8007AAC0 -- returns the field at 0x204 of the object D_auto_801B4ABC points to, or 0 when there is none. */


int func_8007AAC0(void) {
    if (D_auto_801B4ABC) {
        return D_auto_801B4ABC->unk204;
    }
    return 0;
}

s32 func_8007AAE4(void) {
    return D_auto_80134E5C;
}

S *func_8007AAF4(void) {
    return D_auto_801B4ABC;
}

INCLUDE_ASM("span_1000", func_8007AB04);
