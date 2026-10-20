#ifndef SHARED_BT_SPAN_1000_CODE_800EC380_H
#define SHARED_BT_SPAN_1000_CODE_800EC380_H
#include "shared/bt_types.h"













/* Header shared by demo loading, playback and frame interpolation. */
typedef struct DemoHeader {
    s32 frameCount, objectCount, value08, trailerCount, value10, value14;
} DemoHeader;
typedef struct DemoEvent {
    s16 frame;
    u8 kind, value;
    s32 x, z;
} DemoEvent;
#endif

