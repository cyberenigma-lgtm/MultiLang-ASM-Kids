# 🧸 Swati / SiSwati Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Swati / SiSwati**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Swati / SiSwati | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `gudluta` | `MOV` | Put a number in a magic box |
| **Add** | `engeta` | `ADD` | Add a number to what's in the box |
| **Take** | `susa` | `SUB` | Take away a number from the box |
| **Times** | `phindzaphindza` | `IMUL` | Multiply the box by a number |
| **Split** | `hlukanisa` | `IDIV` | Divide the box by a number |
| **Show** | `kubita_sisitemu` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `gcuma` | `JMP` | Jump to another step |
| **Compare** | `qhathanisa` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `siyingi` | `LOOP` | Repeat a block of code |
| **Save** | `faka` | `PUSH` | Save a number in the backpack |
| **Load** | `khipha` | `POP` | Get the number back |
| **Call** | `bita` | `CALL` | Call a magic trick or function |
| **Back** | `buyela` | `RET` | Come back from the trick |
| **Stop** | `yima` | `HLT` | Finish the program |
| **Wait** | `kute` | `NOP` | Wait a moment |

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
; My First Program in Swati / SiSwati
gudluta box 10       ; Put 10 into the box
engeta box 5        ; Add 5 to it (now 15!)
kubita_sisitemu box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ss
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ss --step
```
