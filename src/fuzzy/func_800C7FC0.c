#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800C80E0(s32 *, s32, s32 *);
extern s32 D_auto_80134010;
extern u8 D_auto_80135773;
extern s32 D_auto_80327EE8;
extern s32 D_auto_80327EF0;

s32 func_800C7FC0(void) {
    s32 *temp_a0;
    s32 *temp_a2;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v1;

    temp_v0 = func_80096920(0, 0);
    var_s0 = 0;
    if (temp_v0 & 1) {
        D_auto_80327EF0 = -D_auto_80327EF0;
    }
    if (temp_v0 & 8) {
        D_auto_80327EF0 = -D_auto_80327EF0;
    }
    temp_a2 = (D_auto_80327EE8 * 4) + &D_auto_80134010;
    temp_v1 = ((temp_v0 & 4) != 0) - ((temp_v0 & 2) != 0);
    temp_a1 = *temp_a2 + temp_v1;
    *temp_a2 = temp_a1;
    if ((D_auto_80135773 == 0) && (temp_a1 == 1)) {
        *temp_a2 = temp_v1 + 1;
    }
    temp_a0 = (D_auto_80327EE8 * 4) + &D_auto_80134010;
    var_v1 = *temp_a0;
    if (var_v1 < 0) {
        var_v1 = 9;
    }
    *temp_a0 = var_v1 & -(var_v1 < 0xA);
    func_800C80E0(temp_a0, temp_a1, temp_a2);
    if (temp_v0 & 0x50) {
        var_s0 = 1;
    }
    if (temp_v0 & 0x20) {
        var_s0 = 2;
    }
    return var_s0;
}
