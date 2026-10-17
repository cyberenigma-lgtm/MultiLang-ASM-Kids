# 🧸 Armenian / Հայերեն Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Armenian / Հայերեն**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Armenian / Հայերեն | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `տեղափոխել` | `MOV` | Put a number in a magic box |
| **Add** | `գումարել` | `ADD` | Add a number to what's in the box |
| **Take** | `հանել` | `SUB` | Take away a number from the box |
| **Times** | `բազմապատկել` | `IMUL` | Multiply the box by a number |
| **Split** | `բաժանել` | `IDIV` | Divide the box by a number |
| **Show** | `համակարգային_կանչ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ցատկել` | `JMP` | Jump to another step |
| **Compare** | `համեմատել` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ցիկլ` | `LOOP` | Repeat a block of code |
| **Save** | `մտցնել` | `PUSH` | Save a number in the backpack |
| **Load** | `հանել_ստեկից` | `POP` | Get the number back |
| **Call** | `կանչել` | `CALL` | Call a magic trick or function |
| **Back** | `վերադառնալ` | `RET` | Come back from the trick |
| **Stop** | `կանգնել` | `HLT` | Finish the program |
| **Wait** | `ոչինչ` | `NOP` | Wait a moment |

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
; My First Program in Armenian / Հայերեն
տեղափոխել box 10       ; Put 10 into the box
գումարել box 5        ; Add 5 to it (now 15!)
համակարգային_կանչ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l hy
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l hy --step
```
