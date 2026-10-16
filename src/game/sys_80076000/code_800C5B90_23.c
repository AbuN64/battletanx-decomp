#include "shared/bt_span_1000_code_800E5328.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E5328.h"
#include "game/sys_80076000.h"

struct Rec;



/* Clears five bytes and one word of a record: the bytes at 0x4..0x7, the word at
 * 0x8, and last the byte at 0x3.
 * sb fixes 0x3..0x7 as single bytes and sw fixes 0x8 as a 32-bit field. */



void func_800E566C(struct Rec *r) {
    r->b = 0;
    r->c = 0;
    r->d = 0;
    r->e = 0;
    r->f = 0;
    r->a = 0;
}

void func_800E5688(UnitPairing *pair, u8 first, u8 second, u8 connected)
{
    pair->first = first;
    pair->second = second;
    pair->connected = connected;
    pair->flags[0] = 0;
    pair->flags[1] = 0;
    pair->flags[2] = 0;
    pair->flags[3] = 0;
    pair->value = 0;
    pair->state = 0;
}
