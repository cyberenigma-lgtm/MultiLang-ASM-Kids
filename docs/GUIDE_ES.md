# 🧸 Spanish / Español Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Spanish / Español**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Spanish / Español | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `pon` | `MOV` | Put a number in a magic box |
| **Add** | `suma` | `ADD` | Add a number to what's in the box |
| **Take** | `resta` | `SUB` | Take away a number from the box |
| **Times** | `multiplica` | `IMUL` | Multiply the box by a number |
| **Split** | `divide` | `IDIV` | Divide the box by a number |
| **Show** | `enseña` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `salta` | `JMP` | Jump to another step |
| **Compare** | `compara` | `CMP` | Compare two values |
| **If Equal** | `si_igual` | `JE` | Jump if numbers are identical |
| **Repeat** | `repite` | `LOOP` | Repeat a block of code |
| **Save** | `guarda` | `PUSH` | Save a number in the backpack |
| **Load** | `recupera` | `POP` | Get the number back |
| **Call** | `llama` | `CALL` | Call a magic trick or function |
| **Back** | `vuelve` | `RET` | Come back from the trick |
| **Stop** | `para` | `HLT` | Finish the program |
| **Wait** | `espera` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `caja` (or `rax`): Your main magic treasure box.
- `caja2` (or `rbx`): A second box for extra numbers.
- `contador` (or `rcx`): The counter box for loops.
- `caja3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Spanish / Español
pon caja 10       ; Put 10 into the box
suma caja 5        ; Add 5 to it (now 15!)
enseña caja         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l es
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l es --step
```
