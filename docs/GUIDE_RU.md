# 🧸 Russian / Русский Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Russian / Русский**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Russian / Русский | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `положи` | `MOV` | Put a number in a magic box |
| **Add** | `добавь` | `ADD` | Add a number to what's in the box |
| **Take** | `отними` | `SUB` | Take away a number from the box |
| **Times** | `умножь` | `IMUL` | Multiply the box by a number |
| **Split** | `раздели` | `IDIV` | Divide the box by a number |
| **Show** | `покажи` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `прыгай` | `JMP` | Jump to another step |
| **Compare** | `сравни` | `CMP` | Compare two values |
| **If Equal** | `если_равно` | `JE` | Jump if numbers are identical |
| **Repeat** | `повтори` | `LOOP` | Repeat a block of code |
| **Save** | `сохрани` | `PUSH` | Save a number in the backpack |
| **Load** | `достань` | `POP` | Get the number back |
| **Call** | `вызови` | `CALL` | Call a magic trick or function |
| **Back** | `вернись` | `RET` | Come back from the trick |
| **Stop** | `стой` | `HLT` | Finish the program |
| **Wait** | `жди` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `коробка` (or `rax`): Your main magic treasure box.
- `коробка2` (or `rbx`): A second box for extra numbers.
- `счетчик` (or `rcx`): The counter box for loops.
- `коробка3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Russian / Русский
положи коробка 10       ; Put 10 into the box
добавь коробка 5        ; Add 5 to it (now 15!)
покажи коробка         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ru
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ru --step
```
