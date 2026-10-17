# 🧸 Urdu / اردو Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Urdu / اردو**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Urdu / اردو | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `منتقل` | `MOV` | Put a number in a magic box |
| **Add** | `جمع` | `ADD` | Add a number to what's in the box |
| **Take** | `تفریق` | `SUB` | Take away a number from the box |
| **Times** | `ضرب` | `IMUL` | Multiply the box by a number |
| **Split** | `تقسیم` | `IDIV` | Divide the box by a number |
| **Show** | `سسٹم_کال` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `چھلانگ` | `JMP` | Jump to another step |
| **Compare** | `موازنہ` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `چکر` | `LOOP` | Repeat a block of code |
| **Save** | `ڈالیں` | `PUSH` | Save a number in the backpack |
| **Load** | `نکالیں` | `POP` | Get the number back |
| **Call** | `کال` | `CALL` | Call a magic trick or function |
| **Back** | `واپسی` | `RET` | Come back from the trick |
| **Stop** | `روکیں` | `HLT` | Finish the program |
| **Wait** | `کچھ_نہیں` | `NOP` | Wait a moment |

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
; My First Program in Urdu / اردو
منتقل box 10       ; Put 10 into the box
جمع box 5        ; Add 5 to it (now 15!)
سسٹم_کال box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ur
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ur --step
```
