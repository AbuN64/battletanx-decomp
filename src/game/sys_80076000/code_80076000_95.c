#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"



void func_8008B1F0(void) {
    s16 index;
    s32 next;

    for (index = D_auto_802C13E2; index != -1; index = next) {
        next = D_auto_802C3A30[index].header.next;
        D_auto_802C3A30[index].header.next = D_auto_802C13F4;
        D_auto_802C13F4 = index;
        D_auto_802C13E2 = next;
    }
    for (index = D_auto_802C13F6; index != -1; index = next) {
        next = D_auto_802C3A30[index].header.next;
        D_auto_802C3A30[index].header.next = D_auto_802C3A28;
        D_auto_802C3A28 = index;
        D_auto_802C13F6 = next;
    }
}

