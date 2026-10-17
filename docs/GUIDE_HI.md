# 🧸 Hindi / हिन्दी Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Hindi / हिन्दी**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Hindi / हिन्दी | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `rakho` | `MOV` | Put a number in a magic box |
| **Add** | `jodo` | `ADD` | Add a number to what's in the box |
| **Take** | `ghatao` | `SUB` | Take away a number from the box |
| **Times** | `guna` | `IMUL` | Multiply the box by a number |
| **Split** | `bhag` | `IDIV` | Divide the box by a number |
| **Show** | `dikhao` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `kudo` | `JMP` | Jump to another step |
| **Compare** | `tulna` | `CMP` | Compare two values |
| **If Equal** | `agar_barabar` | `JE` | Jump if numbers are identical |
| **Repeat** | `dohrao` | `LOOP` | Repeat a block of code |
| **Save** | `bachao` | `PUSH` | Save a number in the backpack |
| **Load** | `nikalo` | `POP` | Get the number back |
| **Call** | `bulao` | `CALL` | Call a magic trick or function |
| **Back** | `wapas` | `RET` | Come back from the trick |
| **Stop** | `ruko` | `HLT` | Finish the program |
| **Wait** | `thehro` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `dibba` (or `rax`): Your main magic treasure box.
- `dibba2` (or `rbx`): A second box for extra numbers.
- `ginak` (or `rcx`): The counter box for loops.
- `dibba3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Hindi / हिन्दी
rakho dibba 10       ; Put 10 into the box
jodo dibba 5        ; Add 5 to it (now 15!)
dikhao dibba         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l hi
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l hi --step
```
