#include "shared/bt_types.h"
extern u8 D_auto_80135820;

int func_800DDB94(void) {
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = D_auto_80135820;
    temp_v0 = temp_v1 + 1;
    D_auto_80135820 = temp_v0;
    if ((u32) (temp_v0 & 0xFF) < 0xF1U) {
        return (temp_v1 + 0x10) & 0xFF;
    }
    return 0xF;
}
