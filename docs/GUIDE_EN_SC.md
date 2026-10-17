# 🧸 Scottish English / Scots Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Scottish English / Scots**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Scottish English / Scots | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `pit` | `MOV` | Put a number in a magic box |
| **Add** | `tot` | `ADD` | Add a number to what's in the box |
| **Take** | `dock` | `SUB` | Take away a number from the box |
| **Times** | `multiply` | `IMUL` | Multiply the box by a number |
| **Split** | `divide` | `IDIV` | Divide the box by a number |
| **Show** | `cry_system` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `loup` | `JMP` | Jump to another step |
| **Compare** | `neer` | `CMP` | Compare two values |
| **If Equal** | `gin_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `birl` | `LOOP` | Repeat a block of code |
| **Save** | `shove` | `PUSH` | Save a number in the backpack |
| **Load** | `pull` | `POP` | Get the number back |
| **Call** | `ca` | `CALL` | Call a magic trick or function |
| **Back** | `back` | `RET` | Come back from the trick |
| **Stop** | `wheesht` | `HLT` | Finish the program |
| **Wait** | `nowt` | `NOP` | Wait a moment |

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
; My First Program in Scottish English / Scots
pit box 10       ; Put 10 into the box
tot box 5        ; Add 5 to it (now 15!)
cry_system box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l en_sc
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l en_sc --step
```
