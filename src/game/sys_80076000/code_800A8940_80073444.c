#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
#include "shared/bt_gfx.h"
#include "shared/bt_menu_render.h"

u8 func_800BC448(void) {
    s32 temp_v0;

    temp_v0 = func_80096920(0, 0);
    if (temp_v0 & 0x40) {
        D_80327C0F = 1;
    }
    D_80327C10 = 0;
    if (temp_v0 & 0x10) {
        D_80327C10 = 1;
    }
    return D_80327C0F;
}

void func_800BC4A8(Gfx **list) {
    Gfx *gfx = *list;
    u64 now;
    f32 f;
    func_801054E0(4);
    now = (func_801120A0() * 1000000 / D_80145DA0);
    if (D_80327C12) {
        D_80327C12 = 0;
        D_80327BC8 = (func_801120A0() * 1000000 / D_80145DA0) + D_80327BE4;
        D_80327BD0 = (func_801120A0() * 1000000 / D_80145DA0) + 2000000;
        D_80327BD8 = (func_801120A0() * 1000000 / D_80145DA0) + (D_80327BE4 - 2000000);
        D_80327BE0 = 0;
    }
    if (now < D_80327BC8) {
        if (now <= D_80327BD0) {
            f = (f32)(D_80327BD0 - now) / 2000000.0f;
            f = 1.0f - f;
            D_80327BE0 = f * 255.0f;
        }
        if (now >= D_80327BD8) {
            f = (f32)(now - D_80327BD8) / 2000000.0f;
            f = 1.0f - f;
            D_80327BE0 = f * 255.0f;
        }
    }
    switch (D_80327B50) {
    case 0:
        func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        func_8010698C(&gfx);
        func_8010552C(0, 150);
        func_8010555C(200, 200, 200, D_80327BE0);
        switch (D_80327C11) {
        case 0:
            if (now > D_80327BC8) {
                D_80327C12 = 1;
                D_80327C11 = 1;
                D_80327BE4 = 5000000;
            }
            func_80105D90(&gfx, D_80132F00, 3, 12, 0, 320);
            break;
        case 1:
            if (now > D_80327BC8) {
                D_80327C12 = 1;
                D_80327C11 = 2;
                D_80327BE4 = 5000000;
            }
            func_80105D90(&gfx, D_80132F4C, 2, 12, 0, 320);
            break;
        case 2:
            if (now > D_80327BC8) {
                D_80327C11 = 3;
            }
            func_80105D90(&gfx, D_80132F80, 3, 12, 0, 320);
            break;
        }
        break;
    case 4:
        func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        func_8010698C(&gfx);
        func_8010552C(0, 150);
        func_8010555C(200, 200, 200, D_80327BE0);
        switch (D_80327C11) {
        case 0:
            if (now > D_80327BC8) {
                D_80327C12 = 1;
                D_80327C11 = 1;
                D_80327BE4 = 4000000;
            }
            func_80105D90(&gfx, D_801330C4, 1, 12, 0, 320);
            break;
        case 1:
            if (now > D_80327BC8) {
                D_80327C12 = 1;
                D_80327C11 = 2;
                D_80327BE4 = 5000000;
            }
            func_80105D90(&gfx, D_801330E4, 1, 12, 0, 320);
            break;
        case 2:
            if (now > D_80327BC8) {
                D_80327C11 = 3;
            }
            func_80105D90(&gfx, D_80133100, 2, 12, 0, 320);
            break;
        }
        break;
    case 6:
        func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        func_8010698C(&gfx);
        func_8010552C(0, 150);
        func_8010555C(200, 200, 200, D_80327BE0);
        func_80105D90(&gfx, D_80133220, 4, 12, 0, 320);
        break;
    case 8:
        func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        func_8010698C(&gfx);
        func_8010698C(&gfx);
        func_8010552C(0, 150);
        func_8010555C(200, 200, 200, D_80327BE0);
        switch (D_80327C11) {
        case 0:
            if (now > D_80327BC8) {
                D_80327C12 = 1;
                D_80327C11 = 1;
                D_80327BE4 = 5000000;
            }
            func_80105D90(&gfx, D_801332FC, 3, 12, 0, 320);
            break;
        case 1:
            if (now > D_80327BC8) {
                D_80327C12 = 1;
                D_80327C11 = 2;
            }
            func_80105D90(&gfx, D_80133360, 2, 12, 0, 320);
            break;
        }
        break;
    }
    *list = gfx;
}

INCLUDE_DATA("span_1000", D_80073464);
INCLUDE_ASM("span_1000", func_800BD19C);
