# BattleTanx: matching build.
# make check             builds every version ROM from the committed sources and verifies its SHA-1.
# make check CHECK=tree  verifies only that the committed generated files are present and current (no ROMs needed).
# make extract           splits every baserom into asm/<version>/ with splat; a data file's section is its stand-in's.
# Tool commands default to conventional names; put local paths in local.mk.
SHELL := /bin/sh
.SUFFIXES:
.DELETE_ON_ERROR:
.SECONDARY:
.SECONDEXPANSION:
.DEFAULT_GOAL := all
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
ifneq ($(filter default undefined,$(origin SPLAT)),)
SPLAT := splat
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
UNBAKE ?= unbake
VMACRO_us := VERSION_US
SHA1_us := 535860d941738ac1210c20a9b80114fea0e0ff17
ROM0_us := 0
STAMPS := tools/n64link/.stamp $(TOOLCHAIN_gcc_2_7_2_kmc) $(TOOLCHAIN_gcc_2_8_1_sn64) $(TOOLCHAIN_ido_7_1)

# The first path word under build/ is the version: build/<version>/<source path>.o
ver = $(firstword $(subst /, ,$1))
src = $(patsubst $(call ver,$1)/%,%,$1)
DEFINES = -D$(VMACRO_$(call ver,$*))
INCLUDES = -Iinclude -I$(dir $<)
ASINC = -Iasm/$(call ver,$*)
TC := gcc_2_7_2_kmc
CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
ASFLAGS := -march=vr4300 -mabi=32 -EB --no-pad-sections -mips3 -G0

# One recipe per toolchain in use; a path picks its toolchain and flags below.
define COMPILE_gcc_2_7_2_kmc
$(Q)$(CPP) $(CPPFLAGS) -MMD -MF $(@:.o=.d) -MT $@ $(DEFINES) $(INCLUDES) $< > $(@:.o=.i)
$(Q)$(CC_gcc_2_7_2_kmc) -quiet $(CFLAGS) $(@:.o=.i) -o $(@:.o=.s)
$(Q)$(if $(NOALIGN),python3 -I -c "$$STRIP_ALIGN" $(@:.o=.s))
$(Q)$(N64LINK) asn64 --as $(AS_gcc_2_7_2_kmc) $(ASFLAGS) $(ASINC) $(@:.o=.s) -o $@
endef
define COMPILE_gcc_2_8_1_sn64
$(Q)$(CPP) $(CPPFLAGS) -MMD -MF $(@:.o=.d) -MT $@ $(DEFINES) $(INCLUDES) $< > $(@:.o=.i)
$(Q)$(CC_gcc_2_8_1_sn64) -quiet $(CFLAGS) $(@:.o=.i) -o $(@:.o=.s)
$(Q)$(if $(NOALIGN),python3 -I -c "$$STRIP_ALIGN" $(@:.o=.s))
$(Q)$(N64LINK) asn64 --as $(AS_gcc_2_8_1_sn64) $(ASFLAGS) $(ASINC) $(@:.o=.s) -o $@
endef
define COMPILE_ido_7_1
$(Q)$(CPP) $(CPPFLAGS) -MMD -MF $(@:.o=.d) -MT $@ $(DEFINES) $(INCLUDES) $< > $(@:.o=.i)
$(Q)$(CC_ido_7_1) -Wab,-r4300_mul $(CFLAGS) -c $(@:.o=.i) -o $@
endef
# Per-file facts ([file] rows of config.toml): a toolchain and flags for a path or a directory.
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80110CA0.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80110CA0.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80110CA0.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011C150.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011C150.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011C150.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011E3F0.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011E3F0.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011E3F0.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80121F10.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80121F10.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80121F10.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80097C24.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80097C24.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80097C24.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A42BC.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A42BC.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A42BC.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800BD1F0.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800BD1F0.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800BD1F0.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C0880.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C0880.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C0880.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_801121E0/code_8011B8F0.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_801121E0/code_8011B8F0.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_801121E0/code_8011B8F0.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_801121E0/code_8011B9E0.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_801121E0/code_8011B9E0.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_801121E0/code_8011B9E0.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011F7F0.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011F7F0.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011F7F0.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80114520_801145D0.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80114520_801145D0.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80114520_801145D0.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80114520_801147A0.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80114520_801147A0.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80114520_801147A0.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_801153B0_80115474.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_801153B0_80115474.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_801153B0_80115474.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_801153B0_80115C80.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_801153B0_80115C80.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_801153B0_80115C80.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119530_8011954C.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119530_8011954C.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119530_8011954C.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60_80119CE8.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60_80119CE8.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60_80119CE8.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60_80119F70.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60_80119F70.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60_80119F70.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60_8011A134.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60_8011A134.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_80119B60_8011A134.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011B4A0_8011B7BC.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011B4A0_8011B7BC.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011B4A0_8011B7BC.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011D0D0_8011D0E0.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011D0D0_8011D0E0.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011D0D0_8011D0E0.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011D1A0_8011D3DC.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011D1A0_8011D3DC.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011D1A0_8011D3DC.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011E3F0_8011E564.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011E3F0_8011E564.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/sdk/libultra/code_8011E3F0_8011E564.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800710C0.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800710C0.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800710C0.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800710F4.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800710F4.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800710F4.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800711C8.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800711C8.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800711C8.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071378.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071378.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071378.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800714D8.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800714D8.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800714D8.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071568.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071568.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071568.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800716E0.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800716E0.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800716E0.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071708.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071708.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071708.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071960.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071960.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071960.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071C50.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071C50.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80071C50.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80072030.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80072030.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80072030.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80072038.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80072038.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80072038.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800949B8.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800949B8.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_800949B8.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80096784.c.o): TC := gcc_2_8_1_sn64
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80096784.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80076000_80096784.c.o): CFLAGS := -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mgp32 -mfp64 -mno-fix4300
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80097C24_8009E39C.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80097C24_8009E39C.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_80097C24_8009E39C.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A42C4_800A4D10.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A42C4_800A4D10.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A42C4_800A4D10.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A6798_800A76A0.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A6798_800A76A0.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A6798_800A76A0.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940_80073210.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940_80073210.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2 -UF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940_80073210.c.o): CFLAGS := -mips3 -mgp32 -mfp32 -O2 -G8
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940_800733B8.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940_800733B8.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940_800733B8.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940_80073444.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940_80073444.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800A8940_80073444.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80073D20.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80073D20.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80073D20.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800743B8.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800743B8.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800743B8.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074428.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074428.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074428.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800745B0.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800745B0.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800745B0.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800746C0.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800746C0.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800746C0.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800746C4.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800746C4.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800746C4.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074718.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074718.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074718.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800747AC.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800747AC.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800747AC.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800747B4.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800747B4.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800747B4.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800747C0.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800747C0.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800747C0.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_8007481C.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_8007481C.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_8007481C.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074860.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074860.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074860.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074884.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074884.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074884.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074914.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074914.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074914.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074950.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074950.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_80074950.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800749B0.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800749B0.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800749B0.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800E3C18.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800E3C18.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800E3C18.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800E99D4.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800E99D4.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800C5B90_800E99D4.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80074EEC.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80074EEC.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80074EEC.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80074F20.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80074F20.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80074F20.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_800754B8.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_800754B8.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_800754B8.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80075500.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80075500.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80075500.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80075514.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80075514.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80075514.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_8007551C.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_8007551C.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_8007551C.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80075618.c.o): TC := gcc_2_7_2_kmc
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80075618.c.o): CPPFLAGS := -P -undef -nostdinc -D_LANGUAGE_C -D__GNUC__=2 -D__UNBAKE_STDARG_GCC -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_80076000/code_800F01D0_80075618.c.o): CFLAGS := -G0 -mips3 -mgp32 -mfp32 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_801121E0/code_8011BD50_8011BDE4.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_801121E0/code_8011BD50_8011BDE4.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_801121E0/code_8011BD50_8011BDE4.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011C2B0_8011C300.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011C2B0_8011C300.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011C2B0_8011C300.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011EB90_8011EBB8.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011EB90_8011EBB8.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011EB90_8011EBB8.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011EB90_8011ECA4.c.o): TC := ido_7_1
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011EB90_8011ECA4.c.o): CPPFLAGS := -D__UNBAKE_STDARG_IDO -DF3DEX_GBI_2
$(foreach v,$(VERSIONS),build/$(v)/src/game/sys_8011C210/code_8011EB90_8011ECA4.c.o): CFLAGS := -c -G0 -non_shared -mips2 -O2
# The size each object's .text has in the ROM: a compiler may pad the section past its last function, and a zero tail
# past that size is cut from the section header before the object links.
-include $(VERSIONS:%=versions/%/text_sizes.mk)
# Compare each object's last successful size with its own target-specific value during second expansion.
# A shared text_sizes.mk timestamp would rebuild every object; removed sizes must also invalidate the old trim.
text_size_changed = $(if $(filter x$(TEXTSIZE),x$(file <$@.textsize)),,text-size-changed)
.PHONY: text-size-changed
text-size-changed:
TRIM_TEXT = python3 -I -c 'import struct,sys;p,n=sys.argv[1],int(sys.argv[2],0);d=bytearray(open(p,"rb").read());o=struct.unpack_from(">I",d,32)[0];e,c,x=struct.unpack_from(">HHH",d,46);s=struct.unpack_from(">I",d,o+x*e+16)[0];t=[o+k*e for k in range(c) if d[s+struct.unpack_from(">I",d,o+k*e)[0]:].split(b"\0")[0]==b".text"];f,z=struct.unpack_from(">II",d,t[0]+16) if t else (0,0);t and z>n and not d[f+n:f+z].strip(b"\0") and (struct.pack_into(">I",d,t[0]+20,n),open(p,"wb").write(d))'

.PHONY: all check extract
all: check
ifeq ($(CHECK),tree)
check:
	$(Q)for f in Makefile $(NAME).ld include/include_asm.h $(VERSIONS:%=versions/%/splat.yaml); do test -s $$f || { echo "$$f is missing" >&2; exit 1; }; done
	$(Q)$(UNBAKE) sync --check
else ifeq ($(CHECK),rom)
check: $(VERSIONS:%=build/%/$(NAME).z64)
else
$(error CHECK must be rom or tree)
endif

# A data file holds the ROM bytes from its symbol to the next one, in the section its stand-in names: its own
# section line goes, no .align asks more than its first address has (alignment counts from the section start),
# and a .double, which the assembler would align, is written as its two words.
DATA_SED := -e '/^\.section /d' -e 's@^(\s*/\* [0-9A-F]+ [0-9A-F]{8} ([0-9A-F]{8})([0-9A-F]{8}) \*/\s*)\.double .*@\1.word 0x\2, 0x\3@'
# An instruction splat marks handwritten (a 64-bit load in 32-bit code, a coprocessor move) is written as the word it
# is: the assembler would expand or re-encode it. So is a 64-bit load, store or divide with no symbol operand: under
# the 32-bit ABI the assembler expands it into several instructions; one with a %lo(symbol) operand keeps the
# relocation on the word, whose low half the link fills. A `b` is spelled as the branch its word is: an
# assembler may encode `b` as either beq or bgez.
CODE_SED := -e 's@^(\s*/\* [0-9A-F]+ [0-9A-F]{8} ([0-9A-F]{8}) \*/\s*).*/\* handwritten instruction \*/$$@\1.word 0x\2@' \
	-e 's@^(\s*/\* [0-9A-F]+ [0-9A-F]{8} ([0-9A-F]{4})[0-9A-F]{4} \*/\s*)(ld|sd|ldl|ldr|sdl|sdr|lld|scd)\s[^%]*%lo\(([A-Za-z0-9_.]+)\).*@\1.reloc ., R_MIPS_LO16, \4\n    .word 0x\20000@' \
	-e 's@^(\s*/\* [0-9A-F]+ [0-9A-F]{8} ([0-9A-F]{8}) \*/\s*)(ld|sd|ldl|ldr|sdl|sdr|lld|scd|ddiv|ddivu)\s[^%]*$$@\1.word 0x\2@' \
	-e 's@^(\s*/\* [0-9A-F]+ [0-9A-F]{8} 1000[0-9A-F]{4} \*/\s*)b(\s+)@\1beq\2$$zero, $$zero, @' \
	-e 's@^(\s*/\* [0-9A-F]+ [0-9A-F]{8} 0401[0-9A-F]{4} \*/\s*)b(\s+)@\1bgez\2$$zero, @'
# An object whose data starts off a word boundary in the ROM (NOALIGN in text_sizes.mk) has the alignment its
# compiler asks for in data sections dropped from its assembly, and its words and halves spelled as unaligned data:
# the ROM packs that data at the byte, so a pad the assembler adds would shift everything after it.
define STRIP_ALIGN
import re, sys
path, section, out = sys.argv[1], "text", []
for line in open(path):
    found = re.match(r"\s*\.section\s+\.?(\w+)", line) or re.match(r"\s*\.(text|data|rdata|sdata|bss|rodata)\b", line)
    if found:
        section = found.group(1)
    elif section in ("data", "rdata", "rodata", "sdata"):
        if re.match(r"\s*\.(p2)?align\b", line):
            continue
        line = re.sub(r"^(\s*)\.word\b", r"\1.4byte", re.sub(r"^(\s*)\.(half|short)\b", r"\1.2byte", line))
    out.append(line)
open(path, "w").write("".join(out))
endef
export STRIP_ALIGN
# A data piece is the ROM bytes from its address to the next row of splat.yaml: splat drops string padding, a partial
# last word and whole tiny pieces, so each extracted data file is rewritten as its ROM slice, every label kept at its
# offset (from the ROM column of the line after it).
define FILL_DATA
import os, re, sys
v = sys.argv[1]
rom = open("roms/baserom.%s.z64" % v, "rb").read()
rows = []
for line in open("versions/%s/splat.yaml" % v):
    m = re.match(r"\s+- \[0x([0-9A-Fa-f]+)(?:, (\w+), (\S+))?\]", line) or re.match(r"\s+start: 0x([0-9A-Fa-f]+)()()", line)
    if m:
        rows.append((int(m.group(1), 16), m.group(2), m.group(3)))
for (start, kind, name), (end, _, _) in zip(rows, rows[1:]):
    path = "asm/%s/data/%s.s" % (v, name)
    if kind not in ("data", "rodata") or not os.path.exists(path):
        continue
    head, labels, waiting = [], [], []
    for line in open(path):
        text = line.strip()
        m = re.match(r"(?:dlabel|glabel)\s+(\S+)", text)
        at = re.match(r"/\* ([0-9A-F]+) [0-9A-F]{8}", text)
        if m:
            waiting.append(m.group(1))
        elif text.startswith(".include"):
            head.append(text)
        elif at and waiting:
            labels += [(int(at.group(1), 16), n) for n in waiting]
            waiting = []
    labels += [(end, n) for n in waiting]
    out, here = head, start
    for offset, label in sorted(labels, key=lambda row: row[0]) + [(end, None)]:
        offset = min(max(offset, start), end)
        out += ["    .byte " + ", ".join("0x%02X" % b for b in rom[k : min(k + 16, offset)]) for k in range(here, offset, 16)]
        out += ["dlabel " + label] if label else []
        here = offset
    open(path, "w").write("\n".join(out) + "\n")
endef
export FILL_DATA
extract: $(VERSIONS:%=extract-%)
extract-%:
	$(Q)$(SPLAT) split versions/$*/splat.yaml
	$(Q)find asm/$* \( -name '*.data.s' -o -name '*.rodata.s' \) | while read f; do \
		case $$(grep -m1 -oE '^ */\* [0-9A-F]+ [0-9A-F]{8}' "$$f" | tail -c 2) in \
		0*) c='';; 8*) c='s/^\.align [4-9]/.align 3/';; [4C]*) c='s/^\.align [3-9]/.align 2/';; \
		[26AE]*) c='s/^\.align [2-9]/.align 1/';; *) c='s/^\.align [1-9]/.align 0/';; esac; \
		sed -E $(DATA_SED) -e "$$c" "$$f" > "$${f%.*.s}.s" && rm "$$f"; done
	$(Q)python3 -I -c "$$FILL_DATA" $*
	$(Q)find asm/$*/nonmatchings -name '*.s' -exec sed -i -E $(CODE_SED) {} +
	$(Q)touch asm/$*/.extracted
# An object assembles extracted files its source only names through a macro: every object follows the extraction.
asm/%/.extracted:
	$(error asm/$*/ is not extracted: run make extract)

# The link script names every object, so no rule here lists a file.
$(foreach v,$(VERSIONS),$(eval OBJS_$(v) := $(addprefix build/$(v)/,$(shell $(CPP) -P -undef -D$(VMACRO_$(v)) $(NAME).ld 2>/dev/null | grep -oE '[[:alnum:]_./+-]+[.]o' | sort -u))))
-include $(foreach v,$(VERSIONS),$(OBJS_$(v):.o=.d))

build/%.o: $$(call src,$$*) asm/$$(call ver,$$*)/.extracted $$(text_size_changed) | $(STAMPS)
	$(Q)mkdir -p $(@D)
	$(COMPILE_$(TC))
	$(Q)$(if $(TEXTSIZE),$(TRIM_TEXT) $@ $(TEXTSIZE))
	$(Q)printf '%s\n' '$(TEXTSIZE)' > $@.textsize
build/%.s.o: $$(call src,$$*).s $$(text_size_changed) | $(STAMPS)
	$(Q)mkdir -p $(@D)
	$(Q)$(AS) $(ASFLAGS) $(ASINC) -Iinclude $< -o $@
	$(Q)$(if $(TEXTSIZE),$(TRIM_TEXT) $@ $(TEXTSIZE))
	$(Q)printf '%s\n' '$(TEXTSIZE)' > $@.textsize
build/%.bin.o: asm/%.bin
	$(Q)mkdir -p $(@D)
	$(Q)$(OBJCOPY) -I binary -O elf32-tradbigmips -B mips $< $@

# The whole ROM links once per version, from build/<version>/, so object paths in the script stay short.
build/%/link.ld: $(NAME).ld
	$(Q)mkdir -p $(@D)
	$(Q)$(CPP) -P -undef -D$(VMACRO_$*) $< > $@
# Every fact of symbol_addrs.txt and every name splat left undefined, PROVIDEd: what no object defines (data outside
# the ROM). So is every name splat made up that the extracted assembly spells, at the address the name carries: a .L
# label the assembler keeps out of the object, or a label inside bytes a C file compiles.
build/%/undefined_syms.ld: versions/%/symbol_addrs.txt build/%/undefined_syms_auto.txt build/%/undefined_funcs_auto.txt asm/%/.extracted
	$(Q)sed -nE 's/^([A-Za-z_.][A-Za-z0-9_.$$]*)[[:space:]]*=[[:space:]]*(0x[0-9A-Fa-f]+);.*/PROVIDE(\1 = \2);/p' $^ > $@
	$(Q)grep -rhoE --include='*.s' '[A-Za-z_.]*auto_[0-9A-F]{8}\b' asm/$* | sort -u | sed -E 's/^([A-Za-z_.]*auto_(.*))$$/PROVIDE(\1 = 0x\2);/' >> $@
build/%/undefined_syms_auto.txt build/%/undefined_funcs_auto.txt:
	$(error $@ is missing: run make extract)
build/%/$(NAME).elf: $$(OBJS_$$*) build/%/link.ld build/%/undefined_syms.ld
	$(Q)cd build/$* && $(LD) -T link.ld -o $(NAME).elf
build/%/$(NAME).bin: build/%/$(NAME).elf
	$(Q)$(OBJCOPY) -O binary --gap-fill 0 $< $@
build/%/$(NAME).z64: build/%/$(NAME).bin roms/baserom.%.z64
	$(Q){ head -c $(ROM0_$*) roms/baserom.$*.z64; cat $<; } > $@
	$(Q)truncate -s $$(wc -c < roms/baserom.$*.z64) $@
	$(Q)test "$$(sha1sum < $@ | cut -d' ' -f1)" = $(SHA1_$*)

tools/n64link/.stamp:
	$(Q)mkdir -p tools/n64link && curl -fsSL https://github.com/AbuN64/mas-n64/releases/download/v0.2.0/n64link-v0.2.0-linux-x86_64.tar.gz -o tools/n64link.tar.gz && echo '061d7bc69f21228c7029f4f530cd980bab3a35749751a43f2823d03d95be4ef7  tools/n64link.tar.gz' | sha256sum -c - >/dev/null && tar -xzf tools/n64link.tar.gz -C tools/n64link --strip-components=1 n64link-v0.2.0-linux-x86_64/n64link && rm -f tools/n64link.tar.gz && cd tools/n64link && printf '%s\n' '583e544840d04123fa7e26c7416316ffe410139351e07cd3395d4bd5ec609c3c  n64link' | sha256sum -c - >/dev/null && touch .stamp

tools/gcc-2.7.2-kmc/.stamp:
	$(Q)mkdir -p tools/gcc-2.7.2-kmc && curl -fsSL https://github.com/decompals/mips-gcc-2.7.2/releases/download/main/gcc-2.7.2-linux.tar.gz -o tools/gcc-2.7.2-kmc.tar.gz && echo 'ff3e299c1d952c0a5cb39f7790a208d0c547cf93986eb5607f820c935cedc288  tools/gcc-2.7.2-kmc.tar.gz' | sha256sum -c - >/dev/null && tar -xzf tools/gcc-2.7.2-kmc.tar.gz -C tools/gcc-2.7.2-kmc cc1 && rm -f tools/gcc-2.7.2-kmc.tar.gz && cd tools/gcc-2.7.2-kmc && printf '%s\n' 'c4976e94ebf81d0ab1336f631fb752fbe6e0e0810e90a24da11e6ed1d5223b8a  cc1' | sha256sum -c - >/dev/null && touch .stamp

tools/gcc-2.8.1-sn64/.stamp:
	$(Q)mkdir -p tools/gcc-2.8.1-sn64 && curl -fsSL https://github.com/pmret/gcc-papermario/releases/download/master/linux.tar.gz -o tools/gcc-2.8.1-sn64.tar.gz && echo '1156cf0d6a88a64c20e2a10fc9445d99cb9a38518f432b1669528dfa82ebb45f  tools/gcc-2.8.1-sn64.tar.gz' | sha256sum -c - >/dev/null && tar -xzf tools/gcc-2.8.1-sn64.tar.gz -C tools/gcc-2.8.1-sn64 cc1 && rm -f tools/gcc-2.8.1-sn64.tar.gz && cd tools/gcc-2.8.1-sn64 && printf '%s\n' 'd1ddfe21dfa61840a83f833c8bd45ed7e2f606c3d9c351d2ec732fb6e4f97c89  cc1' | sha256sum -c - >/dev/null && touch .stamp

tools/ido-7.1/.stamp:
	$(Q)mkdir -p tools/ido-7.1 && curl -fsSL https://github.com/decompals/ido-static-recomp/releases/download/v1.2/ido-7.1-recomp-linux.tar.gz -o tools/ido-7.1.tar.gz && echo '0d411696e178fcca34c31c3bf02011b928d7fd9c1fa7f8bf45070e0781b58e15  tools/ido-7.1.tar.gz' | sha256sum -c - >/dev/null && tar -xzf tools/ido-7.1.tar.gz -C tools/ido-7.1 NCC acpp as0 as1 cc cfe edgcpfe err.english.cc ugen ujoin uld umerge uopt upas usplit && rm -f tools/ido-7.1.tar.gz && cd tools/ido-7.1 && printf '%s\n' 'd886205c468987e49d1b294cc01c3d6bc886a879f4babb2f5035728d1df6029b  NCC' 'fad6d749179e4c037ebdca99687fed6d759d37ab070a419a3362daabd9e82d79  acpp' '6734d45b9b92de4766dda32b9da88148e5445f3c1a7ea4862b2cd3dec9991b9c  as0' '52160d61a732d209eed15e0ce6736eee23118e1c34ca5b9ec61474fe1a4011e3  as1' 'd886205c468987e49d1b294cc01c3d6bc886a879f4babb2f5035728d1df6029b  cc' 'c264f0c1f3ece0d15c2cd2ff73fff20381e98ed09f630c8087e24010e2a5ce1a  cfe' 'a2505f76d1e225fc6173459214ba5a200ae45dbbfd58c68930570dadaa853806  edgcpfe' '1baa78a42fe732318b907b39e54ba602d7733b179995ba25f02a800d73638fea  err.english.cc' 'a8bcc5d4dad3b67428cde0dac6002c1e1ef3f98ea69746ff05300cdab913d227  ugen' '208bc5c76b64774ec2cfb29780f78cb3a4ecfbb143a74ca2c6c776a9f2c23e95  ujoin' 'c3386ae712ae203e1aafb0a1f042f098a2a5e4c8336b213329c525dd4ec43036  uld' 'c2700570d04abd42634e567573d5a6ca983c27bb85ca965c845eb3b9cc6a3761  umerge' 'b21294d653fa414ba97413dc2e17c17bb417f7699166b330ed00a6a3723f03a5  uopt' 'bfac232de2073a72e93d2836eea2c41e52f99252f973af4f94bc675088929495  upas' '83f0f4d50162e4f70503c2589cb3290b8ea252fa072ce7684e659dc061a0208e  usplit' | sha256sum -c - >/dev/null && touch .stamp

