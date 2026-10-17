# 🧸 Marathi / मराठी Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Marathi / मराठी**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Marathi / मराठी | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `हलवा` | `MOV` | Put a number in a magic box |
| **Add** | `बेरीज` | `ADD` | Add a number to what's in the box |
| **Take** | `वजा` | `SUB` | Take away a number from the box |
| **Times** | `गुणा` | `IMUL` | Multiply the box by a number |
| **Split** | `भागा` | `IDIV` | Divide the box by a number |
| **Show** | `सिस्टम_कॉल` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `उडी` | `JMP` | Jump to another step |
| **Compare** | `तुलना` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `लूप` | `LOOP` | Repeat a block of code |
| **Save** | `टाका` | `PUSH` | Save a number in the backpack |
| **Load** | `काढा` | `POP` | Get the number back |
| **Call** | `कॉल` | `CALL` | Call a magic trick or function |
| **Back** | `परत` | `RET` | Come back from the trick |
| **Stop** | `थांबा` | `HLT` | Finish the program |
| **Wait** | `काहीही_नाही` | `NOP` | Wait a moment |

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
; My First Program in Marathi / मराठी
हलवा box 10       ; Put 10 into the box
बेरीज box 5        ; Add 5 to it (now 15!)
सिस्टम_कॉल box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l mr
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l mr --step
```
