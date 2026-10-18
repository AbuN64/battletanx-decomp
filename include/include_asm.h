#ifndef INCLUDE_ASM_H
#define INCLUDE_ASM_H
#if !defined(M2CTX) && !defined(PERMUTER)
#define INCLUDE_PRE ".ifndef _MACRO_INC_GUARD\n    .purgem glabel\n    .purgem dlabel\n    .endif\n"
#define INCLUDE_ASM(SEG, NAME) \
    __asm__(INCLUDE_PRE ".section .text\n    .set noat\n    .set noreorder\n" \
            "    .include \"nonmatchings/" SEG "/" #NAME ".s\"\n" \
            "    .set reorder\n    .set at\n")
#define INCLUDE_RODATA(SEG, NAME) \
    __asm__(INCLUDE_PRE ".section .rodata." #NAME "\n    .include \"data/" SEG "/" #NAME ".s\"\n.section .text")
#define INCLUDE_DATA(SEG, NAME) \
    __asm__(INCLUDE_PRE ".section .data." #NAME "\n    .include \"data/" SEG "/" #NAME ".s\"\n.section .text")
#define INCLUDE_BSS(SEG, NAME, SIZE) \
    __asm__(".section .bss\n    .space " #SIZE "\n.section .text")
#else
#define INCLUDE_ASM(SEG, NAME)
#define INCLUDE_RODATA(SEG, NAME)
#define INCLUDE_DATA(SEG, NAME)
#define INCLUDE_BSS(SEG, NAME, SIZE)
#endif
#endif
