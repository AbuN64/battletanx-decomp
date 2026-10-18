# BattleTanx: matching build.
# make check        builds every version ROM from the committed sources and verifies its SHA-1.
# make check CHECK=tree  verifies only the committed progress reports (no ROMs needed).
# Tool commands default to conventional names; put local paths in local.mk.
SHELL := /bin/sh
.SUFFIXES:
.DELETE_ON_ERROR:
.SECONDARY:
Q = $(if $(filter 1,$(V)),,@)
NAME := BattleTanx
VERSIONS := us
CHECK ?= rom
-include local.mk
ifneq ($(JOBS),)
ifeq ($(filter -j% --jobserver%,$(MAKEFLAGS)),)
MAKEFLAGS += -j$(JOBS)
endif
endif
ifneq ($(filter default undefined,$(origin ARMIPS)),)
ARMIPS := armips
endif
ifneq ($(filter default undefined,$(origin AS)),)
AS := mips-linux-gnu-as
endif
ifneq ($(filter default undefined,$(origin CPP)),)
CPP := cpp
endif
ifneq ($(filter default undefined,$(origin LD)),)
LD := mips-linux-gnu-ld
endif
ifneq ($(filter default undefined,$(origin N64LINK)),)
N64LINK := tools/n64link/n64link
endif
ifneq ($(filter default undefined,$(origin OBJCOPY)),)
OBJCOPY := mips-linux-gnu-objcopy
endif
CC_gcc_2_7_2_kmc ?= tools/gcc-2.7.2-kmc/cc1
AS_gcc_2_7_2_kmc ?= $(AS)
TOOLCHAIN_gcc_2_7_2_kmc ?= tools/gcc-2.7.2-kmc/.stamp
CC_gcc_2_8_1_sn64 ?= tools/gcc-2.8.1-sn64/cc1
AS_gcc_2_8_1_sn64 ?= $(AS)
TOOLCHAIN_gcc_2_8_1_sn64 ?= tools/gcc-2.8.1-sn64/.stamp
CC_ido_7_1 ?= tools/ido-7.1/cc
AS_ido_7_1 ?= tools/ido-7.1/as1
TOOLCHAIN_ido_7_1 ?= tools/ido-7.1/.stamp
SPLAT ?= splat
OBJDUMP ?= mips-linux-gnu-objdump
SHA1_us := 535860d941738ac1210c20a9b80114fea0e0ff17
CPPFLAGS_BASE := -P -undef -nostdinc -D_LANGUAGE_C -DF3DEX_GBI_2 -D__GNUC__=2
ASFLAGS_BASE := -march=vr4300 -mabi=32 -EB -G0 --no-pad-sections -mips3
TC ?= gcc_2_7_2_kmc
FAMILY ?= gcc
CFLAGS_gcc_2_7_2_kmc := -G0 -mips3 -mgp32 -mfp32 -O2
CFLAGS_gcc_2_8_1_sn64 := -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mgp32 -mfp64 -mno-fix4300
CFLAGS_ido_7_1 := -Wab,-r4300_mul -c -G0 -non_shared -mips2 -O2
EXTRA ?=
UDEF ?= __UNBAKE_STDARG_GCC

.PHONY: all check extract
all: check
ifeq ($(CHECK),tree)
check:
	$(Q)test -s BattleTanx.ld && test -s versions/us/splat.yaml && test -s versions/us/symbol_addrs.txt && test -s include/include_asm.h
else ifeq ($(CHECK),rom)
check: build/us/BattleTanx.z64
	$(Q)test "$$(sha1sum < build/us/BattleTanx.z64 | cut -d' ' -f1)" = $(SHA1_us)
else
$(error CHECK must be rom or tree)
endif

extract: build/us/.extract
build/us/.extract: versions/us/splat.yaml versions/us/symbol_addrs.txt roms/baserom.us.z64
	$(Q)mkdir -p build/us && $(SPLAT) split versions/us/splat.yaml
	$(Q)find asm/us/data -name '*.s' -print0 | xargs -0 perl -0pi -e 'if (m{/\* [0-9A-F]+ ([0-9A-F]{8}) }) { my $$v = hex($$1); my $$m = 0; $$m++ while $$m < 31 && (($$v >> $$m) & 1) == 0; s/^\.section[^\n]*\n//gm; s/^\.align (\d+)/".align " . ($$1 < $$m ? $$1 : $$m)/gme; s{(/\* \S+ \S+ ([0-9A-F]{8})([0-9A-F]{8}) \*/\s+)\.double [^\n]*}{$$1.word 0x$$2, 0x$$3}g }'
	$(Q)find asm/us/nonmatchings -name '*.s' -print0 | xargs -0 perl -pi -e 's{(/\* \S+ \S+ ([0-9A-F]{8}) \*/)\s+(?:move|b)\s[^\n]*}{$$1  .word 0x$$2}'
	$(Q)touch $@

build/us/undefined_syms.ld: build/us/.extract versions/us/symbol_addrs.txt
	$(Q)sed -nE 's/^([A-Za-z0-9_.]+) = (0x[0-9A-Fa-f]+);.*/PROVIDE(\1 = \2);/p' build/us/undefined_syms_auto.txt build/us/undefined_funcs_auto.txt versions/us/symbol_addrs.txt > $@

build/us/link.ld: BattleTanx.ld build/us/undefined_syms.ld
	$(Q)$(CPP) -P -undef -DVERSION_US $< > $@

build/us/assets/%.bin.o: build/us/.extract
	$(Q)mkdir -p $(dir $@) && $(OBJCOPY) -I binary -O elf32-tradbigmips -B mips asm/us/assets/$*.bin $@

build/us/BattleTanx.elf: build/us/link.ld build/us/src/span_1000/80071000.o build/us/src/game/sys_80076000/code_80076000.o build/us/src/span_1000/80071070.o build/us/src/span_1000/80071084.o build/us/src/span_1000/80071098.o build/us/src/game/sys_80076000/code_80076000_800710C0.o build/us/src/span_1000/800710E0.o build/us/src/span_1000/800710E8.o build/us/src/game/sys_80076000/code_80076000_800710F4.o build/us/src/span_1000/80071138.o build/us/src/span_1000/80071178.o build/us/src/game/sys_80076000/code_80076000_800711C8.o build/us/src/game/sys_80076000/code_80076000_80071378.o build/us/src/span_1000/800713D0.o build/us/src/span_1000/80071460.o build/us/src/span_1000/80071490.o build/us/src/game/sys_80076000/code_80076000_800714D8.o build/us/src/span_1000/80071518.o build/us/src/span_1000/80071538.o build/us/src/span_1000/80071560.o build/us/src/game/sys_80076000/code_80076000_80071568.o build/us/src/game/sys_80076000/code_80076000_800716E0.o build/us/src/game/sys_80076000/code_80076000_80071708.o build/us/src/span_1000/80071768.o build/us/src/span_1000/80071838.o build/us/src/span_1000/80071894.o build/us/src/game/sys_80076000/code_80076000_80071960.o build/us/src/span_1000/800719E8.o build/us/src/span_1000/80071A70.o build/us/src/span_1000/80071A98.o build/us/src/span_1000/80071B00.o build/us/src/span_1000/80071B54.o build/us/src/span_1000/80071BAC.o build/us/src/span_1000/80071BD0.o build/us/src/span_1000/80071BE8.o build/us/src/span_1000/80071C48.o build/us/src/game/sys_80076000/code_80076000_80071C50.o build/us/src/span_1000/80071C7C.o build/us/src/span_1000/80071CC0.o build/us/src/span_1000/80071CF8.o build/us/src/span_1000/80071D88.o build/us/src/span_1000/80071E90.o build/us/src/span_1000/80071EA8.o build/us/src/span_1000/80071F50.o build/us/src/span_1000/80072008.o build/us/src/span_1000/80072020.o build/us/src/game/sys_80076000/code_80076000_80072030.o build/us/src/game/sys_80076000/code_80076000_80072038.o build/us/src/span_1000/800720F0.o build/us/src/span_1000/80072120.o build/us/src/span_1000/80072150.o build/us/src/span_1000/80072190.o build/us/src/span_1000/800721A8.o build/us/src/span_1000/80072248.o build/us/src/span_1000/80072298.o build/us/src/span_1000/800722B8.o build/us/src/span_1000/800722F8.o build/us/src/span_1000/80072378.o build/us/src/span_1000/800723B0.o build/us/src/span_1000/800724A8.o build/us/src/span_1000/800724C8.o build/us/src/span_1000/80072528.o build/us/src/span_1000/80072540.o build/us/src/span_1000/80072580.o build/us/src/span_1000/800725B8.o build/us/src/span_1000/800725C8.o build/us/src/span_1000/80072630.o build/us/src/span_1000/80072678.o build/us/src/span_1000/80072698.o build/us/src/span_1000/80072700.o build/us/src/span_1000/80072780.o build/us/src/span_1000/80072884.o build/us/src/span_1000/800728B0.o build/us/src/span_1000/80072908.o build/us/src/span_1000/80072A48.o build/us/src/span_1000/80072A80.o build/us/src/span_1000/80072A90.o build/us/src/span_1000/80072B24.o build/us/src/span_1000/80072C78.o build/us/src/span_1000/80072CD0.o build/us/src/span_1000/80072CD8.o build/us/src/span_1000/80072DA0.o build/us/src/span_1000/80073020.o build/us/src/span_1000/80073050.o build/us/src/span_1000/80073098.o build/us/src/span_1000/800730B0.o build/us/src/span_1000/800730E0.o build/us/src/game/sys_80076000/code_800A8940.o build/us/src/span_1000/80073128.o build/us/src/span_1000/80073168.o build/us/src/span_1000/80073180.o build/us/src/span_1000/800731B0.o build/us/src/game/sys_80076000/code_800A8940_80073210.o build/us/src/span_1000/800733B4.o build/us/src/game/sys_80076000/code_800A8940_800733B8.o build/us/src/span_1000/80073400.o build/us/src/game/sys_80076000/code_800A8940_80073444.o build/us/src/span_1000/80073470.o build/us/src/game/sys_80076000/code_800BD1F0.o build/us/src/span_1000/80073500.o build/us/src/game/sys_80076000/code_800C0880.o build/us/src/span_1000/800735A0.o build/us/src/span_1000/80073698.o build/us/src/span_1000/80073710.o build/us/src/span_1000/800737C0.o build/us/src/game/sys_80076000/code_800C5B90.o build/us/src/span_1000/800738F0.o build/us/src/span_1000/80073B88.o build/us/src/span_1000/80073BE8.o build/us/src/span_1000/80073C18.o build/us/src/span_1000/80073C64.o build/us/src/span_1000/80073C70.o build/us/src/span_1000/80073C80.o build/us/src/game/sys_80076000/code_800C5B90_80073D20.o build/us/src/span_1000/80073D48.o build/us/src/span_1000/80073EF8.o build/us/src/span_1000/800740AC.o build/us/src/span_1000/80074130.o build/us/src/span_1000/80074268.o build/us/src/span_1000/800742E4.o build/us/src/span_1000/8007438C.o build/us/src/game/sys_80076000/code_800C5B90_800743B8.o build/us/src/game/sys_80076000/code_800C5B90_80074428.o build/us/src/span_1000/800744D0.o build/us/src/span_1000/800744E0.o build/us/src/span_1000/80074500.o build/us/src/game/sys_80076000/code_800C5B90_800745B0.o build/us/src/span_1000/80074650.o build/us/src/span_1000/80074668.o build/us/src/game/sys_80076000/code_800C5B90_800746C0.o build/us/src/game/sys_80076000/code_800C5B90_800746C4.o build/us/src/game/sys_80076000/code_800C5B90_80074718.o build/us/src/game/sys_80076000/code_800C5B90_800747AC.o build/us/src/game/sys_80076000/code_800C5B90_800747B4.o build/us/src/game/sys_80076000/code_800C5B90_800747C0.o build/us/src/game/sys_80076000/code_800C5B90_8007481C.o build/us/src/game/sys_80076000/code_800C5B90_80074860.o build/us/src/game/sys_80076000/code_800C5B90_80074884.o build/us/src/span_1000/800748E4.o build/us/src/game/sys_80076000/code_800C5B90_80074914.o build/us/src/game/sys_80076000/code_800C5B90_80074950.o build/us/src/game/sys_80076000/code_800C5B90_800749B0.o build/us/src/span_1000/800749F0.o build/us/src/span_1000/80074A08.o build/us/src/span_1000/80074B30.o build/us/src/span_1000/80074B40.o build/us/src/span_1000/80074B58.o build/us/src/span_1000/80074B68.o build/us/src/span_1000/80074BB8.o build/us/src/span_1000/80074BC8.o build/us/src/span_1000/80074C20.o build/us/src/span_1000/80074C74.o build/us/src/game/sys_80076000/code_800F01D0.o build/us/src/span_1000/80074DBC.o build/us/src/span_1000/80074DF8.o build/us/src/span_1000/80074E4C.o build/us/src/span_1000/80074E70.o build/us/src/span_1000/80074ED4.o build/us/src/game/sys_80076000/code_800F01D0_80074EEC.o build/us/src/game/sys_80076000/code_800F01D0_80074F20.o build/us/src/span_1000/80074F50.o build/us/src/span_1000/80074F60.o build/us/src/span_1000/80074FCC.o build/us/src/span_1000/80075000.o build/us/src/span_1000/80075090.o build/us/src/span_1000/800750A8.o build/us/src/span_1000/80075420.o build/us/src/game/sys_80076000/code_800F01D0_800754B8.o build/us/src/game/sys_80076000/code_800F01D0_80075500.o build/us/src/span_1000/80075510.o build/us/src/game/sys_80076000/code_800F01D0_80075514.o build/us/src/game/sys_80076000/code_800F01D0_8007551C.o build/us/src/span_1000/80075564.o build/us/src/span_1000/800755B0.o build/us/src/span_1000/800755C0.o build/us/src/span_1000/80075614.o build/us/src/game/sys_80076000/code_800F01D0_80075618.o build/us/src/span_1000/80075930.o build/us/src/span_1000/80075958.o build/us/src/span_1000/80075980.o build/us/src/span_1000/800759F0.o build/us/src/span_1000/80075A00.o build/us/src/span_1000/80075A10.o build/us/src/span_1000/80075A30.o build/us/src/span_1000/80075C80.o build/us/src/span_1000/80075D18.o build/us/src/span_1000/80075D60.o build/us/src/span_1000/80075D90.o build/us/src/span_1000/80075DA0.o build/us/src/span_1000/80075E30.o build/us/src/span_1000/80075E58.o build/us/src/span_1000/80075E70.o build/us/src/span_1000/80075EA4.o build/us/src/span_1000/80075EC4.o build/us/src/span_1000/80075FA0.o build/us/src/span_1000/80075FE8.o build/us/src/span_1000/80075FF8.o build/us/src/game/sys_80076000/code_80076000_80076000.o build/us/src/span_1000/80077098.o build/us/src/game/sys_80076000/code_80076000_80077110.o build/us/src/game/sys_80076000/code_80076000_80077B10.o build/us/src/span_1000/800795A8.o build/us/src/game/sys_80076000/code_80076000_800795B0.o build/us/src/game/sys_80076000/code_80076000_8007961C.o build/us/src/game/sys_80076000/code_80076000_8007967C.o build/us/src/game/sys_80076000/code_80076000_800796B4.o build/us/src/game/sys_80076000/code_80076000_800798C0.o build/us/src/game/sys_80076000/code_80076000_800799C0.o build/us/src/game/sys_80076000/code_80076000_80079A5C.o build/us/src/game/sys_80076000/code_80076000_80079BB4.o build/us/src/game/sys_80076000/code_80076000_80079BF4.o build/us/src/game/sys_80076000/code_80076000_80079D58.o build/us/src/game/sys_80076000/code_80076000_80079D9C.o build/us/src/game/sys_80076000/code_80076000_80079EFC.o build/us/src/game/sys_80076000/code_80076000_8007A470.o build/us/src/game/sys_80076000/code_80076000_8007A5A4.o build/us/src/game/sys_80076000/code_80076000_8007A758.o build/us/src/game/sys_80076000/code_80076000_8007A79C.o build/us/src/game/sys_80076000/code_80076000_8007A968.o build/us/src/game/sys_80076000/code_80076000_8007AA70.o build/us/src/game/sys_80076000/code_80076000_8007AC20.o build/us/src/game/sys_80076000/code_80076000_8007ACC4.o build/us/src/span_1000/8007D42C.o build/us/src/game/sys_80076000/code_80076000_8007D430.o build/us/src/game/sys_80076000/code_80076000_8007E140.o build/us/src/span_1000/8008633C.o build/us/src/game/sys_80076000/code_80076000_80086378.o build/us/src/span_1000/8008AD0C.o build/us/src/game/sys_80076000/code_80076000_8008AD10.o build/us/src/span_1000/8008EC78.o build/us/src/game/sys_80076000/code_80076000_8008EC80.o build/us/src/span_1000/80090ED8.o build/us/src/game/sys_80076000/code_80076000_80090EE0.o build/us/src/game/sys_80076000/code_80076000_800917C4.o build/us/src/game/sys_80076000/code_80076000_80093D30.o build/us/src/game/sys_80076000/code_80076000_80094060.o build/us/src/game/sys_80076000/code_80076000_800949B8.o build/us/src/game/sys_80076000/code_80076000_800949D8.o build/us/src/game/sys_80076000/code_80076000_8009531C.o build/us/src/game/sys_80076000/code_80076000_800953AC.o build/us/src/game/sys_80076000/code_80076000_80095EAC.o build/us/src/game/sys_80076000/code_80076000_80096760.o build/us/src/game/sys_80076000/code_80076000_80096784.o build/us/src/game/sys_80076000/code_80076000_80096834.o build/us/src/game/sys_80076000/code_80076000_80096E80.o build/us/src/game/sys_80076000/code_80097C24.o build/us/src/game/sys_80076000/code_80097C24_80097C64.o build/us/src/game/sys_80076000/code_80097C24_8009E39C.o build/us/src/game/sys_80076000/code_80097C24_8009E3A4.o build/us/src/game/sys_80076000/code_8009FB8C.o build/us/src/game/sys_80076000/code_8009FB8C_800A0400.o build/us/src/game/sys_80076000/code_8009FB8C_800A1170.o build/us/src/game/sys_80076000/code_8009FB8C_800A3070.o build/us/src/game/sys_80076000/code_800A30A8.o build/us/src/game/sys_80076000/code_800A42BC.o build/us/src/game/sys_80076000/code_800A42C4.o build/us/src/game/sys_80076000/code_800A42C4_800A4D10.o build/us/src/game/sys_80076000/code_800A42C4_800A4D34.o build/us/src/game/sys_80076000/code_800A42C4_800A5FF0.o build/us/src/game/sys_80076000/code_800A6798.o build/us/src/game/sys_80076000/code_800A6798_800A7650.o build/us/src/game/sys_80076000/code_800A6798_800A76A0.o build/us/src/game/sys_80076000/code_800A6798_800A76BC.o build/us/src/game/sys_80076000/code_800A7ABC.o build/us/src/game/sys_80076000/code_800A7ABC_800A841C.o build/us/src/game/sys_80076000/code_800A8940_800A8940.o build/us/src/game/sys_80076000/code_800A8940_800A9C20.o build/us/src/game/sys_80076000/code_800A8940_800A9CC4.o build/us/src/game/sys_80076000/code_800A8940_800A9D40.o build/us/src/game/sys_80076000/code_800A8940_800A9DA8.o build/us/src/game/sys_80076000/code_800A8940_800A9EE0.o build/us/src/game/sys_80076000/code_800A8940_800A9F80.o build/us/src/game/sys_80076000/code_800A8940_800AA168.o build/us/src/game/sys_80076000/code_800A8940_800AA280.o build/us/src/game/sys_80076000/code_800A8940_800AA518.o build/us/src/game/sys_80076000/code_800A8940_800AB200.o build/us/src/game/sys_80076000/code_800A8940_800AB520.o build/us/src/game/sys_80076000/code_800A8940_800AB614.o build/us/src/game/sys_80076000/code_800A8940_800AB65C.o build/us/src/game/sys_80076000/code_800A8940_800B850C.o build/us/src/game/sys_80076000/code_800A8940_800B9C0C.o build/us/src/game/sys_80076000/code_800A8940_800B9C34.o build/us/src/game/sys_80076000/code_800A8940_800BC214.o build/us/src/game/sys_80076000/code_800BD1F0_800BD1F0.o build/us/src/game/sys_80076000/code_800C0880_800C0880.o build/us/src/game/sys_80076000/code_800C54F0.o build/us/src/game/sys_80076000/code_800C5B90_800C5B90.o build/us/src/span_1000/800D0D28.o build/us/src/game/sys_80076000/code_800C5B90_800D0D30.o build/us/src/game/sys_80076000/code_800C5B90_800D153C.o build/us/src/span_1000/800D9074.o build/us/src/game/sys_80076000/code_800C5B90_800D9080.o build/us/src/game/sys_80076000/code_800C5B90_800DD970.o build/us/src/game/sys_80076000/code_800C5B90_800DDC60.o build/us/src/span_1000/800E1A14.o build/us/src/game/sys_80076000/code_800C5B90_800E1A20.o build/us/src/game/sys_80076000/code_800C5B90_800E3C18.o build/us/src/game/sys_80076000/code_800C5B90_800E3C34.o build/us/src/game/sys_80076000/code_800C5B90_800E4820.o build/us/src/game/sys_80076000/code_800C5B90_800E52A0.o build/us/src/game/sys_80076000/code_800C5B90_800E6C5C.o build/us/src/game/sys_80076000/code_800C5B90_800E6C80.o build/us/src/game/sys_80076000/code_800C5B90_800E95A8.o build/us/src/game/sys_80076000/code_800C5B90_800E97F0.o build/us/src/game/sys_80076000/code_800C5B90_800E9880.o build/us/src/game/sys_80076000/code_800C5B90_800E9894.o build/us/src/game/sys_80076000/code_800C5B90_800E99D4.o build/us/src/game/sys_80076000/code_800C5B90_800E99E0.o build/us/src/span_1000/800EABA8.o build/us/src/game/sys_80076000/code_800C5B90_800EABB0.o build/us/src/span_1000/800ECC04.o build/us/src/game/sys_80076000/code_800C5B90_800ECC1C.o build/us/src/game/sys_80076000/code_800EDB20.o build/us/src/game/sys_80076000/code_800EF2D0.o build/us/src/game/sys_80076000/code_800F01D0_800F01D0.o build/us/src/span_1000/800F2004.o build/us/src/game/sys_80076000/code_800F01D0_800F2010.o build/us/src/game/sys_80076000/code_800F01D0_800F3A14.o build/us/src/game/sys_80076000/code_800F01D0_800F3AE0.o build/us/src/game/sys_80076000/code_800F01D0_800F45C8.o build/us/src/game/sys_80076000/code_800F01D0_800F5128.o build/us/src/game/sys_80076000/code_800F01D0_8010527C.o build/us/src/game/sys_80076000/code_800F01D0_801053B0.o build/us/src/game/sys_80076000/code_800F01D0_801054C0.o build/us/src/game/sys_80076000/code_800F01D0_8010552C.o build/us/src/game/sys_80076000/code_800F01D0_80105750.o build/us/src/game/sys_80076000/code_800F01D0_80105C68.o build/us/src/game/sys_80076000/code_800F01D0_80105D90.o build/us/src/game/sys_80076000/code_800F01D0_80106B28.o build/us/src/game/sys_80076000/code_800F01D0_80106B60.o build/us/src/span_1000/8010CB5C.o build/us/src/game/sys_80076000/code_800F01D0_8010CB60.o build/us/src/game/sys_80076000/code_800F01D0_8010D850.o build/us/src/span_1000/8010E158.o build/us/src/game/sys_80076000/code_800F01D0_80110480.o build/us/src/game/sys_80076000/code_800F01D0_80110490.o build/us/src/game/sys_801106A0/code_801106A0.o build/us/src/sdk/libultra/code_80110C00.o build/us/src/sdk/libultra/code_80110CA0.o build/us/src/sdk/libultra/code_80110CA0_80110D24.o build/us/src/sdk/libultra/code_80110D50.o build/us/src/game/sys_801106A0/code_80110FE0.o build/us/src/sdk/libm/code_801113A0.o build/us/src/game/sys_801106A0/code_80111510.o build/us/src/game/sys_801106A0/code_80111540.o build/us/src/game/sys_801106A0/code_80111690.o build/us/src/game/sys_801106A0/code_80111690_80111FA0.o build/us/src/game/sys_801106A0/code_801120A0.o build/us/src/sdk/libgultra/code_80112130.o build/us/src/game/sys_801106A0/code_80112140.o build/us/src/game/sys_801106A0/code_801121A0.o build/us/src/game/sys_801121E0/code_801121E0.o build/us/src/sdk/libgultra/code_80112470.o build/us/src/sdk/libgultra/code_80112480.o build/us/src/game/sys_801121E0/code_801124C0.o build/us/src/game/sys_801121E0/code_80112570.o build/us/src/game/sys_801121E0/code_801125F0.o build/us/src/game/sys_801121E0/code_80112E70.o build/us/src/sdk/libultra/code_801130A0.o build/us/src/game/sys_801121E0/code_801137F0.o build/us/src/sdk/libultra/code_80113E10.o build/us/src/sdk/libultra/code_80114520.o build/us/src/sdk/libultra/code_80114520_801145D0.o build/us/src/sdk/libultra/code_80114520_801146A0.o build/us/src/sdk/libultra/code_80114520_801147A0.o build/us/src/sdk/libultra/code_80114520_80114858.o build/us/src/sdk/libultra/code_80114970.o build/us/src/sdk/libultra/code_80114C00.o build/us/src/sdk/libultra/code_801153B0.o build/us/src/sdk/libultra/code_801153B0_80115474.o build/us/src/sdk/libultra/code_801153B0_80115A24.o build/us/src/sdk/libultra/code_801153B0_80115C80.o build/us/src/sdk/libultra/code_801153B0_80115D7C.o build/us/src/game/sys_801121E0/code_80116110.o build/us/src/sdk/libultra/code_80116720.o build/us/src/game/sys_801121E0/code_80116B60.o build/us/src/game/sys_801121E0/code_80116C70.o build/us/src/sdk/libultra/code_80116EE0.o build/us/src/game/sys_801121E0/code_80117CB0.o build/us/src/game/sys_801121E0/code_801181B0.o build/us/src/game/sys_801121E0/code_80118410.o build/us/src/game/sys_801121E0/code_801185D0.o build/us/src/sdk/libultra/code_801186E0.o build/us/src/game/sys_801121E0/code_80118860.o build/us/src/game/sys_801121E0/code_801189F0.o build/us/src/game/sys_801121E0/code_80118AF0.o build/us/src/game/sys_801121E0/code_80119020.o build/us/src/game/sys_801121E0/code_80119040.o build/us/src/game/sys_801121E0/code_80119240.o build/us/src/game/sys_801121E0/code_80119380.o build/us/src/game/sys_801121E0/code_801193E0.o build/us/src/sdk/libultra/code_80119530.o build/us/src/sdk/libultra/code_80119530_8011954C.o build/us/src/sdk/libultra/code_80119530_80119578.o build/us/src/sdk/libultra/code_80119B60.o build/us/src/sdk/libultra/code_80119B60_80119C34.o build/us/src/sdk/libultra/code_80119B60_80119CE8.o build/us/src/sdk/libultra/code_80119B60_80119D14.o build/us/src/sdk/libultra/code_80119B60_80119F70.o build/us/src/sdk/libultra/code_80119B60_80119FE0.o build/us/src/sdk/libultra/code_80119B60_8011A134.o build/us/src/sdk/libultra/code_80119B60_8011A17C.o build/us/src/sdk/libultra/code_8011B4A0.o build/us/src/sdk/libultra/code_8011B4A0_8011B7BC.o build/us/src/sdk/libultra/code_8011B4A0_8011B830.o build/us/src/game/sys_801121E0/code_8011B8B0.o build/us/src/game/sys_801121E0/code_8011B8F0.o build/us/src/game/sys_801121E0/code_8011B8F0_8011B920.o build/us/src/game/sys_801121E0/code_8011B960.o build/us/src/game/sys_801121E0/code_8011B9A0.o build/us/src/game/sys_801121E0/code_8011B9E0.o build/us/src/game/sys_801121E0/code_8011B9E0_8011BA10.o build/us/src/game/sys_801121E0/code_8011BA80.o build/us/src/game/sys_801121E0/code_8011BAE0.o build/us/src/game/sys_801121E0/code_8011BD50.o build/us/src/game/sys_801121E0/code_8011BD50_8011BDE4.o build/us/src/game/sys_801121E0/code_8011BD50_8011BE10.o build/us/src/game/sys_801121E0/code_8011BD50_8011C080.o build/us/src/game/sys_801121E0/code_8011C0B0.o build/us/src/sdk/libultra/code_8011C150.o build/us/src/game/sys_8011C210/code_8011C210.o build/us/src/game/sys_8011C210/code_8011C2B0.o build/us/src/game/sys_8011C210/code_8011C2B0_8011C300.o build/us/src/game/sys_8011C210/code_8011C2B0_8011C320.o build/us/src/game/sys_8011C210/code_8011CA30.o build/us/src/game/sys_8011C210/code_8011CAA0.o build/us/src/game/sys_8011C210/code_8011CB00.o build/us/src/sdk/libultra/code_8011CB60.o build/us/src/game/sys_8011C210/code_8011CBB0.o build/us/src/game/sys_8011C210/code_8011CC10.o build/us/src/game/sys_8011C210/code_8011CC60.o build/us/src/game/sys_8011C210/code_8011CCE0.o build/us/src/game/sys_8011C210/code_8011CFD0.o build/us/src/game/sys_8011C210/code_8011D000.o build/us/src/game/sys_8011C210/code_8011D090.o build/us/src/sdk/libultra/code_8011D0D0.o build/us/src/sdk/libultra/code_8011D0D0_8011D0E0.o build/us/src/sdk/libultra/code_8011D0D0_8011D180.o build/us/src/sdk/libm/code_8011D190.o build/us/src/sdk/libultra/code_8011D1A0.o build/us/src/sdk/libultra/code_8011D1A0_8011D3DC.o build/us/src/sdk/libultra/code_8011D1A0_8011D404.o build/us/src/sdk/libultra/code_8011D450.o build/us/src/game/sys_8011C210/code_8011D6D0.o build/us/src/game/sys_8011C210/code_8011D6D0_8011D6E0.o build/us/src/game/sys_8011C210/code_8011D830.o build/us/src/game/sys_8011C210/code_8011D8C0.o build/us/src/sdk/libultra/code_8011D950.o build/us/src/game/sys_8011C210/code_8011DA00.o build/us/src/game/sys_8011C210/code_8011DA90.o build/us/src/game/sys_8011C210/code_8011DB80.o build/us/src/sdk/libultra/code_8011DC00.o build/us/src/sdk/libultra/code_8011E3F0.o build/us/src/sdk/libultra/code_8011E3F0_8011E4DC.o build/us/src/sdk/libultra/code_8011E3F0_8011E564.o build/us/src/sdk/libultra/code_8011E3F0_8011E60C.o build/us/src/game/sys_8011C210/code_8011EB90.o build/us/src/game/sys_8011C210/code_8011EB90_8011EBB8.o build/us/src/game/sys_8011C210/code_8011EB90_8011ECA4.o build/us/src/game/sys_8011C210/code_8011EB90_8011ED84.o build/us/src/game/sys_8011C210/code_8011F7F0.o build/us/src/span_1000/8011F80C.o build/us/src/sdk/libultra/code_8011F810.o build/us/src/game/sys_8011C210/code_8011FD90.o build/us/src/sdk/libultra/code_80120360.o build/us/src/sdk/libultra/code_801207B0.o build/us/src/sdk/libultra/code_80121400.o build/us/src/sdk/libultra/code_80121560.o build/us/src/game/sys_8011C210/code_801219B0.o build/us/src/game/sys_8011C210/code_80121B60.o build/us/src/game/sys_8011C210/code_80121F00.o build/us/src/sdk/libultra/code_80121F10.o build/us/src/span_1000/80121F8C.o build/us/src/sdk/libultra/code_80121F10_80121F90.o build/us/src/game/sys_8011C210/code_80122050.o build/us/src/game/sys_8011C210/code_801220C0.o build/us/src/game/sys_8011C210/code_80122130.o build/us/src/sdk/libultra/code_801222F0.o build/us/src/game/sys_8011C210/code_801226A0.o build/us/src/sdk/libgultra/code_80122720.o build/us/src/game/sys_80122750/code_80122750.o build/us/src/game/sys_80122750/code_80123410.o build/us/src/sdk/libultra/code_80123ED0.o build/us/src/game/sys_80122750/code_80124060.o build/us/src/game/sys_80122750/code_80124300.o build/us/src/game/sys_80122750/code_80124350.o build/us/src/game/sys_80122750/code_80124350_80124940.o build/us/src/game/sys_80122750/code_80124350_80124EC0.o build/us/src/game/sys_80122750/code_80124350_80125450.o build/us/src/game/sys_80122750/code_80124350_801254A0.o build/us/src/span_1000/80125F14.o build/us/src/span_1000/80125F30.o build/us/src/span_1000/80125FDC.o build/us/src/span_1000/80126708.o build/us/src/span_1000/80132EF0.o build/us/src/span_1000/80133E7C.o build/us/src/span_1000/80133FD4.o build/us/src/span_1000/80134FB4.o build/us/src/span_1000/80135060.o build/us/src/span_1000/801351EC.o build/us/src/span_1000/80135698.o build/us/src/span_1000/8013578C.o build/us/src/span_1000/8013587C.o build/us/src/span_1000/801395BC.o build/us/src/span_1000/80142CB0.o build/us/src/span_1000/80147008.o build/us/src/span_1000/80147038.o build/us/assets/retained_0.bin.o build/us/assets/retained_D7040.bin.o
	$(Q)$(LD) -EB -T build/us/link.ld -Map build/us/BattleTanx.map -o $@

build/us/BattleTanx.z64: build/us/BattleTanx.elf
	$(Q)$(OBJCOPY) -O binary $< $@

build/us/%.o: %.c | build/us/.extract
	$(Q)mkdir -p $(dir $@)
	$(Q)$(CPP) $(CPPFLAGS_BASE) -D$(UDEF) -DVERSION_US -Iinclude -I$(dir $<) -Iasm/us/include $(EXTRA_CPP) -MMD -MF $(@:.o=.d) -MT $@ $< > $(@:.o=.i)
	$(Q)if [ "$(FAMILY)" = ido ]; then $(CC_$(TC)) $(CFLAGS_$(TC)) $(EXTRA) $(@:.o=.i) -o $@; \
	else $(CC_$(TC)) -quiet $(CFLAGS_$(TC)) $(EXTRA) $(@:.o=.i) -o $(@:.o=.s) && \
	$(N64LINK) asn64 --as '$(AS_$(TC))' $(ASFLAGS_BASE) -Iasm/us -Iasm/us/include $(@:.o=.s) -o $@; fi
	$(Q)if [ -n "$(TEXTSIZE)" ]; then python3 -I -c "import struct,sys;p=sys.argv[1];n=int(sys.argv[2]);f=open(p,'r+b');d=f.read();o=struct.unpack('>I',d[32:36])[0];e,c,x=struct.unpack('>HHH',d[46:52]);st=struct.unpack('>I',d[o+x*e+16:o+x*e+20])[0];[(f.seek(o+k*e+20),f.write(struct.pack('>I',n))) for k in range(c) if d[st+struct.unpack('>I',d[o+k*e:o+k*e+4])[0]:].split(b'\\0')[0]==b'.text'];f.close()" $@ $(TEXTSIZE); fi

-include $(wildcard build/us/src/*/*.d build/us/src/*/*/*.d build/us/src/*/*/*/*.d)
build/us/src/game/sys_80076000/code_80076000_800949B8.o: TC := ido_7_1
build/us/src/game/sys_80076000/code_80076000_800949B8.o: FAMILY := ido
build/us/src/game/sys_80076000/code_80076000_800949B8.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_80076000/code_80076000_800949B8.o: TEXTSIZE := 32
build/us/src/game/sys_80076000/code_80076000_80096784.o: TC := gcc_2_8_1_sn64
build/us/src/game/sys_80076000/code_80076000_80096784.o: FAMILY := gcc
build/us/src/game/sys_80076000/code_80097C24.o: TC := ido_7_1
build/us/src/game/sys_80076000/code_80097C24.o: FAMILY := ido
build/us/src/game/sys_80076000/code_80097C24.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_80076000/code_80097C24.o: TEXTSIZE := 64
build/us/src/game/sys_80076000/code_80097C24_8009E39C.o: TC := ido_7_1
build/us/src/game/sys_80076000/code_80097C24_8009E39C.o: FAMILY := ido
build/us/src/game/sys_80076000/code_80097C24_8009E39C.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_80076000/code_80097C24_8009E39C.o: TEXTSIZE := 8
build/us/src/game/sys_80076000/code_800A42BC.o: TC := ido_7_1
build/us/src/game/sys_80076000/code_800A42BC.o: FAMILY := ido
build/us/src/game/sys_80076000/code_800A42BC.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_80076000/code_800A42BC.o: TEXTSIZE := 8
build/us/src/game/sys_80076000/code_800A42C4_800A4D10.o: TC := ido_7_1
build/us/src/game/sys_80076000/code_800A42C4_800A4D10.o: FAMILY := ido
build/us/src/game/sys_80076000/code_800A42C4_800A4D10.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_80076000/code_800A42C4_800A4D10.o: TEXTSIZE := 36
build/us/src/game/sys_80076000/code_800A6798_800A76A0.o: TC := ido_7_1
build/us/src/game/sys_80076000/code_800A6798_800A76A0.o: FAMILY := ido
build/us/src/game/sys_80076000/code_800A6798_800A76A0.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_80076000/code_800A6798_800A76A0.o: TEXTSIZE := 28
build/us/src/game/sys_80076000/code_800A8940_80073210.o: TC := gcc_2_7_2_kmc
build/us/src/game/sys_80076000/code_800A8940_80073210.o: FAMILY := gcc
build/us/src/game/sys_80076000/code_800A8940_80073210.o: EXTRA := -G8
build/us/src/game/sys_80076000/code_800A8940_80073210.o: EXTRA_CPP := -UF3DEX_GBI_2
build/us/src/game/sys_80076000/code_800C5B90_800E3C18.o: TC := ido_7_1
build/us/src/game/sys_80076000/code_800C5B90_800E3C18.o: FAMILY := ido
build/us/src/game/sys_80076000/code_800C5B90_800E3C18.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_80076000/code_800C5B90_800E3C18.o: TEXTSIZE := 28
build/us/src/game/sys_80076000/code_800C5B90_800E99D4.o: TC := ido_7_1
build/us/src/game/sys_80076000/code_800C5B90_800E99D4.o: FAMILY := ido
build/us/src/game/sys_80076000/code_800C5B90_800E99D4.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_80076000/code_800C5B90_800E99D4.o: TEXTSIZE := 12
build/us/src/game/sys_801121E0/code_8011B8F0.o: TC := ido_7_1
build/us/src/game/sys_801121E0/code_8011B8F0.o: FAMILY := ido
build/us/src/game/sys_801121E0/code_8011B8F0.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_801121E0/code_8011B8F0.o: TEXTSIZE := 48
build/us/src/game/sys_801121E0/code_8011B9E0.o: TC := ido_7_1
build/us/src/game/sys_801121E0/code_8011B9E0.o: FAMILY := ido
build/us/src/game/sys_801121E0/code_8011B9E0.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_801121E0/code_8011B9E0.o: TEXTSIZE := 48
build/us/src/game/sys_801121E0/code_8011BD50_8011BDE4.o: TC := ido_7_1
build/us/src/game/sys_801121E0/code_8011BD50_8011BDE4.o: FAMILY := ido
build/us/src/game/sys_801121E0/code_8011BD50_8011BDE4.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_801121E0/code_8011BD50_8011BDE4.o: TEXTSIZE := 44
build/us/src/game/sys_8011C210/code_8011C2B0_8011C300.o: TC := ido_7_1
build/us/src/game/sys_8011C210/code_8011C2B0_8011C300.o: FAMILY := ido
build/us/src/game/sys_8011C210/code_8011C2B0_8011C300.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_8011C210/code_8011C2B0_8011C300.o: TEXTSIZE := 32
build/us/src/game/sys_8011C210/code_8011EB90_8011EBB8.o: TC := ido_7_1
build/us/src/game/sys_8011C210/code_8011EB90_8011EBB8.o: FAMILY := ido
build/us/src/game/sys_8011C210/code_8011EB90_8011EBB8.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_8011C210/code_8011EB90_8011EBB8.o: TEXTSIZE := 236
build/us/src/game/sys_8011C210/code_8011EB90_8011ECA4.o: TC := ido_7_1
build/us/src/game/sys_8011C210/code_8011EB90_8011ECA4.o: FAMILY := ido
build/us/src/game/sys_8011C210/code_8011EB90_8011ECA4.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_8011C210/code_8011EB90_8011ECA4.o: TEXTSIZE := 224
build/us/src/game/sys_8011C210/code_8011F7F0.o: TC := ido_7_1
build/us/src/game/sys_8011C210/code_8011F7F0.o: FAMILY := ido
build/us/src/game/sys_8011C210/code_8011F7F0.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/game/sys_8011C210/code_8011F7F0.o: TEXTSIZE := 28
build/us/src/sdk/libultra/code_80110CA0.o: TC := ido_7_1
build/us/src/sdk/libultra/code_80110CA0.o: FAMILY := ido
build/us/src/sdk/libultra/code_80110CA0.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_80110CA0.o: TEXTSIZE := 132
build/us/src/sdk/libultra/code_80110CA0.o: EXTRA := -O1
build/us/src/sdk/libultra/code_80110CA0.o: EXTRA_CPP := 
build/us/src/sdk/libultra/code_80114520_801145D0.o: TC := ido_7_1
build/us/src/sdk/libultra/code_80114520_801145D0.o: FAMILY := ido
build/us/src/sdk/libultra/code_80114520_801145D0.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_80114520_801145D0.o: TEXTSIZE := 208
build/us/src/sdk/libultra/code_80114520_801145D0.o: EXTRA := -O1
build/us/src/sdk/libultra/code_80114520_801145D0.o: EXTRA_CPP := 
build/us/src/sdk/libultra/code_80114520_801147A0.o: TC := ido_7_1
build/us/src/sdk/libultra/code_80114520_801147A0.o: FAMILY := ido
build/us/src/sdk/libultra/code_80114520_801147A0.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_80114520_801147A0.o: TEXTSIZE := 184
build/us/src/sdk/libultra/code_801153B0_80115474.o: TC := ido_7_1
build/us/src/sdk/libultra/code_801153B0_80115474.o: FAMILY := ido
build/us/src/sdk/libultra/code_801153B0_80115474.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_801153B0_80115474.o: TEXTSIZE := 1456
build/us/src/sdk/libultra/code_801153B0_80115474.o: EXTRA := -O1
build/us/src/sdk/libultra/code_801153B0_80115474.o: EXTRA_CPP := 
build/us/src/sdk/libultra/code_801153B0_80115C80.o: TC := ido_7_1
build/us/src/sdk/libultra/code_801153B0_80115C80.o: FAMILY := ido
build/us/src/sdk/libultra/code_801153B0_80115C80.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_801153B0_80115C80.o: TEXTSIZE := 252
build/us/src/sdk/libultra/code_801153B0_80115C80.o: EXTRA := -O1
build/us/src/sdk/libultra/code_801153B0_80115C80.o: EXTRA_CPP := 
build/us/src/sdk/libultra/code_80119530_8011954C.o: TC := ido_7_1
build/us/src/sdk/libultra/code_80119530_8011954C.o: FAMILY := ido
build/us/src/sdk/libultra/code_80119530_8011954C.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_80119530_8011954C.o: TEXTSIZE := 44
build/us/src/sdk/libultra/code_80119B60.o: TC := ido_7_1
build/us/src/sdk/libultra/code_80119B60.o: FAMILY := ido
build/us/src/sdk/libultra/code_80119B60.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_80119B60.o: TEXTSIZE := 212
build/us/src/sdk/libultra/code_80119B60_80119CE8.o: TC := ido_7_1
build/us/src/sdk/libultra/code_80119B60_80119CE8.o: FAMILY := ido
build/us/src/sdk/libultra/code_80119B60_80119CE8.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_80119B60_80119CE8.o: TEXTSIZE := 44
build/us/src/sdk/libultra/code_80119B60_80119F70.o: TC := ido_7_1
build/us/src/sdk/libultra/code_80119B60_80119F70.o: FAMILY := ido
build/us/src/sdk/libultra/code_80119B60_80119F70.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_80119B60_80119F70.o: TEXTSIZE := 112
build/us/src/sdk/libultra/code_80119B60_8011A134.o: TC := ido_7_1
build/us/src/sdk/libultra/code_80119B60_8011A134.o: FAMILY := ido
build/us/src/sdk/libultra/code_80119B60_8011A134.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_80119B60_8011A134.o: TEXTSIZE := 72
build/us/src/sdk/libultra/code_8011B4A0_8011B7BC.o: TC := ido_7_1
build/us/src/sdk/libultra/code_8011B4A0_8011B7BC.o: FAMILY := ido
build/us/src/sdk/libultra/code_8011B4A0_8011B7BC.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_8011B4A0_8011B7BC.o: TEXTSIZE := 116
build/us/src/sdk/libultra/code_8011C150.o: TC := ido_7_1
build/us/src/sdk/libultra/code_8011C150.o: FAMILY := ido
build/us/src/sdk/libultra/code_8011C150.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_8011C150.o: TEXTSIZE := 192
build/us/src/sdk/libultra/code_8011D0D0_8011D0E0.o: TC := ido_7_1
build/us/src/sdk/libultra/code_8011D0D0_8011D0E0.o: FAMILY := ido
build/us/src/sdk/libultra/code_8011D0D0_8011D0E0.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_8011D0D0_8011D0E0.o: TEXTSIZE := 160
build/us/src/sdk/libultra/code_8011D0D0_8011D0E0.o: EXTRA := -O1
build/us/src/sdk/libultra/code_8011D0D0_8011D0E0.o: EXTRA_CPP := 
build/us/src/sdk/libultra/code_8011D1A0_8011D3DC.o: TC := ido_7_1
build/us/src/sdk/libultra/code_8011D1A0_8011D3DC.o: FAMILY := ido
build/us/src/sdk/libultra/code_8011D1A0_8011D3DC.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_8011D1A0_8011D3DC.o: TEXTSIZE := 40
build/us/src/sdk/libultra/code_8011E3F0.o: TC := ido_7_1
build/us/src/sdk/libultra/code_8011E3F0.o: FAMILY := ido
build/us/src/sdk/libultra/code_8011E3F0.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_8011E3F0.o: TEXTSIZE := 236
build/us/src/sdk/libultra/code_8011E3F0_8011E564.o: TC := ido_7_1
build/us/src/sdk/libultra/code_8011E3F0_8011E564.o: FAMILY := ido
build/us/src/sdk/libultra/code_8011E3F0_8011E564.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_8011E3F0_8011E564.o: TEXTSIZE := 168
build/us/src/sdk/libultra/code_80121F10.o: TC := ido_7_1
build/us/src/sdk/libultra/code_80121F10.o: FAMILY := ido
build/us/src/sdk/libultra/code_80121F10.o: UDEF := __UNBAKE_STDARG_IDO
build/us/src/sdk/libultra/code_80121F10.o: TEXTSIZE := 124
build/us/src/sdk/libultra/code_80121F10.o: EXTRA := -O1
build/us/src/sdk/libultra/code_80121F10.o: EXTRA_CPP := 
