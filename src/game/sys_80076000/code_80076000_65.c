#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8008011C.h"
s32 func_8008CED0(void)
{
    u8 *context;
    u8 *table;
    u8 *group;
    u8 *entry;
    context = func_800821C0();
    table = *(u8 **)(context + 0x570) + D_auto_802D5A36 * 0xC;
    group = *(u8 **)(context + 0x574) + *(u16 *)(table + 2) * 4;
    entry = *(u8 **)(context + 0x578) + *(u16 *)(group + 2) * 0xC;
    return *(s32 *)(context + 0x580) + *(s32 *)(entry + 4) * 8;
}
