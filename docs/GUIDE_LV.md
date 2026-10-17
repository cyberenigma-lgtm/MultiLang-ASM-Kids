# 🧸 Latvian / Latviešu Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Latvian / Latviešu**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Latvian / Latviešu | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `parvietot` | `MOV` | Put a number in a magic box |
| **Add** | `pieskaitit` | `ADD` | Add a number to what's in the box |
| **Take** | `atnemt` | `SUB` | Take away a number from the box |
| **Times** | `reizinat` | `IMUL` | Multiply the box by a number |
| **Split** | `dalit` | `IDIV` | Divide the box by a number |
| **Show** | `sistemas_izsaukums` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `lekt` | `JMP` | Jump to another step |
| **Compare** | `salidzinat` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `cikls` | `LOOP` | Repeat a block of code |
| **Save** | `iespiest` | `PUSH` | Save a number in the backpack |
| **Load** | `iznemt` | `POP` | Get the number back |
| **Call** | `saukt` | `CALL` | Call a magic trick or function |
| **Back** | `atgriezt` | `RET` | Come back from the trick |
| **Stop** | `apturet` | `HLT` | Finish the program |
| **Wait** | `nekas` | `NOP` | Wait a moment |

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
; My First Program in Latvian / Latviešu
parvietot box 10       ; Put 10 into the box
pieskaitit box 5        ; Add 5 to it (now 15!)
sistemas_izsaukums box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l lv
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l lv --step
```
