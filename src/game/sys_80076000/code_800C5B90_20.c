#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"


void func_800E4A18(s32 arg0) {
    D_auto_8033AAC8[arg0 & 0xFFFF] = 1;
}

void func_800E4A38(void) {
    u16 i;
    for (i = 0; i < func_8007AAB0(); i++) {
        D_auto_8033AAC8[i] = 1;
    }
}
