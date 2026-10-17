# 🧸 Amharic / አማርኛ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Amharic / አማርኛ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Amharic / አማርኛ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `አንቀሳቅስ` | `MOV` | Put a number in a magic box |
| **Add** | `ጨምር` | `ADD` | Add a number to what's in the box |
| **Take** | `ቀንስ` | `SUB` | Take away a number from the box |
| **Times** | `አባዛ` | `IMUL` | Multiply the box by a number |
| **Split** | `አካፍል` | `IDIV` | Divide the box by a number |
| **Show** | `ሲስተም_ጥራ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ዝለል` | `JMP` | Jump to another step |
| **Compare** | `አወዳድር` | `CMP` | Compare two values |
| **If Equal** | `እኩል_ከሆነ` | `JE` | Jump if numbers are identical |
| **Repeat** | `ሉፕ` | `LOOP` | Repeat a block of code |
| **Save** | `ክተት` | `PUSH` | Save a number in the backpack |
| **Load** | `አውጣ` | `POP` | Get the number back |
| **Call** | `ጥራ` | `CALL` | Call a magic trick or function |
| **Back** | `ተመለስ` | `RET` | Come back from the trick |
| **Stop** | `አቁም` | `HLT` | Finish the program |
| **Wait** | `ምንም` | `NOP` | Wait a moment |

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
; My First Program in Amharic / አማርኛ
አንቀሳቅስ box 10       ; Put 10 into the box
ጨምር box 5        ; Add 5 to it (now 15!)
ሲስተም_ጥራ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l am
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l am --step
```
