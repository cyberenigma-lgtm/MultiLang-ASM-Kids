# 🧸 Italian / Italiano Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Italian / Italiano**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Italian / Italiano | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `metti` | `MOV` | Put a number in a magic box |
| **Add** | `aggiungi` | `ADD` | Add a number to what's in the box |
| **Take** | `togli` | `SUB` | Take away a number from the box |
| **Times** | `moltiplica` | `IMUL` | Multiply the box by a number |
| **Split** | `dividi` | `IDIV` | Divide the box by a number |
| **Show** | `mostra` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `salta` | `JMP` | Jump to another step |
| **Compare** | `confronta` | `CMP` | Compare two values |
| **If Equal** | `se_uguale` | `JE` | Jump if numbers are identical |
| **Repeat** | `ripeti` | `LOOP` | Repeat a block of code |
| **Save** | `salva` | `PUSH` | Save a number in the backpack |
| **Load** | `recupera` | `POP` | Get the number back |
| **Call** | `chiama` | `CALL` | Call a magic trick or function |
| **Back** | `torna` | `RET` | Come back from the trick |
| **Stop** | `ferma` | `HLT` | Finish the program |
| **Wait** | `aspetta` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `scatola` (or `rax`): Your main magic treasure box.
- `scatola2` (or `rbx`): A second box for extra numbers.
- `contatore` (or `rcx`): The counter box for loops.
- `scatola3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Italian / Italiano
metti scatola 10       ; Put 10 into the box
aggiungi scatola 5        ; Add 5 to it (now 15!)
mostra scatola         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l it
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l it --step
```
