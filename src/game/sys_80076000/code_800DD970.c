#include "include_asm.h"

#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"





EffectKind0A *func_800DD970(f32 *pos, s32 arg)
{
    EffectKind0A *effect;

    if (func_800EC644() != 0) {
        return 0;
    }
    effect = func_8008AD10(1, 0xA, 0x20);
    if (effect == 0) {
        return 0;
    }
    effect->value0C = 0;
    effect->value14 = pos[1];
    effect->value10 = pos[0];
    effect->value1C = arg;
    effect->value18 = D_8007438C;
    return effect;
}

#include "shared/bt_span_1000_code_800DAD5C.h"
#include <ultra64.h>
#include "span_1000/code_800D455C.h"

/* func_800DD970 allocates 32 bytes, clears completion, copies two
 * coordinates, supplies the third, and stores its second argument. */




void func_800DD9E8(struct Func800DD970State *state, s32 *result) {
    if (state->completion != 0) {
        *result = 2;
    }
}

              /* size 0x0 */

void func_800DDA00(void) {

}

INCLUDE_ASM("span_1000", func_800DDA08);
#include "game/sys_80076000.h"
#include "span_1000/code_800E0B00.h"
u32 func_800DDB94(void)
{
    u8 previous = D_80135820;
    u8 current = previous + 1;
    u32 result;
    D_80135820 = current;
    if (current < 241) {
        result = (previous + 16) & 0xFF;
    } else {
        result = 15;
    }
    return result;
}

void func_800DDBCC(void)
{
    if (D_80135834 != 0) {
        D_80135834->enabled[9] = 0;
        D_80135834->enabled[10] = 0;
        D_80135834->enabled[11] = 0;
        D_80135834->enabled[14] = 0;
        D_80135834->enabled[13] = 0;
        D_80135834->enabled[12] = 0;
    }
}

#include "game/sys_80076000.h"


void func_800DDC3C(void) {
    func_800EC644();
}

INCLUDE_DATA("span_1000", D_800DDC5C);
