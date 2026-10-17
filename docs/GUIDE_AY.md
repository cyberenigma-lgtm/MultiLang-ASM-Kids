# 🧸 Aymara Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Aymara**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Aymara | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `kuna` | `MOV` | Put a number in a magic box |
| **Add** | `yapaña` | `ADD` | Add a number to what's in the box |
| **Take** | `apaqaña` | `SUB` | Take away a number from the box |
| **Times** | `mirayaña` | `IMUL` | Multiply the box by a number |
| **Split** | `jaljaña` | `IDIV` | Divide the box by a number |
| **Show** | `sistema_jawsaña` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `t'it'iña` | `JMP` | Jump to another step |
| **Compare** | `kipkaña` | `CMP` | Compare two values |
| **If Equal** | `kipka_hina` | `JE` | Jump if numbers are identical |
| **Repeat** | `muyuta` | `LOOP` | Repeat a block of code |
| **Save** | `uchuqaña` | `PUSH` | Save a number in the backpack |
| **Load** | `apsuña` | `POP` | Get the number back |
| **Call** | `jawsaña` | `CALL` | Call a magic trick or function |
| **Back** | `kutiña` | `RET` | Come back from the trick |
| **Stop** | `sayayaña` | `HLT` | Finish the program |
| **Wait** | `jani_kunnasa` | `NOP` | Wait a moment |

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
; My First Program in Aymara
kuna box 10       ; Put 10 into the box
yapaña box 5        ; Add 5 to it (now 15!)
sistema_jawsaña box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ay
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ay --step
```
