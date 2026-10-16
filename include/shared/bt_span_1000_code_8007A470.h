#ifndef UNBAKE_SPAN_1000_CODE_8007A470_H
#define UNBAKE_SPAN_1000_CODE_8007A470_H
#include "shared/bt_types.h"
#include "sdk/libultra.h"





extern float D_801B4AB4;


extern int func_8007AAE4(void);


extern int D_auto_80134E5C;


extern int func_8007AAA0(void);


extern void func_8007C298(void);


extern int func_8007AAB0(void);


extern int func_8007AAC0(void);


extern int func_8007B1DC();


extern int func_8007C33C(void);


extern int D_auto_801B4AB8;










typedef struct AudioDmaBuffer {
    ListNode link;
    u32 startAddr, lastFrame;
    u8 *ptr;
} AudioDmaBuffer;
typedef struct AudioDmaLists { AudioDmaBuffer *firstUsed, *firstFree; } AudioDmaLists;
#endif
