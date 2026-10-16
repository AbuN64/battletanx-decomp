#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"



void func_8008B030(EffectSlot *node)
{
    s16 oldHead;

    oldHead = D_auto_802C13E0;
    D_auto_802C13E0 = node - D_auto_802C3A30;
    node->header.next = oldHead;
}

