#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
void func_800ABF70(void);
extern s32 D_auto_801352B0;
extern s32 D_auto_8013566C;
extern s32 D_auto_80135674;
extern s32 D_auto_80327614;
extern s32 D_auto_80328410;

int func_800DAC4C(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    temp_v0 = func_80096920(0, 0);
    temp_v1 = D_auto_80327614 ^ (temp_v0 & 0x80);
    D_auto_80327614 = temp_v1;
    var_v0 = 0;
    if (temp_v1 == 0) {
        var_s2 = 0;
        var_s0 = 0;
        if (temp_v0 & 2) {
            var_s0 = -1;
            func_800ABF70();
        }
        if (temp_v0 & 4) {
            var_s0 += 1;
            func_800ABF70();
        }
        var_v1 = D_auto_8013566C + var_s0;
        D_auto_8013566C = var_v1;
        if (var_v1 < 0) {
            var_v1 = D_auto_80328410 - 1;
        }
        D_auto_8013566C = var_v1;
        temp_v1_2 = var_v1 & -(var_v1 < D_auto_80328410);
        D_auto_8013566C = temp_v1_2;
        var_v0_2 = temp_v0 & 0x20;
        if (temp_v0 & 0x50) {
            var_s2 = 1;
            D_auto_80135674 = (s32) *(&D_auto_801352B0 + temp_v1_2);
            var_v0_2 = temp_v0 & 0x20;
        }
        if (var_v0_2 != 0) {
            var_s2 = 2;
        }
        var_v0 = var_s2;
    }
    return var_v0;
}
