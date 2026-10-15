#include "shared/bt_types.h"

s32 func_80109094(u32 arg0) {
    u32 rest = arg0;
    u32 root = 0;
    u32 trial;

    trial = (root << 16) + 0x40000000;
    if (rest >= trial) {
        root += 0x8000;
        rest -= trial;
    }
    trial = (root << 15) + 0x10000000;
    if (rest >= trial) {
        root += 0x4000;
        rest -= trial;
    }
    trial = (root << 14) + 0x4000000;
    if (rest >= trial) {
        root += 0x2000;
        rest -= trial;
    }
    trial = (root << 13) + 0x1000000;
    if (rest >= trial) {
        root += 0x1000;
        rest -= trial;
    }
    trial = (root << 12) + 0x400000;
    if (rest >= trial) {
        root += 0x800;
        rest -= trial;
    }
    trial = (root << 11) + 0x100000;
    if (rest >= trial) {
        root += 0x400;
        rest -= trial;
    }
    trial = (root << 10) + 0x40000;
    if (rest >= trial) {
        root += 0x200;
        rest -= trial;
    }
    trial = (root << 9) + 0x10000;
    if (rest >= trial) {
        root += 0x100;
        rest -= trial;
    }
    trial = (root << 8) + 0x4000;
    if (rest >= trial) {
        root += 0x80;
        rest -= trial;
    }
    trial = (root << 7) + 0x1000;
    if (rest >= trial) {
        root += 0x40;
        rest -= trial;
    }
    trial = (root << 6) + 0x400;
    if (rest >= trial) {
        root += 0x20;
        rest -= trial;
    }
    trial = (root << 5) + 0x100;
    if (rest >= trial) {
        root += 0x10;
        rest -= trial;
    }
    trial = (root << 4) + 0x40;
    if (rest >= trial) {
        root += 0x8;
        rest -= trial;
    }
    trial = (root << 3) + 0x10;
    if (rest >= trial) {
        root += 0x4;
        rest -= trial;
    }
    trial = (root << 2) + 0x4;
    if (rest >= trial) {
        root += 0x2;
        rest -= trial;
    }
    trial = root * 2 + 1;
    return root + (rest >= trial);
}
