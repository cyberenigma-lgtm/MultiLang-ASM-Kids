# 🧸 Basque / Euskara Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Basque / Euskara**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Basque / Euskara | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `mugitu` | `MOV` | Put a number in a magic box |
| **Add** | `gehitu` | `ADD` | Add a number to what's in the box |
| **Take** | `kendu` | `SUB` | Take away a number from the box |
| **Times** | `biderkatu` | `IMUL` | Multiply the box by a number |
| **Split** | `zatitu` | `IDIV` | Divide the box by a number |
| **Show** | `sistema_deia` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `jauzi` | `JMP` | Jump to another step |
| **Compare** | `konparatu` | `CMP` | Compare two values |
| **If Equal** | `berdina_bada` | `JE` | Jump if numbers are identical |
| **Repeat** | `begizta` | `LOOP` | Repeat a block of code |
| **Save** | `sartu` | `PUSH` | Save a number in the backpack |
| **Load** | `atera` | `POP` | Get the number back |
| **Call** | `deitu` | `CALL` | Call a magic trick or function |
| **Back** | `itzuli` | `RET` | Come back from the trick |
| **Stop** | `gelditu` | `HLT` | Finish the program |
| **Wait** | `ezer_ez` | `NOP` | Wait a moment |

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
; My First Program in Basque / Euskara
mugitu box 10       ; Put 10 into the box
gehitu box 5        ; Add 5 to it (now 15!)
sistema_deia box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l eu
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l eu --step
```
