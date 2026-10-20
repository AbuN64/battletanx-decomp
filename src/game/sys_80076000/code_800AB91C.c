#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A9FC4.h"
#include "shared/bt_types.h"
#include "span_1000/code_800AA098.h"

struct M;

void func_800AB91C(void) {
    osViSetSpecialFeatures(0x41);
}

void func_800AB93C(void) {
    osViSetSpecialFeatures(0x42);
}

/* func_800AB95C -- selects one of five modes, taking the mode's value from a five-entry table as the current value, and returns the mode that was set before. */


int func_800AB95C(unsigned int a) {
    int old = D_803275F0.mode;
    switch (a) {
    case 0: D_803275F0.mode = 0; D_803275F0.cur = D_803275F0.tbl[0]; break;
    case 1: D_803275F0.mode = 1; D_803275F0.cur = D_803275F0.tbl[1]; break;
    case 2: D_803275F0.mode = 2; D_803275F0.cur = D_803275F0.tbl[2]; break;
    case 3: D_803275F0.mode = 3; D_803275F0.cur = D_803275F0.tbl[3]; break;
    case 4: D_803275F0.mode = 4; D_803275F0.cur = D_803275F0.tbl[4]; break;
    }
    return old;
}

INCLUDE_DATA("span_1000", D_80073124);
INCLUDE_ASM("span_1000", func_800AB9FC);
INCLUDE_ASM("span_1000", func_800ABAB8);
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

INCLUDE_ASM("span_1000", func_800ABFA8);
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"

void func_800ABFD0(void) {
    func_800F4DFC(&D_803276D4, 0, 0, 0x140, 0xF0, 0, 0, 0, 0xFF);
    func_8010698C(&D_803276D4);
    func_8010555C(0xC8, 0xC8, 0xC8, 0xFF);
    func_801054E0(1);
    func_8010552C(0, 0x55);
    func_80105A50(&D_803276D4, &D_800731B0, 0, 0x140);
}

INCLUDE_ASM("span_1000", func_800AC070);
INCLUDE_ASM("span_1000", func_800AC2C8);
#include "shared/bt_types.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_800ABFD0.h"
#include "span_1000/code_800ABFD0.h"



              /* size 0x0 */


void func_800AC2D0(void) {
    D_803276E0 = 0;
}

INCLUDE_ASM("span_1000", func_800AC2E0);
INCLUDE_ASM("span_1000", func_800AD340);
INCLUDE_ASM("span_1000", func_800AD5A0);
INCLUDE_ASM("span_1000", func_800AD828);
INCLUDE_ASM("span_1000", func_800ADD70);
INCLUDE_ASM("span_1000", func_800AE2B8);
INCLUDE_ASM("span_1000", func_800AE800);
INCLUDE_ASM("span_1000", func_800AEA50);
INCLUDE_ASM("span_1000", func_800AEF98);
INCLUDE_ASM("span_1000", func_800AF534);
INCLUDE_ASM("span_1000", func_800AFB08);
INCLUDE_ASM("span_1000", func_800B0210);
INCLUDE_ASM("span_1000", func_800B0440);
INCLUDE_ASM("span_1000", func_800B098C);
INCLUDE_ASM("span_1000", func_800B0D1C);
INCLUDE_ASM("span_1000", func_800B1264);
