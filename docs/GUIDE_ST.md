# 🧸 Sesotho Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Sesotho**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Sesotho | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `suthisa` | `MOV` | Put a number in a magic box |
| **Add** | `eketsa` | `ADD` | Add a number to what's in the box |
| **Take** | `tlosa` | `SUB` | Take away a number from the box |
| **Times** | `ngatafatsa` | `IMUL` | Multiply the box by a number |
| **Split** | `arola` | `IDIV` | Divide the box by a number |
| **Show** | `piletso_ya_tsamaiso` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `tlola` | `JMP` | Jump to another step |
| **Compare** | `bapisa` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `sedikadikwe` | `LOOP` | Repeat a block of code |
| **Save** | `kenya` | `PUSH` | Save a number in the backpack |
| **Load** | `ntsha` | `POP` | Get the number back |
| **Call** | `biletsa` | `CALL` | Call a magic trick or function |
| **Back** | `khutla` | `RET` | Come back from the trick |
| **Stop** | `ema` | `HLT` | Finish the program |
| **Wait** | `ha_ho_letho` | `NOP` | Wait a moment |

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
; My First Program in Sesotho
suthisa box 10       ; Put 10 into the box
eketsa box 5        ; Add 5 to it (now 15!)
piletso_ya_tsamaiso box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l st
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l st --step
```
