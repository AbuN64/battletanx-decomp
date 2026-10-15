#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_span_1000_code_8007963C.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
void func_800ABF40(void);
void func_800ABF70(void);
extern s32 D_auto_80125790;
extern s32 D_auto_80134E60;
extern u8 D_auto_80134E64;
extern u8 D_auto_80134E65;
extern u8 D_auto_80134E66;
extern u8 D_auto_80134E67;
extern u8 D_auto_80134E69;
extern s32 D_auto_80327614;

s32 func_800CE214(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_v0_5;

    temp_v0 = func_80096920(0, 0);
    temp_v1 = D_auto_80327614 ^ (temp_v0 & 0x80);
    D_auto_80327614 = temp_v1;
    var_v0 = 0;
    if (temp_v1 == 0) {
        var_s2 = 0;
        var_s0 = 0;
        if (temp_v0 & 1) {
            var_s0 = -1;
            func_800ABF40();
        }
        if (temp_v0 & 8) {
            var_s0 += 1;
            func_800ABF40();
        }
        temp_v0_2 = D_auto_80134E60 + var_s0;
        D_auto_80134E60 = temp_v0_2;
        if (temp_v0_2 < 0) {
            D_auto_80134E60 = 7;
        }
        if (D_auto_80134E60 >= 8) {
            D_auto_80134E60 = 0;
        }
        var_s0_2 = 0;
        if (temp_v0 & 2) {
            var_s0_2 = -1;
            func_800ABF70();
        }
        if (temp_v0 & 4) {
            var_s0_2 += 1;
            func_800ABF70();
        }
        switch (D_auto_80134E60) {
        case 0:
            temp_v0_3 = D_auto_80125790 + var_s0_2;
            temp_v1_2 = temp_v0_3 & ((s32) ~temp_v0_3 >> 0x1F);
            D_auto_80125790 = temp_v1_2;
            var_a0 = 7;
            if (temp_v1_2 < 8) {
                var_a0 = temp_v1_2;
            }
            D_auto_80125790 = var_a0;
            func_800799C0((var_a0 << 0xC) & 0xF000);
            var_v0_2 = temp_v0 & 0x20;
            break;
        case 1:
            temp_v0_4 = D_80125794 + var_s0_2;
            temp_v1_3 = temp_v0_4 & ((s32) ~temp_v0_4 >> 0x1F);
            D_80125794 = temp_v1_3;
            var_a0_2 = 7;
            if (temp_v1_3 < 8) {
                var_a0_2 = temp_v1_3;
            }
            D_80125794 = var_a0_2;
            func_80079BF4((s32) (s16) (var_a0_2 << 0xC));
            var_v0_2 = temp_v0 & 0x20;
            break;
        case 2:
            temp_v0_5 = D_auto_80134E64 + var_s0_2;
            D_auto_80134E64 = temp_v0_5;
            if ((temp_v0_5 & 0xFF) == 0xFF) {
                D_auto_80134E64 = 2;
            }
            var_v0_2 = temp_v0 & 0x20;
            if ((u8) D_auto_80134E64 >= 3U) {
                D_auto_80134E64 = 0;
            default:
block_31:
                var_v0_2 = temp_v0 & 0x20;
            }
            break;
        case 3:
            D_auto_80134E65 = (D_auto_80134E65 + var_s0_2) & 1;
            var_v0_2 = temp_v0 & 0x20;
            break;
        case 4:
            D_auto_80134E66 = (D_auto_80134E66 + var_s0_2) & 1;
            var_v0_2 = temp_v0 & 0x20;
            break;
        case 5:
            D_auto_80134E67 = (D_auto_80134E67 + var_s0_2) & 1;
            var_v0_2 = temp_v0 & 0x20;
            break;
        case 6:
            D_auto_80134E69 = (D_auto_80134E69 + var_s0_2) & 1;
            var_v0_2 = temp_v0 & 0x20;
            break;
        case 7:
            if (temp_v0 & 0x54) {
                var_s2 = 2;
            }
            goto block_31;
        }
        if (var_v0_2 != 0) {
            var_s2 = 1;
        }
        var_v0 = var_s2;
    }
    return var_v0;
}
