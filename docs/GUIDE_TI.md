# 🧸 Tigrinya / ትግርኛ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Tigrinya / ትግርኛ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Tigrinya / ትግርኛ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ኣንቀሳቕስ` | `MOV` | Put a number in a magic box |
| **Add** | `ወስኽ` | `ADD` | Add a number to what's in the box |
| **Take** | `ኣጉድል` | `SUB` | Take away a number from the box |
| **Times** | `ኣራብሕ` | `IMUL` | Multiply the box by a number |
| **Split** | `መቅል` | `IDIV` | Divide the box by a number |
| **Show** | `ጻውዒት_ስርዓት` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ዝለል` | `JMP` | Jump to another step |
| **Compare** | `ኣረኣኢ` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ዑደት` | `LOOP` | Repeat a block of code |
| **Save** | `ኣእቱ` | `PUSH` | Save a number in the backpack |
| **Load** | `ኣውጽእ` | `POP` | Get the number back |
| **Call** | `ጸውዕ` | `CALL` | Call a magic trick or function |
| **Back** | `ተመለስ` | `RET` | Come back from the trick |
| **Stop** | `ደው_በል` | `HLT` | Finish the program |
| **Wait** | `ዋላ_ሓንቲ` | `NOP` | Wait a moment |

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
; My First Program in Tigrinya / ትግርኛ
ኣንቀሳቕስ box 10       ; Put 10 into the box
ወስኽ box 5        ; Add 5 to it (now 15!)
ጻውዒት_ስርዓት box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ti
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ti --step
```
