# 🧸 Romanian / Română Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Romanian / Română**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Romanian / Română | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `pune` | `MOV` | Put a number in a magic box |
| **Add** | `adauga` | `ADD` | Add a number to what's in the box |
| **Take** | `scade` | `SUB` | Take away a number from the box |
| **Times** | `inmulteste` | `IMUL` | Multiply the box by a number |
| **Split** | `imparte` | `IDIV` | Divide the box by a number |
| **Show** | `arata` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `sari` | `JMP` | Jump to another step |
| **Compare** | `compara` | `CMP` | Compare two values |
| **If Equal** | `daca_egal` | `JE` | Jump if numbers are identical |
| **Repeat** | `repeta` | `LOOP` | Repeat a block of code |
| **Save** | `salveaza` | `PUSH` | Save a number in the backpack |
| **Load** | `incarca` | `POP` | Get the number back |
| **Call** | `cheama` | `CALL` | Call a magic trick or function |
| **Back** | `revino` | `RET` | Come back from the trick |
| **Stop** | `opreste` | `HLT` | Finish the program |
| **Wait** | `asteapta` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `cutie` (or `rax`): Your main magic treasure box.
- `cutie2` (or `rbx`): A second box for extra numbers.
- `contor` (or `rcx`): The counter box for loops.
- `cutie3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Romanian / Română
pune cutie 10       ; Put 10 into the box
adauga cutie 5        ; Add 5 to it (now 15!)
arata cutie         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ro
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ro --step
```
