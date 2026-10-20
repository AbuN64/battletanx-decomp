#include "include_asm.h"

#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"



void *func_8008AD10(u8 group, s32 kind, s32 size) {
    s32 index;

    if (D_802C13E0 == -1) {
        return 0;
    }
    index = D_802C13E0;
    D_802C13E0 = D_802C3A30[index].header.next;
    if (group == 1) {
        D_802C3A30[index].header.next = D_802C13E2;
        D_802C13E2 = index;
    } else {
        D_802C3A30[index].header.next = D_802C13F6;
        D_802C13F6 = index;
    }
    D_802C3A30[index].header.kind = kind;
    D_802C3A30[index].header.serial = D_80125C40++;
    return &D_802C3A30[index];
}

