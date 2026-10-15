#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A6864.h"
int func_800A70BC(N *arg0);
int func_800A6900(N *arg0, s32 *arg1) {
    if (arg0->unk10 == 2) {
        if (arg0->unk24 < D_auto_801B4AA8) {
            func_800A70BC(arg0);
            goto block_3;
        }
    } else {
block_3:
        *arg1 = 1;
    }
}
