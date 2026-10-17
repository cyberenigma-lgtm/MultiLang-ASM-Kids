# 🧸 Telugu / తెలుగు Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Telugu / తెలుగు**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Telugu / తెలుగు | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `మార్చు` | `MOV` | Put a number in a magic box |
| **Add** | `కలుపు` | `ADD` | Add a number to what's in the box |
| **Take** | `తీసివేయి` | `SUB` | Take away a number from the box |
| **Times** | `గుణించు` | `IMUL` | Multiply the box by a number |
| **Split** | `భాగించు` | `IDIV` | Divide the box by a number |
| **Show** | `సిస్టమ్_కాల్` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `దూకు` | `JMP` | Jump to another step |
| **Compare** | `పోల్చు` | `CMP` | Compare two values |
| **If Equal** | `సమానమైతే` | `JE` | Jump if numbers are identical |
| **Repeat** | `లూప్` | `LOOP` | Repeat a block of code |
| **Save** | `నెట్టు` | `PUSH` | Save a number in the backpack |
| **Load** | `తీయు` | `POP` | Get the number back |
| **Call** | `పిలువు` | `CALL` | Call a magic trick or function |
| **Back** | `తిరిగి_రా` | `RET` | Come back from the trick |
| **Stop** | `ఆపు` | `HLT` | Finish the program |
| **Wait** | `ఏమీ_లేదు` | `NOP` | Wait a moment |

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
; My First Program in Telugu / తెలుగు
మార్చు box 10       ; Put 10 into the box
కలుపు box 5        ; Add 5 to it (now 15!)
సిస్టమ్_కాల్ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l te
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l te --step
```
