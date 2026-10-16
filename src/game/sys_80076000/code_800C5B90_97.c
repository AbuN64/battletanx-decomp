#include "shared/bt_types.h"
#include "span_1000/code_800E0B00.h"
#include "game/sys_80076000.h"
void func_800E097C(s32 arg0) {
    D_auto_80135834->unk20 = arg0;
}

void func_800E098C(u16 index) {
    MeshCorner *corner = &D_auto_80135834->corners[index];
    corner->vertex = 0;
    corner->neighbor = 0;
}
