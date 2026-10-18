#include "include_asm.h"

#include "shared/bt_span_1000_code_80078E30.h"
#include "shared/bt_types.h"
#include "span_1000/code_80078E30.h"
#include "game/sys_80076000.h"

/* This entry returns the address without reading the object. */

unsigned char *func_80078F60(void) {
    return &D_auto_8014E0D0;
}

void func_800793D0(func_800793D0_S1_Shared800793D0 *arg0);
void func_80078F70(void *scheduler) {
    void *message;
    while (1) {
        func_80119240(scheduler, &message, 1);
        switch ((s32) message) {
            case 0x29A:
                func_800790EC(scheduler);
                break;
            case 0x29B:
                func_800792C8(scheduler);
                break;
            case 0x29C:
                func_800793D0(scheduler);
                break;
            case 0x29D:
                func_80079474(scheduler);
                break;
            case 0x29E:
                func_800794B4(scheduler);
                break;
        }
    }
}

INCLUDE_DATA("span_1000", D_800710D4);
INCLUDE_ASM("span_1000", func_8007902C);
INCLUDE_ASM("span_1000", func_80079064);
INCLUDE_ASM("span_1000", func_800790EC);
INCLUDE_ASM("span_1000", func_800792C8);
#include "shared/bt_span_1000_code_80078E30.h"
#include "shared/bt_types.h"














#include "span_1000/code_80078E30.h"


                      /* extern */
                      /* extern */
                /* extern */





/* extern */

void func_800793D0(func_800793D0_S1_Shared800793D0 *arg0) {
    u16 temp_v1;

    if (func_8007F204(1) == 0) {
        func_8007F070(1, arg0->unk204->unk40);
        func_8007F070(2, 0);
        if ((arg0->unk1F4 == 0) && (arg0->unk1FC == 1)) {
            func_800794C8(arg0);
        } else {
            temp_v1 = arg0->unk1F4;
            if (temp_v1 & 4) {
                arg0->unk1F4 = (u16) (temp_v1 | 8);
            } else {
                arg0->unk204 = ((void *)0);
            }
        }
    } else {
        arg0->unk1F8 = 1;
    }
    func_80079530(arg0);
}

INCLUDE_ASM("span_1000", func_80079474);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800794B4(void) {
    D_auto_801502E0 = 1;
}

INCLUDE_ASM("span_1000", func_800794C8);
INCLUDE_ASM("span_1000", func_80079530);
