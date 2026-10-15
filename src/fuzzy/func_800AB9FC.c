#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800AA098.h"
int func_800ABAB8(int arg0, int arg1);
extern s32 D_auto_803275F4;
extern s32 D_auto_80327600;

void func_800AB9FC(s32 arg0, s32 arg1) {
    func_80079064();
    switch (arg1) {
    case 1:
        D_auto_803275F0.mode = 1;
        D_auto_803275F4 = D_auto_80327600;
        return;
    case 2:
        if ((arg0 != 0xF) && (arg0 != 7) && (arg0 != 8) && (arg0 != 1) && (arg0 != 0xA) && (arg0 != 3)) {
        case 5:
        case 6:
        case 9:
            func_800ABAB8(arg0, arg1);
        }
    default:
        return;
    }
}
