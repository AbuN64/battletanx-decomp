#include "shared/bt_types.h"
#include "span_1000/code_80077930.h"
extern s16 D_auto_803B75B0;
extern s16 D_auto_803B8230;
extern s32 D_auto_803B8234;
extern s32 D_auto_803B8238;
extern s32 D_auto_803B823C;
extern s32 D_auto_803B8240;
extern s32 D_auto_803B8248;
extern s32 D_auto_803B824A;
extern s16 D_auto_803B824C;
extern s32 D_auto_803B8266;
extern s32 D_auto_803B8268;
extern s32 D_auto_803B826A;
extern s32 D_auto_803B826C;
extern s16 D_auto_803C4D42;

int func_80106B60(s32 arg0, s32 arg1) {
    s16 *var_v1_2;
    s16 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v1;
    u16 var_a1_2;
    u32 var_a1;
    u32 var_a1_3;

    func_80110C00(&D_auto_803B8248, 0xCB20);
    var_a1 = 0;
    var_v1 = 0;
    do {
        *(&D_auto_803B8266 + var_v1) = -1;
        *(&D_auto_803B8268 + var_v1) = -1;
        *(&D_auto_803B826A + var_v1) = -1;
        *(&D_auto_803B826C + var_v1) = -1;
        var_a1 += 1;
        var_v1 += 0x28;
    } while (var_a1 < 0x514U);
    var_a1_2 = 0;
    var_v0 = 0 * 4;
    do {
        temp_v0 = var_v0 + var_a1_2;
        temp_a0 = var_a1_2 - 1;
        var_a1_2 += 1;
        temp_v0_2 = temp_v0 * 8;
        *(&D_auto_803B824A + temp_v0_2) = var_a1_2;
        *(&D_auto_803B824C + temp_v0_2) = temp_a0;
        var_v0 = var_a1_2 * 4;
    } while (var_a1_2 < 0x513U);
    var_a1_3 = 0;
    var_v1_2 = &D_auto_803B75B0;
    D_auto_803C4D42 = -1;
    D_auto_803B824C = -1;
    D_auto_803B8240 = -1;
    D_auto_803B8238 = arg0 + 0x1F4;
    D_auto_803B8234 = 0;
    D_auto_803B823C = arg1 + 0x1F4;
    do {
        *var_v1_2 = -1;
        var_a1_3 += 1;
        var_v1_2 += 2;
    } while (var_a1_3 < 0x640U);
    D_auto_803B8230 = -1;
}
