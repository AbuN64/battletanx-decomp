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
