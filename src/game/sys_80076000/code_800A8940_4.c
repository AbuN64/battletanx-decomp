#include "shared/bt_span_1000_code_800A9FC4.h"
#include "game/sys_80076000.h"
#include "shared/bt_gbi.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
/* Does nothing and returns; the body is a bare jr $ra with no frame, so it
   takes no arguments it uses and leaves no value. */
void func_800AB200(void) {
}

void func_800AB208(s32 value) {
    FrameState *frame;
    Gfx *command;

    frame = func_8007F060();
    command = frame->overlay;
    frame->overlay = command + 1;
    gSPSetOtherModeF3D(command, G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2, value);
}
