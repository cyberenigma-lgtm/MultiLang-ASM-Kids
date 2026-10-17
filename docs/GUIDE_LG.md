# 🧸 Ganda / Luganda Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Ganda / Luganda**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Ganda / Luganda | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `sindiika` | `MOV` | Put a number in a magic box |
| **Add** | `yongerako` | `ADD` | Add a number to what's in the box |
| **Take** | `toolako` | `SUB` | Take away a number from the box |
| **Times** | `kubisaamu` | `IMUL` | Multiply the box by a number |
| **Split** | `gabanako` | `IDIV` | Divide the box by a number |
| **Show** | `omulanga_gw_enkola` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `buuka` | `JMP` | Jump to another step |
| **Compare** | `geraageranya` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ennetoloola` | `LOOP` | Repeat a block of code |
| **Save** | `yingiza` | `PUSH` | Save a number in the backpack |
| **Load** | `gyamu` | `POP` | Get the number back |
| **Call** | `yita` | `CALL` | Call a magic trick or function |
| **Back** | `komawo` | `RET` | Come back from the trick |
| **Stop** | `yimirira` | `HLT` | Finish the program |
| **Wait** | `tewali` | `NOP` | Wait a moment |

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
; My First Program in Ganda / Luganda
sindiika box 10       ; Put 10 into the box
yongerako box 5        ; Add 5 to it (now 15!)
omulanga_gw_enkola box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l lg
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l lg --step
```
