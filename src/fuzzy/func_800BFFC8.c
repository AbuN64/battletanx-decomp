#include "game/sys_80076000.h"
#include "shared/bt_gfx.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
s32 func_80105D90(Gfx **, s32 *, s32, s32, s32, s32);
extern f32 D_auto_800734D4;
extern f32 D_auto_800734D8;
extern f32 D_auto_800734DC;
extern f32 D_auto_800734E0;
extern f32 D_auto_800734E4;
extern f32 D_auto_800734E8;
extern f32 D_auto_800734EC;
extern f32 D_auto_800734F0;
extern s32 D_auto_801334C0;
extern s32 D_auto_80133538;
extern s32 D_auto_80133594;
extern s32 D_auto_801335E8;
extern u8 D_auto_80327C34;
extern u8 D_auto_80327C35;
extern u64 D_auto_80327C38;
extern u64 D_auto_80327C40;
extern u64 D_auto_80327C48;
extern u8 D_auto_80327C50;
extern s32 D_auto_80327C54;

void func_800BFFC8(Gfx **arg0) {
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
    u8 temp_s4;

    sp28 = *arg0;
    func_801054E0(4);
    temp_ret_2 = func_801120A0() * 1000000ULL / D_80145DA0;
    if (D_auto_80327C35 != 0) {
        D_auto_80327C35 = 0;
        D_auto_80327C38 = func_801120A0() * 1000000ULL / D_80145DA0 + D_auto_80327C54;
        D_auto_80327C40 = func_801120A0() * 1000000ULL / D_80145DA0 + 0x1E8480ULL;
        tmp64 = func_801120A0() * 1000000ULL;
        D_auto_80327C50 = 0;
        D_auto_80327C48 = tmp64 / D_80145DA0 + (D_auto_80327C54 - 2000000);
    }
    if (temp_ret_2 < D_auto_80327C38) {
        if (D_auto_80327C40 >= temp_ret_2) {
            temp_s0 = D_auto_80327C40 - temp_ret_2;
            var_fv1 = (f32) temp_s0;
            temp_fv1 = (D_auto_800734D8 - (var_fv1 / D_auto_800734D4)) * D_auto_800734DC;
            if (D_auto_800734E0 <= temp_fv1) {
                var_v1 = (s32) (temp_fv1 - D_auto_800734E0) | 0x80000000;
            } else {
                var_v1 = (s32) temp_fv1;
            }
            D_auto_80327C50 = (u8) var_v1;
        }
        if (temp_ret_2 >= D_auto_80327C48) {
            temp_s0_2 = temp_ret_2 - D_auto_80327C48;
            var_fv1_2 = (f32) temp_s0_2;
            temp_fv1_2 = (D_auto_800734E8 - (var_fv1_2 / D_auto_800734E4)) * D_auto_800734EC;
            if (D_auto_800734F0 <= temp_fv1_2) {
                var_v1_2 = (s32) (temp_fv1_2 - D_auto_800734F0) | 0x80000000;
            } else {
                var_v1_2 = (s32) temp_fv1_2;
            }
            D_auto_80327C50 = (u8) var_v1_2;
        }
    }
    temp_s4 = D_auto_80327C30;
    if (temp_s4 == 1) {
        func_800F4DFC(&sp28, 0, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0, 0x140, 0x13, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0x86, 0x140, 0x86, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0x11E, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_8010698C(&sp28);
        func_8010552C(0, 0x96);
        func_8010555C(0xC8, 0xC8, 0xC8, (s32) D_auto_80327C50);
        if (D_auto_80327C34 != temp_s4) {
            switch ((s32) D_auto_80327C34) {        /* irregular */
            case 0:
                if (D_auto_80327C38 < temp_ret_2) {
                    D_auto_80327C35 = 1;
                    D_auto_80327C34 = 1;
                    D_auto_80327C54 = 0x4C4B40;
                }
                var_a1 = &D_auto_801334C0;
                var_a2 = 5;
                goto block_59;
            case 2:
                if (D_auto_80327C38 < temp_ret_2) {
                    D_auto_80327C35 = 1;
                    D_auto_80327C34 = 3;
                    D_auto_80327C54 = 0x4C4B40;
                }
                var_a1 = &D_auto_80133594;
                var_a2 = 3;
                goto block_59;
            case 3:
                if (D_auto_80327C38 < temp_ret_2) {
                    D_auto_80327C34 = 4;
                }
                var_a1 = &D_auto_801335E8;
                var_a2 = 2;
                goto block_59;
            }
        } else {
            if (D_auto_80327C38 < temp_ret_2) {
                D_auto_80327C35 = 1;
                D_auto_80327C34 = 2;
                D_auto_80327C54 = 0x4C4B40;
            }
            var_a1 = &D_auto_80133538;
            var_a2 = 3;
block_59:
            func_80105D90(&sp28, var_a1, var_a2, 0xC, 0, 0x140);
        }
    }
    *arg0 = sp28;
}
