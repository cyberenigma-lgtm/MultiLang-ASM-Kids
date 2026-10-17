# 🧸 Corsican / Corsu Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Corsican / Corsu**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Corsican / Corsu | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `spustà` | `MOV` | Put a number in a magic box |
| **Add** | `aghjunghje` | `ADD` | Add a number to what's in the box |
| **Take** | `suttrae` | `SUB` | Take away a number from the box |
| **Times** | `multiplicà` | `IMUL` | Multiply the box by a number |
| **Split** | `sparte` | `IDIV` | Divide the box by a number |
| **Show** | `chjama_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `saltà` | `JMP` | Jump to another step |
| **Compare** | `paragunà` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `giru` | `LOOP` | Repeat a block of code |
| **Save** | `spinghje` | `PUSH` | Save a number in the backpack |
| **Load** | `caccià` | `POP` | Get the number back |
| **Call** | `chjamà` | `CALL` | Call a magic trick or function |
| **Back** | `riturnà` | `RET` | Come back from the trick |
| **Stop** | `fermà` | `HLT` | Finish the program |
| **Wait** | `nulla` | `NOP` | Wait a moment |

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
; My First Program in Corsican / Corsu
spustà box 10       ; Put 10 into the box
aghjunghje box 5        ; Add 5 to it (now 15!)
chjama_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l co
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l co --step
```
