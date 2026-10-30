#include "include_asm.h"

#include "shared/bt_span_1000_code_800ABFD0.h"
#include <ultra64.h>
#include "shared/audio_callbacks.h"
#include "shared/bt_menu_render.h"
#include "span_1000/code_800ABFD0.h"
#include "game/sys_80076000.h"




                         /* extern */
                /* extern */

/* Updates controller button state and consumes a pending event. */
u8 func_800B8750(void) {
    s32 temp_v0;

    temp_v0 = func_80096920(0, 0);
    if (temp_v0 & 0x40) {
        D_80327B20 = 1;
    }
    if (temp_v0 & 0x20) {
        D_80327B20 = 2;
    }
    D_80327B21 = 0;
    if (temp_v0 & 0x10) {
        D_80327B21 = 1;
    }
    if ((temp_v0 != 0) && (D_80327B34 != -1)) {
        func_800798C0(D_80327B34);
        D_80327B34 = -1;
    }
    return D_80327B20;
}

                                                  /* size = 0x10 */

void func_800B87F4(void) {
    s32 unused[4];
}

void func_800B8804(Gfx **list) {
    Gfx *gfx;
    u64 now;
    u64 t;
    f32 f;
    s32 n;
    if (D_80327B44) {
        if (D_80327B34 != -1) {
            func_800798C0(D_80327B34);
            D_80327B34 = -1;
        }
    }
    gfx = *list;
    func_801054E0(4);
    switch (D_803276E0) {
    case 4:
    func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
    func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
    func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
    func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        if (D_80327B22) {
            D_803277A0 = (osGetTime() * 1000000 / D_80145DA0);
            D_803277D0 = func_800B9C0C(D_801324CC);
            D_803277D4 = func_800B9C0C(D_8013250C);
            D_803277D8 = func_800B9C0C(D_8013259C);
            D_80327B22 = 0;
            D_80327B34 = func_800B9C34(36, 0x7000);
        }
        D_80327B28 = (osGetTime() * 1000000 / D_80145DA0) - D_803277A0;
        D_80327B30 = (f32)D_80327B28 / 66666.0f;
        func_8010698C(&gfx);
        func_8010555C(200, 200, 200, 255);
        func_8010552C(34, 150);
        switch (D_803277DC) {
        case 0:
            n = D_803277D0;
            if (D_80327B30 < n) {
                n = D_80327B30;
            }
            D_80327B30 = n;
            if (D_80327B30 == D_803277D0) {
                D_803277DC = 1;
                D_80327B22 = 1;
                func_800798C0(D_80327B34);
                D_80327B34 = -1;
            }
            D_80327B30 = (D_80327B30 > 0) ? D_80327B30 : 1;
            func_80105C68(&gfx, D_801324CC, 2, 12, D_80327B30);
            break;
        case 1:
            n = D_803277D4;
            if (D_80327B30 < n) {
                n = D_80327B30;
            }
            D_80327B30 = n;
            if (D_80327B30 == D_803277D4) {
                D_803277DC = 2;
                D_80327B22 = 1;
                func_800798C0(D_80327B34);
                D_80327B34 = -1;
            }
            D_80327B30 = (D_80327B30 > 0) ? D_80327B30 : 1;
            func_80105C68(&gfx, D_8013250C, 5, 12, D_80327B30);
            break;
        case 2:
            n = D_803277D8;
            if (D_80327B30 < n) {
                n = D_80327B30;
            }
            D_80327B30 = n;
            if (n <= 0) {
                n = 1;
            }
            D_80327B30 = n;
            if (D_80327B30 == D_803277D8) {
                func_800798C0(D_80327B34);
                D_80327B34 = -1;
            }
            func_80105C68(&gfx, D_8013259C, 5, 12, D_80327B30);
            break;
        }
        break;
    case 9:
    func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
    func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
    func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
    func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        if (D_80327B23) {
            D_803278C0 = (osGetTime() * 1000000 / D_80145DA0);
            D_803278C8 = func_800B9C0C(D_80132AC8);
            D_803278CC = func_800B9C0C(D_80132B04);
            D_803278D0 = func_800B9C0C(D_80132BB0);
            D_803278D4 = func_800B9C0C(D_80132C30);
            D_80327B23 = 0;
            D_80327B34 = func_800B9C34(36, 0x7000);
        }
        D_80327B28 = (osGetTime() * 1000000 / D_80145DA0) - D_803278C0;
        D_80327B30 = (f32)D_80327B28 / 66666.0f;
        func_8010698C(&gfx);
        func_8010552C(34, 150);
        switch (D_803278D8) {
        case 0:
            n = D_803278C8;
            if (D_80327B30 < n) {
                n = D_80327B30;
            }
            D_80327B30 = n;
            if (D_80327B30 == D_803278C8) {
                D_803278D8 = 1;
                D_80327B23 = 1;
                func_800798C0(D_80327B34);
                D_80327B34 = -1;
            }
            D_80327B30 = (D_80327B30 > 0) ? D_80327B30 : 1;
            func_80105C68(&gfx, D_80132AC8, 2, 12, D_80327B30);
            break;
        case 1:
            n = D_803278CC;
            if (D_80327B30 < n) {
                n = D_80327B30;
            }
            D_80327B30 = n;
            if (D_80327B30 == D_803278CC) {
                D_803278D8 = 2;
                D_80327B23 = 1;
                func_800798C0(D_80327B34);
                D_80327B34 = -1;
            }
            D_80327B30 = (D_80327B30 > 0) ? D_80327B30 : 1;
            func_80105C68(&gfx, D_80132B04, 5, 12, D_80327B30);
            break;
        case 2:
            n = D_803278D0;
            if (D_80327B30 < n) {
                n = D_80327B30;
            }
            D_80327B30 = n;
            if (D_80327B30 == D_803278D0) {
                D_803278D8 = 3;
                D_80327B23 = 1;
                func_800798C0(D_80327B34);
                D_80327B34 = -1;
            }
            D_80327B30 = (D_80327B30 > 0) ? D_80327B30 : 1;
            func_80105C68(&gfx, D_80132BB0, 4, 12, D_80327B30);
            break;
        case 3:
            n = D_803278D4;
            if (D_80327B30 < n) {
                n = D_80327B30;
            }
            D_80327B30 = n;
            if (n <= 0) {
                n = 1;
            }
            D_80327B30 = n;
            if (D_80327B30 == D_803278D4) {
                func_800798C0(D_80327B34);
                D_80327B34 = -1;
            }
            func_80105C68(&gfx, D_80132C30, 4, 12, D_80327B30);
            break;
        }
        break;
    case 14:
    func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
    func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
    func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
    func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        now = (osGetTime() * 1000000 / D_80145DA0);
        if (D_80327B24) {
            D_80327A30 = (osGetTime() * 1000000 / D_80145DA0) + D_80327A38;
            D_80327A40 = (osGetTime() * 1000000 / D_80145DA0) + 2000000;
            t = (osGetTime() * 1000000 / D_80145DA0) - 2000000;
            D_80327A48 = t + D_80327A38;
            D_80327B24 = 0;
            D_80327A54 = 0;
        }
        now = (osGetTime() * 1000000 / D_80145DA0);
        func_8010698C(&gfx);
        func_8010552C(34, 150);
        if (now < D_80327A30) {
            if (now <= D_80327A40) {
                D_80327B28 = D_80327A40 - now;
                f = (f32)D_80327B28 / 2000000.0f;
                f = 1.0f - f;
                D_80327A54 = f * 255.0f;
            }
            if (now >= D_80327A48) {
                D_80327B28 = now - D_80327A48;
                f = (f32)D_80327B28 / 2000000.0f;
                f = 1.0f - f;
                D_80327A54 = f * 255.0f;
            }
        }
        func_8010555C(200, 200, 200, D_80327A54);
        switch (D_80327A50) {
        case 0:
            if (now > D_80327A30) {
                D_80327A50 = 1;
                D_80327B24 = 1;
                D_80327A38 = 6000000;
            }
            func_80105D90(&gfx, D_801327EC, 2, 12, 0, 320);
            break;
        case 1:
            if (now > D_80327A30) {
                D_80327A50 = 2;
                D_80327B24 = 1;
                D_80327A38 = 7000000;
            }
            func_80105D90(&gfx, D_8013281C, 2, 12, 0, 320);
            break;
        case 2:
            if (now > D_80327A30) {
                D_80327A50 = 3;
                D_80327B24 = 1;
                D_80327A38 = 10000000;
            }
            func_80105D90(&gfx, D_8013285C, 4, 12, 0, 320);
            break;
        case 3:
            if (now > D_80327A30) {
                D_80327A50 = 4;
                D_80327B24 = 1;
                D_80327A38 = 7000000;
            }
            func_80105D90(&gfx, D_801328D8, 5, 12, 0, 320);
            break;
        case 4:
            if (now > D_80327A30) {
                D_80327A50 = 5;
            }
            func_80105D90(&gfx, D_8013297C, 1, 12, 0, 320);
            break;
        }
        break;
    }
    *list = gfx;
}

INCLUDE_DATA("span_1000", D_800733F4);
