#include "shared/bt_span_1000_code_800E21E4.h"
#include "game/sys_80076000.h"
void func_800E2ACC(s32 unused, DriveCommand *command)
{
    command->mode = 0;
    command->turn = 0.0f;
    command->drive = 0.0f;
    command->buttons[0] = 0;
    command->buttons[1] = 0;
    command->buttons[2] = 0;
    command->buttons[3] = 0;
    command->buttons[4] = 0;
}
