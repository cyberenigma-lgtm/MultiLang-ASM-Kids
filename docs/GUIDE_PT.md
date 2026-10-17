# 🧸 Portuguese / Português Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Portuguese / Português**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Portuguese / Português | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `coloca` | `MOV` | Put a number in a magic box |
| **Add** | `soma` | `ADD` | Add a number to what's in the box |
| **Take** | `tira` | `SUB` | Take away a number from the box |
| **Times** | `multiplica` | `IMUL` | Multiply the box by a number |
| **Split** | `divide` | `IDIV` | Divide the box by a number |
| **Show** | `mostra` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `pula` | `JMP` | Jump to another step |
| **Compare** | `compara` | `CMP` | Compare two values |
| **If Equal** | `se_igual` | `JE` | Jump if numbers are identical |
| **Repeat** | `repita` | `LOOP` | Repeat a block of code |
| **Save** | `salve` | `PUSH` | Save a number in the backpack |
| **Load** | `recupere` | `POP` | Get the number back |
| **Call** | `chame` | `CALL` | Call a magic trick or function |
| **Back** | `volte` | `RET` | Come back from the trick |
| **Stop** | `pare` | `HLT` | Finish the program |
| **Wait** | `espere` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `caixa` (or `rax`): Your main magic treasure box.
- `caixa2` (or `rbx`): A second box for extra numbers.
- `contador` (or `rcx`): The counter box for loops.
- `caixa3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Portuguese / Português
coloca caixa 10       ; Put 10 into the box
soma caixa 5        ; Add 5 to it (now 15!)
mostra caixa         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l pt
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l pt --step
```
