# 🧸 Oromo / Afaan Oromoo Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Oromo / Afaan Oromoo**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Oromo / Afaan Oromoo | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `sochoosi` | `MOV` | Put a number in a magic box |
| **Add** | `ida'i` | `ADD` | Add a number to what's in the box |
| **Take** | `hir'isi` | `SUB` | Take away a number from the box |
| **Times** | `baay'isi` | `IMUL` | Multiply the box by a number |
| **Split** | `qodi` | `IDIV` | Divide the box by a number |
| **Show** | `waamicha_sirnaa` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `utaali` | `JMP` | Jump to another step |
| **Compare** | `walbira_qabi` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `marsoo` | `LOOP` | Repeat a block of code |
| **Save** | `galchi` | `PUSH` | Save a number in the backpack |
| **Load** | `baasi` | `POP` | Get the number back |
| **Call** | `waami` | `CALL` | Call a magic trick or function |
| **Back** | `deebi'i` | `RET` | Come back from the trick |
| **Stop** | `dhaabi` | `HLT` | Finish the program |
| **Wait** | `homaa` | `NOP` | Wait a moment |

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
; My First Program in Oromo / Afaan Oromoo
sochoosi box 10       ; Put 10 into the box
ida'i box 5        ; Add 5 to it (now 15!)
waamicha_sirnaa box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l om
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l om --step
```
