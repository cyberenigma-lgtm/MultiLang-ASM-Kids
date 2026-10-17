# 🧸 Kurdish / Kurdî Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Kurdish / Kurdî**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Kurdish / Kurdî | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `veguhezîne` | `MOV` | Put a number in a magic box |
| **Add** | `zêde_bike` | `ADD` | Add a number to what's in the box |
| **Take** | `derxe` | `SUB` | Take away a number from the box |
| **Times** | `caran` | `IMUL` | Multiply the box by a number |
| **Split** | `parve_bike` | `IDIV` | Divide the box by a number |
| **Show** | `banga_pergalê` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `bipirse` | `JMP` | Jump to another step |
| **Compare** | `berawird_bike` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `zivirandin` | `LOOP` | Repeat a block of code |
| **Save** | `deyne` | `PUSH` | Save a number in the backpack |
| **Load** | `rake` | `POP` | Get the number back |
| **Call** | `bang_bike` | `CALL` | Call a magic trick or function |
| **Back** | `vegere` | `RET` | Come back from the trick |
| **Stop** | `bisekine` | `HLT` | Finish the program |
| **Wait** | `tiştek_tune` | `NOP` | Wait a moment |

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
; My First Program in Kurdish / Kurdî
veguhezîne box 10       ; Put 10 into the box
zêde_bike box 5        ; Add 5 to it (now 15!)
banga_pergalê box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ku
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ku --step
```
