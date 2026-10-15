#include "game/sys_80076000.h"
#include "shared/bt_gfx.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
s32 func_80105D90(Gfx **, s32 *, s32, s32, s32, s32);
extern f32 D_auto_80073444;
extern f32 D_auto_80073448;
extern f32 D_auto_8007344C;
extern f32 D_auto_80073450;
extern f32 D_auto_80073454;
extern f32 D_auto_80073458;
extern f32 D_auto_8007345C;
extern f32 D_auto_80073460;
extern s32 D_auto_80132F00;
extern s32 D_auto_80132F4C;
extern s32 D_auto_80132F80;
extern s32 D_auto_801330C4;
extern s32 D_auto_801330E4;
extern s32 D_auto_80133100;
extern s32 D_auto_80133220;
extern s32 D_auto_801332FC;
extern s32 D_auto_80133360;
extern u64 D_auto_80327BC8;
extern u64 D_auto_80327BD0;
extern u64 D_auto_80327BD8;
extern u8 D_auto_80327BE0;
extern s32 D_auto_80327BE4;
extern u8 D_auto_80327C11;
extern u8 D_auto_80327C12;

void func_800BC4A8(Gfx **arg0) {
    u64 tmp64;
    Gfx *sp28;
    s32 *var_a1;
    s32 var_a2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 var_v1;
    s32 var_v1_2;
    u64 temp_s0;
    u64 temp_s0_2;
    u64 temp_ret_2;

    sp28 = *arg0;
    func_801054E0(4);
    temp_ret_2 = func_801120A0() * 1000000ULL / D_80145DA0;
    if (D_auto_80327C12 != 0) {
        D_auto_80327C12 = 0;
        D_auto_80327BC8 = func_801120A0() * 1000000ULL / D_80145DA0 + D_auto_80327BE4;
        D_auto_80327BD0 = func_801120A0() * 1000000ULL / D_80145DA0 + 0x1E8480ULL;
        tmp64 = func_801120A0() * 1000000ULL;
        D_auto_80327BE0 = 0;
        D_auto_80327BD8 = tmp64 / D_80145DA0 + (D_auto_80327BE4 - 2000000);
    }
    if (temp_ret_2 < D_auto_80327BC8) {
        if (D_auto_80327BD0 >= temp_ret_2) {
            temp_s0 = D_auto_80327BD0 - temp_ret_2;
            var_fv1 = (f32) temp_s0;
            temp_fv1 = (D_auto_80073448 - (var_fv1 / D_auto_80073444)) * D_auto_8007344C;
            if (D_auto_80073450 <= temp_fv1) {
                var_v1 = (s32) (temp_fv1 - D_auto_80073450) | 0x80000000;
            } else {
                var_v1 = (s32) temp_fv1;
            }
            D_auto_80327BE0 = (u8) var_v1;
        }
        if (temp_ret_2 >= D_auto_80327BD8) {
            temp_s0_2 = temp_ret_2 - D_auto_80327BD8;
            var_fv1_2 = (f32) temp_s0_2;
            temp_fv1_2 = (D_auto_80073458 - (var_fv1_2 / D_auto_80073454)) * D_auto_8007345C;
            if (D_auto_80073460 <= temp_fv1_2) {
                var_v1_2 = (s32) (temp_fv1_2 - D_auto_80073460) | 0x80000000;
            } else {
                var_v1_2 = (s32) temp_fv1_2;
            }
            D_auto_80327BE0 = (u8) var_v1_2;
        }
    }
    switch (D_auto_80327B50) {                      /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_800F4DFC(&sp28, 0, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0, 0x140, 0x13, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0x86, 0x140, 0x86, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0x11E, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_8010698C(&sp28);
        func_8010552C(0, 0x96);
        func_8010555C(0xC8, 0xC8, 0xC8, (s32) D_auto_80327BE0);
        switch (D_auto_80327C11) {                  /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (D_auto_80327BC8 < temp_ret_2) {
                D_auto_80327C12 = 1;
                D_auto_80327C11 = 1;
                D_auto_80327BE4 = 0x4C4B40;
            }
            var_a1 = &D_auto_80132F00;
            var_a2 = 3;
block_99:
            func_80105D90(&sp28, var_a1, var_a2, 0xC, 0, 0x140);
            break;
        case 1:                                     /* switch 2 */
            if (D_auto_80327BC8 < temp_ret_2) {
                D_auto_80327C12 = 1;
                D_auto_80327C11 = 2;
                D_auto_80327BE4 = 0x4C4B40;
            }
            var_a1 = &D_auto_80132F4C;
block_98:
            var_a2 = 2;
            goto block_99;
        case 2:                                     /* switch 2 */
            if (D_auto_80327BC8 < temp_ret_2) {
                D_auto_80327C11 = 3;
            }
            var_a1 = &D_auto_80132F80;
            var_a2 = 3;
            goto block_99;
        }
        break;
    case 4:                                         /* switch 1 */
        func_800F4DFC(&sp28, 0, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0, 0x140, 0x13, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0x86, 0x140, 0x86, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0x11E, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_8010698C(&sp28);
        func_8010552C(0, 0x96);
        func_8010555C(0xC8, 0xC8, 0xC8, (s32) D_auto_80327BE0);
        switch (D_auto_80327C11) {                  /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            if (D_auto_80327BC8 < temp_ret_2) {
                D_auto_80327C12 = 1;
                D_auto_80327C11 = 1;
                D_auto_80327BE4 = 0x3D0900;
            }
            var_a1 = &D_auto_801330C4;
            var_a2 = 1;
            goto block_99;
        case 1:                                     /* switch 3 */
            if (D_auto_80327BC8 < temp_ret_2) {
                D_auto_80327C12 = 1;
                D_auto_80327C11 = 2;
                D_auto_80327BE4 = 0x4C4B40;
            }
            var_a1 = &D_auto_801330E4;
            var_a2 = 1;
            goto block_99;
        case 2:                                     /* switch 3 */
            if (D_auto_80327BC8 < temp_ret_2) {
                D_auto_80327C11 = 3;
            }
            var_a1 = &D_auto_80133100;
            goto block_98;
        }
        break;
    case 6:                                         /* switch 1 */
        func_800F4DFC(&sp28, 0, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0, 0x140, 0x13, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0x86, 0x140, 0x86, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0x11E, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_8010698C(&sp28);
        func_8010552C(0, 0x96);
        func_8010555C(0xC8, 0xC8, 0xC8, (s32) D_auto_80327BE0);
        var_a1 = &D_auto_80133220;
        var_a2 = 4;
        goto block_99;
    case 8:                                         /* switch 1 */
        func_800F4DFC(&sp28, 0, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0, 0x140, 0x13, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0x86, 0x140, 0x86, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0x11E, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_8010698C(&sp28);
        func_8010698C(&sp28);
        func_8010552C(0, 0x96);
        func_8010555C(0xC8, 0xC8, 0xC8, (s32) D_auto_80327BE0);
        switch (D_auto_80327C11) {                  /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            if (D_auto_80327BC8 < temp_ret_2) {
                D_auto_80327C12 = 1;
                D_auto_80327C11 = 1;
                D_auto_80327BE4 = 0x4C4B40;
            }
            var_a1 = &D_auto_801332FC;
            var_a2 = 3;
            goto block_99;
        case 1:                                     /* switch 4 */
            if (D_auto_80327BC8 < temp_ret_2) {
                D_auto_80327C12 = 1;
                D_auto_80327C11 = 2;
            }
            var_a1 = &D_auto_80133360;
            goto block_98;
        }
        break;
    }
    *arg0 = sp28;
}
