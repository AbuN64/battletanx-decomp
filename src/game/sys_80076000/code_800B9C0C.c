#include "include_asm.h"

#include <ultra64.h>
s32 func_800B9C0C(const u8 *text)
{
    s32 length = 0;
    while (*text++ != 0) {
        length++;
    }
    return length;
}

