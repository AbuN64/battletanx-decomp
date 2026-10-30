# Contributing to BattleTanx

## Build

You need GNU Make, curl, tar, sha256sum, python3, cpp, the MIPS binutils (`mips-linux-gnu-as`, `-ld`, `-objcopy`)
and splat:

```sh
python3 -m pip install -r requirements.txt
```

Put your own big-endian cartridge dumps at these paths:

- `roms/baserom.us.z64`

```sh
make
```

`make` (the same as `make check`) splits each dump into `asm/<version>/` with splat the first time (`make extract`
does it again), then builds every version and verifies each ROM's SHA-1. The compilers and n64link are downloaded
into `tools/` and checked against their pinned SHA-256 hashes. Tool commands default to conventional names; put
other paths in `local.mk`.

## Pull requests

Run `make` before opening a pull request; every version must still match.
