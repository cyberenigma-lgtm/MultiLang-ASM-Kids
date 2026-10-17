# 🧸 Slovenian / Slovenščina Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Slovenian / Slovenščina**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Slovenian / Slovenščina | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `premakni` | `MOV` | Put a number in a magic box |
| **Add** | `dodaj` | `ADD` | Add a number to what's in the box |
| **Take** | `odstej` | `SUB` | Take away a number from the box |
| **Times** | `pomnozi` | `IMUL` | Multiply the box by a number |
| **Split** | `deli` | `IDIV` | Divide the box by a number |
| **Show** | `sistemski_klic` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `skoci` | `JMP` | Jump to another step |
| **Compare** | `primerjaj` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `zanka` | `LOOP` | Repeat a block of code |
| **Save** | `porini` | `PUSH` | Save a number in the backpack |
| **Load** | `vzemi` | `POP` | Get the number back |
| **Call** | `poklici` | `CALL` | Call a magic trick or function |
| **Back** | `vrni` | `RET` | Come back from the trick |
| **Stop** | `ustavi` | `HLT` | Finish the program |
| **Wait** | `nic` | `NOP` | Wait a moment |

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
; My First Program in Slovenian / Slovenščina
premakni box 10       ; Put 10 into the box
dodaj box 5        ; Add 5 to it (now 15!)
sistemski_klic box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l sl
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l sl --step
```
