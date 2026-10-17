# 🧸 Ukrainian / Українська Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Ukrainian / Українська**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Ukrainian / Українська | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `polozhy` | `MOV` | Put a number in a magic box |
| **Add** | `dodaty` | `ADD` | Add a number to what's in the box |
| **Take** | `vidnyaty` | `SUB` | Take away a number from the box |
| **Times** | `pomnozh` | `IMUL` | Multiply the box by a number |
| **Split** | `podily` | `IDIV` | Divide the box by a number |
| **Show** | `pokazhy` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `strybay` | `JMP` | Jump to another step |
| **Compare** | `porivnyay` | `CMP` | Compare two values |
| **If Equal** | `yakshcho_rivno` | `JE` | Jump if numbers are identical |
| **Repeat** | `povtory` | `LOOP` | Repeat a block of code |
| **Save** | `zberezhy` | `PUSH` | Save a number in the backpack |
| **Load** | `vidnovy` | `POP` | Get the number back |
| **Call** | `vyklychy` | `CALL` | Call a magic trick or function |
| **Back** | `povernys` | `RET` | Come back from the trick |
| **Stop** | `stiy` | `HLT` | Finish the program |
| **Wait** | `pochekay` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `korobka` (or `rax`): Your main magic treasure box.
- `korobka2` (or `rbx`): A second box for extra numbers.
- `lichylnyk` (or `rcx`): The counter box for loops.
- `korobka3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Ukrainian / Українська
polozhy korobka 10       ; Put 10 into the box
dodaty korobka 5        ; Add 5 to it (now 15!)
pokazhy korobka         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l uk
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l uk --step
```
