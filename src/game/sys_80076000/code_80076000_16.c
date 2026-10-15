#include "shared/bt_span_1000_code_8007963C.h"
#include "shared/bt_types.h"








#include "span_1000/code_8007963C.h"



 /* extern */
                  /* extern */



void func_80079EFC(void) {
    Func79EFCArg_Shared80079EFC arg;
    s32 temp_v0;

    arg.unk0 = 0x30;
    arg.unk4 = 0x40;
    arg.unk8 = 0x10;
    arg.tail.values[0] = &D_auto_80150340;
    arg.tail.values[1] = 0;
    arg.tail.values[2] = 0;
    arg.tail.values[3] = 0;
    arg.unk9 = 0;
    temp_v0 = func_80112140(0, 0, &D_auto_80150340, 1, 0x88);
    D_auto_80150350 = temp_v0;
    func_8011B314(temp_v0, &arg);
    D_auto_80150354 = func_80112140(0, 0, &D_auto_80150340, 1, 0x1C);
}
