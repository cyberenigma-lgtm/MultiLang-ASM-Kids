# 🧸 Kongo / Kikongo Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Kongo / Kikongo**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Kongo / Kikongo | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `natisa` | `MOV` | Put a number in a magic box |
| **Add** | `yika` | `ADD` | Add a number to what's in the box |
| **Take** | `katula` | `SUB` | Take away a number from the box |
| **Times** | `kudisa` | `IMUL` | Multiply the box by a number |
| **Split** | `kabula` | `IDIV` | Divide the box by a number |
| **Show** | `mbila_nkandikila` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `tina` | `JMP` | Jump to another step |
| **Compare** | `fwanisa` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `zietolo` | `LOOP` | Repeat a block of code |
| **Save** | `kotesa` | `PUSH` | Save a number in the backpack |
| **Load** | `vaikisa` | `POP` | Get the number back |
| **Call** | `binga` | `CALL` | Call a magic trick or function |
| **Back** | `vutuka` | `RET` | Come back from the trick |
| **Stop** | `telama` | `HLT` | Finish the program |
| **Wait** | `kima_ve` | `NOP` | Wait a moment |

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
; My First Program in Kongo / Kikongo
natisa box 10       ; Put 10 into the box
yika box 5        ; Add 5 to it (now 15!)
mbila_nkandikila box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l kg
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l kg --step
```
