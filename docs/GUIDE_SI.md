# 🧸 Sinhala / සිංහල Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Sinhala / සිංහල**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Sinhala / සිංහල | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ගෙනියන්න` | `MOV` | Put a number in a magic box |
| **Add** | `එකතු_කරන්න` | `ADD` | Add a number to what's in the box |
| **Take** | `අඩු_කරන්න` | `SUB` | Take away a number from the box |
| **Times** | `ගුණ_කරන්න` | `IMUL` | Multiply the box by a number |
| **Split** | `බෙදන්න` | `IDIV` | Divide the box by a number |
| **Show** | `පද්ධති_ඇමතුම` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `පනින්න` | `JMP` | Jump to another step |
| **Compare** | `සසඳන්න` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ලූපය` | `LOOP` | Repeat a block of code |
| **Save** | `ඇතුල්_කරන්න` | `PUSH` | Save a number in the backpack |
| **Load** | `ඉවත්_කරන්න` | `POP` | Get the number back |
| **Call** | `අමතන්න` | `CALL` | Call a magic trick or function |
| **Back** | `නැවත_එන්න` | `RET` | Come back from the trick |
| **Stop** | `නවත්වන්න` | `HLT` | Finish the program |
| **Wait** | `කිසිවක්_නැත` | `NOP` | Wait a moment |

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
; My First Program in Sinhala / සිංහල
ගෙනියන්න box 10       ; Put 10 into the box
එකතු_කරන්න box 5        ; Add 5 to it (now 15!)
පද්ධති_ඇමතුම box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l si
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l si --step
```
