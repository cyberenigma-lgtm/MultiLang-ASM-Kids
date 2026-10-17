# 🧸 English (Texas) Kids Coding Guide

## Welcome!
Learn to speak to your computer in **English (Texas)**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in English (Texas) | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `hitch` | `MOV` | Put a number in a magic box |
| **Add** | `roundup` | `ADD` | Add a number to what's in the box |
| **Take** | `cut` | `SUB` | Take away a number from the box |
| **Times** | `stampede` | `IMUL` | Multiply the box by a number |
| **Split** | `carve` | `IDIV` | Divide the box by a number |
| **Show** | `spy` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `mosey` | `JMP` | Jump to another step |
| **Compare** | `reckon` | `CMP` | Compare two values |
| **If Equal** | `if_even` | `JE` | Jump if numbers are identical |
| **Repeat** | `circle_back` | `LOOP` | Repeat a block of code |
| **Save** | `stash_holster` | `PUSH` | Save a number in the backpack |
| **Load** | `draw` | `POP` | Get the number back |
| **Call** | `holler` | `CALL` | Call a magic trick or function |
| **Back** | `head_home` | `RET` | Come back from the trick |
| **Stop** | `whoa` | `HLT` | Finish the program |
| **Wait** | `hold_yer_horses` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `crate` (or `rax`): Your main magic treasure box.
- `crate2` (or `rbx`): A second box for extra numbers.
- `notch` (or `rcx`): The counter box for loops.
- `crate3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in English (Texas)
hitch crate 10       ; Put 10 into the box
roundup crate 5        ; Add 5 to it (now 15!)
spy crate         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l en_tx
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l en_tx --step
```
