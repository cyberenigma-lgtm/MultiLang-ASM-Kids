# 🧸 Ilocano / Ilokano Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Ilocano / Ilokano**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Ilocano / Ilokano | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `yakar` | `MOV` | Put a number in a magic box |
| **Add** | `inayon` | `ADD` | Add a number to what's in the box |
| **Take** | `ikkat` | `SUB` | Take away a number from the box |
| **Times** | `paaduen` | `IMUL` | Multiply the box by a number |
| **Split** | `bingayen` | `IDIV` | Divide the box by a number |
| **Show** | `awag_ti_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `lagto` | `JMP` | Jump to another step |
| **Compare** | `idilig` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `rikos` | `LOOP` | Repeat a block of code |
| **Save** | `iduron` | `PUSH` | Save a number in the backpack |
| **Load** | `iguyod` | `POP` | Get the number back |
| **Call** | `awagan` | `CALL` | Call a magic trick or function |
| **Back** | `subli` | `RET` | Come back from the trick |
| **Stop** | `agsardeng` | `HLT` | Finish the program |
| **Wait** | `awan` | `NOP` | Wait a moment |

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
; My First Program in Ilocano / Ilokano
yakar box 10       ; Put 10 into the box
inayon box 5        ; Add 5 to it (now 15!)
awag_ti_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ilo
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ilo --step
```
