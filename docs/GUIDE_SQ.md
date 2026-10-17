# 🧸 Albanian / Shqip Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Albanian / Shqip**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Albanian / Shqip | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `leviz` | `MOV` | Put a number in a magic box |
| **Add** | `shto` | `ADD` | Add a number to what's in the box |
| **Take** | `zbrit` | `SUB` | Take away a number from the box |
| **Times** | `shumezo` | `IMUL` | Multiply the box by a number |
| **Split** | `pjeseto` | `IDIV` | Divide the box by a number |
| **Show** | `thirrje_sistemi` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `kerce` | `JMP` | Jump to another step |
| **Compare** | `krahaso` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `cikel` | `LOOP` | Repeat a block of code |
| **Save** | `fut` | `PUSH` | Save a number in the backpack |
| **Load** | `nxirr` | `POP` | Get the number back |
| **Call** | `therrit` | `CALL` | Call a magic trick or function |
| **Back** | `kthe` | `RET` | Come back from the trick |
| **Stop** | `ndalo` | `HLT` | Finish the program |
| **Wait** | `asgje` | `NOP` | Wait a moment |

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
; My First Program in Albanian / Shqip
leviz box 10       ; Put 10 into the box
shto box 5        ; Add 5 to it (now 15!)
thirrje_sistemi box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l sq
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l sq --step
```
