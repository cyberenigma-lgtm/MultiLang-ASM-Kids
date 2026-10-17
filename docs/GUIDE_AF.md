# 🧸 Afrikaans Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Afrikaans**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Afrikaans | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `skuif` | `MOV` | Put a number in a magic box |
| **Add** | `tel_by` | `ADD` | Add a number to what's in the box |
| **Take** | `trek_af` | `SUB` | Take away a number from the box |
| **Times** | `vermenigvuldig` | `IMUL` | Multiply the box by a number |
| **Split** | `deel` | `IDIV` | Divide the box by a number |
| **Show** | `stelselroep` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `spring` | `JMP` | Jump to another step |
| **Compare** | `vergelyk` | `CMP` | Compare two values |
| **If Equal** | `as_gelyk` | `JE` | Jump if numbers are identical |
| **Repeat** | `lus` | `LOOP` | Repeat a block of code |
| **Save** | `stoot` | `PUSH` | Save a number in the backpack |
| **Load** | `haal` | `POP` | Get the number back |
| **Call** | `roep` | `CALL` | Call a magic trick or function |
| **Back** | `keer_terug` | `RET` | Come back from the trick |
| **Stop** | `stop` | `HLT` | Finish the program |
| **Wait** | `niks` | `NOP` | Wait a moment |

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
; My First Program in Afrikaans
skuif box 10       ; Put 10 into the box
tel_by box 5        ; Add 5 to it (now 15!)
stelselroep box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l af
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l af --step
```
