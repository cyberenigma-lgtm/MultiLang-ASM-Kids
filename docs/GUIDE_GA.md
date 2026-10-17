# 🧸 Irish / Gaeilge Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Irish / Gaeilge**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Irish / Gaeilge | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `bog` | `MOV` | Put a number in a magic box |
| **Add** | `suimigh` | `ADD` | Add a number to what's in the box |
| **Take** | `dealú` | `SUB` | Take away a number from the box |
| **Times** | `iolraigh` | `IMUL` | Multiply the box by a number |
| **Split** | `roinn` | `IDIV` | Divide the box by a number |
| **Show** | `glaoch_córais` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `léim` | `JMP` | Jump to another step |
| **Compare** | `cuir_i_gcomparáid` | `CMP` | Compare two values |
| **If Equal** | `más_ionann` | `JE` | Jump if numbers are identical |
| **Repeat** | `lúb` | `LOOP` | Repeat a block of code |
| **Save** | `brúigh` | `PUSH` | Save a number in the backpack |
| **Load** | `pop` | `POP` | Get the number back |
| **Call** | `glaoch` | `CALL` | Call a magic trick or function |
| **Back** | `filleadh` | `RET` | Come back from the trick |
| **Stop** | `stad` | `HLT` | Finish the program |
| **Wait** | `tada` | `NOP` | Wait a moment |

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
; My First Program in Irish / Gaeilge
bog box 10       ; Put 10 into the box
suimigh box 5        ; Add 5 to it (now 15!)
glaoch_córais box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ga
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ga --step
```
