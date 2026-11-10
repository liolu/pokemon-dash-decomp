# Pokemon_Dash decompilation (USA)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/pokemon-dash-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/pokemon-dash-decomp) [![Data](https://bytematch.dev/liolu/pokemon-dash-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/pokemon-dash-decomp) [![Functions](https://bytematch.dev/liolu/pokemon-dash-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/pokemon-dash-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `APDE`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`██████░░░░░░░░░░░░░░` **31.27%** of the code matched · data 97.22% · 2335/3280 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 2201 | 2201/2201 | 27.72% |
| Reused from other decompilations, not merged into files yet | 133 | 133/133 | 3.54% |
| NitroSDK (Nintendo's system library) | 1 | 1/1 | 0.00% |
| Game code: `src/data/` | 4315 | 0/0 | 0.00% |

*Updated 2026-11-10 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py usa
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
