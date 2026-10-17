# 🧸 Malagasy Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Malagasy**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Malagasy | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `afindrao` | `MOV` | Put a number in a magic box |
| **Add** | `ampio` | `ADD` | Add a number to what's in the box |
| **Take** | `esory` | `SUB` | Take away a number from the box |
| **Times** | `ampitomboy` | `IMUL` | Multiply the box by a number |
| **Split** | `zarazarao` | `IDIV` | Divide the box by a number |
| **Show** | `fampiantsoana_rafitra` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `mitsambikina` | `JMP` | Jump to another step |
| **Compare** | `ampitahao` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `fihodinana` | `LOOP` | Repeat a block of code |
| **Save** | `atsofohy` | `PUSH` | Save a number in the backpack |
| **Load** | `avoahy` | `POP` | Get the number back |
| **Call** | `antsoy` | `CALL` | Call a magic trick or function |
| **Back** | `miverena` | `RET` | Come back from the trick |
| **Stop** | `ajanony` | `HLT` | Finish the program |
| **Wait** | `tsy_misy` | `NOP` | Wait a moment |

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
; My First Program in Malagasy
afindrao box 10       ; Put 10 into the box
ampio box 5        ; Add 5 to it (now 15!)
fampiantsoana_rafitra box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l mg
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l mg --step
```
