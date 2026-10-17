# 🧸 Uzbek / O'zbek Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Uzbek / O'zbek**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Uzbek / O'zbek | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `kochir` | `MOV` | Put a number in a magic box |
| **Add** | `qosh` | `ADD` | Add a number to what's in the box |
| **Take** | `ayir` | `SUB` | Take away a number from the box |
| **Times** | `kopaytir` | `IMUL` | Multiply the box by a number |
| **Split** | `bol` | `IDIV` | Divide the box by a number |
| **Show** | `tizim_chaqiruvi` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `sakrash` | `JMP` | Jump to another step |
| **Compare** | `solishtir` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `tsikl` | `LOOP` | Repeat a block of code |
| **Save** | `kirit` | `PUSH` | Save a number in the backpack |
| **Load** | `chiqar` | `POP` | Get the number back |
| **Call** | `chaqir` | `CALL` | Call a magic trick or function |
| **Back** | `qayt` | `RET` | Come back from the trick |
| **Stop** | `toxta` | `HLT` | Finish the program |
| **Wait** | `hech_narsa` | `NOP` | Wait a moment |

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
; My First Program in Uzbek / O'zbek
kochir box 10       ; Put 10 into the box
qosh box 5        ; Add 5 to it (now 15!)
tizim_chaqiruvi box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l uz
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l uz --step
```
