#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"
int func_80094C58(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
void func_8009531C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 key)
{
    s32 value0;
    s32 value1;
    s32 value2;
    s32 value3;
    if (func_80094C58(arg0, arg1, arg2, arg3, key, &value0, &value1, &value2, &value3) != 0) {
        func_800949D8(value0, value1, value2, value3, arg4, arg5, key);
    }
}

