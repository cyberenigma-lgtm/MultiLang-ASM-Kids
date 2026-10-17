# 🧸 Tibetan / བོད་སྐད་ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Tibetan / བོད་སྐད་**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Tibetan / བོད་སྐད་ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `སྤོ` | `MOV` | Put a number in a magic box |
| **Add** | `སྣོན` | `ADD` | Add a number to what's in the box |
| **Take** | `འཐེན` | `SUB` | Take away a number from the box |
| **Times** | `སྒྱུར` | `IMUL` | Multiply the box by a number |
| **Split** | `བགོ` | `IDIV` | Divide the box by a number |
| **Show** | `མ་ལག_འབོད་པ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `མཆོང` | `JMP` | Jump to another step |
| **Compare** | `བསྡུར` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `འཁོར་ལོ` | `LOOP` | Repeat a block of code |
| **Save** | `འཇུག` | `PUSH` | Save a number in the backpack |
| **Load** | `འདོན` | `POP` | Get the number back |
| **Call** | `འབོད` | `CALL` | Call a magic trick or function |
| **Back** | `ཕྱིར་ལོག` | `RET` | Come back from the trick |
| **Stop** | `མཚམས་འཇོག` | `HLT` | Finish the program |
| **Wait** | `ཅི་ཡང་མེད` | `NOP` | Wait a moment |

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
; My First Program in Tibetan / བོད་སྐད་
སྤོ box 10       ; Put 10 into the box
སྣོན box 5        ; Add 5 to it (now 15!)
མ་ལག_འབོད་པ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l bo
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l bo --step
```
