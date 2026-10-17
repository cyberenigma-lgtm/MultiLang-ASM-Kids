# 🧸 Hungarian / Magyar Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Hungarian / Magyar**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Hungarian / Magyar | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `mozgat` | `MOV` | Put a number in a magic box |
| **Add** | `hozzaad` | `ADD` | Add a number to what's in the box |
| **Take** | `kivon` | `SUB` | Take away a number from the box |
| **Times** | `szoroz` | `IMUL` | Multiply the box by a number |
| **Split** | `oszt` | `IDIV` | Divide the box by a number |
| **Show** | `rendszerhivas` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ugrik` | `JMP` | Jump to another step |
| **Compare** | `osszehasonlit` | `CMP` | Compare two values |
| **If Equal** | `ha_egyenlo` | `JE` | Jump if numbers are identical |
| **Repeat** | `ciklus` | `LOOP` | Repeat a block of code |
| **Save** | `betesz` | `PUSH` | Save a number in the backpack |
| **Load** | `kivesz` | `POP` | Get the number back |
| **Call** | `hiv` | `CALL` | Call a magic trick or function |
| **Back** | `visszater` | `RET` | Come back from the trick |
| **Stop** | `megall` | `HLT` | Finish the program |
| **Wait** | `semmi` | `NOP` | Wait a moment |

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
; My First Program in Hungarian / Magyar
mozgat box 10       ; Put 10 into the box
hozzaad box 5        ; Add 5 to it (now 15!)
rendszerhivas box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l hu
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l hu --step
```
