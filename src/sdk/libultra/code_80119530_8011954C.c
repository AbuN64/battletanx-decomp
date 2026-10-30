#include "include_asm.h"

#include "shared/bt_span_1000_code_80119530.h"
#include <ultra64.h>
#include "shared/audio_callbacks.h"
#include "shared/bt_callback_state.h"
#include "sdk/libultra.h"

struct Dest;

struct Src;






/* Copies three fields out of the source record into the destination: two
   words and one signed halfword. The lw/sw pair fixed the words as 32-bit
   and the lh/sh pair fixed the halfword as a signed short. */




void func_8011954C(Dest *dst, Src *src) {
    dst->unk8 = src->unk0;
    dst->unk1A = src->unkC;
    dst->unkC = src->unk4;
}

              /* size 0x0 */

s32 func_80119568(s32 arg0) {
    return ((CallbackValue *)arg0)->value;
}

              /* size 0x0 */

void func_80119570(void) {

}

