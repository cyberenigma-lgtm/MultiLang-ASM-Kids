# 🧸 Pashto / پښتو Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Pashto / پښتو**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Pashto / پښتو | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `لږدول` | `MOV` | Put a number in a magic box |
| **Add** | `جمع_کول` | `ADD` | Add a number to what's in the box |
| **Take** | `منفي_کول` | `SUB` | Take away a number from the box |
| **Times** | `ضرب_کول` | `IMUL` | Multiply the box by a number |
| **Split** | `وېشل` | `IDIV` | Divide the box by a number |
| **Show** | `سیسټم_غوښتنه` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ټوپ_وهل` | `JMP` | Jump to another step |
| **Compare** | `پر پرتله_کول` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `څرخ` | `LOOP` | Repeat a block of code |
| **Save** | `دننه_کول` | `PUSH` | Save a number in the backpack |
| **Load** | `بهر_کول` | `POP` | Get the number back |
| **Call** | `بلل` | `CALL` | Call a magic trick or function |
| **Back** | `بیرته_راتلل` | `RET` | Come back from the trick |
| **Stop** | `درېدل` | `HLT` | Finish the program |
| **Wait** | `هیڅ_نه` | `NOP` | Wait a moment |

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
; My First Program in Pashto / پښتو
لږدول box 10       ; Put 10 into the box
جمع_کول box 5        ; Add 5 to it (now 15!)
سیسټم_غوښتنه box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ps
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ps --step
```
