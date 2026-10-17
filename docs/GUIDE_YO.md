# 🧸 Yoruba Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Yoruba**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Yoruba | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `gbe` | `MOV` | Put a number in a magic box |
| **Add** | `fikun` | `ADD` | Add a number to what's in the box |
| **Take** | `yọkuro` | `SUB` | Take away a number from the box |
| **Times** | `pọsi` | `IMUL` | Multiply the box by a number |
| **Split** | `pin` | `IDIV` | Divide the box by a number |
| **Show** | `pe_eto` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `mẹfọ` | `JMP` | Jump to another step |
| **Compare** | `fiwe` | `CMP` | Compare two values |
| **If Equal** | `bi_o_ba_dogba` | `JE` | Jump if numbers are identical |
| **Repeat** | `yipo` | `LOOP` | Repeat a block of code |
| **Save** | `tì` | `PUSH` | Save a number in the backpack |
| **Load** | `yọ` | `POP` | Get the number back |
| **Call** | `pè` | `CALL` | Call a magic trick or function |
| **Back** | `padà` | `RET` | Come back from the trick |
| **Stop** | `duro` | `HLT` | Finish the program |
| **Wait** | `asán` | `NOP` | Wait a moment |

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
; My First Program in Yoruba
gbe box 10       ; Put 10 into the box
fikun box 5        ; Add 5 to it (now 15!)
pe_eto box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l yo
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l yo --step
```
