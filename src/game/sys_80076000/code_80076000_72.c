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
