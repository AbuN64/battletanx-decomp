.set noreorder
.set noat
.section .text
.globl osInvalDCache
osInvalDCache:
    blez $a1, .LosInvalDCache_080
    nop
    addiu $t3, $zero, 0x2000
    sltu $at, $a1, $t3
    beqz $at, .LosInvalDCache_088
    nop
    move $t0, $a0
    addu $t1, $a0, $a1
    sltu $at, $t0, $t1
    beqz $at, .LosInvalDCache_080
    nop
    andi $t2, $t0, 0xF
    beqz $t2, .LosInvalDCache_050
    addiu $t1, $t1, -0x10
    subu $t0, $t0, $t2
    cache 0x15, 0x0($t0)
    sltu $at, $t0, $t1
    beqz $at, .LosInvalDCache_080
    nop
    addiu $t0, $t0, 0x10
.LosInvalDCache_050:
    andi $t2, $t1, 0xF
    beqz $t2, .LosInvalDCache_070
    nop
    subu $t1, $t1, $t2
    cache 0x15, 0x10($t1)
    sltu $at, $t1, $t0
    bnez $at, .LosInvalDCache_080
    nop
.LosInvalDCache_070:
    cache 0x11, 0x0($t0)
    sltu $at, $t0, $t1
    bnez $at, .LosInvalDCache_070
    addiu $t0, $t0, 0x10
.LosInvalDCache_080:
    jr $ra
    nop
.LosInvalDCache_088:
    lui $t0, 0x8000
    addu $t1, $t0, $t3
    addiu $t1, $t1, -0x10
.LosInvalDCache_094:
    cache 0x01, 0x0($t0)
    sltu $at, $t0, $t1
    bnez $at, .LosInvalDCache_094
    addiu $t0, $t0, 0x10
    jr $ra
    nop
    nop
