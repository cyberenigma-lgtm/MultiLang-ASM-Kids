# 🧸 Khmer / ភាសាខ្មែរ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Khmer / ភាសាខ្មែរ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Khmer / ភាសាខ្មែរ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `រំកិល` | `MOV` | Put a number in a magic box |
| **Add** | `បូក` | `ADD` | Add a number to what's in the box |
| **Take** | `ដក` | `SUB` | Take away a number from the box |
| **Times** | `គុណ` | `IMUL` | Multiply the box by a number |
| **Split** | `ចែក` | `IDIV` | Divide the box by a number |
| **Show** | `ការហៅប្រព័ន្ធ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `លោត` | `JMP` | Jump to another step |
| **Compare** | `ប្រៀបធៀប` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `រង្វិលជុំ` | `LOOP` | Repeat a block of code |
| **Save** | `រុញ` | `PUSH` | Save a number in the backpack |
| **Load** | `ដកចេញ` | `POP` | Get the number back |
| **Call** | `ហៅ` | `CALL` | Call a magic trick or function |
| **Back** | `ត្រឡប់` | `RET` | Come back from the trick |
| **Stop** | `បញ្ឈប់` | `HLT` | Finish the program |
| **Wait** | `គ្មានអ្វី` | `NOP` | Wait a moment |

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
; My First Program in Khmer / ភាសាខ្មែរ
រំកិល box 10       ; Put 10 into the box
បូក box 5        ; Add 5 to it (now 15!)
ការហៅប្រព័ន្ធ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l km
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l km --step
```
