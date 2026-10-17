# 🧸 Norwegian / Norsk Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Norwegian / Norsk**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Norwegian / Norsk | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `flytt` | `MOV` | Put a number in a magic box |
| **Add** | `legg_til` | `ADD` | Add a number to what's in the box |
| **Take** | `trekk_fra` | `SUB` | Take away a number from the box |
| **Times** | `multipliser` | `IMUL` | Multiply the box by a number |
| **Split** | `divider` | `IDIV` | Divide the box by a number |
| **Show** | `systemkall` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `hopp` | `JMP` | Jump to another step |
| **Compare** | `sammenlign` | `CMP` | Compare two values |
| **If Equal** | `hvis_lik` | `JE` | Jump if numbers are identical |
| **Repeat** | `løkke` | `LOOP` | Repeat a block of code |
| **Save** | `skyv` | `PUSH` | Save a number in the backpack |
| **Load** | `hent` | `POP` | Get the number back |
| **Call** | `kall` | `CALL` | Call a magic trick or function |
| **Back** | `returner` | `RET` | Come back from the trick |
| **Stop** | `stopp` | `HLT` | Finish the program |
| **Wait** | `ingen` | `NOP` | Wait a moment |

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
; My First Program in Norwegian / Norsk
flytt box 10       ; Put 10 into the box
legg_til box 5        ; Add 5 to it (now 15!)
systemkall box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l no
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l no --step
```
