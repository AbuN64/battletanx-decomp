#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void *func_800AB520(u32 table, u16 index)
{
    switch (table) {
    case 0:
        if (index >= D_auto_80132298) {
            index = D_auto_80132298 - 1;
        }
        return D_auto_8013229C[index];
    case 2:
        if (index >= D_auto_801322CC) {
            index = D_auto_801322CC - 1;
        }
        return D_auto_801322D0[index];
    case 1:
        if (index >= D_auto_801322F0) {
            index = D_auto_801322F0 - 1;
        }
        return D_auto_801322F4[index];
    case 3:
        if (index >= D_auto_801322BC) {
            index = D_auto_801322BC - 1;
        }
        return D_auto_801322C0[index];
    }
    return 0;
}
