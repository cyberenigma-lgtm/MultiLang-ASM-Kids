# 🧸 Tetum / Lia-Tetun Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Tetum / Lia-Tetun**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Tetum / Lia-Tetun | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `muda` | `MOV` | Put a number in a magic box |
| **Add** | `aumenta` | `ADD` | Add a number to what's in the box |
| **Take** | `hasai` | `SUB` | Take away a number from the box |
| **Times** | `multiplika` | `IMUL` | Multiply the box by a number |
| **Split** | `fahe` | `IDIV` | Divide the box by a number |
| **Show** | `bolu_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `haksoit` | `JMP` | Jump to another step |
| **Compare** | `kompara` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `siklu` | `LOOP` | Repeat a block of code |
| **Save** | `dudu` | `PUSH` | Save a number in the backpack |
| **Load** | `puxa` | `POP` | Get the number back |
| **Call** | `bolu` | `CALL` | Call a magic trick or function |
| **Back** | `fila` | `RET` | Come back from the trick |
| **Stop** | `para` | `HLT` | Finish the program |
| **Wait** | `la_iha` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `box` (or `rax`): Your main magic treasure box.
- `box2` (or `rbx`): A second box for extra numbers.
- `counter` (or `rcx`): The counter box for loops.
- `box3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Tetum / Lia-Tetun
muda box 10       ; Put 10 into the box
aumenta box 5        ; Add 5 to it (now 15!)
bolu_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l tet
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l tet --step
```
