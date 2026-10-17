# 🧸 Maori / Te Reo Māori Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Maori / Te Reo Māori**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Maori / Te Reo Māori | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `neke` | `MOV` | Put a number in a magic box |
| **Add** | `tāpiri` | `ADD` | Add a number to what's in the box |
| **Take** | `tango` | `SUB` | Take away a number from the box |
| **Times** | `whakarea` | `IMUL` | Multiply the box by a number |
| **Split** | `wehe` | `IDIV` | Divide the box by a number |
| **Show** | `karanga_pūnaha` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `peke` | `JMP` | Jump to another step |
| **Compare** | `whakataurite` | `CMP` | Compare two values |
| **If Equal** | `mehemea_rite` | `JE` | Jump if numbers are identical |
| **Repeat** | `koropiko` | `LOOP` | Repeat a block of code |
| **Save** | `tene` | `PUSH` | Save a number in the backpack |
| **Load** | `unu` | `POP` | Get the number back |
| **Call** | `karanga` | `CALL` | Call a magic trick or function |
| **Back** | `hoki` | `RET` | Come back from the trick |
| **Stop** | `whakamutu` | `HLT` | Finish the program |
| **Wait** | `kahore` | `NOP` | Wait a moment |

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
; My First Program in Maori / Te Reo Māori
neke box 10       ; Put 10 into the box
tāpiri box 5        ; Add 5 to it (now 15!)
karanga_pūnaha box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l mi
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l mi --step
```
