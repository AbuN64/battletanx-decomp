#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_types.h"
#include "span_1000/code_80077930.h"






void func_8007A968(void) {
    u32 i;
    void *message = 0;
    AudioDmaBuffer *buffer;
    AudioDmaBuffer *next;

    for (i = 0; i < D_8012576C; i++) {
        osRecvMesg(&D_801529D8, &message, 0);
    }

    buffer = D_80152F84.firstUsed;
    while (buffer != 0) {
        next = (AudioDmaBuffer *)buffer->link.prev;
        if (buffer->lastFrame + 1 < D_80125768) {
            if (D_80152F84.firstUsed == buffer) {
                D_80152F84.firstUsed = next;
            }
            func_8011C150(&buffer->link);
            if (D_80152F84.firstFree != 0) {
                func_8011C180(&buffer->link, &D_80152F84.firstFree->link);
            } else {
                D_80152F84.firstFree = buffer;
                buffer->link.prev = 0;
                buffer->link.next = 0;
            }
        }
        buffer = next;
    }
    D_8012576C = 0;
    D_80125768++;
}

