# 🧸 Kinyarwanda Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Kinyarwanda**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Kinyarwanda | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `imura` | `MOV` | Put a number in a magic box |
| **Add** | `ongera` | `ADD` | Add a number to what's in the box |
| **Take** | `kura` | `SUB` | Take away a number from the box |
| **Times** | `gwandika` | `IMUL` | Multiply the box by a number |
| **Split** | `gabanya` | `IDIV` | Divide the box by a number |
| **Show** | `guhamagara_sisitemu` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `simbuka` | `JMP` | Jump to another step |
| **Compare** | `gereranya` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `uruziga` | `LOOP` | Repeat a block of code |
| **Save** | `shyiramo` | `PUSH` | Save a number in the backpack |
| **Load** | `kuramo` | `POP` | Get the number back |
| **Call** | `hamagara` | `CALL` | Call a magic trick or function |
| **Back** | `garuka` | `RET` | Come back from the trick |
| **Stop** | `hagarara` | `HLT` | Finish the program |
| **Wait** | `ntakintu` | `NOP` | Wait a moment |

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
; My First Program in Kinyarwanda
imura box 10       ; Put 10 into the box
ongera box 5        ; Add 5 to it (now 15!)
guhamagara_sisitemu box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l rw
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l rw --step
```
