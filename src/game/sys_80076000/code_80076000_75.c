#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"
void func_800933B8(SequenceEffect *effect)
{
    if (effect->step < effect->stepCount - 1) {
        func_8008B89C();
        func_80093F3C(effect);
        effect->flags |= 0x10;
    }
}
