# 🧸 Scottish Gaelic / Gàidhlig Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Scottish Gaelic / Gàidhlig**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Scottish Gaelic / Gàidhlig | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `gluais` | `MOV` | Put a number in a magic box |
| **Add** | `cuir_ris` | `ADD` | Add a number to what's in the box |
| **Take** | `toir_air_falbh` | `SUB` | Take away a number from the box |
| **Times** | `iomadaich` | `IMUL` | Multiply the box by a number |
| **Split** | `roinn` | `IDIV` | Divide the box by a number |
| **Show** | `gairm_siostam` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `leum` | `JMP` | Jump to another step |
| **Compare** | `coimeas` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `lùb` | `LOOP` | Repeat a block of code |
| **Save** | `put` | `PUSH` | Save a number in the backpack |
| **Load** | `tarraing` | `POP` | Get the number back |
| **Call** | `gairm` | `CALL` | Call a magic trick or function |
| **Back** | `till` | `RET` | Come back from the trick |
| **Stop** | `stad` | `HLT` | Finish the program |
| **Wait** | `dad` | `NOP` | Wait a moment |

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
; My First Program in Scottish Gaelic / Gàidhlig
gluais box 10       ; Put 10 into the box
cuir_ris box 5        ; Add 5 to it (now 15!)
gairm_siostam box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l gd
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l gd --step
```
