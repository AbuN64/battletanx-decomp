#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
void func_800A30A8(void)
{
    D_auto_801260A0[0] = func_800F38F4() & 3;
    do {
        D_auto_801260A0[1] = func_800F38F4() & 3;
    } while (D_auto_801260A0[1] == D_auto_801260A0[0]);
    do {
        D_auto_801260A0[2] = func_800F38F4() & 3;
    } while (D_auto_801260A0[2] == D_auto_801260A0[1] || D_auto_801260A0[2] == D_auto_801260A0[0]);
    do {
        D_auto_801260A0[3] = func_800F38F4() & 3;
    } while (D_auto_801260A0[3] == D_auto_801260A0[1] || D_auto_801260A0[3] == D_auto_801260A0[0] || D_auto_801260A0[3] == D_auto_801260A0[2]);
    D_auto_801260A4[D_auto_801260A0[0]] = 0;
    D_auto_801260A4[D_auto_801260A0[1]] = 1;
    D_auto_801260A4[D_auto_801260A0[2]] = 2;
    D_auto_801260A4[D_auto_801260A0[3]] = 3;
}
