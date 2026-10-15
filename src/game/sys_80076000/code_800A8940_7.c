#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A9FC4.h"
#include "shared/bt_types.h"

void func_800ABF1C(void) {
    func_800796F0(0x26, 0);
}

void func_800ABF40(void) {
    func_800799D0(func_800796F0(0x26, 0), 0x4AAA);
}

void func_800ABF70(void) {
    func_800799D0(func_800796F0(0x26, 0), 0x6200);
}

/* func_800ABFA0 -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_800ABFA0(void) {
}
