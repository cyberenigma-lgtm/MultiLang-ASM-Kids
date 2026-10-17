# 🧸 Macedonian / Македонски Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Macedonian / Македонски**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Macedonian / Македонски | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `премести` | `MOV` | Put a number in a magic box |
| **Add** | `собери` | `ADD` | Add a number to what's in the box |
| **Take** | `одземи` | `SUB` | Take away a number from the box |
| **Times** | `помножи` | `IMUL` | Multiply the box by a number |
| **Split** | `подели` | `IDIV` | Divide the box by a number |
| **Show** | `системски_повик` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `скокни` | `JMP` | Jump to another step |
| **Compare** | `спореди` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `јамка` | `LOOP` | Repeat a block of code |
| **Save** | `турни` | `PUSH` | Save a number in the backpack |
| **Load** | `извади` | `POP` | Get the number back |
| **Call** | `повикај` | `CALL` | Call a magic trick or function |
| **Back** | `врати` | `RET` | Come back from the trick |
| **Stop** | `сопри` | `HLT` | Finish the program |
| **Wait** | `ништо` | `NOP` | Wait a moment |

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
; My First Program in Macedonian / Македонски
премести box 10       ; Put 10 into the box
собери box 5        ; Add 5 to it (now 15!)
системски_повик box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l mk
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l mk --step
```
