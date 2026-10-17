# 🧸 Faroese / Føroyskt Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Faroese / Føroyskt**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Faroese / Føroyskt | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `flyt` | `MOV` | Put a number in a magic box |
| **Add** | `legg_aftrat` | `ADD` | Add a number to what's in the box |
| **Take** | `drag_fra` | `SUB` | Take away a number from the box |
| **Times** | `falda` | `IMUL` | Multiply the box by a number |
| **Split** | `deil` | `IDIV` | Divide the box by a number |
| **Show** | `skipanarkall` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `leyp` | `JMP` | Jump to another step |
| **Compare** | `samanber` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `lykkja` | `LOOP` | Repeat a block of code |
| **Save** | `skjot` | `PUSH` | Save a number in the backpack |
| **Load** | `tak` | `POP` | Get the number back |
| **Call** | `kall` | `CALL` | Call a magic trick or function |
| **Back** | `vend_aftur` | `RET` | Come back from the trick |
| **Stop** | `steðga` | `HLT` | Finish the program |
| **Wait** | `einki` | `NOP` | Wait a moment |

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
; My First Program in Faroese / Føroyskt
flyt box 10       ; Put 10 into the box
legg_aftrat box 5        ; Add 5 to it (now 15!)
skipanarkall box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l fo
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l fo --step
```
