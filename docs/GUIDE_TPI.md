# 🧸 Tok Pisin Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Tok Pisin**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Tok Pisin | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `muvim` | `MOV` | Put a number in a magic box |
| **Add** | `plusim` | `ADD` | Add a number to what's in the box |
| **Take** | `minusim` | `SUB` | Take away a number from the box |
| **Times** | `mulpim` | `IMUL` | Multiply the box by a number |
| **Split** | `divim` | `IDIV` | Divide the box by a number |
| **Show** | `singaut_sistem` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `kalap` | `JMP` | Jump to another step |
| **Compare** | `sekim` | `CMP` | Compare two values |
| **If Equal** | `sapos_sem` | `JE` | Jump if numbers are identical |
| **Repeat** | `lup` | `LOOP` | Repeat a block of code |
| **Save** | `putim_insait` | `PUSH` | Save a number in the backpack |
| **Load** | `autim` | `POP` | Get the number back |
| **Call** | `singaut` | `CALL` | Call a magic trick or function |
| **Back** | `go_bek` | `RET` | Come back from the trick |
| **Stop** | `pinis` | `HLT` | Finish the program |
| **Wait** | `nating` | `NOP` | Wait a moment |

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
; My First Program in Tok Pisin
muvim box 10       ; Put 10 into the box
plusim box 5        ; Add 5 to it (now 15!)
singaut_sistem box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l tpi
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l tpi --step
```
