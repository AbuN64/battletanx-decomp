#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
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
