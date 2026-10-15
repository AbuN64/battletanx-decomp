# Contributing to BattleTanx

You need GNU Make, curl, tar, sha256sum, the MIPS binutils and, only for toolchains that assemble with it, n64link or armips.
Tool commands default to conventional names. Put other paths in `local.mk`.

Place your own big-endian cartridge dumps at these paths:

- `roms/baserom.us.z64`

`make check` builds every version and verifies each ROM's SHA-1.
The compilers are downloaded into `tools/` and checked against their pinned hashes.
