.set noreorder
.set noat
.section .text
.globl osWritebackDCache
osWritebackDCache:
    blez $a1, .LosWritebackDCache_048
    nop
    addiu $t3, $zero, 0x2000
    sltu $at, $a1, $t3
    beqz $at, .LosWritebackDCache_050
    nop
    move $t0, $a0
    addu $t1, $a0, $a1
    sltu $at, $t0, $t1
    beqz $at, .LosWritebackDCache_048
    nop
    andi $t2, $t0, 0xF
    addiu $t1, $t1, -0x10
    subu $t0, $t0, $t2
.LosWritebackDCache_038:
    cache 0x19, 0x0($t0)
    sltu $at, $t0, $t1
    bnez $at, .LosWritebackDCache_038
    addiu $t0, $t0, 0x10
.LosWritebackDCache_048:
    jr $ra
    nop
.LosWritebackDCache_050:
    lui $t0, 0x8000
    addu $t1, $t0, $t3
    addiu $t1, $t1, -0x10
.LosWritebackDCache_05C:
    cache 0x01, 0x0($t0)
    sltu $at, $t0, $t1
    bnez $at, .LosWritebackDCache_05C
    addiu $t0, $t0, 0x10
    jr $ra
    nop
    nop
    nop
    nop
