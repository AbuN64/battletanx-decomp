#include "include_asm.h"

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

INCLUDE_RODATA("span_1000", D_800745D0);
INCLUDE_RODATA("span_1000", D_800745D4);
INCLUDE_RODATA("span_1000", D_800745F4);
INCLUDE_RODATA("span_1000", D_80074600);
INCLUDE_RODATA("span_1000", D_80074628);
INCLUDE_RODATA("span_1000", D_80074630);
INCLUDE_RODATA("span_1000", D_80074638);
INCLUDE_RODATA("span_1000", D_8007463C);
INCLUDE_DATA("span_1000", D_80074644);
INCLUDE_ASM("span_1000", func_800E2CFC);
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800E0B00.h"



s32 func_800E2D40(void *arg)
{
    CombatUnit *member = arg;
    f32 distance;

    switch ((u32)member->state) {
    case 6:
        distance = func_800E1A20(member, member->targetPoint);
        break;
    case 7:
        distance = func_800E1A20(member, member->targetPoint);
        break;
    case 5:
        distance = func_800E0D54(member->position, member->leader->position);
        break;
    default:
        distance = D_800745D0;
        break;
    }
    return distance < member->status;
}

INCLUDE_ASM("span_1000", func_800E2DE8);
INCLUDE_ASM("span_1000", func_800E30F8);
#include "shared/bt_span_1000_code_800E21E4.h"
#include "shared/bt_types.h"
#include "shared/bt_unit.h"
#include "span_1000/code_800E21E4.h"
#include "span_1000/code_80097038.h"

              /* size 0x0 */

s32 func_800E3460(const u8 *arg0) {
    return arg0[0x350] == 2;
}

int func_800E3470(CombatUnit *unit) {
    return unit->value350 == 1;
}

struct Unknown800E349C;



/* Two neighbouring resets that share one interval.
 * func_800E3480 clears the two words at the start of the record; func_800E348C clears
 * the halfword at 0x344 and the bytes at 0x348 and 0x34A of a much larger one.
 * sw fixes the first pair as words, sh fixes 0x344 as a halfword and sb fixes 0x348
 * and 0x34A as single bytes. */



void func_800E3480(int *p) {
    p[0] = 0;
    p[1] = 0;
}

void func_800E348C(struct Unknown800E349C *s) {
    s->half_344 = 0;
    s->byte_34A = 0;
    s->byte_348 = 0;
}




/* func_800E349C -- clears five fields of the object it is handed and returns nothing.
 *
 * Every store is of `$zero`, so this writes zeros and reads nothing back; the widths the
 * cartridge uses are what fix the types. Two words go out at 0x09C and 0x0A0, one halfword at
 * 0x344, and two single bytes at 0x34A and 0x348 -- in that order, the last of them in the
 * return's delay slot. The two bytes are written high one first, which is the order they were
 * written in rather than the order they sit in, so they are separate fields and not one pair.
 * Nothing else in the image says what any of them hold, so the struct is a placeholder that
 * names each field for its width and leaves the gaps between them opaque.
 */



void func_800E349C(struct Unknown800E349C *self) {
    self->word_09C = 0;
    self->word_0A0 = 0;
    self->half_344 = 0;
    self->byte_34A = 0;
    self->byte_348 = 0;
}

/* extern */






/* extern */

void func_800E34B4(func_800E34B4_S1_Shared800E34B4 *arg0, s16 arg1, s16 arg2) {
    func_800E34B4_S2_Shared800E34B4 *temp_v0;
    f32 *ordered_value;

    if (arg2 != 0xFF) {
        func_800A03B8(arg1);
        (void)(arg2 << 0x10);
        temp_v0 = func_800A03B8(arg2);
        arg0->unk10 = temp_v0;
        arg0->unk14 = func_800E52A0(arg1, arg2);
        arg0->unkC = (f32) temp_v0->unk24;
        ordered_value = &arg0->unk8.v1;
        *ordered_value = (f32) temp_v0->unk2C;
        arg0->unk4 = (void *)&arg0->unk8.v0;
        arg0->unk0 = 1;
        return;
    }
    arg0->unk0 = 0;
    arg0->unk4 = ((void *)0);
}

INCLUDE_ASM("span_1000", func_800E3554);
INCLUDE_ASM("span_1000", func_800E35CC);
INCLUDE_ASM("span_1000", func_800E35F0);
INCLUDE_ASM("span_1000", func_800E360C);
INCLUDE_ASM("span_1000", func_800E36FC);
INCLUDE_ASM("span_1000", func_800E377C);
INCLUDE_ASM("span_1000", func_800E3980);
INCLUDE_ASM("span_1000", func_800E3A38);
INCLUDE_ASM("span_1000", func_800E3A64);
#include "shared/bt_span_1000_code_800E21E4.h"
#include "shared/bt_types.h"
#include "span_1000/code_80097038.h"
#include "span_1000/code_800E21E4.h"

void func_800E3AB0(func_800E34B4_S1_Shared800E34B4 *selection, s16 sourceId, s16 targetId) {
    if (targetId != 0xFF) {
        func_800A03B8(sourceId);
        selection->unk10 = func_800A03B8(targetId);
        selection->unk14 = func_800E52A0(sourceId, targetId);
        selection->unk4 = 0;
        selection->unk0 = 5;
    } else {
        selection->unk0 = 0;
        selection->unk4 = 0;
    }
}

INCLUDE_ASM("span_1000", func_800E3B38);
INCLUDE_ASM("span_1000", func_800E3BC0);
