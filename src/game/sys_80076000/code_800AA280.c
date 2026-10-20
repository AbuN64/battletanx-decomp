#include "include_asm.h"

#include "shared/bt_triangle.h"
#include "shared/bt_abi.h"
#include "shared/bt_span_1000_code_800A9FC4.h"
#include "shared/bt_types.h"








/* Original packets use the classic F3DEX command encoding. */
#undef F3DEX_GBI_2

#include "shared/bt_n64sdk.h"
#include "shared/bt_gbi.h"
#include "shared/bt_span_1000_code_8007EBA0.h"









/* extern */

/* Emits two display-list commands when the display-list state is ready. */
void func_800AA280(s32 arg0, s32 arg1, s32 arg2) {
    Gfx *temp_a0;
    FrameState *temp_v0;
    Gfx *temp_v1;

    temp_v0 = func_8007F060();
    if (temp_v0->overflow == 0) {
        temp_v1 = temp_v0->main;
        temp_v0->main = temp_v1 + 1;
        gSPClearGeometryMode(temp_v1, G_CULL_BOTH);
        temp_a0 = temp_v0->main;
        temp_v0->main = temp_a0 + 1;
        btSPTriangleCommand(temp_a0);
        btSPTriangleIndices(temp_a0, arg0, arg1, arg2);
    }
}

/* Original packets use the classic F3DEX command encoding. */
#undef F3DEX_GBI_2










/* extern */

/* Emits two display-list commands through the secondary display-list pointer when ready. */
void func_800AA328(s32 arg0, s32 arg1, s32 arg2) {
    Gfx *temp_a0;
    FrameState *temp_v0;
    Gfx *temp_v1;

    temp_v0 = func_8007F060();
    if (temp_v0->overflow == 0) {
        temp_v1 = temp_v0->overlay;
        temp_v0->overlay = temp_v1 + 1;
        gSPClearGeometryMode(temp_v1, G_CULL_BOTH);
        temp_a0 = temp_v0->overlay;
        temp_v0->overlay = temp_a0 + 1;
        btSPTriangleCommand(temp_a0);
        btSPTriangleIndices(temp_a0, arg0, arg1, arg2);
    }
}

INCLUDE_ASM("span_1000", func_800AA3D0);
