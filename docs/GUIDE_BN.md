# 🧸 Bengali / বাংলা Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Bengali / বাংলা**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Bengali / বাংলা | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `সরানো` | `MOV` | Put a number in a magic box |
| **Add** | `যোগ` | `ADD` | Add a number to what's in the box |
| **Take** | `বিয়োগ` | `SUB` | Take away a number from the box |
| **Times** | `গুণ` | `IMUL` | Multiply the box by a number |
| **Split** | `ভাগ` | `IDIV` | Divide the box by a number |
| **Show** | `সিস্টেম_কল` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `লাফানো` | `JMP` | Jump to another step |
| **Compare** | `তুলনা` | `CMP` | Compare two values |
| **If Equal** | `যদি_সমান` | `JE` | Jump if numbers are identical |
| **Repeat** | `লুপ` | `LOOP` | Repeat a block of code |
| **Save** | `পুশ` | `PUSH` | Save a number in the backpack |
| **Load** | `পপ` | `POP` | Get the number back |
| **Call** | `কল` | `CALL` | Call a magic trick or function |
| **Back** | `ফেরা` | `RET` | Come back from the trick |
| **Stop** | `থামানো` | `HLT` | Finish the program |
| **Wait** | `কিছু_না` | `NOP` | Wait a moment |

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
; My First Program in Bengali / বাংলা
সরানো box 10       ; Put 10 into the box
যোগ box 5        ; Add 5 to it (now 15!)
সিস্টেম_কল box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l bn
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l bn --step
```
