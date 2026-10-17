# 🧸 Slovak / Slovenčina Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Slovak / Slovenčina**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Slovak / Slovenčina | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `presunut` | `MOV` | Put a number in a magic box |
| **Add** | `pridat` | `ADD` | Add a number to what's in the box |
| **Take** | `odpocitat` | `SUB` | Take away a number from the box |
| **Times** | `vynasobit` | `IMUL` | Multiply the box by a number |
| **Split** | `vydelit` | `IDIV` | Divide the box by a number |
| **Show** | `systemove_volanie` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `skocit` | `JMP` | Jump to another step |
| **Compare** | `porovnat` | `CMP` | Compare two values |
| **If Equal** | `ak_rovne` | `JE` | Jump if numbers are identical |
| **Repeat** | `cyklus` | `LOOP` | Repeat a block of code |
| **Save** | `vlozit` | `PUSH` | Save a number in the backpack |
| **Load** | `vybrat` | `POP` | Get the number back |
| **Call** | `zavolat` | `CALL` | Call a magic trick or function |
| **Back** | `vratit` | `RET` | Come back from the trick |
| **Stop** | `zastavit` | `HLT` | Finish the program |
| **Wait** | `nic` | `NOP` | Wait a moment |

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
; My First Program in Slovak / Slovenčina
presunut box 10       ; Put 10 into the box
pridat box 5        ; Add 5 to it (now 15!)
systemove_volanie box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l sk
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l sk --step
```
