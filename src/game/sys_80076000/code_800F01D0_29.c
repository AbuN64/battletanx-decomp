#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
void func_800F45C8(void)
{
    u8 first;
    first = func_800F38F4() % (u32)D_auto_80141050;
    D_auto_8035BC72 = 0;
    D_auto_8035BC70 = first;
    D_auto_8035BC71 = (u32)(first + 1) % (u32)D_auto_80141050;
    D_auto_8035BC74 = func_800F38F4();
    D_auto_8035BC75 = func_800F38F4();
    D_auto_8035BC76 = 0;
    D_auto_8035BC78 = 0x80;
    D_auto_8035BC68 = D_auto_80074F78;
    D_auto_8035BC6C = D_auto_80074F78;
    func_80114970(&D_auto_8035BC80, &D_auto_8035BCC4, 37.0f, 4.0f / 3.0f, D_auto_80074F7C, D_auto_80074F80, D_auto_80074F84);
}
