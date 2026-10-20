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
    arg.tail.values[0] = &D_80150340;
    arg.tail.values[1] = 0;
    arg.tail.values[2] = 0;
    arg.tail.values[3] = 0;
    arg.unk9 = 0;
    temp_v0 = func_80112140(0, 0, &D_80150340, 1, 0x88);
    D_80150350 = temp_v0;
    func_8011B314(temp_v0, &arg);
    D_80150354 = func_80112140(0, 0, &D_80150340, 1, 0x1C);
}

INCLUDE_ASM("span_1000", func_80079FA4);
INCLUDE_ASM("span_1000", func_8007A004);
INCLUDE_ASM("span_1000", func_8007A178);
INCLUDE_ASM("span_1000", func_8007A26C);
INCLUDE_ASM("span_1000", func_8007A36C);
#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_80077930.h"
s32 func_80111510(u8 *, s32 *, s32);
extern u8 D_801529D8;
extern s32 D_801529F0;
extern s32 D_80152A18;
extern s32 D_80152A38;
extern s32 D_80152F00;
extern s32 func_8007A470;

s32 func_8007A3D8(s32 arg0) {
    func_80111510(&D_801B4A28, &D_80152A18, 8);
    func_80111510(&D_80152F90, &D_801529F0, 8);
    func_80111510(&D_801529D8, &D_80152F00, 0x20);
    return func_80111540(&D_80152A38, 4, &func_8007A470, 0, &D_801529D8, arg0);
}
#else
INCLUDE_ASM("span_1000", func_8007A3D8);
#endif
