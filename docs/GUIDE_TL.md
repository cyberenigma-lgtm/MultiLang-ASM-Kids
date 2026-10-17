# 🧸 Tagalog / Filipino Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Tagalog / Filipino**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Tagalog / Filipino | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `lagay` | `MOV` | Put a number in a magic box |
| **Add** | `dagdag` | `ADD` | Add a number to what's in the box |
| **Take** | `bawas` | `SUB` | Take away a number from the box |
| **Times** | `paramihin` | `IMUL` | Multiply the box by a number |
| **Split** | `hatiin` | `IDIV` | Divide the box by a number |
| **Show** | `pakita` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `talon` | `JMP` | Jump to another step |
| **Compare** | `ihambing` | `CMP` | Compare two values |
| **If Equal** | `kung_pantay` | `JE` | Jump if numbers are identical |
| **Repeat** | `ulitin` | `LOOP` | Repeat a block of code |
| **Save** | `itago` | `PUSH` | Save a number in the backpack |
| **Load** | `kunin` | `POP` | Get the number back |
| **Call** | `tawagin` | `CALL` | Call a magic trick or function |
| **Back** | `bumalik` | `RET` | Come back from the trick |
| **Stop** | `hinto` | `HLT` | Finish the program |
| **Wait** | `maghintay` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `kahon` (or `rax`): Your main magic treasure box.
- `kahon2` (or `rbx`): A second box for extra numbers.
- `pambilang` (or `rcx`): The counter box for loops.
- `kahon3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Tagalog / Filipino
lagay kahon 10       ; Put 10 into the box
dagdag kahon 5        ; Add 5 to it (now 15!)
pakita kahon         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l tl
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l tl --step
```
