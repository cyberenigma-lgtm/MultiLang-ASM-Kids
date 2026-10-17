# 🧸 Kirundi Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Kirundi**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Kirundi | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `yimura` | `MOV` | Put a number in a magic box |
| **Add** | `ongerako` | `ADD` | Add a number to what's in the box |
| **Take** | `kuraho` | `SUB` | Take away a number from the box |
| **Times** | `gwiza` | `IMUL` | Multiply the box by a number |
| **Split** | `gabura` | `IDIV` | Divide the box by a number |
| **Show** | `ihamagara_ry_uburyo` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `simbuka` | `JMP` | Jump to another step |
| **Compare** | `gereranya` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ikizunguruko` | `LOOP` | Repeat a block of code |
| **Save** | `injiza` | `PUSH` | Save a number in the backpack |
| **Load** | `sokora` | `POP` | Get the number back |
| **Call** | `hamagara` | `CALL` | Call a magic trick or function |
| **Back** | `subira` | `RET` | Come back from the trick |
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
; My First Program in Kirundi
yimura box 10       ; Put 10 into the box
ongerako box 5        ; Add 5 to it (now 15!)
ihamagara_ry_uburyo box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l rn
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l rn --step
```
