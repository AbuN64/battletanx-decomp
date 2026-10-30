#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"
int func_80094C58(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
s32 func_80095EAC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 key)
{
    s32 value0;
    s32 value1;
    s32 value2;
    s32 value3;
    if (func_80094C58(arg0, arg1, arg2, arg3, key, &value0, &value1, &value2, &value3) != 0) {
        return func_80095CDC(value0, value1, value2, value3, arg4, key);
    }
    return 0;
}

INCLUDE_ASM("span_1000", func_80095F30);
INCLUDE_ASM("span_1000", func_800962B4);
