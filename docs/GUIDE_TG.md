# 🧸 Tajik / Тоҷикӣ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Tajik / Тоҷикӣ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Tajik / Тоҷикӣ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `кӯчонидан` | `MOV` | Put a number in a magic box |
| **Add** | `чамъ_кардан` | `ADD` | Add a number to what's in the box |
| **Take** | `тарҳ_кардан` | `SUB` | Take away a number from the box |
| **Times** | `зарб_кардан` | `IMUL` | Multiply the box by a number |
| **Split** | `тақсим_кардан` | `IDIV` | Divide the box by a number |
| **Show** | `даъвати_системавӣ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ҷаҳидан` | `JMP` | Jump to another step |
| **Compare** | `муқоиса_кардан` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `давр` | `LOOP` | Repeat a block of code |
| **Save** | `гузоштан` | `PUSH` | Save a number in the backpack |
| **Load** | `кашидан` | `POP` | Get the number back |
| **Call** | `даъват_кардан` | `CALL` | Call a magic trick or function |
| **Back** | `баргаштан` | `RET` | Come back from the trick |
| **Stop** | `истодан` | `HLT` | Finish the program |
| **Wait** | `ҳеҷ_чиз` | `NOP` | Wait a moment |

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
; My First Program in Tajik / Тоҷикӣ
кӯчонидан box 10       ; Put 10 into the box
чамъ_кардан box 5        ; Add 5 to it (now 15!)
даъвати_системавӣ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l tg
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l tg --step
```
