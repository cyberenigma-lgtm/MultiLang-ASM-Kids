# 🧸 Occitan / Lenga d'òc Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Occitan / Lenga d'òc**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Occitan / Lenga d'òc | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `desplaçar` | `MOV` | Put a number in a magic box |
| **Add** | `apondre` | `ADD` | Add a number to what's in the box |
| **Take** | `sustraire` | `SUB` | Take away a number from the box |
| **Times** | `multiplicar` | `IMUL` | Multiply the box by a number |
| **Split** | `devesir` | `IDIV` | Divide the box by a number |
| **Show** | `sonada_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `sautar` | `JMP` | Jump to another step |
| **Compare** | `comparar` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `bocla` | `LOOP` | Repeat a block of code |
| **Save** | `empenher` | `PUSH` | Save a number in the backpack |
| **Load** | `traire` | `POP` | Get the number back |
| **Call** | `sonar` | `CALL` | Call a magic trick or function |
| **Back** | `retornar` | `RET` | Come back from the trick |
| **Stop** | `arrestar` | `HLT` | Finish the program |
| **Wait** | `ren` | `NOP` | Wait a moment |

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
; My First Program in Occitan / Lenga d'òc
desplaçar box 10       ; Put 10 into the box
apondre box 5        ; Add 5 to it (now 15!)
sonada_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l oc
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l oc --step
```
