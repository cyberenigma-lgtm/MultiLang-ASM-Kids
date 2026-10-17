# 🧸 Setswana Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Setswana**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Setswana | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `tsamaisa` | `MOV` | Put a number in a magic box |
| **Add** | `oketsa` | `ADD` | Add a number to what's in the box |
| **Take** | `fokotsa` | `SUB` | Take away a number from the box |
| **Times** | `atafatsa` | `IMUL` | Multiply the box by a number |
| **Split** | `kgaoganya` | `IDIV` | Divide the box by a number |
| **Show** | `pitso_ya_tsamaiso` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `tlola` | `JMP` | Jump to another step |
| **Compare** | `tshwantshanya` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `tidiko` | `LOOP` | Repeat a block of code |
| **Save** | `tsenya` | `PUSH` | Save a number in the backpack |
| **Load** | `ntsha` | `POP` | Get the number back |
| **Call** | `bipitsa` | `CALL` | Call a magic trick or function |
| **Back** | `boa` | `RET` | Come back from the trick |
| **Stop** | `ema` | `HLT` | Finish the program |
| **Wait** | `ga_go_sepe` | `NOP` | Wait a moment |

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
; My First Program in Setswana
tsamaisa box 10       ; Put 10 into the box
oketsa box 5        ; Add 5 to it (now 15!)
pitso_ya_tsamaiso box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l tn
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l tn --step
```
