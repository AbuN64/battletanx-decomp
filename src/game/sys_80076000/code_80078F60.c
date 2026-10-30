#include "include_asm.h"

#include "shared/bt_span_1000_code_80078E30.h"
#include <ultra64.h>
#include "span_1000/code_80078E30.h"
#include "game/sys_80076000.h"

/* This entry returns the address without reading the object. */

unsigned char *func_80078F60(void) {
    return &D_8014E0D0;
}

void func_800793D0(Scheduler *scheduler);
void func_80078F70(Scheduler *scheduler) {
    void *message;
    while (1) {
        osRecvMesg(scheduler, &message, 1);
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
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8007902C(Unknown8007902C *record)
{
    record->value1E8 = 0;
    record->value1EE = 0;
    record->value1F0 = 0;
    record->value1F2 = 1;
    record->value1F4 = 0;
    record->value1F8 = 0;
    record->value1FC = 0;
    record->value200 = 0;
    record->value204 = 0;
    D_801502E0 = 0;
}
INCLUDE_ASM("span_1000", func_80079064);
INCLUDE_ASM("span_1000", func_800790EC);
INCLUDE_ASM("span_1000", func_800792C8);
#include "shared/bt_span_1000_code_80078E30.h"














#include "span_1000/code_80078E30.h"


                      /* extern */
                      /* extern */
                /* extern */





/* extern */

void func_800793D0(Scheduler *scheduler) {
    u16 flags;
    if (func_8007F204(1) == 0) {
        func_8007F070(1, scheduler->task->value40);
        func_8007F070(2, 0);
        if ((scheduler->flags == 0) && (scheduler->value1FC == 1)) {
            func_800794C8(scheduler);
        } else {
            flags = scheduler->flags;
            if (flags & 4) {
                scheduler->flags = (u16) (flags | 8);
            } else {
                scheduler->task = 0;
            }
        }
    } else {
        scheduler->pending = 1;
    }
    func_80079530(scheduler);
}
INCLUDE_ASM("span_1000", func_80079474);
#include "game/sys_80076000.h"


void func_800794B4(void) {
    D_801502E0 = 1;
}

INCLUDE_ASM("span_1000", func_800794C8);
INCLUDE_ASM("span_1000", func_80079530);
