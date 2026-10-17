# 🧸 Samoan / Gagana Sāmoa Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Samoan / Gagana Sāmoa**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Samoan / Gagana Sāmoa | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `sui` | `MOV` | Put a number in a magic box |
| **Add** | `faaopoopo` | `ADD` | Add a number to what's in the box |
| **Take** | `toese` | `SUB` | Take away a number from the box |
| **Times** | `faatele` | `IMUL` | Multiply the box by a number |
| **Split** | `vaevae` | `IDIV` | Divide the box by a number |
| **Show** | `valaau_faiga` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `oso` | `JMP` | Jump to another step |
| **Compare** | `faatusatusa` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `matasele` | `LOOP` | Repeat a block of code |
| **Save** | `tulei` | `PUSH` | Save a number in the backpack |
| **Load** | `toso` | `POP` | Get the number back |
| **Call** | `valaau` | `CALL` | Call a magic trick or function |
| **Back** | `toe_foi` | `RET` | Come back from the trick |
| **Stop** | `taofi` | `HLT` | Finish the program |
| **Wait** | `leai_se_mea` | `NOP` | Wait a moment |

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
; My First Program in Samoan / Gagana Sāmoa
sui box 10       ; Put 10 into the box
faaopoopo box 5        ; Add 5 to it (now 15!)
valaau_faiga box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l sm
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l sm --step
```
