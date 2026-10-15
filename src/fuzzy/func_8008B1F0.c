#include "shared/bt_types.h"
extern s16 D_auto_802C13E2;
extern u16 D_auto_802C13F4;
extern s16 D_auto_802C13F6;
extern u16 D_auto_802C3A28;
extern s32 D_auto_802C3A30;

void func_8008B1F0(void) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 var_a1;
    s16 var_a1_2;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_v0;
    u16 temp_v0_2;

    var_a1 = D_auto_802C13E2;
    if (D_auto_802C13E2 != -1) {
        do {
            temp_v1 = var_a1 * 0x48;
            temp_a0 = *(&D_auto_802C3A30 + temp_v1);
            temp_v0 = D_auto_802C13F4;
            D_auto_802C13F4 = (u16) var_a1;
            *(&D_auto_802C3A30 + temp_v1) = temp_v0;
            D_auto_802C13E2 = temp_a0;
            var_a1 = temp_a0;
        } while (temp_a0 != -1);
    }
    var_a1_2 = D_auto_802C13F6;
    if (D_auto_802C13F6 != -1) {
        do {
            temp_v1_2 = var_a1_2 * 0x48;
            temp_a0_2 = *(&D_auto_802C3A30 + temp_v1_2);
            temp_v0_2 = D_auto_802C3A28;
            D_auto_802C3A28 = (u16) var_a1_2;
            *(&D_auto_802C3A30 + temp_v1_2) = temp_v0_2;
            D_auto_802C13F6 = temp_a0_2;
            var_a1_2 = temp_a0_2;
        } while (temp_a0_2 != -1);
    }
}
