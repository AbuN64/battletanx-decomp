#include "include_asm.h"

INCLUDE_ASM("span_1000", func_80077110);
INCLUDE_ASM("span_1000", func_800771BC);
INCLUDE_ASM("span_1000", func_800771D8);
INCLUDE_ASM("span_1000", func_800771F4);
INCLUDE_ASM("span_1000", func_80077200);
INCLUDE_ASM("span_1000", func_8007720C);
INCLUDE_ASM("span_1000", func_80077620);
INCLUDE_ASM("span_1000", func_80077924);
#include "shared/bt_span_1000_code_80077930.h"
#include "shared/bt_types.h"

struct InitArgs;




#include "span_1000/code_80077930.h"
#include "game/sys_80076000.h"


/* Initializes the shared game data after preparing its startup arguments. */
void func_80077930(s32 arg0, s32 arg1, s32 arg2) {
    InitArgs args;
    s32 temp;

    if (arg2 != 0) {
        func_80110C00(&args, 0x18);
        func_80110C00(&temp, 4);
        osInvalDCache(arg1, arg2);
        func_801185D0(&args, 0, 0, arg0, arg1, arg2, &D_8014C0B0);
        osRecvMesg(&D_8014C0B0, 0, 1);
    }
}

void func_800779CC(s32 arg0) {
    osInitialize();
    osCreateThread(&D_8014B9F0, 1, func_80077A38, arg0, &D_801499F0, 0xF);
    osStartThread(&D_8014B9F0);
}

#include "shared/bt_span_1000_code_80077930.h"
#include "shared/bt_types.h"
#include "span_1000/code_80077930.h"


 /* extern */
 /* extern */
            /* extern */
                   /* extern */


/* Configures the title screen callbacks and waits for the screen transition. */
void func_80077A38(s32 arg0) {
    func_80118860(0x96, &D_8014C070, &D_8014BD50, 0xC8);
    osCreateThread(&D_8014BBA0, 2, &func_80077AD0, arg0, &D_8014B9F0, 0xA);
    osStartThread(&D_8014BBA0);
    osSetThreadPri(0, 0);
loop_1:
    goto loop_1;
}

INCLUDE_ASM("span_1000", func_80077AD0);
INCLUDE_DATA("span_1000", D_80077B08);
