# 🧸 Navajo / Diné bizaad Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Navajo / Diné bizaad**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Navajo / Diné bizaad | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `yíłtsood` | `MOV` | Put a number in a magic box |
| **Add** | `bee_bikʼi` | `ADD` | Add a number to what's in the box |
| **Take** | `bąąh_chʼéldzid` | `SUB` | Take away a number from the box |
| **Times** | `néeltʼeʼ` | `IMUL` | Multiply the box by a number |
| **Split** | `ałtsʼą́ą́h` | `IDIV` | Divide the box by a number |
| **Show** | `beesh_bee_haneʼ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `dah_naatłʼo` | `JMP` | Jump to another step |
| **Compare** | `ałhąąh` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `názbas` | `LOOP` | Repeat a block of code |
| **Save** | `biih_yíníł` | `PUSH` | Save a number in the backpack |
| **Load** | `chʼéníł` | `POP` | Get the number back |
| **Call** | `yízhí` | `CALL` | Call a magic trick or function |
| **Back** | `nádleeh` | `RET` | Come back from the trick |
| **Stop** | `tʼóó_haziʼ` | `HLT` | Finish the program |
| **Wait** | `ádingo` | `NOP` | Wait a moment |

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
; My First Program in Navajo / Diné bizaad
yíłtsood box 10       ; Put 10 into the box
bee_bikʼi box 5        ; Add 5 to it (now 15!)
beesh_bee_haneʼ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l nav
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l nav --step
```
