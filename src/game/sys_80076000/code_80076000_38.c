#include "shared/bt_span_1000_code_8008F248.h"
#include "shared/bt_types.h"
#include "span_1000/code_8008F4EC.h"

struct Unknown800917C4;




/*
 * Copies the two 16-bit fields at offsets 8 and 0xA from one structure to
 * another.  Both loads are `lhu` and both stores are `sh`, which fixes the
 * fields as unsigned 16-bit halfwords, and the single register reused for both
 * copies is what a named temporary variable produces.
 */



void func_800917C4(Unknown800917C4 *src, Unknown800917C4 *dst) {
    unsigned short value;

    value = src->unk8;
    dst->unk8 = value;
    value = src->unkA;
    dst->unkA = value;
}

struct E;




/* func_800917D8 -- copies the pair of halfwords at 0x8 and 0xA from each of n 16-byte records to another array. */


void func_800917D8(int n, E *src, E *dst) {
    int i;
    for (i = 0; i < n; i++) {
        dst[i].a = src[i].a;
        dst[i].b = src[i].b;
    }
}
