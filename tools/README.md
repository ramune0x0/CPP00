# Clang tools (shared)

This directory is kept for backward compatibility.
Prefer the shared tools under `CPP/tools/`.

## clang-format

- Format all sources under repo:

```bash
./tools/format.sh
```

- Format only a specific project:

```bash
./tools/format.sh CPP00 CPP01
```

## clang-tidy (optional)

`clang-tidy` needs compile flags. With Makefile-based projects, the easiest is generating
`compile_commands.json` using `bear`.

```bash
./tools/tidy.sh CPP00/ex01
```
