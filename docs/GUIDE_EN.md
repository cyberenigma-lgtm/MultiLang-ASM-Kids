# 🧸 English Kids Coding Guide

## Welcome!
Learn to speak to your computer in **English**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in English | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `put` | `MOV` | Put a number in a magic box |
| **Add** | `add` | `ADD` | Add a number to what's in the box |
| **Take** | `take` | `SUB` | Take away a number from the box |
| **Times** | `times` | `IMUL` | Multiply the box by a number |
| **Split** | `split` | `IDIV` | Divide the box by a number |
| **Show** | `look` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `jump` | `JMP` | Jump to another step |
| **Compare** | `compare` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `repeat` | `LOOP` | Repeat a block of code |
| **Save** | `save` | `PUSH` | Save a number in the backpack |
| **Load** | `load` | `POP` | Get the number back |
| **Call** | `call` | `CALL` | Call a magic trick or function |
| **Back** | `back` | `RET` | Come back from the trick |
| **Stop** | `stop` | `HLT` | Finish the program |
| **Wait** | `wait` | `NOP` | Wait a moment |

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
; My First Program in English
put box 10       ; Put 10 into the box
add box 5        ; Add 5 to it (now 15!)
look box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l en
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l en --step
```
