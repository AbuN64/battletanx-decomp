# BattleTanx decompilation

A matching decompilation of *BattleTanx* for the Nintendo 64.

> **This repository contains no game content.** You must supply a legally acquired cartridge dump. Builds are verified against its SHA256.

## Progress

<!-- progress -->
<pre><code>all  [░░░░░░░░░░░░░░░░░░░░]   2.71% (~2.72%)  227,460 of 8,388,608 bytes</code><br><code>us   [░░░░░░░░░░░░░░░░░░░░]   2.71% (~2.72%)  227,460 of 8,388,608 bytes</code></pre>

<img src="docs/overview-us.svg" width="720">

| us (NUS-NBXE-0, North America). NTSC release. SHA256 `c5b7cf3523de025e3f18e2c8df2deb0eced5613e7c46cb8c6c5a4f22644ead3f` |
|---|
| <pre><code>code      [███░░░░░░░░░░░░░░░░░]  18.59% (~18.80%)  131,240 of 705,956</code><br><code>data      [░░░░░░░░░░░░░░░░░░░░]   1.23%  2,108 of 170,652</code><br><code>functions [███████▒░░░░░░░░░░░░]  38.78% (~40.26%)  681 of 1,756</code><br><code>blobs     [░░░░░░░░░░░░░░░░░░░░]   1.19%  90,016 of 7,507,904</code></pre> |
<!-- /progress -->

## Development & Contributions

Contributions and corrections are welcome. Run `make check` before opening a pull request.

For detailed instructions please see [CONTRIBUTING.md](CONTRIBUTING.md).

## License

[CC0 1.0](LICENSE)

## Dependencies

<!-- dependencies -->
- [GCC 2.7.2](https://github.com/decompals/mips-gcc-2.7.2)
- [n64link](https://github.com/AbuN64/mas-n64)
<!-- /dependencies -->
