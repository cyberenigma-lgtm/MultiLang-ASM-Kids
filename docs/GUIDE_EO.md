# 🧸 Esperanto Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Esperanto**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Esperanto | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `movi` | `MOV` | Put a number in a magic box |
| **Add** | `aldoni` | `ADD` | Add a number to what's in the box |
| **Take** | `subtrahi` | `SUB` | Take away a number from the box |
| **Times** | `multipliki` | `IMUL` | Multiply the box by a number |
| **Split** | `dividi` | `IDIV` | Divide the box by a number |
| **Show** | `sistemvoko` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `salti` | `JMP` | Jump to another step |
| **Compare** | `kompari` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `buklo` | `LOOP` | Repeat a block of code |
| **Save** | `pusxi` | `PUSH` | Save a number in the backpack |
| **Load** | `tiri` | `POP` | Get the number back |
| **Call** | `voki` | `CALL` | Call a magic trick or function |
| **Back** | `reveni` | `RET` | Come back from the trick |
| **Stop** | `halti` | `HLT` | Finish the program |
| **Wait** | `nenio` | `NOP` | Wait a moment |

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
; My First Program in Esperanto
movi box 10       ; Put 10 into the box
aldoni box 5        ; Add 5 to it (now 15!)
sistemvoko box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l eo
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l eo --step
```
