# 🧸 Shona / ChiShona Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Shona / ChiShona**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Shona / ChiShona | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `fambisa` | `MOV` | Put a number in a magic box |
| **Add** | `wedzera` | `ADD` | Add a number to what's in the box |
| **Take** | `bvisa` | `SUB` | Take away a number from the box |
| **Times** | `wanza` | `IMUL` | Multiply the box by a number |
| **Split** | `gova` | `IDIV` | Divide the box by a number |
| **Show** | `kudana_sisitimu` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `svetuka` | `JMP` | Jump to another step |
| **Compare** | `enzanisa` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `denderedzwa` | `LOOP` | Repeat a block of code |
| **Save** | `pinda` | `PUSH` | Save a number in the backpack |
| **Load** | `buda` | `POP` | Get the number back |
| **Call** | `daidza` | `CALL` | Call a magic trick or function |
| **Back** | `dzoka` | `RET` | Come back from the trick |
| **Stop** | `mira` | `HLT` | Finish the program |
| **Wait** | `hapana` | `NOP` | Wait a moment |

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
; My First Program in Shona / ChiShona
fambisa box 10       ; Put 10 into the box
wedzera box 5        ; Add 5 to it (now 15!)
kudana_sisitimu box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l sn
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l sn --step
```
