# 🧸 Dhivehi / ދިވެހި Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Dhivehi / ދިވެހި**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Dhivehi / ދިވެހި | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ބަދަލުކުރޭ` | `MOV` | Put a number in a magic box |
| **Add** | `އެއްކުރޭ` | `ADD` | Add a number to what's in the box |
| **Take** | `ކަނޑާ` | `SUB` | Take away a number from the box |
| **Times** | `ގުނަކުރޭ` | `IMUL` | Multiply the box by a number |
| **Split** | `ބަހާ` | `IDIV` | Divide the box by a number |
| **Show** | `ސިސްޓަމް_ކޯލް` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ފުންމާ` | `JMP` | Jump to another step |
| **Compare** | `އަޅާކިޔާ` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ބުރު` | `LOOP` | Repeat a block of code |
| **Save** | `ލާ` | `PUSH` | Save a number in the backpack |
| **Load** | `ނަގާ` | `POP` | Get the number back |
| **Call** | `ގޮވާ` | `CALL` | Call a magic trick or function |
| **Back** | `އަނބުރާ` | `RET` | Come back from the trick |
| **Stop** | `ހުއްޓާ` | `HLT` | Finish the program |
| **Wait** | `އެއްވެސް_އެއްޗެއް_ނޫން` | `NOP` | Wait a moment |

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
; My First Program in Dhivehi / ދިވެހި
ބަދަލުކުރޭ box 10       ; Put 10 into the box
އެއްކުރޭ box 5        ; Add 5 to it (now 15!)
ސިސްޓަމް_ކޯލް box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l dv
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l dv --step
```
