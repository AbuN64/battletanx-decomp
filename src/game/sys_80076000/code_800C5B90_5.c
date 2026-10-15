#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800DCFCC(u32 arg0, u8 *arg1) {
    u32 key = arg0 ^ 0xEFF8DF2B;
    u32 check;

    arg1[0] = D_auto_80135778[key >> 28];
    arg1[1] = D_auto_80135778[(key >> 24) & 0xF];
    arg1[2] = D_auto_80135778[(key >> 20) & 0xF];
    arg1[3] = D_auto_80135778[(key >> 16) & 0xF];
    arg1[4] = D_auto_80135778[(key >> 12) & 0xF];
    arg1[5] = D_auto_80135778[(key >> 8) & 0xF];
    arg1[6] = D_auto_80135778[(key >> 4) & 0xF];
    check = (((key * 0x19660D) + 0x5F) & 0xFF) ^ 0xB2;
    arg1[7] = D_auto_80135778[key & 0xF];
    arg1[8] = D_auto_80135778[check >> 4];
    arg1[9] = D_auto_80135778[check & 0xF];
    arg1[10] = 0;
}
