#include "shared/bt_span_1000_code_800D1AD0.h"

s32 func_800DE1B4(U16HistoryQueue *queue, u16 value) {
    u16 index;
    if (queue->count < queue->capacity) {
        if (queue->count + queue->historyCount == queue->capacity) {
            index = queue->oldestIndex;
            queue->oldestIndex = (index + 1) % queue->capacity;
            queue->historyCount--;
        } else {
            index = (queue->readIndex + queue->count) % queue->capacity;
        }
        queue->data[index] = value;
        queue->count++;
        return 1;
    }
    return 0;
}

u16 func_800DE280(U16HistoryQueue *queue) {
    u16 value;
    u16 index;
    u16 next;
    if (queue->count == 0) {
        return 0;
    }
    index = queue->readIndex;
    next = (index + 1) % queue->capacity;
    value = queue->data[index];
    queue->historyCount++;
    queue->count--;
    queue->readIndex = next;
    return value;
}
