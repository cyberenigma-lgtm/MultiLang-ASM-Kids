# 🧸 Catalan / Català Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Catalan / Català**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Catalan / Català | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `moure` | `MOV` | Put a number in a magic box |
| **Add** | `sumar` | `ADD` | Add a number to what's in the box |
| **Take** | `restar` | `SUB` | Take away a number from the box |
| **Times** | `multiplicar` | `IMUL` | Multiply the box by a number |
| **Split** | `dividir` | `IDIV` | Divide the box by a number |
| **Show** | `crida_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `saltar` | `JMP` | Jump to another step |
| **Compare** | `comparar` | `CMP` | Compare two values |
| **If Equal** | `si_igual` | `JE` | Jump if numbers are identical |
| **Repeat** | `bucle` | `LOOP` | Repeat a block of code |
| **Save** | `empènyer` | `PUSH` | Save a number in the backpack |
| **Load** | `extreure` | `POP` | Get the number back |
| **Call** | `cridar` | `CALL` | Call a magic trick or function |
| **Back** | `retornar` | `RET` | Come back from the trick |
| **Stop** | `aturar` | `HLT` | Finish the program |
| **Wait** | `res` | `NOP` | Wait a moment |

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
; My First Program in Catalan / Català
moure box 10       ; Put 10 into the box
sumar box 5        ; Add 5 to it (now 15!)
crida_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ca
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ca --step
```
