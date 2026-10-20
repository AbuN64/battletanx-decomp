#include "include_asm.h"

INCLUDE_ASM("span_1000", __osContRamRead);
INCLUDE_ASM("span_1000", __osPackRamReadData);
INCLUDE_ASM("span_1000", __osContRamWrite);
INCLUDE_ASM("span_1000", __osPackRamWriteData);
