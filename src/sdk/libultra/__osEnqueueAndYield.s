.set noreorder
.set noat
.set gp=64
.set fp=64
.section .text
.globl __osEnqueueAndYield
__osEnqueueAndYield:
    lui $a1, %hi(D_80146100)
    lw $a1, %lo(D_80146100)($a1)
    mfc0 $t0, $12
    lw $k1, 0x18($a1)
    ori $t0, $t0, 0x2
    sw $t0, 0x118($a1)
    sd $s0, 0x98($a1)
    sd $s1, 0xA0($a1)
    sd $s2, 0xA8($a1)
    sd $s3, 0xB0($a1)
    sd $s4, 0xB8($a1)
    sd $s5, 0xC0($a1)
    sd $s6, 0xC8($a1)
    sd $s7, 0xD0($a1)
    sd $gp, 0xE8($a1)
    sd $sp, 0xF0($a1)
    sd $fp, 0xF8($a1)
    sd $ra, 0x100($a1)
    beqz $k1, .Lfunc_80111CBC_070
    sw $ra, 0x11C($a1)
    cfc1 $k1, $31
    sdc1 $f20, 0x180($a1)
    sdc1 $f22, 0x188($a1)
    sdc1 $f24, 0x190($a1)
    sdc1 $f26, 0x198($a1)
    sdc1 $f28, 0x1A0($a1)
    sdc1 $f30, 0x1A8($a1)
    sw $k1, 0x12C($a1)
.Lfunc_80111CBC_070:
    lw $k1, 0x118($a1)
    andi $t1, $k1, 0xFF00
    beqz $t1, .Lfunc_80111CBC_0B0
    nop
    lui $t0, %hi(D_80145DB0)
    addiu $t0, $t0, %lo(D_80145DB0)
    lw $t0, 0x0($t0)
    addiu $at, $zero, -0x1
    xor $t0, $t0, $at
    lui $at, 0xFFFF
    andi $t0, $t0, 0xFF00
    ori $at, $at, 0xFF
    or $t1, $t1, $t0
    and $k1, $k1, $at
    or $k1, $k1, $t1
    sw $k1, 0x118($a1)
.Lfunc_80111CBC_0B0:
    lui $k1, 0xA430
    lw $k1, 0xC($k1)
    beqz $k1, .Lfunc_80111CBC_0E8
    nop
    lui $k0, %hi(D_80145DB0)
    addiu $k0, $k0, %lo(D_80145DB0)
    lw $k0, 0x0($k0)
    lw $t0, 0x128($a1)
    addiu $at, $zero, -0x1
    srl $k0, $k0, 16
    xor $k0, $k0, $at
    andi $k0, $k0, 0x3F
    and $k0, $k0, $t0
    or $k1, $k1, $k0
.Lfunc_80111CBC_0E8:
    beqz $a0, .Lfunc_80111CBC_0F8
    sw $k1, 0x128($a1)
    jal __osEnqueueThread
    nop
.Lfunc_80111CBC_0F8:
    j D_80111E14
    nop
