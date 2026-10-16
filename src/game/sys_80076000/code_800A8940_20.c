#include "shared/bt_gbi.h"
#include "shared/bt_gfx.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
void func_800A9EE0(u8 color[4])
{
    FrameState *frame = func_8007F060();
    Gfx *command = frame->overlay;
    frame->overlay = command + 1;
    gDPSetEnvColor(command, color[0], color[1], color[2], color[3]);
}
