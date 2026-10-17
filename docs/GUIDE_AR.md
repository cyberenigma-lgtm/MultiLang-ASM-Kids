# 🧸 Arabic / العربية Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Arabic / العربية**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Arabic / العربية | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `da` | `MOV` | Put a number in a magic box |
| **Add** | `ijma` | `ADD` | Add a number to what's in the box |
| **Take** | `itrah` | `SUB` | Take away a number from the box |
| **Times** | `idrib` | `IMUL` | Multiply the box by a number |
| **Split** | `iqsim` | `IDIV` | Divide the box by a number |
| **Show** | `anzur` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `iqfiz` | `JMP` | Jump to another step |
| **Compare** | `qarin` | `CMP` | Compare two values |
| **If Equal** | `iza_tasawa` | `JE` | Jump if numbers are identical |
| **Repeat** | `karrir` | `LOOP` | Repeat a block of code |
| **Save** | `ihfaz` | `PUSH` | Save a number in the backpack |
| **Load** | `istirja` | `POP` | Get the number back |
| **Call** | `nadi` | `CALL` | Call a magic trick or function |
| **Back** | `irji` | `RET` | Come back from the trick |
| **Stop** | `tawaqqaf` | `HLT` | Finish the program |
| **Wait** | `intazir` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `sunduq` (or `rax`): Your main magic treasure box.
- `sunduq2` (or `rbx`): A second box for extra numbers.
- `midad` (or `rcx`): The counter box for loops.
- `sunduq3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Arabic / العربية
da sunduq 10       ; Put 10 into the box
ijma sunduq 5        ; Add 5 to it (now 15!)
anzur sunduq         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ar
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ar --step
```
