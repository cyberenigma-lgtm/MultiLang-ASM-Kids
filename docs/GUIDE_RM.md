# 🧸 Romansh / Rumantsch Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Romansh / Rumantsch**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Romansh / Rumantsch | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `mover` | `MOV` | Put a number in a magic box |
| **Add** | `agiuntar` | `ADD` | Add a number to what's in the box |
| **Take** | `sulevar` | `SUB` | Take away a number from the box |
| **Times** | `multiplitgar` | `IMUL` | Multiply the box by a number |
| **Split** | `divider` | `IDIV` | Divide the box by a number |
| **Show** | `clamada_sistem` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `siglir` | `JMP` | Jump to another step |
| **Compare** | `cumparegliar` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `rudien` | `LOOP` | Repeat a block of code |
| **Save** | `metter` | `PUSH` | Save a number in the backpack |
| **Load** | `trair` | `POP` | Get the number back |
| **Call** | `clamar` | `CALL` | Call a magic trick or function |
| **Back** | `turnar` | `RET` | Come back from the trick |
| **Stop** | `chalar` | `HLT` | Finish the program |
| **Wait** | `nagut` | `NOP` | Wait a moment |

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
; My First Program in Romansh / Rumantsch
mover box 10       ; Put 10 into the box
agiuntar box 5        ; Add 5 to it (now 15!)
clamada_sistem box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l rm
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l rm --step
```
