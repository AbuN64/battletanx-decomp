#include "include_asm.h"

#include "shared/bt_types.h"
#include "span_1000/code_80094704.h"
int func_80096834(s32 arg0) {
    return (D_auto_802E17D8[D_auto_802E17A8[arg0]].value & 0xF) == 0xF;
}

INCLUDE_ASM("span_1000", func_8009686C);
#include "shared/bt_span_1000_code_80094704.h"
#include "shared/bt_span_1000_code_800A8940.h"
/* func_800968FC -- forwards its two arguments to func_800A8EF8 with the second repeated and a zero fourth. */

void func_800968FC(int a, int b) {
    func_800A8EF8(a, b, b, 0);
}

INCLUDE_ASM("span_1000", func_80096920);
INCLUDE_ASM("span_1000", func_80096D04);
INCLUDE_DATA("span_1000", D_80096E74);
