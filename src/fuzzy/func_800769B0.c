#include "shared/bt_span_1000_code_80076068.h"
#include "shared/bt_types.h"
int func_800760DC(int arg0);
void func_80076634(u32 mode);
s32 func_80076068(s32, s32);
s32 func_800767E4();
extern s32 D_auto_801471C8;
extern u8 D_auto_80147370;
extern u8 D_auto_80147372;

unsigned char func_800769B0(void) {
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 1;
loop_1:
    do {
loop_2:
        temp_v0 = func_800760A0(0xB1FFFFF0);
        if (temp_v0 == 0) {
            func_800760DC(0x3E8);
            goto loop_2;
        }
        if (temp_v0 == 2) {
            func_80076068(0xB1FFFFFC, 0);
            func_800760DC(0x3E8);
        } else {
            func_80076068(0xB1FFFFFC, 0x101);
loop_7:
            if (func_800760A0(0xB1FFFFF0) == temp_v0) {
                func_800760DC(0x1F4);
                goto loop_7;
            }
            if (func_800760A0(0xB1FFFFF0) == 2) {
                func_80076068(0xB1FFFFFC, 0);
            } else {
                switch (temp_v0) {
                case 17:
                    var_s1 = 0;
                default:
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
                    func_80076068(0xB1FE0000, (D_auto_80147372 << 0x18) | (D_auto_80147370 << 0x10));
                    break;
                case 23:
                    func_80076634(2U);
                    break;
                case 24:
                    func_80076634(1U);
                    break;
                case 25:
                    func_800767E4();
                    break;
                }
                func_80076068(0xB1FFFFFC, 0);
loop_24:
                if (func_800760A0(0xB1FFFFF0) == 1) {
                    func_800760DC(0x1F4);
                    goto loop_24;
                }
            }
        }
        var_s1 = 1;
        if (var_s1 != 0) {
            goto loop_1;
        }
    } while (D_auto_80147372 == 0);
}
