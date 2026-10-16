#include "game/sys_80076000.h"
s32 func_80082458(SceneModelPart *owner, s32 index) {
    if (index >= 0) {
        return (owner->animation & 0x7FF) + index;
    }
    if (index == -1) {
        return (owner->animation & 0x7FF) + D_auto_801B4AA0 % (owner->animation >> 11);
    }
    return (owner->animation & 0x7FF) + (D_auto_801B4AA0 >> 1) % (owner->animation >> 11);
}
