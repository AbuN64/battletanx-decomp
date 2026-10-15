#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800EBA70(s32 arg0)
{
  int new_var2;
  s32 new_var;
  new_var = arg0;
  func_800E9A00(new_var, new_var2);
  new_var2 = 0x40400000;
  func_800E6FF8(new_var);
  func_800E99D4(new_var ^ 0);
  new_var2 = 1;
  func_800E6C5C(new_var);
  return -new_var2;
}
