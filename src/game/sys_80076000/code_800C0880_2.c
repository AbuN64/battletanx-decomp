#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"


s32 func_800C3EA4(s32 arg0, s16 arg1) {
    s32 temp_v0;

    temp_v0 = func_800796F0(arg0, 0);
    func_800799D0(temp_v0, (s32) arg1);
    return temp_v0;
}

void func_800C3EF0(void) {
    D_auto_80327E50 = 0;
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);
void func_800C3F00(void) {
    s32 size;
    size = D_auto_B05A1110 - D_auto_B0596EA0;
    func_80077930(D_auto_B0596EA0, D_auto_803DA800, size);
    func_800F4F60(size, D_auto_803DA800, 0x25800, D_auto_803275F4);
    func_801053B0(1);
    D_auto_80327EB2 = 0;
    D_auto_80327EB1 = 0;
    switch (D_auto_80327E50) {
    case 0:
        D_auto_80327E58 = func_801120A0() * 1000000 / D_80145DA0 + 12000000;
        D_auto_80327E60 = 0xF0;
        break;
    case 4:
        D_auto_80327EB1 = 1;
        D_auto_80327E50 = 5;
        break;
    }
    D_auto_80132EF0 = 1;
}
