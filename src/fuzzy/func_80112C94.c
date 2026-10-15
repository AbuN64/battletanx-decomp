#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
s32 func_80112D7C();
extern s32 D_auto_80145DB0;
extern s32 D_auto_803C6044;
extern s32 D_auto_A4600010;
extern s32 D_auto_A5000510;

void func_80112C94(void) {
    s32 sp18;
    struct CallbackRecord *sp1C;

    sp1C = D_auto_803C6044 + 0x14;
    sp18 = D_auto_A4600010;
    if (sp18 & 3) {
        do {
            sp18 = D_auto_A4600010;
        } while (sp18 & 3);
    }
    D_auto_A5000510 = sp1C->unk10 | 0x10000000;
    sp18 = D_auto_A4600010;
    if (sp18 & 3) {
        do {
            sp18 = D_auto_A4600010;
        } while (sp18 & 3);
    }
    D_auto_A5000510 = sp1C->unk10;
    func_80112D7C();
    D_auto_A4600010 = 2;
    D_auto_80145DB0 |= 0x100401;
}
