#include "include_asm.h"

#include "shared/bt_span_1000_code_8007963C.h"
#include "shared/bt_types.h"








#include "span_1000/code_8007963C.h"



 /* extern */
                  /* extern */



void func_80079EFC(void) {
    Func79EFCArg_Shared80079EFC arg;
    s32 temp_v0;

    arg.unk0 = 0x30;
    arg.unk4 = 0x40;
    arg.unk8 = 0x10;
    arg.tail.values[0] = &D_auto_80150340;
    arg.tail.values[1] = 0;
    arg.tail.values[2] = 0;
    arg.tail.values[3] = 0;
    arg.unk9 = 0;
    temp_v0 = func_80112140(0, 0, &D_auto_80150340, 1, 0x88);
    D_auto_80150350 = temp_v0;
    func_8011B314(temp_v0, &arg);
    D_auto_80150354 = func_80112140(0, 0, &D_auto_80150340, 1, 0x1C);
}

INCLUDE_ASM("span_1000", func_80079FA4);
INCLUDE_ASM("span_1000", func_8007A004);
#ifdef NON_MATCHING
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
#else
INCLUDE_ASM("span_1000", func_8007A178);
#endif
INCLUDE_ASM("span_1000", func_8007A26C);
INCLUDE_ASM("span_1000", func_8007A36C);
#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_80077930.h"
s32 func_80111510(u8 *, s32 *, s32);
extern u8 D_auto_801529D8;
extern s32 D_auto_801529F0;
extern s32 D_auto_80152A18;
extern s32 D_auto_80152A38;
extern s32 D_auto_80152F00;
extern s32 func_8007A470;

s32 func_8007A3D8(s32 arg0) {
    func_80111510(&D_auto_801B4A28, &D_auto_80152A18, 8);
    func_80111510(&D_auto_80152F90, &D_auto_801529F0, 8);
    func_80111510(&D_auto_801529D8, &D_auto_80152F00, 0x20);
    return func_80111540(&D_auto_80152A38, 4, &func_8007A470, 0, &D_auto_801529D8, arg0);
}
#else
INCLUDE_ASM("span_1000", func_8007A3D8);
#endif
