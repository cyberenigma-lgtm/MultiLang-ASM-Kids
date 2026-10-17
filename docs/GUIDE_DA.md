# 🧸 Danish / Dansk Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Danish / Dansk**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Danish / Dansk | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `flyt` | `MOV` | Put a number in a magic box |
| **Add** | `tilfoj` | `ADD` | Add a number to what's in the box |
| **Take** | `traek_fra` | `SUB` | Take away a number from the box |
| **Times** | `gang` | `IMUL` | Multiply the box by a number |
| **Split** | `divider` | `IDIV` | Divide the box by a number |
| **Show** | `systemkald` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `hop` | `JMP` | Jump to another step |
| **Compare** | `sammenlign` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `lokke` | `LOOP` | Repeat a block of code |
| **Save** | `skub` | `PUSH` | Save a number in the backpack |
| **Load** | `traek` | `POP` | Get the number back |
| **Call** | `kald` | `CALL` | Call a magic trick or function |
| **Back** | `returner` | `RET` | Come back from the trick |
| **Stop** | `stop` | `HLT` | Finish the program |
| **Wait** | `intet` | `NOP` | Wait a moment |

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
; My First Program in Danish / Dansk
flyt box 10       ; Put 10 into the box
tilfoj box 5        ; Add 5 to it (now 15!)
systemkald box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l da
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l da --step
```
