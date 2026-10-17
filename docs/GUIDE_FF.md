# 🧸 Fula / Fulfulde Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Fula / Fulfulde**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Fula / Fulfulde | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `yaggal` | `MOV` | Put a number in a magic box |
| **Add** | `ɓeydu` | `ADD` | Add a number to what's in the box |
| **Take** | `ustu` | `SUB` | Take away a number from the box |
| **Times** | `saɗɗin` | `IMUL` | Multiply the box by a number |
| **Split** | `sendu` | `IDIV` | Divide the box by a number |
| **Show** | `noddaango_laawol` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `diw` | `JMP` | Jump to another step |
| **Compare** | `yerondir` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `taareede` | `LOOP` | Repeat a block of code |
| **Save** | `loow` | `PUSH` | Save a number in the backpack |
| **Load** | `wurtin` | `POP` | Get the number back |
| **Call** | `noddu` | `CALL` | Call a magic trick or function |
| **Back** | `rutto` | `RET` | Come back from the trick |
| **Stop** | `darnu` | `HLT` | Finish the program |
| **Wait** | `fus` | `NOP` | Wait a moment |

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
; My First Program in Fula / Fulfulde
yaggal box 10       ; Put 10 into the box
ɓeydu box 5        ; Add 5 to it (now 15!)
noddaango_laawol box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ff
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ff --step
```
