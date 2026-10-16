#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"



u8 func_80108B68(QueryBox *body, s32 self, u16 mask, f32 *delta, f32 *out, s32 arg5, s32 arg6,
                     s32 *owner)
{
    s32 rows[4];
    s32 columns[4];
    s32 layers[4];
    s32 baseX;
    s32 baseZ;
    SpatialRecord *other;
    s32 cellCount;
    s32 i;
    s32 j;
    s32 row;
    s32 col;
    s32 layer;
    s16 id;
    u8 hit;

    hit = 0;
    cellCount = 0;
    *owner = 0;
    baseX = body->values[1] + D_auto_803B8238;
    baseZ = body->values[2] + D_auto_803B823C;
    for (i = 0; i < 4; i++) {
        row = (baseX + D_auto_80142B50[i]) >> 11;
        col = (baseZ + D_auto_80142B60[i]) >> 11;
        if (((row >= 20) | (col >= 20)) == 0 && ((row < 0) | (col < 0)) == 0) {
            for (j = 0; j < i; j++) {
                if (row == rows[j] && col == columns[j]) {
                    break;
                }
            }
            layers[cellCount] = i;
            rows[cellCount] = row;
            columns[cellCount] = col;
            cellCount++;
        }
    }
    for (i = 0; i < cellCount + 1; i++) {
        if (i < cellCount) {
            layer = layers[i];
            row = rows[i];
            col = columns[i];
            id = D_auto_803B75B0[layer][row][col];
        } else {
            id = D_auto_803B8230;
            layer = 0;
        }
        while (id != -1) {
            other = &D_auto_803B8248[id];
            if ((other->mode & mask) && id != self) {
                if (func_8010B9C8(body, delta, &other->body, arg5, arg6)) {
                    *owner = other->owner;
                    hit = 1;
                }
            }
            id = other->cellLinks[layer & 3];
        }
    }
    if (hit) {
        out[1] = body->values[1];
        out[0] = body->values[2];
    } else {
        out[1] = body->values[1] + delta[1];
        out[0] = body->values[2] + delta[0];
    }
    return hit;
}

