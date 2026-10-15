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
    size = D_auto_80000318;
    D_auto_80147370 = 1;
    D_auto_80147372 = 0xFF;
    if (size > 0x3FFFFF) {
        if (!(size & 0x1FFFF) & (size <= 0x02000000)) {
            size--;
            D_auto_80125558 = size - 0x80000000;
            D_auto_80125568 = size + 0xA0000000;
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
                    D_auto_80147370 = 0;
                    D_auto_80147372 = 0;
                    D_auto_801471C8 &= ~1;
                    func_80077200(func_800771F4() & ~1);
                    break;
                case 19:
                    D_auto_80147372 = 0;
                    D_auto_80147370 = 0;
                    break;
                case 20:
                    D_auto_80147372 = 0xFF;
                    break;
                case 21:
                    D_auto_80147372 = 0;
                    break;
                case 22:
                    func_80076068(0xB1FE0000, (D_auto_80147372 << 24) | (D_auto_80147370 << 16));
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
    } while (keep || D_auto_80147372 == 0);
}
