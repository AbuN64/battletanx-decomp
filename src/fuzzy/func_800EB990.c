#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800EB990(s32 arg0)
{
  int new_var;
  func_800E9A00(arg0, new_var);
  func_800E6FF8(arg0);
  new_var = 0x3F800000;
  func_800E99D4(arg0);
  func_800E6C5C(arg0);
  return -1;
}
