#include "shared/bt_types.h"
#include "shared/bt_gfx.h"

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"




void func_800C3730(Gfx **list) {
    Gfx *gfx = *list;
    u64 now;
    f32 f;
    func_801054E0(4);
    now = (func_801120A0() * 1000000 / D_80145DA0);
    if (D_auto_80327D42) {
        D_auto_80327D42 = 0;
        D_auto_80327D48 = (func_801120A0() * 1000000 / D_80145DA0) + D_auto_80327D64;
        D_auto_80327D50 = (func_801120A0() * 1000000 / D_80145DA0) + 2000000;
        D_auto_80327D58 = (func_801120A0() * 1000000 / D_80145DA0) + (D_auto_80327D64 - 2000000);
        D_auto_80327D60 = 0;
    }
    if (now < D_auto_80327D48) {
        if (now <= D_auto_80327D50) {
            f = (f32)(D_auto_80327D50 - now) / 2000000.0f;
            f = 1.0f - f;
            D_auto_80327D60 = f * 255.0f;
        }
        if (now >= D_auto_80327D58) {
            f = (f32)(now - D_auto_80327D58) / 2000000.0f;
            f = 1.0f - f;
            D_auto_80327D60 = f * 255.0f;
        }
    }
    if (D_auto_80327D40 == 5) {
        func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        func_8010698C(&gfx);
        func_8010552C(0, 150);
        func_8010555C(200, 200, 200, D_auto_80327D60);
        switch (D_auto_80327D41) {
        case 0:
            if (now > D_auto_80327D48) {
                D_auto_80327D42 = 1;
                D_auto_80327D41 = 1;
                D_auto_80327D64 = 10000000;
            }
            func_80105D90(&gfx, D_auto_80133C38, 4, 12, 0, 320);
            break;
        case 1:
            if (now > D_auto_80327D48) {
                D_auto_80327D42 = 1;
                D_auto_80327D41 = 2;
            }
            func_80105D90(&gfx, D_auto_80133CAC, 4, 12, 0, 320);
            break;
        }
    }
    *list = gfx;
}
