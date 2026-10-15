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
        func_801124C0(arg1, arg2);
        func_801185D0(&args, 0, 0, arg0, arg1, arg2, &D_auto_8014C0B0);
        func_80119240(&D_auto_8014C0B0, 0, 1);
    }
}

void func_800779CC(s32 arg0) {
    func_801121E0();
    func_80111540(&D_auto_8014B9F0, 1, func_80077A38, arg0, &D_auto_801499F0, 0xF);
    func_8011D1A0(&D_auto_8014B9F0);
}
