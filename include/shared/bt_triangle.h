#pragma once
/* Classic F3DEX triangle command and its packed vertex indices. */
#define btSPTriangleCommand(pkt) ((pkt)->words.w0 = 0xBF000000)
#define btSPTriangleIndices(pkt, v0, v1, v2) \
    ((pkt)->words.w1 = (s32)(((((v0) * 2) & 0xFE) << 16) | (((v1) << 9) & 0xFE00) | (((v2) * 2) & 0xFE)))
