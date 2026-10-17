# 🧸 Latin / Latina Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Latin / Latina**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Latin / Latina | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `movere` | `MOV` | Put a number in a magic box |
| **Add** | `addere` | `ADD` | Add a number to what's in the box |
| **Take** | `subtrahere` | `SUB` | Take away a number from the box |
| **Times** | `multiplicare` | `IMUL` | Multiply the box by a number |
| **Split** | `dividere` | `IDIV` | Divide the box by a number |
| **Show** | `vocatio_systematis` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `saltare` | `JMP` | Jump to another step |
| **Compare** | `comparare` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `circulus` | `LOOP` | Repeat a block of code |
| **Save** | `trudere` | `PUSH` | Save a number in the backpack |
| **Load** | `trahere` | `POP` | Get the number back |
| **Call** | `vocare` | `CALL` | Call a magic trick or function |
| **Back** | `redire` | `RET` | Come back from the trick |
| **Stop** | `sistere` | `HLT` | Finish the program |
| **Wait** | `nihil` | `NOP` | Wait a moment |

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
; My First Program in Latin / Latina
movere box 10       ; Put 10 into the box
addere box 5        ; Add 5 to it (now 15!)
vocatio_systematis box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l la
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l la --step
```
