#include "shared/bt_types.h"
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
#include "shared/bt_span_1000_code_800F45C8.h"
#include "shared/bt_gfx.h"
#undef F3DEX_GBI_2

#include "shared/bt_gbi.h"
#include "span_1000/code_8007EBA0.h"




s32 func_8008001C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    u32 next;
    D_auto_801B6C00 = (void *)(D_auto_801B4C00 + (D_auto_801257F5 << 10));
    if (arg4) {
        func_800F4DFC(&D_auto_801B6C00, 0x22, 0x13, 0xFC, 0x72,
                      arg0 & 0xFF, arg1 & 0xFF, arg2 & 0xFF, arg3 & 0xFF);
    } else {
        func_800F4DFC(&D_auto_801B6C00, 0, 0, 0x140, 0xF0,
                      arg0 & 0xFF, arg1 & 0xFF, arg2 & 0xFF, arg3 & 0xFF);
    }
    gSPEndDisplayList(D_auto_801B6C00++);
    func_8007EF40((s32)(D_auto_801B4C00 + (D_auto_801257F5 << 10)));
    next = (D_auto_801257F5 + 1) & 7;
    D_auto_801257F5 = next;
    return next;
}
