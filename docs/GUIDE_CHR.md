# 🧸 Cherokee / ᏣᎳᎩ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Cherokee / ᏣᎳᎩ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Cherokee / ᏣᎳᎩ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ᎦᏅᏍᏙᏗ` | `MOV` | Put a number in a magic box |
| **Add** | `ᎠᏛᎯᏍᏙᏗ` | `ADD` | Add a number to what's in the box |
| **Take** | `ᎠᏓᏅᏖᏗ` | `SUB` | Take away a number from the box |
| **Times** | `ᎠᏠᏯᏍᏗ` | `IMUL` | Multiply the box by a number |
| **Split** | `ᎠᏯᏙᎯᏍᏗ` | `IDIV` | Divide the box by a number |
| **Show** | `ᎠᏂᏏᏍᏗ_ᎤᎵᏍᎨᏛ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ᎠᎵᏖᎸᏗ` | `JMP` | Jump to another step |
| **Compare** | `ᎠᏟᎶᏍᏗ` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ᎦᏛᏗ` | `LOOP` | Repeat a block of code |
| **Save** | `ᎦᎶᎯᏍᏗ` | `PUSH` | Save a number in the backpack |
| **Load** | `ᎦᏂᎩᏛ` | `POP` | Get the number back |
| **Call** | `ᎠᏯᏂᏍᏗ` | `CALL` | Call a magic trick or function |
| **Back** | `ᎤᏨᏒ` | `RET` | Come back from the trick |
| **Stop** | `ᎤᎴᏅᏛ` | `HLT` | Finish the program |
| **Wait** | `Ꮭ_ᎪᎱᏍᏗ` | `NOP` | Wait a moment |

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
; My First Program in Cherokee / ᏣᎳᎩ
ᎦᏅᏍᏙᏗ box 10       ; Put 10 into the box
ᎠᏛᎯᏍᏙᏗ box 5        ; Add 5 to it (now 15!)
ᎠᏂᏏᏍᏗ_ᎤᎵᏍᎨᏛ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l chr
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l chr --step
```
