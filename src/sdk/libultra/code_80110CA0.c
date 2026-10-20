#include "include_asm.h"

#include "shared/bt_span_1000_code_80110CA0.h"
#include "shared/bt_span_1000_code_8011BD50.h"
#include "span_1000/code_80077930.h"
#include "sdk/libultra.h"
/* Shuts down the active view and returns the final teardown result. */

int func_80110CA0(void *arg0) {
    int ret;

    ret = 0;
    func_8011BDA0();
    if (D_803C4DC0 != 0) {
        func_801112A8(0);
        ret = __osSiRawStartDma(1, D_803C4D80);
        osRecvMesg(arg0, 0, 1);
    }
    ret = __osSiRawStartDma(0, D_803C4D80);
    D_803C4DC0 = 0;
    func_8011BDE4();
    return ret;
}

