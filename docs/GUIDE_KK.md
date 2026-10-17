# 🧸 Kazakh / Қазақ тілі Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Kazakh / Қазақ тілі**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Kazakh / Қазақ тілі | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `жылжыту` | `MOV` | Put a number in a magic box |
| **Add** | `қосу` | `ADD` | Add a number to what's in the box |
| **Take** | `азайту` | `SUB` | Take away a number from the box |
| **Times** | `көбейту` | `IMUL` | Multiply the box by a number |
| **Split** | `бөлу` | `IDIV` | Divide the box by a number |
| **Show** | `жүйелік_шақыру` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `секіру` | `JMP` | Jump to another step |
| **Compare** | `салыстыру` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `цикл` | `LOOP` | Repeat a block of code |
| **Save** | `кіргізу` | `PUSH` | Save a number in the backpack |
| **Load** | `шығару` | `POP` | Get the number back |
| **Call** | `шақыру` | `CALL` | Call a magic trick or function |
| **Back** | `қайтару` | `RET` | Come back from the trick |
| **Stop** | `тоқтау` | `HLT` | Finish the program |
| **Wait** | `ештеңе` | `NOP` | Wait a moment |

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
; My First Program in Kazakh / Қазақ тілі
жылжыту box 10       ; Put 10 into the box
қосу box 5        ; Add 5 to it (now 15!)
жүйелік_шақыру box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l kk
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l kk --step
```
