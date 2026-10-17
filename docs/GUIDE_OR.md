# 🧸 Odia / ଓଡ଼ିଆ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Odia / ଓଡ଼ିଆ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Odia / ଓଡ଼ିଆ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ଘୁଞ୍ଚାଅ` | `MOV` | Put a number in a magic box |
| **Add** | `ଯୋଡ଼` | `ADD` | Add a number to what's in the box |
| **Take** | `ଫେଡ଼` | `SUB` | Take away a number from the box |
| **Times** | `ଗୁଣନ` | `IMUL` | Multiply the box by a number |
| **Split** | `ହରଣ` | `IDIV` | Divide the box by a number |
| **Show** | `ସିଷ୍ଟମ_କଲ୍` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ଡେଇଁବା` | `JMP` | Jump to another step |
| **Compare** | `ତୁଳନା` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ଚକ୍ର` | `LOOP` | Repeat a block of code |
| **Save** | `ରଖନ୍ତୁ` | `PUSH` | Save a number in the backpack |
| **Load** | `କାଢ଼ନ୍ତୁ` | `POP` | Get the number back |
| **Call** | `ଡାକନ୍ତୁ` | `CALL` | Call a magic trick or function |
| **Back** | `ଫେରସ୍ତ` | `RET` | Come back from the trick |
| **Stop** | `ଅଟକନ୍ତୁ` | `HLT` | Finish the program |
| **Wait** | `କିଛି_ନାହିଁ` | `NOP` | Wait a moment |

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
; My First Program in Odia / ଓଡ଼ିଆ
ଘୁଞ୍ଚାଅ box 10       ; Put 10 into the box
ଯୋଡ଼ box 5        ; Add 5 to it (now 15!)
ସିଷ୍ଟମ_କଲ୍ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l or
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l or --step
```
