#include "game/sys_80076000.h"
#include "shared/bt_gfx.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
s32 func_80105D90(Gfx **, s32 *, s32, s32, s32, s32);
extern f32 D_auto_80073574;
extern f32 D_auto_80073578;
extern f32 D_auto_8007357C;
extern f32 D_auto_80073580;
extern f32 D_auto_80073584;
extern f32 D_auto_80073588;
extern f32 D_auto_8007358C;
extern f32 D_auto_80073590;
extern s32 D_auto_80133C38;
extern s32 D_auto_80133CAC;
extern u8 D_auto_80327D41;
extern u8 D_auto_80327D42;
extern u64 D_auto_80327D48;
extern u64 D_auto_80327D50;
extern u64 D_auto_80327D58;
extern u8 D_auto_80327D60;
extern s32 D_auto_80327D64;

void func_800C3730(Gfx **arg0) {
    u64 tmp64;
    Gfx *sp28;
    s32 *var_a1;
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
    if (D_auto_80327D42 != 0) {
        D_auto_80327D42 = 0;
        D_auto_80327D48 = func_801120A0() * 1000000ULL / D_80145DA0 + D_auto_80327D64;
        D_auto_80327D50 = func_801120A0() * 1000000ULL / D_80145DA0 + 0x1E8480ULL;
        tmp64 = func_801120A0() * 1000000ULL;
        D_auto_80327D60 = 0;
        D_auto_80327D58 = tmp64 / D_80145DA0 + (D_auto_80327D64 - 2000000);
    }
    if (temp_ret_2 < D_auto_80327D48) {
        if (D_auto_80327D50 >= temp_ret_2) {
            temp_s0 = D_auto_80327D50 - temp_ret_2;
            var_fv1 = (f32) temp_s0;
            temp_fv1 = (D_auto_80073578 - (var_fv1 / D_auto_80073574)) * D_auto_8007357C;
            if (D_auto_80073580 <= temp_fv1) {
                var_v1 = (s32) (temp_fv1 - D_auto_80073580) | 0x80000000;
            } else {
                var_v1 = (s32) temp_fv1;
            }
            D_auto_80327D60 = (u8) var_v1;
        }
        if (temp_ret_2 >= D_auto_80327D58) {
            temp_s0_2 = temp_ret_2 - D_auto_80327D58;
            var_fv1_2 = (f32) temp_s0_2;
            temp_fv1_2 = (D_auto_80073588 - (var_fv1_2 / D_auto_80073584)) * D_auto_8007358C;
            if (D_auto_80073590 <= temp_fv1_2) {
                var_v1_2 = (s32) (temp_fv1_2 - D_auto_80073590) | 0x80000000;
            } else {
                var_v1_2 = (s32) temp_fv1_2;
            }
            D_auto_80327D60 = (u8) var_v1_2;
        }
    }
    if (D_auto_80327D40 == 5) {
        func_800F4DFC(&sp28, 0, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0, 0x140, 0x13, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0, 0x86, 0x140, 0x86, 0, 0, 0, 0xFF);
        func_800F4DFC(&sp28, 0x11E, 0, 0x22, 0xF0, 0, 0, 0, 0xFF);
        func_8010698C(&sp28);
        func_8010552C(0, 0x96);
        func_8010555C(0xC8, 0xC8, 0xC8, (s32) D_auto_80327D60);
        switch (D_auto_80327D41) {                  /* irregular */
        case 0:
            if (D_auto_80327D48 < temp_ret_2) {
                D_auto_80327D42 = 1;
                D_auto_80327D41 = 1;
                D_auto_80327D64 = 0x989680;
            }
            var_a1 = &D_auto_80133C38;
block_43:
            func_80105D90(&sp28, var_a1, 4, 0xC, 0, 0x140);
            break;
        case 1:
            if (D_auto_80327D48 < temp_ret_2) {
                D_auto_80327D42 = 1;
                D_auto_80327D41 = 2;
            }
            var_a1 = &D_auto_80133CAC;
            goto block_43;
        }
    }
    *arg0 = sp28;
}
