#include "shared/bt_types.h"
extern u32 D_auto_80145DA8;
extern s32 D_auto_A4500008;
extern s32 D_auto_A4500010;
extern s32 D_auto_A4500014;

int func_80110490(s32 arg0) {
    s32 var_a2;
    u32 temp_a1;

    temp_a1 = (u32) (((f32) D_auto_80145DA8 / (f32) arg0) + 0.5f);
    if (temp_a1 < 0x84U) {
        return -1;
    }
    var_a2 = (temp_a1 / 66U) & 0xFF;
    if (var_a2 >= 0x11) {
        var_a2 = 0x10;
    }
    D_auto_A4500010 = temp_a1 - 1;
    D_auto_A4500014 = var_a2 - 1;
    D_auto_A4500008 = 1;
    return (s32) D_auto_80145DA8 / (s32) temp_a1;
}
