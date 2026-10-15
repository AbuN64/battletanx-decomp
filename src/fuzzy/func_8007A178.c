#include "sdk/libultra.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007963C.h"
extern s32 D_auto_80150398;
extern s32 D_auto_8015039C;
extern s32 D_auto_801503A8;
extern s8 D_auto_80152F80;

void func_8007A178(void) {
    s32 *var_s2;
    s32 *var_s3;
    s32 var_s1;
    u32 var_s0;

    var_s0 = 0;
    var_s3 = &D_auto_8015039C - 4;
    var_s2 = &D_auto_8015039C + 0x10;
    var_s1 = 0;
    D_auto_8015039C = 0;
    D_auto_80150398 = 0;
    do {
        func_8011C180(var_s2, var_s3);
        var_s3 += 0x14;
        var_s2 += 0x14;
        *(&D_auto_801503A8 + var_s1) = func_80112140(0, 0, &D_auto_80150340, 1, 0xA00);
        var_s0 += 1;
        var_s1 += 0x14;
    } while (var_s0 < 0x4FU);
    *(&D_auto_801503A8 + (var_s0 * 0x14)) = func_80112140(0, 0, &D_auto_80150340, 1, 0xA00);
    D_auto_80152F80 = 0;
}
