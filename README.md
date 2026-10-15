# BattleTanx decompilation

A matching decompilation of *BattleTanx* for the Nintendo 64.

> **This repository contains no game content.** You must supply a legally acquired cartridge dump. Builds are verified against its SHA256.

## Progress

<!-- progress -->
<pre><code>all  [██░░░░░░░░░░░░░░░░░░]  11.63% (~13.02%)  101,976 of 876,608 bytes</code><br><code>us   [██░░░░░░░░░░░░░░░░░░]  11.63% (~13.02%)  101,976 of 876,608 bytes</code></pre>

| us (NUS-NBXE-0, North America). NTSC release. SHA256 `c5b7cf3523de025e3f18e2c8df2deb0eced5613e7c46cb8c6c5a4f22644ead3f` |
|---|
| <pre><code>code      [█░░░░░░░░░░░░░░░░░░░]   7.55% (~9.28%)  53,308 of 705,956</code><br><code>data      [█████░░░░░░░░░░░░░░░]  28.51%  48,668 of 170,652</code><br><code>functions [████▒░░░░░░░░░░░░░░░]  20.03% (~28.59%)  344 of 1,717</code></pre> |
<!-- /progress -->

## Development & Contributions

Contributions and corrections are welcome. Run `make check` before opening a pull request.

For detailed instructions please see [CONTRIBUTING.md](CONTRIBUTING.md).

## License

[CC0 1.0](LICENSE)

## Dependencies

- [AbuCakeUnbake64](https://github.com/AbuN64/cake-unbake-64) at `773fba517ee2c9552051bcea15a315999c1ff368`
- [GCC 2.7.2 (KMC)](https://github.com/decompals/mips-gcc-2.7.2) at `43d1cdb67ed135879869b5266f01efaaada5e35a`, the compiler of toolchain `gcc-2.7.2-kmc`, assembled by SN ASN64 version 2.81
- [IDO static recompilation](https://github.com/decompals/ido-static-recomp), the compiler of toolchain `ido-7.1`
