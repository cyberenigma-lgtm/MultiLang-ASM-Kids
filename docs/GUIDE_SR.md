# 🧸 Serbian / Српски Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Serbian / Српски**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Serbian / Српски | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `премести` | `MOV` | Put a number in a magic box |
| **Add** | `сабери` | `ADD` | Add a number to what's in the box |
| **Take** | `одузми` | `SUB` | Take away a number from the box |
| **Times** | `помножи` | `IMUL` | Multiply the box by a number |
| **Split** | `подели` | `IDIV` | Divide the box by a number |
| **Show** | `системски_позив` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `скочи` | `JMP` | Jump to another step |
| **Compare** | `упореди` | `CMP` | Compare two values |
| **If Equal** | `ако_једнако` | `JE` | Jump if numbers are identical |
| **Repeat** | `петља` | `LOOP` | Repeat a block of code |
| **Save** | `гурни` | `PUSH` | Save a number in the backpack |
| **Load** | `извуци` | `POP` | Get the number back |
| **Call** | `позови` | `CALL` | Call a magic trick or function |
| **Back** | `врати` | `RET` | Come back from the trick |
| **Stop** | `заустави` | `HLT` | Finish the program |
| **Wait** | `ништа` | `NOP` | Wait a moment |

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
; My First Program in Serbian / Српски
премести box 10       ; Put 10 into the box
сабери box 5        ; Add 5 to it (now 15!)
системски_позив box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l sr
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l sr --step
```
