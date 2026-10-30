#include "include_asm.h"

#include "game/sys_80076000.h"
#include <ultra64.h>
#include "shared/bt_span_1000_code_8007EBA0.h"
void func_800A9D40(u8 *color)
{
    FrameState *frame = func_8007F060();
    Gfx *command = frame->main;
    frame->main = command + 1;
    gDPSetPrimColor(command, 0, 0, color[0], color[1], color[2], color[3]);
}

