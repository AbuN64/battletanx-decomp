#include "game/sys_80076000.h"
#include "span_1000/code_80077930.h"
#include "shared/bt_types.h"
void func_8011C1A4(s32 arg0);
void func_8011D2F0(void * arg0);
static inline AudioFrameInfo *audio_message_frame(void *received)
{
    AudioDoneMessage *message = received;
    return message->frame;
}
void func_8007A470(void *arg)
{
    s32 done = 0;
    AudioFrameInfo *previous = 0;
    void *command = 0;
    void *received = 0;

    do {
        func_80119240(&D_auto_80152F90, &command, 1);
        switch ((s32)command) {
        case 1:
            if (func_8007A5A4(D_auto_801B4A48[(u32)D_auto_80125768 % 3], previous) != 0) {
                func_80119240(&D_auto_801B4A28, &received, 1);
                func_8007A758(audio_message_frame(received));
                previous = audio_message_frame(received);
            }
            break;
        case 10:
            previous = 0;
            func_8011C1A4(D_auto_801502F0);
            D_auto_80125764 = 0;
            func_8011D2F0(0);
            break;
        }
    } while (!done);
}
