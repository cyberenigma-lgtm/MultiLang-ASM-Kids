# 🧸 Croatian / Hrvatski Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Croatian / Hrvatski**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Croatian / Hrvatski | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `premjesti` | `MOV` | Put a number in a magic box |
| **Add** | `dodaj` | `ADD` | Add a number to what's in the box |
| **Take** | `oduzmi` | `SUB` | Take away a number from the box |
| **Times** | `pomnozi` | `IMUL` | Multiply the box by a number |
| **Split** | `podijeli` | `IDIV` | Divide the box by a number |
| **Show** | `sistemski_poziv` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `skoci` | `JMP` | Jump to another step |
| **Compare** | `usporedi` | `CMP` | Compare two values |
| **If Equal** | `ako_jednako` | `JE` | Jump if numbers are identical |
| **Repeat** | `petlja` | `LOOP` | Repeat a block of code |
| **Save** | `gurni` | `PUSH` | Save a number in the backpack |
| **Load** | `izvuci` | `POP` | Get the number back |
| **Call** | `pozovi` | `CALL` | Call a magic trick or function |
| **Back** | `vrati` | `RET` | Come back from the trick |
| **Stop** | `zaustavi` | `HLT` | Finish the program |
| **Wait** | `nista` | `NOP` | Wait a moment |

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
; My First Program in Croatian / Hrvatski
premjesti box 10       ; Put 10 into the box
dodaj box 5        ; Add 5 to it (now 15!)
sistemski_poziv box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l hr
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l hr --step
```
