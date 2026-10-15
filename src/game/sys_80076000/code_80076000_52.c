#include "shared/bt_span_1000_code_80076068.h"
#include "shared/bt_types.h"
int func_80076000(void) {
    s32 temp_v0;

    temp_v0 = func_800771F4();
    func_80077200(temp_v0 & ~1);
    return temp_v0 & 1;
}
