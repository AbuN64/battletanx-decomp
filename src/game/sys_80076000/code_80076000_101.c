#include "game/sys_80076000.h"
#include "span_1000/code_8007EBA0.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A27D0.h"
s32 func_auto_800A42A4(struct Unknown800A42A4 *arg0);
void func_80080AA8(s32 layer, ViewMatrix *views, u16 *perspNorms)
{
    s32 lastPlayer;
    u32 lastMatrix;
    s32 playerCount;
    s32 bucketIndex;
    DrawGroup *group;
    DrawItem *item;
    Gfx *lastCommands;
    s32 player;

    lastPlayer = -1;
    lastMatrix = 0;
    playerCount = func_8007AAA0();
    for (bucketIndex = 0; bucketIndex < 32; bucketIndex++) {
        for (group = D_auto_801C0840[layer][bucketIndex]; group != 0; group = group->next) {
            lastCommands = 0;
            func_8007EEF8(group->displayList);
            for (player = 0; player < playerCount; player++) {
                for (item = group->perPlayer[player]; item != 0; item = item->next) {
                    if (player != lastPlayer) {
                        func_8007EEF8(func_auto_800A42A4(func_800A6688((u16)player)));
                        lastPlayer = player;
                        func_8007E8EC(&views[player], perspNorms[player]);
                    }
                    if (item->matrixAddress != lastMatrix) {
                        func_8007EB64(item->matrixAddress, 2);
                        lastMatrix = item->matrixAddress;
                    }
                    if (item->commands != lastCommands && item->commands != 0) {
                        func_8007EF64(1, item->commands);
                        lastCommands = item->commands;
                    }
                    func_8007EEF8(item->displayList);
                }
            }
        }
    }
}
