# 🧸 Chinese / 中文 Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Chinese / 中文**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Chinese / 中文 | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `fang` | `MOV` | Put a number in a magic box |
| **Add** | `jia` | `ADD` | Add a number to what's in the box |
| **Take** | `jian` | `SUB` | Take away a number from the box |
| **Times** | `cheng` | `IMUL` | Multiply the box by a number |
| **Split** | `chu` | `IDIV` | Divide the box by a number |
| **Show** | `kan` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `tiao` | `JMP` | Jump to another step |
| **Compare** | `bi` | `CMP` | Compare two values |
| **If Equal** | `ru_tong` | `JE` | Jump if numbers are identical |
| **Repeat** | `chongfu` | `LOOP` | Repeat a block of code |
| **Save** | `cun` | `PUSH` | Save a number in the backpack |
| **Load** | `qu` | `POP` | Get the number back |
| **Call** | `hu` | `CALL` | Call a magic trick or function |
| **Back** | `fan` | `RET` | Come back from the trick |
| **Stop** | `ting` | `HLT` | Finish the program |
| **Wait** | `deng` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `he` (or `rax`): Your main magic treasure box.
- `he2` (or `rbx`): A second box for extra numbers.
- `jishu` (or `rcx`): The counter box for loops.
- `he3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Chinese / 中文
fang he 10       ; Put 10 into the box
jia he 5        ; Add 5 to it (now 15!)
kan he         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l zh
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l zh --step
```
