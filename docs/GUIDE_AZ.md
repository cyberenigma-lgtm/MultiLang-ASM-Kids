# 🧸 Azerbaijani / Azərbaycan Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Azerbaijani / Azərbaycan**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Azerbaijani / Azərbaycan | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `köçür` | `MOV` | Put a number in a magic box |
| **Add** | `əlavə_et` | `ADD` | Add a number to what's in the box |
| **Take** | `çıx` | `SUB` | Take away a number from the box |
| **Times** | `vur` | `IMUL` | Multiply the box by a number |
| **Split** | `böl` | `IDIV` | Divide the box by a number |
| **Show** | `sistem_zəngi` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `tullan` | `JMP` | Jump to another step |
| **Compare** | `müqayisə_et` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `dövr` | `LOOP` | Repeat a block of code |
| **Save** | `itələ` | `PUSH` | Save a number in the backpack |
| **Load** | `çıxart` | `POP` | Get the number back |
| **Call** | `çağır` | `CALL` | Call a magic trick or function |
| **Back** | `qayıt` | `RET` | Come back from the trick |
| **Stop** | `dayan` | `HLT` | Finish the program |
| **Wait** | `heç_nə` | `NOP` | Wait a moment |

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
; My First Program in Azerbaijani / Azərbaycan
köçür box 10       ; Put 10 into the box
əlavə_et box 5        ; Add 5 to it (now 15!)
sistem_zəngi box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l az
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l az --step
```
