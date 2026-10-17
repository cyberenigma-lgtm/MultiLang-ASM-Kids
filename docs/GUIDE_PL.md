# 🧸 Polish / Polski Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Polish / Polski**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Polish / Polski | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `wsadz` | `MOV` | Put a number in a magic box |
| **Add** | `dodaj` | `ADD` | Add a number to what's in the box |
| **Take** | `odejmij` | `SUB` | Take away a number from the box |
| **Times** | `pomnoz` | `IMUL` | Multiply the box by a number |
| **Split** | `podziel` | `IDIV` | Divide the box by a number |
| **Show** | `pokaz` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `skocz` | `JMP` | Jump to another step |
| **Compare** | `porownaj` | `CMP` | Compare two values |
| **If Equal** | `jesli_rowne` | `JE` | Jump if numbers are identical |
| **Repeat** | `powtarzaj` | `LOOP` | Repeat a block of code |
| **Save** | `zapisz` | `PUSH` | Save a number in the backpack |
| **Load** | `wczytaj` | `POP` | Get the number back |
| **Call** | `wolaj` | `CALL` | Call a magic trick or function |
| **Back** | `wroc` | `RET` | Come back from the trick |
| **Stop** | `stoj` | `HLT` | Finish the program |
| **Wait** | `czekaj` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `pudelko` (or `rax`): Your main magic treasure box.
- `pudelko2` (or `rbx`): A second box for extra numbers.
- `licznik` (or `rcx`): The counter box for loops.
- `pudelko3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Polish / Polski
wsadz pudelko 10       ; Put 10 into the box
dodaj pudelko 5        ; Add 5 to it (now 15!)
pokaz pudelko         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l pl
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l pl --step
```
