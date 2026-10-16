#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"
#include "span_1000/code_800A51E8.h"
s32 func_8007C700(void)
{
    u32 mode = D_auto_801B4ABC->unk0;
    if (mode < 8) {
        if (mode >= 3) {
            return 1;
        }
    }
    return 0;
}
