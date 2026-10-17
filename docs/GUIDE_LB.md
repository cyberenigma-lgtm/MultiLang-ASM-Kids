# 🧸 Luxembourgish / Lëtzebuergesch Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Luxembourgish / Lëtzebuergesch**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Luxembourgish / Lëtzebuergesch | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `beweegen` | `MOV` | Put a number in a magic box |
| **Add** | `dobaidinn` | `ADD` | Add a number to what's in the box |
| **Take** | `ofzéien` | `SUB` | Take away a number from the box |
| **Times** | `multiplizéieren` | `IMUL` | Multiply the box by a number |
| **Split** | `deelen` | `IDIV` | Divide the box by a number |
| **Show** | `systemruff` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `sprangen` | `JMP` | Jump to another step |
| **Compare** | `vergläichen` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `schläif` | `LOOP` | Repeat a block of code |
| **Save** | `drécken` | `PUSH` | Save a number in the backpack |
| **Load** | `huelen` | `POP` | Get the number back |
| **Call** | `ruffen` | `CALL` | Call a magic trick or function |
| **Back** | `zréckgoen` | `RET` | Come back from the trick |
| **Stop** | `stoppen` | `HLT` | Finish the program |
| **Wait** | `näischt` | `NOP` | Wait a moment |

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
; My First Program in Luxembourgish / Lëtzebuergesch
beweegen box 10       ; Put 10 into the box
dobaidinn box 5        ; Add 5 to it (now 15!)
systemruff box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l lb
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l lb --step
```
