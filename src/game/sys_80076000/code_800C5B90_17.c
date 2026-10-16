#include "shared/bt_span_1000_code_800E21E4.h"
#include "shared/bt_types.h"
#include "shared/bt_unit.h"
#include "span_1000/code_800E21E4.h"
#include "span_1000/code_80097038.h"

              /* size 0x0 */

s32 func_800E3460(const u8 *arg0) {
    return arg0[0x350] == 2;
}

int func_auto_800E3470(CombatUnit *unit) {
    return unit->value350 == 1;
}

struct Unknown800E349C;



/* Two neighbouring resets that share one interval.
 * func_auto_800E3480 clears the two words at the start of the record; func_auto_800E348C clears
 * the halfword at 0x344 and the bytes at 0x348 and 0x34A of a much larger one.
 * sw fixes the first pair as words, sh fixes 0x344 as a halfword and sb fixes 0x348
 * and 0x34A as single bytes. */



void func_auto_800E3480(int *p) {
    p[0] = 0;
    p[1] = 0;
}

void func_auto_800E348C(struct Unknown800E349C *s) {
    s->half_344 = 0;
    s->byte_34A = 0;
    s->byte_348 = 0;
}




/* func_auto_800E349C -- clears five fields of the object it is handed and returns nothing.
 *
 * Every store is of `$zero`, so this writes zeros and reads nothing back; the widths the
 * cartridge uses are what fix the types. Two words go out at 0x09C and 0x0A0, one halfword at
 * 0x344, and two single bytes at 0x34A and 0x348 -- in that order, the last of them in the
 * return's delay slot. The two bytes are written high one first, which is the order they were
 * written in rather than the order they sit in, so they are separate fields and not one pair.
 * Nothing else in the image says what any of them hold, so the struct is a placeholder that
 * names each field for its width and leaves the gaps between them opaque.
 */



void func_auto_800E349C(struct Unknown800E349C *self) {
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
