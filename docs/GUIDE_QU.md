# 🧸 Quechua / Runa Simi Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Quechua / Runa Simi**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Quechua / Runa Simi | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `astay` | `MOV` | Put a number in a magic box |
| **Add** | `yapay` | `ADD` | Add a number to what's in the box |
| **Take** | `qichuy` | `SUB` | Take away a number from the box |
| **Times** | `mirachiy` | `IMUL` | Multiply the box by a number |
| **Split** | `rakiniy` | `IDIV` | Divide the box by a number |
| **Show** | `llanu_waqyay` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `paway` | `JMP` | Jump to another step |
| **Compare** | `tupachiy` | `CMP` | Compare two values |
| **If Equal** | `kaqlla_hina` | `JE` | Jump if numbers are identical |
| **Repeat** | `muyuy` | `LOOP` | Repeat a block of code |
| **Save** | `winay` | `PUSH` | Save a number in the backpack |
| **Load** | `qurpuy` | `POP` | Get the number back |
| **Call** | `waqyay` | `CALL` | Call a magic trick or function |
| **Back** | `kutimuy` | `RET` | Come back from the trick |
| **Stop** | `sayachiy` | `HLT` | Finish the program |
| **Wait** | `imapas_mana` | `NOP` | Wait a moment |

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
; My First Program in Quechua / Runa Simi
astay box 10       ; Put 10 into the box
yapay box 5        ; Add 5 to it (now 15!)
llanu_waqyay box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l qu
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l qu --step
```
