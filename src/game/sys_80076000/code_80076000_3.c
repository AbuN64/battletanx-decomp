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
