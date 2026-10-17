# 🧸 Finnish / Suomi Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Finnish / Suomi**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Finnish / Suomi | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `siirrä` | `MOV` | Put a number in a magic box |
| **Add** | `lisää` | `ADD` | Add a number to what's in the box |
| **Take** | `vähennä` | `SUB` | Take away a number from the box |
| **Times** | `kerro` | `IMUL` | Multiply the box by a number |
| **Split** | `jaa` | `IDIV` | Divide the box by a number |
| **Show** | `järjestelmäkutsu` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `hyppää` | `JMP` | Jump to another step |
| **Compare** | `vertaa` | `CMP` | Compare two values |
| **If Equal** | `jos_sama` | `JE` | Jump if numbers are identical |
| **Repeat** | `silmukka` | `LOOP` | Repeat a block of code |
| **Save** | `työnnä` | `PUSH` | Save a number in the backpack |
| **Load** | `vedä` | `POP` | Get the number back |
| **Call** | `kutsu` | `CALL` | Call a magic trick or function |
| **Back** | `palaa` | `RET` | Come back from the trick |
| **Stop** | `pysäytä` | `HLT` | Finish the program |
| **Wait** | `tyhjä` | `NOP` | Wait a moment |

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
; My First Program in Finnish / Suomi
siirrä box 10       ; Put 10 into the box
lisää box 5        ; Add 5 to it (now 15!)
järjestelmäkutsu box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l fi
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l fi --step
```
