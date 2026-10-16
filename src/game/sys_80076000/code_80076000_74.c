#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_80096E80(f32 x, f32 y, u16 flags, u32 shape, AreaBox *box, f32 scale)
{
    switch (shape) {
    case 0:
        func_80109268(box, x, y, scale * D_auto_8007212C, scale * D_auto_80072120, scale * D_auto_80072124, scale * D_auto_80072128, flags);
        break;
    case 1:
        func_80109268(box, x, y, scale * D_auto_80072130, scale * D_auto_80072138, scale * D_auto_80072134, scale * D_auto_80072138, flags);
        break;
    case 2:
        func_80109268(box, x, y, scale * D_auto_80072148, scale * D_auto_8007213C, scale * D_auto_80072140, scale * D_auto_80072144, flags);
        break;
    }
}
