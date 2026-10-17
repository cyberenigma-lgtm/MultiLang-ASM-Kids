# 🧸 Bulgarian / Български Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Bulgarian / Български**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Bulgarian / Български | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `премести` | `MOV` | Put a number in a magic box |
| **Add** | `добави` | `ADD` | Add a number to what's in the box |
| **Take** | `извади` | `SUB` | Take away a number from the box |
| **Times** | `умножи` | `IMUL` | Multiply the box by a number |
| **Split** | `раздели` | `IDIV` | Divide the box by a number |
| **Show** | `системно_повикване` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `скочи` | `JMP` | Jump to another step |
| **Compare** | `сравни` | `CMP` | Compare two values |
| **If Equal** | `ако_равно` | `JE` | Jump if numbers are identical |
| **Repeat** | `цикъл` | `LOOP` | Repeat a block of code |
| **Save** | `постави` | `PUSH` | Save a number in the backpack |
| **Load** | `извади_стек` | `POP` | Get the number back |
| **Call** | `извикай` | `CALL` | Call a magic trick or function |
| **Back** | `върни` | `RET` | Come back from the trick |
| **Stop** | `спри` | `HLT` | Finish the program |
| **Wait** | `нищо` | `NOP` | Wait a moment |

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
; My First Program in Bulgarian / Български
премести box 10       ; Put 10 into the box
добави box 5        ; Add 5 to it (now 15!)
системно_повикване box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l bg
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l bg --step
```
