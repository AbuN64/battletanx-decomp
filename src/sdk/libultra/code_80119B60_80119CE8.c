#include "include_asm.h"

#include "shared/bt_span_1000_code_80119B60.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A6864.h"

              /* size 0x0 */

void func_80119CE8(void) {

}

s32 func_80119CF0(EffectKind15 *arg0, s32 arg1) {
    s32 temp_v1;
    temp_v1 = arg0->deadline - arg1;
    if (temp_v1 >= 0) {
        return temp_v1;
    }
    return 0x3E8;
}

