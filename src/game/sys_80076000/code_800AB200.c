#include "include_asm.h"

#include "shared/bt_span_1000_code_800A9FC4.h"
#include "game/sys_80076000.h"
#include <ultra64.h>
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
    gSPSetOtherMode(command, G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2, value);
}

INCLUDE_ASM("span_1000", func_800AB24C);
INCLUDE_ASM("span_1000", func_800AB3C4);
