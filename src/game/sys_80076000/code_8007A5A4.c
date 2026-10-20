#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80121F10.h"

s32 func_8007A5A4(AudioFrameInfo *frame, AudioFrameInfo *previous) {
    s32 commandCount;
    u32 outputBuffer;
    u64 *commandEnd;
    AudioTask *task;
    void *message;
    u64 **commandList;

    func_8007A968();
    outputBuffer = osVirtualToPhysical(frame->outputBuffer);
    if (previous != 0) {
        osAiSetNextBuffer(previous->outputBuffer, previous->frameSamples << 2);
    }
    frame->frameSamples = (D_801B4A40 - ((u32)osAiGetLength() >> 2) + 0x60) & 0xFFF0;
    if (frame->frameSamples < D_80152EE8) {
        frame->frameSamples = D_80152EE8;
    }
    commandEnd = func_8011DD48(D_80152EF0[D_80125770], &commandCount, outputBuffer, frame->frameSamples);
    if (commandCount == 0) {
        return 0;
    }
    commandList = &D_80152EF0[D_80125770];
    frame->task.type = 2;
    frame->task.flags = 0;
    frame->task.ucodeBoot = D_8010E160;
    frame->task.ucodeBootSize = (u8 *)D_8010E230 - (u8 *)D_8010E160;
    frame->task.ucode = (u64 *)D_8010F660;
    frame->task.ucodeData = (u64 *)D_80145AA0;
    frame->task.ucodeDataSize = 0x800;
    frame->task.dataPtr = *commandList;
    frame->task.dataSize = (commandEnd - *commandList) * sizeof(u64);
    task = &frame->task;
    message = &frame->message;
    frame->task.yieldDataPtr = 0;
    frame->task.yieldDataSize = 0;
    frame->task.dramStack = 0;
    frame->task.dramStackSize = 0;
    frame->task.outputBuff = 0;
    frame->task.outputBuffSize = 0;
    while (D_80125764 != 0) {
    }
    D_80152A10 = message;
    D_80125764 = task;
    D_80125770 ^= 1;
    return 1;
}

