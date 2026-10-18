#ifndef UNBAKE_SPAN_1000_CODE_8007A470_H
#define UNBAKE_SPAN_1000_CODE_8007A470_H
#include "shared/bt_types.h"
#include "sdk/libultra.h"





extern float D_801B4AB4;


extern int func_8007AAE4(void);


extern int D_80134E5C;


extern int func_8007AAA0(void);


extern void func_8007C298(void);


extern int func_8007AAB0(void);


extern int func_8007AAC0(void);


extern int func_8007B1DC();


extern int func_8007C33C(void);


extern int D_801B4AB8;










typedef struct AudioDmaBuffer {
    ListNode link;
    u32 startAddr, lastFrame;
    u8 *ptr;
} AudioDmaBuffer;
typedef struct AudioDmaLists { AudioDmaBuffer *firstUsed, *firstFree; } AudioDmaLists;
typedef struct AudioTask {
    u32 type, flags;
    u64 *ucodeBoot;
    u32 ucodeBootSize;
    u64 *ucode;
    u32 ucodeSize;
    u64 *ucodeData;
    u32 ucodeDataSize;
    u64 *dramStack;
    u32 dramStackSize;
    u64 *outputBuff;
    u64 *outputBuffSize;
    u64 *dataPtr;
    u32 dataSize;
    u64 *yieldDataPtr;
    u32 yieldDataSize;
} AudioTask;
struct AudioFrameInfo;
typedef struct AudioDoneMessage { s32 type; struct AudioFrameInfo *frame; } AudioDoneMessage;
typedef struct AudioFrameInfo {
    s16 *outputBuffer;
    s16 frameSamples;
    AudioTask task;
    AudioDoneMessage message;
} AudioFrameInfo;
extern s32 func_801105F0(void *address, s32 length);

#endif

