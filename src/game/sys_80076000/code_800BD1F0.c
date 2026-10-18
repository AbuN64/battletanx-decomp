#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
#include "shared/bt_gfx.h"
#include "shared/bt_menu_render.h"

u8 func_800BFF68(void) {
    s32 temp_v0;

    temp_v0 = func_80096920(0, 0);
    if (temp_v0 & 0x40) {
        D_auto_80327D2C = 1;
    }
    D_auto_80327D2D = 0;
    if (temp_v0 & 0x10) {
        D_auto_80327D2D = 1;
    }
    return D_auto_80327D2C;
}

void func_800BFFC8(Gfx **list) {
    Gfx *gfx = *list;
    u64 now;
    f32 f;
    func_801054E0(4);
    now = (func_801120A0() * 1000000 / D_80145DA0);
    if (D_auto_80327C35) {
        D_auto_80327C35 = 0;
        D_auto_80327C38 = (func_801120A0() * 1000000 / D_80145DA0) + D_auto_80327C54;
        D_auto_80327C40 = (func_801120A0() * 1000000 / D_80145DA0) + 2000000;
        D_auto_80327C48 = (func_801120A0() * 1000000 / D_80145DA0) + (D_auto_80327C54 - 2000000);
        D_auto_80327C50 = 0;
    }
    if (now < D_auto_80327C38) {
        if (now <= D_auto_80327C40) {
            f = (f32)(D_auto_80327C40 - now) / 2000000.0f;
            f = 1.0f - f;
            D_auto_80327C50 = f * 255.0f;
        }
        if (now >= D_auto_80327C48) {
            f = (f32)(now - D_auto_80327C48) / 2000000.0f;
            f = 1.0f - f;
            D_auto_80327C50 = f * 255.0f;
        }
    }
    if (D_auto_80327C30 == 1) {
        func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        func_8010698C(&gfx);
        func_8010552C(0, 150);
        func_8010555C(200, 200, 200, D_auto_80327C50);
        switch (D_auto_80327C34) {
        case 0:
            if (now > D_auto_80327C38) {
                D_auto_80327C35 = 1;
                D_auto_80327C34 = 1;
                D_auto_80327C54 = 5000000;
            }
            func_80105D90(&gfx, D_auto_801334C0, 5, 12, 0, 320);
            break;
        case 1:
            if (now > D_auto_80327C38) {
                D_auto_80327C35 = 1;
                D_auto_80327C34 = 2;
                D_auto_80327C54 = 5000000;
            }
            func_80105D90(&gfx, D_auto_80133538, 3, 12, 0, 320);
            break;
        case 2:
            if (now > D_auto_80327C38) {
                D_auto_80327C35 = 1;
                D_auto_80327C34 = 3;
                D_auto_80327C54 = 5000000;
            }
            func_80105D90(&gfx, D_auto_80133594, 3, 12, 0, 320);
            break;
        case 3:
            if (now > D_auto_80327C38) {
                D_auto_80327C34 = 4;
            }
            func_80105D90(&gfx, D_auto_801335E8, 2, 12, 0, 320);
            break;
        }
    }
    *list = gfx;
}

INCLUDE_DATA("span_1000", D_800734F4);
INCLUDE_ASM("span_1000", func_800C082C);
