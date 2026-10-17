# 🧸 Galician / Galego Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Galician / Galego**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Galician / Galego | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `mover` | `MOV` | Put a number in a magic box |
| **Add** | `sumar` | `ADD` | Add a number to what's in the box |
| **Take** | `restar` | `SUB` | Take away a number from the box |
| **Times** | `multiplicar` | `IMUL` | Multiply the box by a number |
| **Split** | `dividir` | `IDIV` | Divide the box by a number |
| **Show** | `chamada_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `saltar` | `JMP` | Jump to another step |
| **Compare** | `comparar` | `CMP` | Compare two values |
| **If Equal** | `se_igual` | `JE` | Jump if numbers are identical |
| **Repeat** | `bucle` | `LOOP` | Repeat a block of code |
| **Save** | `meter` | `PUSH` | Save a number in the backpack |
| **Load** | `sacar` | `POP` | Get the number back |
| **Call** | `chamar` | `CALL` | Call a magic trick or function |
| **Back** | `retornar` | `RET` | Come back from the trick |
| **Stop** | `deter` | `HLT` | Finish the program |
| **Wait** | `nada` | `NOP` | Wait a moment |

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
; My First Program in Galician / Galego
mover box 10       ; Put 10 into the box
sumar box 5        ; Add 5 to it (now 15!)
chamada_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l gl
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l gl --step
```
