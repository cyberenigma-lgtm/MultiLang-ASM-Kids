# 🧸 Vietnamese / Tiếng Việt Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Vietnamese / Tiếng Việt**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Vietnamese / Tiếng Việt | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `dat` | `MOV` | Put a number in a magic box |
| **Add** | `them` | `ADD` | Add a number to what's in the box |
| **Take** | `tru` | `SUB` | Take away a number from the box |
| **Times** | `nhan` | `IMUL` | Multiply the box by a number |
| **Split** | `chia` | `IDIV` | Divide the box by a number |
| **Show** | `hien` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `nhay` | `JMP` | Jump to another step |
| **Compare** | `so_sanh` | `CMP` | Compare two values |
| **If Equal** | `neu_bang` | `JE` | Jump if numbers are identical |
| **Repeat** | `lap` | `LOOP` | Repeat a block of code |
| **Save** | `luu` | `PUSH` | Save a number in the backpack |
| **Load** | `lay` | `POP` | Get the number back |
| **Call** | `goi` | `CALL` | Call a magic trick or function |
| **Back** | `quay_ve` | `RET` | Come back from the trick |
| **Stop** | `dung` | `HLT` | Finish the program |
| **Wait** | `cho` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `hop` (or `rax`): Your main magic treasure box.
- `hop2` (or `rbx`): A second box for extra numbers.
- `bo_dem` (or `rcx`): The counter box for loops.
- `hop3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Vietnamese / Tiếng Việt
dat hop 10       ; Put 10 into the box
them hop 5        ; Add 5 to it (now 15!)
hien hop         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l vi
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l vi --step
```
