#include "include_asm.h"

#include "shared/bt_span_1000_code_80119B60.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A6864.h"
#include "sdk/libultra.h"

struct L;

struct N;







struct C;

struct Shape_func_800A72C8;







struct B;
struct Elem;
struct Shape_func_8011A134;







/*
 * Clamps a brightness-like byte: it indexes a 16-byte table held at b->unk60 by
 * the unsigned byte a->unk31, adds byte 7 of that entry to byte 0xC of the object
 * a->unk20 points at, subtracts 0x40, then clamps the result into 0..0x7F and
 * returns it as a byte.
 * Types came from the load widths: lbu for a->unk31, entry+7 and sub+0xC makes all
 * three unsigned char; lw for a->unk20 and b->unk60 makes them pointers; the
 * `sll 4` on the index fixes the table's element stride at 16 bytes; and the final
 * `andi 0xFF` on the return value fixes the return type as unsigned char.
 */








unsigned char func_8011A134(struct Shape_func_8011A134 *a, struct B *b) {
    int v;

    v = b->unk60[a->unk31].unk7 + a->unk20->c;
    v -= 0x40;
    if (v <= 0) {
        v = 0;
    }
    if (v >= 0x7F) {
        v = 0x7F;
    }
    return v;
}

