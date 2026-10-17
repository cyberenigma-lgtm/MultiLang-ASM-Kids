# 🧸 Dutch / Nederlands Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Dutch / Nederlands**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Dutch / Nederlands | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `zet` | `MOV` | Put a number in a magic box |
| **Add** | `tel_op` | `ADD` | Add a number to what's in the box |
| **Take** | `trek_af` | `SUB` | Take away a number from the box |
| **Times** | `vermenigvuldig` | `IMUL` | Multiply the box by a number |
| **Split** | `deel` | `IDIV` | Divide the box by a number |
| **Show** | `toon` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `spring` | `JMP` | Jump to another step |
| **Compare** | `vergelijk` | `CMP` | Compare two values |
| **If Equal** | `als_gelijk` | `JE` | Jump if numbers are identical |
| **Repeat** | `herhaal` | `LOOP` | Repeat a block of code |
| **Save** | `bewaar` | `PUSH` | Save a number in the backpack |
| **Load** | `laad` | `POP` | Get the number back |
| **Call** | `roep` | `CALL` | Call a magic trick or function |
| **Back** | `terug` | `RET` | Come back from the trick |
| **Stop** | `stop` | `HLT` | Finish the program |
| **Wait** | `wacht` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `doos` (or `rax`): Your main magic treasure box.
- `doos2` (or `rbx`): A second box for extra numbers.
- `teller` (or `rcx`): The counter box for loops.
- `doos3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Dutch / Nederlands
zet doos 10       ; Put 10 into the box
tel_op doos 5        ; Add 5 to it (now 15!)
toon doos         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l nl
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l nl --step
```
