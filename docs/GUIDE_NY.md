# 🧸 Chichewa / Nyanja Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Chichewa / Nyanja**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Chichewa / Nyanja | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `suntha` | `MOV` | Put a number in a magic box |
| **Add** | `onjezani` | `ADD` | Add a number to what's in the box |
| **Take** | `chotsani` | `SUB` | Take away a number from the box |
| **Times** | `chulukitsani` | `IMUL` | Multiply the box by a number |
| **Split** | `gawani` | `IDIV` | Divide the box by a number |
| **Show** | `kuitana_makina` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `dumpha` | `JMP` | Jump to another step |
| **Compare** | `yerekezerani` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `kuzungulira` | `LOOP` | Repeat a block of code |
| **Save** | `kankhirani` | `PUSH` | Save a number in the backpack |
| **Load** | `tulutsani` | `POP` | Get the number back |
| **Call** | `itanani` | `CALL` | Call a magic trick or function |
| **Back** | `bwererani` | `RET` | Come back from the trick |
| **Stop** | `imani` | `HLT` | Finish the program |
| **Wait** | `palibe` | `NOP` | Wait a moment |

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
; My First Program in Chichewa / Nyanja
suntha box 10       ; Put 10 into the box
onjezani box 5        ; Add 5 to it (now 15!)
kuitana_makina box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ny
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ny --step
```
