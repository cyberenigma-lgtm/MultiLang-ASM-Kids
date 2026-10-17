# 🧸 German / Deutsch Kids Coding Guide

## Welcome!
Learn to speak to your computer in **German / Deutsch**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in German / Deutsch | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `setze` | `MOV` | Put a number in a magic box |
| **Add** | `addiere` | `ADD` | Add a number to what's in the box |
| **Take** | `ziehe_ab` | `SUB` | Take away a number from the box |
| **Times** | `mal` | `IMUL` | Multiply the box by a number |
| **Split** | `teile` | `IDIV` | Divide the box by a number |
| **Show** | `zeige` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `springe` | `JMP` | Jump to another step |
| **Compare** | `vergleiche` | `CMP` | Compare two values |
| **If Equal** | `wenn_gleich` | `JE` | Jump if numbers are identical |
| **Repeat** | `wiederhole` | `LOOP` | Repeat a block of code |
| **Save** | `speichere` | `PUSH` | Save a number in the backpack |
| **Load** | `lade` | `POP` | Get the number back |
| **Call** | `rufe` | `CALL` | Call a magic trick or function |
| **Back** | `zuruck` | `RET` | Come back from the trick |
| **Stop** | `halte` | `HLT` | Finish the program |
| **Wait** | `warte` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `kiste` (or `rax`): Your main magic treasure box.
- `kiste2` (or `rbx`): A second box for extra numbers.
- `zahler` (or `rcx`): The counter box for loops.
- `kiste3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in German / Deutsch
setze kiste 10       ; Put 10 into the box
addiere kiste 5        ; Add 5 to it (now 15!)
zeige kiste         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l de
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l de --step
```
