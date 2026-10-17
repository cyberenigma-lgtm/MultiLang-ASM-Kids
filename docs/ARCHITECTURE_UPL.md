# 🏛️ MultiLang-ASM Kids - Architecture & UPL Standard

## 1. Specification Overview
MultiLang-ASM Kids implements the **UPL+ (Universal Polyglot Layer)** educational grade for computer architecture and hardware fundamentals.

It is built to satisfy three core design pillars:
1. **Zero External Dependencies:** 100% ANSI C99 engine (`src/mlasm_kids.c` and `src/kids_tables.h`). Zero Python runtime requirement.
2. **Pedagogical Virtual Stepper:** A self-contained virtual CPU emulator with 16 registers, call stack, comparison flags, and step-by-step state animations.
3. **154 World Languages & Dialects:** Genuine natural language action verbs across all continents.

## 2. Execution Pipeline

```
  [Kids Assembly Source (.kasm)]
               |
               v
  [Parser & Comment Stripper]
               |
               v
  [Language Detection & Resolver]
         /                 \
        v                   v
  [Pedagogical VM]     [NASM Transpiler]
  - 16 Registers       - 64-bit ABI
  - Flags (ZF, SF)     - External libc printf
  - Stepper Printer    - Win64/SysV ABI
```

## 3. Register Mapping Model
- `box` / `caja`       -> `rax` (64-bit accumulator)
- `box2` / `caja2`     -> `rbx` (base storage)
- `counter` / `contador` -> `rcx` (counter for loop / repeat)
- `box3` / `caja3`     -> `rdx` (data register)
- `box4` / `caja4`     -> `rsi` (source index)
- `box5` / `caja5`     -> `rdi` (destination index)
