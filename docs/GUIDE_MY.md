# 🧸 Burmese / မြန်မာစာ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Burmese / မြန်မာစာ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Burmese / မြန်မာစာ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ရွှေ့` | `MOV` | Put a number in a magic box |
| **Add** | `ပေါင်း` | `ADD` | Add a number to what's in the box |
| **Take** | `နှုတ်` | `SUB` | Take away a number from the box |
| **Times** | `မြှောက်` | `IMUL` | Multiply the box by a number |
| **Split** | `စား` | `IDIV` | Divide the box by a number |
| **Show** | `စနစ်ခေါ်ဆိုမှု` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ခုန်` | `JMP` | Jump to another step |
| **Compare** | `နှိုင်းယှဉ်` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ပတ်လမ်း` | `LOOP` | Repeat a block of code |
| **Save** | `ထည့်` | `PUSH` | Save a number in the backpack |
| **Load** | `ထုတ်` | `POP` | Get the number back |
| **Call** | `ခေါ်` | `CALL` | Call a magic trick or function |
| **Back** | `ပြန်` | `RET` | Come back from the trick |
| **Stop** | `ရပ်` | `HLT` | Finish the program |
| **Wait** | `ဘာမှမရှိ` | `NOP` | Wait a moment |

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
; My First Program in Burmese / မြန်မာစာ
ရွှေ့ box 10       ; Put 10 into the box
ပေါင်း box 5        ; Add 5 to it (now 15!)
စနစ်ခေါ်ဆိုမှု box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l my
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l my --step
```
