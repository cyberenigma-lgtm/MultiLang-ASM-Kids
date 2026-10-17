# 🧸 Zulu / isiZulu Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Zulu / isiZulu**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Zulu / isiZulu | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `hambisa` | `MOV` | Put a number in a magic box |
| **Add** | `hlanganisa` | `ADD` | Add a number to what's in the box |
| **Take** | `susa` | `SUB` | Take away a number from the box |
| **Times** | `phindaphinda` | `IMUL` | Multiply the box by a number |
| **Split** | `hlukanisa` | `IDIV` | Divide the box by a number |
| **Show** | `ukubizwa_kwesistimu` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `eqa` | `JMP` | Jump to another step |
| **Compare** | `qhathanisa` | `CMP` | Compare two values |
| **If Equal** | `uma_kulingana` | `JE` | Jump if numbers are identical |
| **Repeat** | `iluphu` | `LOOP` | Repeat a block of code |
| **Save** | `faka` | `PUSH` | Save a number in the backpack |
| **Load** | `khipha` | `POP` | Get the number back |
| **Call** | `biza` | `CALL` | Call a magic trick or function |
| **Back** | `buya` | `RET` | Come back from the trick |
| **Stop** | `misa` | `HLT` | Finish the program |
| **Wait** | `lutho` | `NOP` | Wait a moment |

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
; My First Program in Zulu / isiZulu
hambisa box 10       ; Put 10 into the box
hlanganisa box 5        ; Add 5 to it (now 15!)
ukubizwa_kwesistimu box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l zu
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l zu --step
```
