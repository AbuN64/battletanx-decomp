#ifndef BT_ROM_ASSETS_H
#define BT_ROM_ASSETS_H
#include "shared/bt_types.h"
/* Paired ROM ranges initialized together in the asset table. */
typedef struct RomAsset {
    const u8 *start, *end;
    const u8 *alternateStart, *alternateEnd;
} RomAsset;
extern RomAsset D_80125A68[];
#endif
