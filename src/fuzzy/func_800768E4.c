#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_types.h"
void func_80077110();
s32 func_80076068(s32, s32);
extern u32 D_auto_80000318;
extern s32 D_auto_80125558;
extern s32 D_auto_80125568;
extern s8 D_auto_80147370;
extern s8 D_auto_80147372;

void func_800768E4(void) {
    s32 temp_a0;
    s32 temp_s0;

    temp_s0 = func_80076000();
    func_80077110();
    func_80076068(0xB1FFFFF0, 0);
    func_80076068(0xB1FFFFFC, 0);
    D_auto_80147370 = 1;
    D_auto_80147372 = 0xFF;
    if ((u32) D_auto_80000318 > 0x3FFFFFU) {
        temp_a0 = D_auto_80000318 - 1;
        if (!(D_auto_80000318 & 0x1FFFF) & ((u32) D_auto_80000318 <= 0x02000000U)) {
            D_auto_80125558 = temp_a0 - 0x80000000;
            D_auto_80125568 = temp_a0 + 0xA0000000;
        }
    }
    func_80076038(temp_s0);
}
