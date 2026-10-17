# 🧸 Waray Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Waray**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Waray | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `balhina` | `MOV` | Put a number in a magic box |
| **Add** | `dugangi` | `ADD` | Add a number to what's in the box |
| **Take** | `kuhai` | `SUB` | Take away a number from the box |
| **Times** | `damoa` | `IMUL` | Multiply the box by a number |
| **Split** | `bahina` | `IDIV` | Divide the box by a number |
| **Show** | `tawag_han_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `lukso` | `JMP` | Jump to another step |
| **Compare** | `itanding` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `libot` | `LOOP` | Repeat a block of code |
| **Save** | `iduon` | `PUSH` | Save a number in the backpack |
| **Load** | `ibutong` | `POP` | Get the number back |
| **Call** | `tawaga` | `CALL` | Call a magic trick or function |
| **Back** | `balik` | `RET` | Come back from the trick |
| **Stop** | `pahuway` | `HLT` | Finish the program |
| **Wait** | `waray` | `NOP` | Wait a moment |

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
; My First Program in Waray
balhina box 10       ; Put 10 into the box
dugangi box 5        ; Add 5 to it (now 15!)
tawag_han_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l war
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l war --step
```
