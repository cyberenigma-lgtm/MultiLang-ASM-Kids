# 🧸 Breton / Brezhoneg Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Breton / Brezhoneg**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Breton / Brezhoneg | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `fiñval` | `MOV` | Put a number in a magic box |
| **Add** | `ouzhpennañ` | `ADD` | Add a number to what's in the box |
| **Take** | `tennañ` | `SUB` | Take away a number from the box |
| **Times** | `lieskemmañ` | `IMUL` | Multiply the box by a number |
| **Split** | `rannañ` | `IDIV` | Divide the box by a number |
| **Show** | `galv_reizhiad` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `lammat` | `JMP` | Jump to another step |
| **Compare** | `keñveriañ` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `rodell` | `LOOP` | Repeat a block of code |
| **Save** | `bountañ` | `PUSH` | Save a number in the backpack |
| **Load** | `tennañ_maez` | `POP` | Get the number back |
| **Call** | `gervel` | `CALL` | Call a magic trick or function |
| **Back** | `distreiñ` | `RET` | Come back from the trick |
| **Stop** | `herzel` | `HLT` | Finish the program |
| **Wait** | `netra` | `NOP` | Wait a moment |

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
; My First Program in Breton / Brezhoneg
fiñval box 10       ; Put 10 into the box
ouzhpennañ box 5        ; Add 5 to it (now 15!)
galv_reizhiad box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l br
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l br --step
```
