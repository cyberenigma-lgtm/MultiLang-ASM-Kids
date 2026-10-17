# 🧸 Lithuanian / Lietuvių Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Lithuanian / Lietuvių**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Lithuanian / Lietuvių | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `perkelti` | `MOV` | Put a number in a magic box |
| **Add** | `prideti` | `ADD` | Add a number to what's in the box |
| **Take** | `atimti` | `SUB` | Take away a number from the box |
| **Times** | `dauginti` | `IMUL` | Multiply the box by a number |
| **Split** | `dalinti` | `IDIV` | Divide the box by a number |
| **Show** | `sisteminis_iskvietimas` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `sokti` | `JMP` | Jump to another step |
| **Compare** | `palyginti` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ciklas` | `LOOP` | Repeat a block of code |
| **Save** | `ideti` | `PUSH` | Save a number in the backpack |
| **Load** | `isimti` | `POP` | Get the number back |
| **Call** | `kviesti` | `CALL` | Call a magic trick or function |
| **Back** | `grazinti` | `RET` | Come back from the trick |
| **Stop** | `stabdyti` | `HLT` | Finish the program |
| **Wait** | `nieko` | `NOP` | Wait a moment |

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
; My First Program in Lithuanian / Lietuvių
perkelti box 10       ; Put 10 into the box
prideti box 5        ; Add 5 to it (now 15!)
sisteminis_iskvietimas box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l lt
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l lt --step
```
