#include "shared/bt_types.h"
#include "span_1000/code_800A6864.h"
#include "game/sys_80076000.h"

int func_80093EF8(struct N *arg0, s32 *arg1) {
    s32 temp_a0;

    temp_a0 = arg0->unk24;
    if (temp_a0 != 0) {
        func_8010CB4C(temp_a0, 0);
    }
    *arg1 = 2;
}
