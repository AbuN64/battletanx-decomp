#include "shared/bt_types.h"
extern u16 D_auto_802C13E0;
extern u16 D_auto_802C13E2;
extern u16 D_auto_802C13F4;
extern u16 D_auto_802C13F6;
extern u16 D_auto_802C3A28;
extern s32 D_auto_802C3A30;

void func_8008B080(void) {
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;

    var_v0 = (s16) D_auto_802C13E0;
    if ((s16) D_auto_802C13E0 != -1) {
        var_v1 = var_v0 * 8;
        do {
            var_v0 = (s16) *(&D_auto_802C3A30 + ((var_v1 + var_v0) * 8));
            var_v1 = var_v0 * 8;
        } while (var_v0 != -1);
    }
    var_v0_2 = (s16) D_auto_802C13F4;
    if ((s16) D_auto_802C13F4 != -1) {
        var_v1_2 = var_v0_2 * 8;
        do {
            var_v0_2 = (s16) *(&D_auto_802C3A30 + ((var_v1_2 + var_v0_2) * 8));
            var_v1_2 = var_v0_2 * 8;
        } while (var_v0_2 != -1);
    }
    var_v0_3 = (s16) D_auto_802C13E2;
    if ((s16) D_auto_802C13E2 != -1) {
        var_v1_3 = var_v0_3 * 8;
        do {
            var_v0_3 = (s16) *(&D_auto_802C3A30 + ((var_v1_3 + var_v0_3) * 8));
            var_v1_3 = var_v0_3 * 8;
        } while (var_v0_3 != -1);
    }
    var_v0_4 = (s16) D_auto_802C3A28;
    if ((s16) D_auto_802C3A28 != -1) {
        var_v1_4 = var_v0_4 * 8;
        do {
            var_v0_4 = (s16) *(&D_auto_802C3A30 + ((var_v1_4 + var_v0_4) * 8));
            var_v1_4 = var_v0_4 * 8;
        } while (var_v0_4 != -1);
    }
    var_v0_5 = (s16) D_auto_802C13F6;
    if ((s16) D_auto_802C13F6 != -1) {
        var_v1_5 = var_v0_5 * 8;
        do {
            var_v0_5 = (s16) *(&D_auto_802C3A30 + ((var_v1_5 + var_v0_5) * 8));
            var_v1_5 = var_v0_5 * 8;
        } while (var_v0_5 != -1);
    }
}
