# 🧸 Swahili / Kiswahili Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Swahili / Kiswahili**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Swahili / Kiswahili | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `weka` | `MOV` | Put a number in a magic box |
| **Add** | `ongeza` | `ADD` | Add a number to what's in the box |
| **Take** | `toa` | `SUB` | Take away a number from the box |
| **Times** | `zidisha` | `IMUL` | Multiply the box by a number |
| **Split** | `gawanya` | `IDIV` | Divide the box by a number |
| **Show** | `onyesha` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ruka` | `JMP` | Jump to another step |
| **Compare** | `linganisha` | `CMP` | Compare two values |
| **If Equal** | `ikiwa_sawa` | `JE` | Jump if numbers are identical |
| **Repeat** | `rudia` | `LOOP` | Repeat a block of code |
| **Save** | `hifadhi` | `PUSH` | Save a number in the backpack |
| **Load** | `pakua` | `POP` | Get the number back |
| **Call** | `ita` | `CALL` | Call a magic trick or function |
| **Back** | `rudi` | `RET` | Come back from the trick |
| **Stop** | `simama` | `HLT` | Finish the program |
| **Wait** | `subiri` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `sanduku` (or `rax`): Your main magic treasure box.
- `sanduku2` (or `rbx`): A second box for extra numbers.
- `kihesabu` (or `rcx`): The counter box for loops.
- `sanduku3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Swahili / Kiswahili
weka sanduku 10       ; Put 10 into the box
ongeza sanduku 5        ; Add 5 to it (now 15!)
onyesha sanduku         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l sw
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l sw --step
```
