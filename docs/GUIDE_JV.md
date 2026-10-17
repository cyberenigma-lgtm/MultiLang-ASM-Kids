# 🧸 Javanese / Basa Jawa Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Javanese / Basa Jawa**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Javanese / Basa Jawa | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `pindah` | `MOV` | Put a number in a magic box |
| **Add** | `tambah` | `ADD` | Add a number to what's in the box |
| **Take** | `suda` | `SUB` | Take away a number from the box |
| **Times** | `ping` | `IMUL` | Multiply the box by a number |
| **Split** | `para` | `IDIV` | Divide the box by a number |
| **Show** | `timbal_sistem` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `mlumpat` | `JMP` | Jump to another step |
| **Compare** | `banding` | `CMP` | Compare two values |
| **If Equal** | `yen_podo` | `JE` | Jump if numbers are identical |
| **Repeat** | `gelung` | `LOOP` | Repeat a block of code |
| **Save** | `lebokne` | `PUSH` | Save a number in the backpack |
| **Load** | `wetokne` | `POP` | Get the number back |
| **Call** | `timbal` | `CALL` | Call a magic trick or function |
| **Back** | `bali` | `RET` | Come back from the trick |
| **Stop** | `mandeg` | `HLT` | Finish the program |
| **Wait** | `ora_ono` | `NOP` | Wait a moment |

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
; My First Program in Javanese / Basa Jawa
pindah box 10       ; Put 10 into the box
tambah box 5        ; Add 5 to it (now 15!)
timbal_sistem box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l jv
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l jv --step
```
