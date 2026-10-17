# 🧸 Estonian / Eesti Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Estonian / Eesti**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Estonian / Eesti | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `liiguta` | `MOV` | Put a number in a magic box |
| **Add** | `liida` | `ADD` | Add a number to what's in the box |
| **Take** | `lahuta` | `SUB` | Take away a number from the box |
| **Times** | `korruta` | `IMUL` | Multiply the box by a number |
| **Split** | `jaga` | `IDIV` | Divide the box by a number |
| **Show** | `susteemikutse` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `huppa` | `JMP` | Jump to another step |
| **Compare** | `vordle` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `tsukkel` | `LOOP` | Repeat a block of code |
| **Save** | `tuka` | `PUSH` | Save a number in the backpack |
| **Load** | `tiri` | `POP` | Get the number back |
| **Call** | `kutsu` | `CALL` | Call a magic trick or function |
| **Back** | `tagasta` | `RET` | Come back from the trick |
| **Stop** | `peata` | `HLT` | Finish the program |
| **Wait** | `mittemidagi` | `NOP` | Wait a moment |

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
; My First Program in Estonian / Eesti
liiguta box 10       ; Put 10 into the box
liida box 5        ; Add 5 to it (now 15!)
susteemikutse box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l et
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l et --step
```
