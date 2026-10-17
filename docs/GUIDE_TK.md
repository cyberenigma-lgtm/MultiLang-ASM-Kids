# 🧸 Turkmen / Türkmençe Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Turkmen / Türkmençe**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Turkmen / Türkmençe | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `geçir` | `MOV` | Put a number in a magic box |
| **Add** | `goş` | `ADD` | Add a number to what's in the box |
| **Take** | `aýyr` | `SUB` | Take away a number from the box |
| **Times** | `köpelt` | `IMUL` | Multiply the box by a number |
| **Split** | `böl` | `IDIV` | Divide the box by a number |
| **Show** | `ulgam_çagyryşy` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `bök` | `JMP` | Jump to another step |
| **Compare** | `deňeşdir` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `aýlaw` | `LOOP` | Repeat a block of code |
| **Save** | `it` | `PUSH` | Save a number in the backpack |
| **Load** | `çek` | `POP` | Get the number back |
| **Call** | `çagyr` | `CALL` | Call a magic trick or function |
| **Back** | `gaýt` | `RET` | Come back from the trick |
| **Stop** | `saklan` | `HLT` | Finish the program |
| **Wait** | `hiç_zat` | `NOP` | Wait a moment |

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
; My First Program in Turkmen / Türkmençe
geçir box 10       ; Put 10 into the box
goş box 5        ; Add 5 to it (now 15!)
ulgam_çagyryşy box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l tk
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l tk --step
```
