#include "include_asm.h"

#include "shared/bt_span_1000_code_80076068.h"
#include "shared/bt_types.h"
int func_80076000(void) {
    s32 temp_v0;

    temp_v0 = func_800771F4();
    func_80077200(temp_v0 & ~1);
    return temp_v0 & 1;
}

#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_span_1000_code_80076068.h"
/* func_80076038 -- ORs its argument into what func_800771F4 returns and hands the result to func_80077200. */



void func_80076038(int a) {
    func_80077200(func_800771F4() | a);
}

INCLUDE_ASM("span_1000", func_80076068);
INCLUDE_ASM("span_1000", func_800760A0);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
extern s32 D_auto_80147040;

int func_800760DC(s32 arg0) {
    D_auto_80147040 = 0;
loop_2:
    if (D_auto_80147040 < arg0) {
        D_auto_80147040 += 1;
        goto loop_2;
    }
}
#else
INCLUDE_ASM("span_1000", func_800760DC);
#endif
INCLUDE_ASM("span_1000", func_80076124);
INCLUDE_ASM("span_1000", func_80076164);
INCLUDE_ASM("span_1000", func_80076240);
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

INCLUDE_ASM("span_1000", func_80076408);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076068.h"
void func_800764F4(u32 address, u8 value, u32 length) {
    u32 word;
    while (length != 0 && (address & 3) != 0) {
        func_80076390(address++, value);
        length--;
    }
    if (length >= 4) {
        word = (value << 24) | (value << 16) | (value << 8) | value;
        do {
            func_80076068(address, word);
            length -= 4;
            address += 4;
        } while (length >= 4);
    }
    while (length != 0) {
        func_80076390(address++, value);
        length--;
    }
}

void func_800765C0(u32 dst, u32 src, u32 size) {
    while (size--) {
        func_80076390(dst++, func_80076124(src++));
    }
}

#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80076068.h"
#include "game/sys_80076000.h"



void func_80076634(u32 mode) {
    u32 dst = 0xB1FE0000;
    u32 src = func_800760A0((void *)0xB1FFFFF4);
    u32 left = func_800760A0((void *)0xB1FFFFF8);
    u32 n;
    u32 idx;
    u32 fl;
    u32 last;

    if (src > 0xEFFFFFFF) {
        src += (u32)D_auto_8F147050;
    }
    while (left != 0) {
        idx = 0;
        while (D_auto_80125550[idx].end < src) {
            idx++;
        }
        last = src - 1;
        n = D_auto_80125550[idx].end - last;
        if (left < n) {
            n = left;
        }
        fl = D_auto_80125550[idx].flags;
        if ((fl & mode) == 0) {
            if (mode == 1) {
                func_800764F4(dst, 0, n);
            }
        } else if (fl & 4) {
            if (mode == 1) {
                func_800765C0(dst, src, n);
            } else {
                func_800765C0(src, dst, n);
            }
        } else if (mode == 1) {
            func_80076408(dst, src, n);
        } else if (fl & 8) {
            func_8007627C(dst, src, n);
        } else {
            func_80076164(dst, src, n);
        }
        dst += n;
        left -= n;
        src += n;
    }
}

void func_800767E4(void)
{
    u32 source;
    u32 size;
    u32 i;
    source = func_800760A0(0xB1FFFFF4) & 0xB1FFFFFC;
    size = func_800760A0(0xB1FFFFF8) & 0x01FFFFFC;
    func_80076068(0xB1FFFFFC, 0);
    while (func_800760A0(0xB0000010) == 0) {
        func_800760DC(500);
    }
    for (i = 0; i < size / 4; i++) {
        func_80076068((source & 0xB07FFFFF) + i * 4, func_800760A0(source + i * 4));
    }
    func_800760DC(2000);
    func_80076068(0xB1FFFFF4, 0);
}

