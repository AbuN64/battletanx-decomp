#include "shared/bt_span_1000_code_800F45C8.h"
#include "shared/bt_types.h"
extern u8 *D_auto_803620FC;
extern s32 D_auto_80362104;
extern u32 D_auto_80362108;

int func_800F58F0(void) {
    u32 temp_v0;
    u8 *temp_v1;

    temp_v0 = (u32) D_auto_80362108 >> 1;
    D_auto_80362108 = temp_v0;
    if (temp_v0 == 0) {
        temp_v1 = D_auto_803620FC;
        D_auto_803620FC = temp_v1 + 1;
        D_auto_80362108 = 0x80;
        D_auto_80362104 = (s32) *temp_v1;
    }
    return (D_auto_80362104 & D_auto_80362108) != 0;
}
