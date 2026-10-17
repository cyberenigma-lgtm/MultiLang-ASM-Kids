# 🧸 Hausa Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Hausa**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Hausa | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `motsa` | `MOV` | Put a number in a magic box |
| **Add** | `kara` | `ADD` | Add a number to what's in the box |
| **Take** | `rage` | `SUB` | Take away a number from the box |
| **Times** | `rubanya` | `IMUL` | Multiply the box by a number |
| **Split** | `raba` | `IDIV` | Divide the box by a number |
| **Show** | `kiran_tsarin` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `tsallaka` | `JMP` | Jump to another step |
| **Compare** | `gwada` | `CMP` | Compare two values |
| **If Equal** | `idan_daidai` | `JE` | Jump if numbers are identical |
| **Repeat** | `madauki` | `LOOP` | Repeat a block of code |
| **Save** | `tura` | `PUSH` | Save a number in the backpack |
| **Load** | `cire` | `POP` | Get the number back |
| **Call** | `kira` | `CALL` | Call a magic trick or function |
| **Back** | `koma` | `RET` | Come back from the trick |
| **Stop** | `dakatar` | `HLT` | Finish the program |
| **Wait** | `babu` | `NOP` | Wait a moment |

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
; My First Program in Hausa
motsa box 10       ; Put 10 into the box
kara box 5        ; Add 5 to it (now 15!)
kiran_tsarin box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ha
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ha --step
```
