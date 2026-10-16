#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A9FC4.h"

void func_8010C9E8(s32 unused, f32 (*v)[3]) {
    f32 one = D_auto_8007558C;
    D_auto_80142CC0 += 0x64;
    func_800A9C20();
    func_800AB0A4(one, one);
    func_800A9FC4((*v)[0], (*v)[1], (*v)[2]);
    v++;
    func_800AB0A4(0.0f, one);
    func_800A9FC4((*v)[0], (*v)[1], (*v)[2]);
    v++;
    func_800AB0A4(0.0f, 0.0f);
    func_800A9FC4((*v)[0], (*v)[1], (*v)[2]);
    v++;
    func_800AB0A4(one, 0.0f);
    func_800A9FC4((*v)[0], (*v)[1], (*v)[2]);
    func_800A9CC4();
    func_800AA328(0, 1, 2);
    func_800AA328(0, 2, 3);
}
