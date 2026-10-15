#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A9FC4.h"
#include "shared/bt_types.h"
#include "span_1000/code_800AA098.h"

struct M;

void func_800AB91C(void) {
    func_80122130(0x41);
}

void func_800AB93C(void) {
    func_80122130(0x42);
}

/* func_800AB95C -- selects one of five modes, taking the mode's value from a five-entry table as the current value, and returns the mode that was set before. */


int func_800AB95C(unsigned int a) {
    int old = D_auto_803275F0.mode;
    switch (a) {
    case 0: D_auto_803275F0.mode = 0; D_auto_803275F0.cur = D_auto_803275F0.tbl[0]; break;
    case 1: D_auto_803275F0.mode = 1; D_auto_803275F0.cur = D_auto_803275F0.tbl[1]; break;
    case 2: D_auto_803275F0.mode = 2; D_auto_803275F0.cur = D_auto_803275F0.tbl[2]; break;
    case 3: D_auto_803275F0.mode = 3; D_auto_803275F0.cur = D_auto_803275F0.tbl[3]; break;
    case 4: D_auto_803275F0.mode = 4; D_auto_803275F0.cur = D_auto_803275F0.tbl[4]; break;
    }
    return old;
}
