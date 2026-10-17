# 🧸 Tsonga / Xitsonga Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Tsonga / Xitsonga**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Tsonga / Xitsonga | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `fambisa` | `MOV` | Put a number in a magic box |
| **Add** | `engetela` | `ADD` | Add a number to what's in the box |
| **Take** | `susa` | `SUB` | Take away a number from the box |
| **Times** | `andzisa` | `IMUL` | Multiply the box by a number |
| **Split** | `ava` | `IDIV` | Divide the box by a number |
| **Show** | `vitano_ra_sisiteme` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `tlula` | `JMP` | Jump to another step |
| **Compare** | `pimanisa` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `rhumbu` | `LOOP` | Repeat a block of code |
| **Save** | `nghenisa` | `PUSH` | Save a number in the backpack |
| **Load** | `humesa` | `POP` | Get the number back |
| **Call** | `vitana` | `CALL` | Call a magic trick or function |
| **Back** | `vuyela` | `RET` | Come back from the trick |
| **Stop** | `yima` | `HLT` | Finish the program |
| **Wait** | `a_ku_na_nchumu` | `NOP` | Wait a moment |

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
; My First Program in Tsonga / Xitsonga
fambisa box 10       ; Put 10 into the box
engetela box 5        ; Add 5 to it (now 15!)
vitano_ra_sisiteme box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ts
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ts --step
```
