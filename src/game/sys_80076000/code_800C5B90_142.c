#include "shared/bt_span_1000_code_800E21E4.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_unit.h"
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

void func_800E2AF0(CombatUnit *unit, DriveCommand *out, void *target) {
    s32 hasTarget = 1;
    s32 angle;
    s32 magnitude;
    f32 rate;

    if (target == 0) {
        s32 diff = (u16)(u32)(unit->value400 * 182.04445f) - (u16)(u32)(unit->value3FC * 182.04445f);

        if (diff > 0) {
            if (diff > 0x8000) {
                angle = diff - 0xFFFF;
            } else {
                angle = diff;
            }
        } else if (diff < -0x8000) {
            angle = diff + 0xFFFF;
        } else {
            angle = diff;
        }
        hasTarget = 0;
    } else {
        func_800E28DC(unit, target, &angle, 0, 0);
    }

    magnitude = (angle >= 0) ? angle : -angle;
    if (magnitude < 600) {
        rate = magnitude / 600.0f;
    } else {
        rate = 1.0f;
    }

    if (hasTarget) {
        if (magnitude < 400) {
            func_800E21E4(unit, out, target);
        }
    }

    if (unit->kind == 1) {
        rate *= 40.0f;
        if (angle < 0) {
            out->turn = rate;
        } else {
            out->turn = -rate;
        }
    } else {
        if (!(unit->flags & 4)) {
            rate *= 135.0f;
        }
        if (angle < 0) {
            out->drive = -rate;
        } else {
            out->drive = rate;
        }
    }
}
