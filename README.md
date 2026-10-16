# BattleTanx decompilation

A matching decompilation of *BattleTanx* for the Nintendo 64.

> **This repository contains no game content.** You must supply a legally acquired cartridge dump. Builds are verified against its SHA256.

## Progress

<!-- progress -->
<pre><code>all  [███▒░░░░░░░░░░░░░░░░]  19.32% (~20.41%)  169,432 of 876,608 bytes</code><br><code>us   [███▒░░░░░░░░░░░░░░░░]  19.32% (~20.41%)  169,432 of 876,608 bytes</code></pre>

| us (NUS-NBXE-0, North America). NTSC release. SHA256 `c5b7cf3523de025e3f18e2c8df2deb0eced5613e7c46cb8c6c5a4f22644ead3f` |
|---|
| <pre><code>code      [███░░░░░░░░░░░░░░░░░]  16.92% (~18.26%)  119,460 of 705,956</code><br><code>data      [█████░░░░░░░░░░░░░░░]  29.28%  49,972 of 170,652</code><br><code>functions [██████▒░░░░░░░░░░░░░]  33.95% (~37.39%)  583 of 1,717</code></pre> |
<!-- /progress -->

## Development & Contributions

Contributions and corrections are welcome. Run `make check` before opening a pull request.

For detailed instructions please see [CONTRIBUTING.md](CONTRIBUTING.md).

## License

[CC0 1.0](LICENSE)

## Dependencies

| Compiler | Toolchain | Assembler | Source |
|---|---|---|---|
| GCC 2.7.2 (KMC) | `gcc-2.7.2-kmc` | SN ASN64 2.81 | [decompals/mips-gcc-2.7.2](https://github.com/decompals/mips-gcc-2.7.2/tree/43d1cdb67ed135879869b5266f01efaaada5e35a) `43d1cdb` |
| IDO 7.1 (static recompilation) | `ido-7.1` | IDO built-in | [decompals/ido-static-recomp](https://github.com/decompals/ido-static-recomp/releases/tag/v1.2) `v1.2` |
| GCC 2.8.1 | `gcc-2.8.1-sn64` | SN ASN64 2.81 | [pmret/gcc-papermario](https://github.com/pmret/gcc-papermario/tree/d97824ffc7517675646960442b3f512a473e4404) `d97824f` |
