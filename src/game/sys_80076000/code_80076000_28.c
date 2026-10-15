#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

s32 func_80081A30(void) {
    return (s32) D_auto_80125854;
}

              /* size 0x0 */

void func_auto_80081A40(s32 arg0) {
    D_auto_80125854 = (u8) arg0;
}

int func_80081A50(void) {
    D_auto_801C918C = &D_auto_801C9190;
    D_auto_801C9188 = 0xF8240;
}

s32 func_80081A78(s32 size)
{
    s32 result;
    size = (size + 7) & ~7;
    if (D_auto_801C9188 < size) {
        return 0;
    }
    result = D_auto_801C918C;
    D_auto_801C9188 -= size;
    D_auto_801C918C = result + size;
    return result;
}
