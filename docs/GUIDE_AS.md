# 🧸 Assamese / অসমীয়া Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Assamese / অসমীয়া**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Assamese / অসমীয়া | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `স্থানান্তৰ` | `MOV` | Put a number in a magic box |
| **Add** | `যোগ_কৰক` | `ADD` | Add a number to what's in the box |
| **Take** | `বিয়োগ_কৰক` | `SUB` | Take away a number from the box |
| **Times** | `পূৰণ_কৰক` | `IMUL` | Multiply the box by a number |
| **Split** | `হৰণ_কৰক` | `IDIV` | Divide the box by a number |
| **Show** | `ব্যৱস্থাৰ_আহ্বান` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `জঁপিয়াওক` | `JMP` | Jump to another step |
| **Compare** | `তুলনা_কৰক` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `লুপ` | `LOOP` | Repeat a block of code |
| **Save** | `ভৰাওক` | `PUSH` | Save a number in the backpack |
| **Load** | `উলিয়াওক` | `POP` | Get the number back |
| **Call** | `মাতক` | `CALL` | Call a magic trick or function |
| **Back** | `উভতি_যাওক` | `RET` | Come back from the trick |
| **Stop** | `ৰখক` | `HLT` | Finish the program |
| **Wait** | `একো_নাই` | `NOP` | Wait a moment |

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
; My First Program in Assamese / অসমীয়া
স্থানান্তৰ box 10       ; Put 10 into the box
যোগ_কৰক box 5        ; Add 5 to it (now 15!)
ব্যৱস্থাৰ_আহ্বান box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l as
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l as --step
```
