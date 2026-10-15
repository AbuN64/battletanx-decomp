#include "shared/bt_span_1000_code_80076068.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
/* func_8007627C -- copies n bytes between two byte-addressed spaces, a byte at a time until the source is word-aligned, then a word at a time split into four byte stores, then the tail. */




void func_8007627C(unsigned int src, unsigned int dst, unsigned int n) {
    unsigned int w;
    while (n != 0 && (src & 3)) {
        func_80076240(dst++, func_80076124(src++));
        n--;
    }
    while (n >= 4) {
        w = func_800760A0((void *)src);
        func_80076240(dst++, w >> 24);
        func_80076240(dst++, w >> 16);
        func_80076240(dst++, w >> 8);
        func_80076240(dst++, w);
        src += 4;
        n -= 4;
    }
    while (n != 0) {
        func_80076240(dst++, func_80076124(src++));
        n--;
    }
}

void func_80076390(u32 address, u8 value)
{
    s32 shift = (~address & 3) * 8;
    address &= ~3;
    func_80076068(address, (func_800760A0(address) & ~(0xFF << shift)) | ((u32)value << shift));
}
