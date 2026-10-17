# 🧸 Guarani / Avañe'ẽ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Guarani / Avañe'ẽ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Guarani / Avañe'ẽ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `mbohasa` | `MOV` | Put a number in a magic box |
| **Add** | `mbojoapy` | `ADD` | Add a number to what's in the box |
| **Take** | `mbogue` | `SUB` | Take away a number from the box |
| **Times** | `mboheta` | `IMUL` | Multiply the box by a number |
| **Split** | `mbovo` | `IDIV` | Divide the box by a number |
| **Show** | `henoi_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `po` | `JMP` | Jump to another step |
| **Compare** | `mbojoja` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `apu'a` | `LOOP` | Repeat a block of code |
| **Save** | `moinge` | `PUSH` | Save a number in the backpack |
| **Load** | `nohê` | `POP` | Get the number back |
| **Call** | `henoi` | `CALL` | Call a magic trick or function |
| **Back** | `jevy` | `RET` | Come back from the trick |
| **Stop** | `pytu'u` | `HLT` | Finish the program |
| **Wait** | `mba'eve` | `NOP` | Wait a moment |

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
; My First Program in Guarani / Avañe'ẽ
mbohasa box 10       ; Put 10 into the box
mbojoapy box 5        ; Add 5 to it (now 15!)
henoi_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l gn
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l gn --step
```
