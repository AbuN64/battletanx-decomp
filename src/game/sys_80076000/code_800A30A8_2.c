#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A27D0.h"
#include "shared/bt_callback_word.h"
#include "shared/bt_span_1000_code_800F29F0.h"

struct Unknown800A424C;



/* func_800A424C -- the address of the member at 0x048.
 *
 * No load: the cartridge adds 0x48 to the argument and returns it, which is a pointer into the
 * object rather than anything read out of it. What lives at 0x48 is unknown, so the member is
 * named for its offset and left an opaque byte run.
 */



void *func_800A424C(struct Unknown800A424C *self) {
    return self->member;
}

struct A;




/* func_800A4254 -- the value func_800F3BE4 gives for the float at 0xB0, negated when the float at 0xB8 is negative, as a halfword. */


unsigned short func_800A4254(A *a) {
    unsigned short r;
    if (a->b8 < 0.0f) {
        r = -func_800F3BE4(a->b0);
    } else {
        r = func_800F3BE4(a->b0);
    }
    return r;
}

struct Unknown800A42A4;



/* func_auto_800A42A4 -- returns the word at offset 0xF4 of its argument. */


s32 func_auto_800A42A4(struct Unknown800A42A4 *arg0) {
    return arg0->value;
}

s32 func_auto_800A42B0(s32 arg0) {
    return ((CallbackWord *)arg0)->value;
}
