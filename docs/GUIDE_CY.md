# 🧸 Welsh / Cymraeg Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Welsh / Cymraeg**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Welsh / Cymraeg | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `symud` | `MOV` | Put a number in a magic box |
| **Add** | `ychwanegu` | `ADD` | Add a number to what's in the box |
| **Take** | `tynnu` | `SUB` | Take away a number from the box |
| **Times** | `lluosi` | `IMUL` | Multiply the box by a number |
| **Split** | `rhannu` | `IDIV` | Divide the box by a number |
| **Show** | `galwad_system` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `neidio` | `JMP` | Jump to another step |
| **Compare** | `cymharu` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `dolen` | `LOOP` | Repeat a block of code |
| **Save** | `gwthio` | `PUSH` | Save a number in the backpack |
| **Load** | `tynnu_allan` | `POP` | Get the number back |
| **Call** | `galw` | `CALL` | Call a magic trick or function |
| **Back** | `dychwelyd` | `RET` | Come back from the trick |
| **Stop** | `aros` | `HLT` | Finish the program |
| **Wait** | `dim_byd` | `NOP` | Wait a moment |

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
; My First Program in Welsh / Cymraeg
symud box 10       ; Put 10 into the box
ychwanegu box 5        ; Add 5 to it (now 15!)
galwad_system box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l cy
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l cy --step
```
