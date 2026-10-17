# 🧸 Kannada / ಕನ್ನಡ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Kannada / ಕನ್ನಡ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Kannada / ಕನ್ನಡ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ಸ್ಥಳಾಂತರಿಸಿ` | `MOV` | Put a number in a magic box |
| **Add** | `ಕೂಡಿಸು` | `ADD` | Add a number to what's in the box |
| **Take** | `ಕಳೆಯಿರಿ` | `SUB` | Take away a number from the box |
| **Times** | `ಗುಣಿಸು` | `IMUL` | Multiply the box by a number |
| **Split** | `ಭಾಗಿಸು` | `IDIV` | Divide the box by a number |
| **Show** | `ವ್ಯವಸ್ಥೆ_ಕರೆ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ಜಿಗಿ` | `JMP` | Jump to another step |
| **Compare** | `ಹೋಲಿಸಿ` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ಸುತ್ತು` | `LOOP` | Repeat a block of code |
| **Save** | `ಹಾಕಿ` | `PUSH` | Save a number in the backpack |
| **Load** | `ತೆಗೆಯಿರಿ` | `POP` | Get the number back |
| **Call** | `ಕರೆ` | `CALL` | Call a magic trick or function |
| **Back** | `ಹಿಂತಿರುಗಿ` | `RET` | Come back from the trick |
| **Stop** | `ನಿಲ್ಲಿಸು` | `HLT` | Finish the program |
| **Wait** | `ಏನೂ_ಇಲ್ಲ` | `NOP` | Wait a moment |

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
; My First Program in Kannada / ಕನ್ನಡ
ಸ್ಥಳಾಂತರಿಸಿ box 10       ; Put 10 into the box
ಕೂಡಿಸು box 5        ; Add 5 to it (now 15!)
ವ್ಯವಸ್ಥೆ_ಕರೆ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l kn
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l kn --step
```
