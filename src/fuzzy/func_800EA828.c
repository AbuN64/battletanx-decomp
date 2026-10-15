#include "shared/bt_types.h"
#include "span_1000/code_8007EBA0.h"
#include "span_1000/code_800E5328.h"
s32 func_800EA478(s32 *);

void func_800EA828(s32 arg0, struct Rec *arg1, s8 arg2, s32 arg3) {
    s32 sp10;
    void *sp14;
    struct Rec *sp18;
    void *sp1C;
    void *sp20;
    s32 sp24;
    s16 sp28;
    s16 sp2A;
    s8 sp2C;
    s32 sp50;
    s32 sp54;
    s16 temp_a3;
    u8 temp_v0;

    temp_a3 = arg3 & 0xFF;
    sp24 = 2;
    sp28 = temp_a3;
    temp_v0 = arg1->b;
    sp2C = arg2;
    sp10 = arg0;
    sp2A = (s16) temp_v0;
    sp14 = func_800A6688(temp_v0, temp_a3);
    sp18 = arg1;
    sp1C = arg1 + 0x9C;
    sp20 = arg1 + 0xCC;
    sp50 = 0;
    sp54 = 0;
    func_800EA478(&sp10);
}
