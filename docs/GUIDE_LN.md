# 🧸 Lingala Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Lingala**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Lingala | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `boma` | `MOV` | Put a number in a magic box |
| **Add** | `bakisa` | `ADD` | Add a number to what's in the box |
| **Take** | `longola` | `SUB` | Take away a number from the box |
| **Times** | `matisa` | `IMUL` | Multiply the box by a number |
| **Split** | `kabola` | `IDIV` | Divide the box by a number |
| **Show** | `kobienga_ebongiseli` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `pumbwa` | `JMP` | Jump to another step |
| **Compare** | `mekanisa` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `zinga` | `LOOP` | Repeat a block of code |
| **Save** | `kotisa` | `PUSH` | Save a number in the backpack |
| **Load** | `bimisa` | `POP` | Get the number back |
| **Call** | `benga` | `CALL` | Call a magic trick or function |
| **Back** | `zonga` | `RET` | Come back from the trick |
| **Stop** | `telemisa` | `HLT` | Finish the program |
| **Wait** | `eloko_te` | `NOP` | Wait a moment |

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
; My First Program in Lingala
boma box 10       ; Put 10 into the box
bakisa box 5        ; Add 5 to it (now 15!)
kobienga_ebongiseli box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ln
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ln --step
```
