#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_span_1000_code_80076068.h"
void func_800768E4(void) {
    s32 saved;
    u32 size;
    saved = func_80076000();
    func_80077110();
    func_80076068(0xB1FFFFF0, 0);
    func_80076068(0xB1FFFFFC, 0);
    size = D_80000318;
    D_80147370 = 1;
    D_80147372 = 0xFF;
    if (size > 0x3FFFFF) {
        if (!(size & 0x1FFFF) & (size <= 0x02000000)) {
            size--;
            D_80125558 = size - 0x80000000;
            D_80125568 = size + 0xA0000000;
        }
    }
    func_80076038(saved);
}

void func_80076634(u32 mode);
void func_800769B0(void) {
    u32 command;
    s32 keep;
    do {
        keep = 1;
        for (;;) {
            command = func_800760A0(0xB1FFFFF0);
            if (command != 0) {
                break;
            }
            func_800760DC(1000);
        }
        if (command == 2) {
            func_80076068(0xB1FFFFFC, 0);
            func_800760DC(1000);
        } else {
            func_80076068(0xB1FFFFFC, 0x101);
            while (func_800760A0(0xB1FFFFF0) == command) {
                func_800760DC(500);
            }
            if (func_800760A0(0xB1FFFFF0) == 2) {
                func_80076068(0xB1FFFFFC, 0);
            } else {
                switch (command) {
                case 16:
                    break;
                case 17:
                    keep = 0;
                    break;
                case 18:
                    D_80147370 = 0;
                    D_80147372 = 0;
                    D_801471C8 &= ~1;
                    func_80077200(func_800771F4() & ~1);
                    break;
                case 19:
                    D_80147372 = 0;
                    D_80147370 = 0;
                    break;
                case 20:
                    D_80147372 = 0xFF;
                    break;
                case 21:
                    D_80147372 = 0;
                    break;
                case 22:
                    func_80076068(0xB1FE0000, (D_80147372 << 24) | (D_80147370 << 16));
                    break;
                case 23:
                    func_80076634(2);
                    break;
                case 24:
                    func_80076634(1);
                    break;
                case 25:
                    func_800767E4();
                    break;
                }
                func_80076068(0xB1FFFFFC, 0);
                while (func_800760A0(0xB1FFFFF0) == 1) {
                    func_800760DC(500);
                }
            }
        }
    } while (keep || D_80147372 == 0);
}

INCLUDE_DATA("span_1000", D_80071068);
INCLUDE_ASM("span_1000", func_80076BF0);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
int func_80076CA8(u8 *arg0) {
    u8 *var_v1;

    var_v1 = arg0 + 1;
    if (*arg0 != 0) {
        do {
            var_v1 += 1;
        } while (*var_v1 != 0);
    }
    return var_v1 - arg0;
}
#else
INCLUDE_ASM("span_1000", func_80076CA8);
#endif
#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
int func_80076CC8(void) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0_2 = func_80076000();
    temp_s0 = func_80076BF0(0x101, 0, 0, 0);
    func_80076038(temp_s0_2);
    return temp_s0;
}

INCLUDE_ASM("span_1000", func_80076D14);
INCLUDE_ASM("span_1000", func_80076DA4);
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_types.h"
s32 func_80076E34(s32 arg0) {
    s32 temp_s1;
    s32 var_s0;

    temp_s1 = func_80076000();
    var_s0 = func_80076BF0(0x404, arg0, 0, 0);
    if (var_s0 & 0x8000) {
        var_s0 |= 0xFFFF0000;
    }
    func_80076038(temp_s1);
    return var_s0;
}

#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_types.h"
s32 func_80076E9C(s32 arg0, u32 arg1, u32 arg2) {
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s2;
    u32 var_a2;
    u32 var_s1;
    u32 var_s3;

    var_s3 = arg1;
    var_s1 = arg2;
    var_s2 = 0;
    temp_s4 = func_80076000();
    if (var_s1 != 0) {
loop_2:
        var_a2 = var_s1;
        if (var_s1 > 0x8000U) {
            var_a2 = 0x8000;
        }
        temp_v0 = func_80076BF0(0x505, arg0, (s32) var_a2, 0);
        if (temp_v0 != 0) {
            func_80076164(0xB1FF0000U, var_s3, (u32) temp_v0);
            var_s3 += temp_v0;
            var_s1 -= temp_v0;
            var_s2 += temp_v0;
            if (var_s1 != 0) {
                goto loop_2;
            }
        }
    }
    func_80076038(temp_s4);
    return var_s2;
}
#else
INCLUDE_ASM("span_1000", func_80076E9C);
#endif
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
s32 func_80076F60(s32 port, u32 source, u32 length) {
    s32 total;
    s32 savedStatus;
    u32 request;
    u32 sent;
    savedStatus = func_80076000();
    total = 0;
    while (length != 0) {
        request = length;
        if (request > 0x8000) {
            request = 0x8000;
        }
        func_80076408(0xB1FF0000, source, request);
        sent = func_80076BF0(0x606, port, request, 0);
        if (sent == 0) {
            func_80076038(savedStatus);
            return total;
        }
        source += sent;
        length -= sent;
        total += sent;
    }
    func_80076038(savedStatus);
    return total;
}

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_types.h"
int func_80077028(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0_2 = func_80076000();
    temp_s0 = func_80076BF0(0x707, arg0, arg1, arg2);
    func_80076038(temp_s0_2);
    return temp_s0;
}

