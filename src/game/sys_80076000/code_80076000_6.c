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
