# 🧸 Thai / ไทย Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Thai / ไทย**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Thai / ไทย | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `sai` | `MOV` | Put a number in a magic box |
| **Add** | `buak` | `ADD` | Add a number to what's in the box |
| **Take** | `lop` | `SUB` | Take away a number from the box |
| **Times** | `khun` | `IMUL` | Multiply the box by a number |
| **Split** | `han` | `IDIV` | Divide the box by a number |
| **Show** | `sadang` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `kradot` | `JMP` | Jump to another step |
| **Compare** | `priap` | `CMP` | Compare two values |
| **If Equal** | `tha_thao` | `JE` | Jump if numbers are identical |
| **Repeat** | `sam` | `LOOP` | Repeat a block of code |
| **Save** | `banthuk` | `PUSH` | Save a number in the backpack |
| **Load** | `riak` | `POP` | Get the number back |
| **Call** | `riak_chai` | `CALL` | Call a magic trick or function |
| **Back** | `klap` | `RET` | Come back from the trick |
| **Stop** | `yut` | `HLT` | Finish the program |
| **Wait** | `ro` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `klong` (or `rax`): Your main magic treasure box.
- `klong2` (or `rbx`): A second box for extra numbers.
- `tuanap` (or `rcx`): The counter box for loops.
- `klong3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Thai / ไทย
sai klong 10       ; Put 10 into the box
buak klong 5        ; Add 5 to it (now 15!)
sadang klong         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l th
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l th --step
```
