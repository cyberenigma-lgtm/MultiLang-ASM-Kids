# 🧸 Kikuyu / Gĩkũyũ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Kikuyu / Gĩkũyũ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Kikuyu / Gĩkũyũ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `thaama` | `MOV` | Put a number in a magic box |
| **Add** | `ongerera` | `ADD` | Add a number to what's in the box |
| **Take** | `eheria` | `SUB` | Take away a number from the box |
| **Times** | `ingĩhia` | `IMUL` | Multiply the box by a number |
| **Split** | `gaya` | `IDIV` | Divide the box by a number |
| **Show** | `gwĩta_kĩbũrũri` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `rũga` | `JMP` | Jump to another step |
| **Compare** | `ringithania` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `mũthiũrũrũko` | `LOOP` | Repeat a block of code |
| **Save** | `ikĩa` | `PUSH` | Save a number in the backpack |
| **Load** | `rũta` | `POP` | Get the number back |
| **Call** | `ĩta` | `CALL` | Call a magic trick or function |
| **Back** | `coka` | `RET` | Come back from the trick |
| **Stop** | `rũgama` | `HLT` | Finish the program |
| **Wait** | `gũtirĩ_kĩndũ` | `NOP` | Wait a moment |

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
; My First Program in Kikuyu / Gĩkũyũ
thaama box 10       ; Put 10 into the box
ongerera box 5        ; Add 5 to it (now 15!)
gwĩta_kĩbũrũri box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ki
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ki --step
```
