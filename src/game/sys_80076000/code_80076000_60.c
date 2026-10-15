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
