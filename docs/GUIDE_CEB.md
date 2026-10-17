# 🧸 Cebuano / Sinugboanon Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Cebuano / Sinugboanon**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Cebuano / Sinugboanon | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `balhin` | `MOV` | Put a number in a magic box |
| **Add** | `dugang` | `ADD` | Add a number to what's in the box |
| **Take** | `kuha` | `SUB` | Take away a number from the box |
| **Times** | `padaghan` | `IMUL` | Multiply the box by a number |
| **Split** | `bahin` | `IDIV` | Divide the box by a number |
| **Show** | `tawag_sa_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ambak` | `JMP` | Jump to another step |
| **Compare** | `tandi` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `libot` | `LOOP` | Repeat a block of code |
| **Save** | `iduso` | `PUSH` | Save a number in the backpack |
| **Load** | `ibira` | `POP` | Get the number back |
| **Call** | `tawag` | `CALL` | Call a magic trick or function |
| **Back** | `balik` | `RET` | Come back from the trick |
| **Stop** | `hunong` | `HLT` | Finish the program |
| **Wait** | `wala` | `NOP` | Wait a moment |

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
; My First Program in Cebuano / Sinugboanon
balhin box 10       ; Put 10 into the box
dugang box 5        ; Add 5 to it (now 15!)
tawag_sa_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ceb
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ceb --step
```
