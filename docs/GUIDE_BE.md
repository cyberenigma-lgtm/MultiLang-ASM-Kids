# 🧸 Belarusian / Беларуская Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Belarusian / Беларуская**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Belarusian / Беларуская | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `перамясціць` | `MOV` | Put a number in a magic box |
| **Add** | `дадаць` | `ADD` | Add a number to what's in the box |
| **Take** | `адняць` | `SUB` | Take away a number from the box |
| **Times** | `памножыць` | `IMUL` | Multiply the box by a number |
| **Split** | `падзяліць` | `IDIV` | Divide the box by a number |
| **Show** | `сістэмны_выклік` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `скокнуць` | `JMP` | Jump to another step |
| **Compare** | `параўнаць` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `цыкл` | `LOOP` | Repeat a block of code |
| **Save** | `пакласці` | `PUSH` | Save a number in the backpack |
| **Load** | `выняць` | `POP` | Get the number back |
| **Call** | `выклікаць` | `CALL` | Call a magic trick or function |
| **Back** | `вярнуць` | `RET` | Come back from the trick |
| **Stop** | `спыніць` | `HLT` | Finish the program |
| **Wait** | `нічога` | `NOP` | Wait a moment |

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
; My First Program in Belarusian / Беларуская
перамясціць box 10       ; Put 10 into the box
дадаць box 5        ; Add 5 to it (now 15!)
сістэмны_выклік box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l be
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l be --step
```
