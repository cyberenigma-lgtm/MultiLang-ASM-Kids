# 🧸 Español (Madrid) Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Español (Madrid)**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Español (Madrid) | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `apanca` | `MOV` | Put a number in a magic box |
| **Add** | `suma` | `ADD` | Add a number to what's in the box |
| **Take** | `pilla` | `SUB` | Take away a number from the box |
| **Times** | `dobla` | `IMUL` | Multiply the box by a number |
| **Split** | `reparte` | `IDIV` | Divide the box by a number |
| **Show** | `lipa` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `pira` | `JMP` | Jump to another step |
| **Compare** | `tasa` | `CMP` | Compare two values |
| **If Equal** | `si_clavao` | `JE` | Jump if numbers are identical |
| **Repeat** | `otra_ronda` | `LOOP` | Repeat a block of code |
| **Save** | `guarda` | `PUSH` | Save a number in the backpack |
| **Load** | `saca` | `POP` | Get the number back |
| **Call** | `toque` | `CALL` | Call a magic trick or function |
| **Back** | `pa_tras` | `RET` | Come back from the trick |
| **Stop** | `chapa` | `HLT` | Finish the program |
| **Wait** | `relaja` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `caja` (or `rax`): Your main magic treasure box.
- `caja2` (or `rbx`): A second box for extra numbers.
- `marcador` (or `rcx`): The counter box for loops.
- `caja3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Español (Madrid)
apanca caja 10       ; Put 10 into the box
suma caja 5        ; Add 5 to it (now 15!)
lipa caja         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l es_mad
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l es_mad --step
```
