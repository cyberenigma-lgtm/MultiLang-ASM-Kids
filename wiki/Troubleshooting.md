# 🔧 Troubleshooting & FAQ

Common questions and answers when using MultiLang-ASM Kids.

---

### ❓ Do I need Python installed to run MultiLang-ASM Kids?
**No!** MultiLang-ASM Kids is built in **100% ANSI C99**. The binary (`mlasm_kids.exe` on Windows or `mlasm_kids` on Linux/macOS) runs completely autonomously with zero external dependencies and zero runtime interpreters.

---

### ❓ How do I fix strange characters in the Windows Command Prompt?
If special accented letters or emojis display strangely in your Windows console:
Run this command in your PowerShell or CMD window before running `mlasm_kids`:
```cmd
chcp 65001
```
This enables UTF-8 terminal encoding.

---

### ❓ Can I use real register names like `rax` alongside `caja` or `box`?
**Yes!** The engine recognizes both friendly pedagogical names (`caja`, `box`, `kiste`, `boite`, `contador`, `counter`) and standard x86_64 hardware registers (`rax`, `rbx`, `rcx`, `rdx`, `rsi`, `rdi`, `r8`..`r15`).

---

### ❓ Why didn't my program print any output?
Make sure your program contains a `show` command (or the translated equivalent in your language, such as `enseña`, `montre`, `zeige`, `misete`, `kan`, `look`). In assembly language, the computer will not display numbers unless explicitly instructed to!

---

### ❓ How do I compile to real machine code with NASM and GCC?
1. First, transpile with `mlasm_kids`:
   ```bash
   mlasm_kids compile my_program.kasm -o output.asm
   ```
2. Then assemble and link (on Windows MinGW):
   ```bash
   nasm -f win64 output.asm -o output.obj
   gcc output.obj -o my_program.exe
   ```
