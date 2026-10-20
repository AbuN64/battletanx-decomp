#include "include_asm.h"

INCLUDE_ASM("span_1000", __osEnqueueThread);

INCLUDE_ASM("span_1000", __osPopThread);

INCLUDE_DATA("span_1000", D_80111E14);
