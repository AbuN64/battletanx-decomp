#include "include_asm.h"

#include "shared/bt_span_1000_code_80110CA0.h"
#include "shared/bt_span_1000_code_8011BD50.h"
#include "span_1000/code_80077930.h"
#include "sdk/libultra.h"
/* Shuts down the active view and returns the final teardown result. */

s32 osContStartQuery(OSMesgQueue *mq) {
    int ret;

    ret = 0;
    __osSiGetAccess();
    if (D_803C4DC0 != 0) {
        __osPackRequestData(0);
        ret = __osSiRawStartDma(1, D_803C4D80);
        osRecvMesg(mq, 0, 1);
    }
    ret = __osSiRawStartDma(0, D_803C4D80);
    D_803C4DC0 = 0;
    __osSiRelAccess();
    return ret;
}

