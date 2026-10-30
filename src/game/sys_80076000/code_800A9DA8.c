#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
#include "shared/bt_gfx.h"
void func_800A9DA8(u8 color[4])
{
    FrameState *frame = func_8007F060();
    Gfx *command = frame->overlay;
    frame->overlay = command + 1;
    gDPSetPrimColor(command, 0, 0, color[0], color[1], color[2], color[3]);
}

void func_800A9E10(u8 color[4])
{
    Gfx **list = func_8007F060();
    Gfx *command = *list;
    *list = command + 1;
    gDPSetEnvColor(command, color[0], color[1], color[2], color[3]);
}

void func_800A9E78(u8 *color)
{
    FrameState *frame = func_8007F060();
    Gfx *command = frame->overlay;
    frame->overlay = command + 1;
    gDPSetBlendColor(command, color[0], color[1], color[2], color[3]);
}

