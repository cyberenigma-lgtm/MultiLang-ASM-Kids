# 🧸 Nahuatl / Mexicano Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Nahuatl / Mexicano**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Nahuatl / Mexicano | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `huica` | `MOV` | Put a number in a magic box |
| **Add** | `tlapohua` | `ADD` | Add a number to what's in the box |
| **Take** | `tlatzacuia` | `SUB` | Take away a number from the box |
| **Times** | `miquilia` | `IMUL` | Multiply the box by a number |
| **Split** | `xelua` | `IDIV` | Divide the box by a number |
| **Show** | `tequitl_notza` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `choloa` | `JMP` | Jump to another step |
| **Compare** | `tlanonotza` | `CMP` | Compare two values |
| **If Equal** | `neneuhqui` | `JE` | Jump if numbers are identical |
| **Repeat** | `malacatl` | `LOOP` | Repeat a block of code |
| **Save** | `tlatzacuilli_huica` | `PUSH` | Save a number in the backpack |
| **Load** | `quixtia` | `POP` | Get the number back |
| **Call** | `notza` | `CALL` | Call a magic trick or function |
| **Back** | `cuepa` | `RET` | Come back from the trick |
| **Stop** | `uactia` | `HLT` | Finish the program |
| **Wait** | `amo_itla` | `NOP` | Wait a moment |

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
; My First Program in Nahuatl / Mexicano
huica box 10       ; Put 10 into the box
tlapohua box 5        ; Add 5 to it (now 15!)
tequitl_notza box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l nah
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l nah --step
```
