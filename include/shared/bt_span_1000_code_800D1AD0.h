#ifndef SHARED_BT_SPAN_1000_CODE_800D1AD0_H
#define SHARED_BT_SPAN_1000_CODE_800D1AD0_H
#include "shared/bt_types.h"

/* The queue retains consumed entries until a later write needs their slots. */
typedef struct U16HistoryQueue {
    u16 *data;
    u16 readIndex;
    u16 oldestIndex;
    u16 count;
    u16 historyCount;
    u16 capacity;
} U16HistoryQueue;















typedef struct {
    s32 start;
    s32 stride;
} BitStrideEntry;
#endif
