# BattleTanx decompilation

A matching decompilation of *BattleTanx* for the Nintendo 64.

> **This repository contains no game content.** You must supply a legally acquired cartridge dump. Builds are verified against its SHA256.

## Progress

<!-- progress -->
<pre><code>all  [░░░░░░░░░░░░░░░░░░░░]   2.70%  226,580 of 8,388,608 bytes</code><br><code>us   [░░░░░░░░░░░░░░░░░░░░]   2.70%  226,580 of 8,388,608 bytes</code></pre>

<img src="docs/overview-us.svg" width="720">

| us (NUS-NBXE-0, North America). NTSC release. SHA256 `c5b7cf3523de025e3f18e2c8df2deb0eced5613e7c46cb8c6c5a4f22644ead3f` |
|---|
| <pre><code>rom         [░░░░░░░░░░░░░░░░░░░░]   2.70%  226,580 of 8,388,608 bytes</code><br><code>├ header    4,096</code><br><code>├ code      [███░░░░░░░░░░░░░░░░░]  18.46%  130,360 of 705,956</code><br><code>├ data      [░░░░░░░░░░░░░░░░░░░░]   1.23%  2,108 of 170,652</code><br><code>└ blobs     [████████████████████]  100.00%  90,016 of 90,016</code><br><code>functions   [███████░░░░░░░░░░░░░]  38.38%  674 of 1,756</code></pre> |
<!-- /progress -->

## Development & Contributions

Contributions and corrections are welcome. Run `make check` before opening a pull request.

For detailed instructions please see [CONTRIBUTING.md](CONTRIBUTING.md).

## License

[CC0 1.0](LICENSE)

## Dependencies

<!-- dependencies -->
- [GCC 2.7.2 (KMC)](https://github.com/decompals/mips-gcc-2.7.2/releases/download/main/gcc-2.7.2-linux.tar.gz)
- [n64link (SN ASN64-compatible assembler and linker)](https://github.com/AbuN64/mas-n64/releases/download/v0.2.0/n64link-v0.2.0-linux-x86_64.tar.gz)
<!-- /dependencies -->
