# 🧸 Maya / Maaya T'aan Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Maya / Maaya T'aan**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Maya / Maaya T'aan | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `túuxt` | `MOV` | Put a number in a magic box |
| **Add** | `ts'áaj` | `ADD` | Add a number to what's in the box |
| **Take** | `túul` | `SUB` | Take away a number from the box |
| **Times** | `ya'abkún` | `IMUL` | Multiply the box by a number |
| **Split** | `t'ox` | `IDIV` | Divide the box by a number |
| **Show** | `t'an_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `si'it` | `JMP` | Jump to another step |
| **Compare** | `ket` | `CMP` | Compare two values |
| **If Equal** | `je'el_bey` | `JE` | Jump if numbers are identical |
| **Repeat** | `nalkut` | `LOOP` | Repeat a block of code |
| **Save** | `ts'áaj_ich` | `PUSH` | Save a number in the backpack |
| **Load** | `jok's` | `POP` | Get the number back |
| **Call** | `t'an` | `CALL` | Call a magic trick or function |
| **Back** | `suut` | `RET` | Come back from the trick |
| **Stop** | `p'ul` | `HLT` | Finish the program |
| **Wait** | `mixba'al` | `NOP` | Wait a moment |

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
; My First Program in Maya / Maaya T'aan
túuxt box 10       ; Put 10 into the box
ts'áaj box 5        ; Add 5 to it (now 15!)
t'an_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l may
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l may --step
```
