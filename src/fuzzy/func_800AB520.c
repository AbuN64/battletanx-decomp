#include "shared/bt_types.h"
extern u16 D_auto_80132298;
extern s32 D_auto_8013229C;
extern u16 D_auto_801322BC;
extern s32 D_auto_801322C0;
extern u16 D_auto_801322CC;
extern s32 D_auto_801322D0;
extern u16 D_auto_801322F0;
extern s32 D_auto_801322F4;

int func_800AB520(s32 arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    switch (arg0) {                                 /* irregular */
    case 1:
        if ((u32) (var_a1 & 0xFFFF) >= (u16) D_auto_801322F0) {
            var_a1 = D_auto_801322F0 - 1;
        }
        return *(&D_auto_801322F4 + ((var_a1 & 0xFFFF) * 4));
    case 0:
        if ((u32) (var_a1 & 0xFFFF) >= (u16) D_auto_80132298) {
            var_a1 = D_auto_80132298 - 1;
        }
        return *(&D_auto_8013229C + ((var_a1 & 0xFFFF) * 4));
    case 2:
        if ((u32) (var_a1 & 0xFFFF) >= (u16) D_auto_801322CC) {
            var_a1 = D_auto_801322CC - 1;
        }
        return *(&D_auto_801322D0 + ((var_a1 & 0xFFFF) * 4));
    case 3:
        if ((u32) (var_a1 & 0xFFFF) >= (u16) D_auto_801322BC) {
            var_a1 = D_auto_801322BC - 1;
        }
        return *(&D_auto_801322C0 + ((var_a1 & 0xFFFF) * 4));
    default:
        return 0;
    }
}
