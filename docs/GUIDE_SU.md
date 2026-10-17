# 🧸 Sundanese / Basa Sunda Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Sundanese / Basa Sunda**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Sundanese / Basa Sunda | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `pindah` | `MOV` | Put a number in a magic box |
| **Add** | `tambah` | `ADD` | Add a number to what's in the box |
| **Take** | `kurang` | `SUB` | Take away a number from the box |
| **Times** | `kali` | `IMUL` | Multiply the box by a number |
| **Split** | `bagi` | `IDIV` | Divide the box by a number |
| **Show** | `gero_sistem` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `luncat` | `JMP` | Jump to another step |
| **Compare** | `banding` | `CMP` | Compare two values |
| **If Equal** | `lamun_sarua` | `JE` | Jump if numbers are identical |
| **Repeat** | `gelung` | `LOOP` | Repeat a block of code |
| **Save** | `asupkeun` | `PUSH` | Save a number in the backpack |
| **Load** | `aluarkeun` | `POP` | Get the number back |
| **Call** | `ngagero` | `CALL` | Call a magic trick or function |
| **Back** | `balik` | `RET` | Come back from the trick |
| **Stop** | `eureun` | `HLT` | Finish the program |
| **Wait** | `kosong` | `NOP` | Wait a moment |

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
; My First Program in Sundanese / Basa Sunda
pindah box 10       ; Put 10 into the box
tambah box 5        ; Add 5 to it (now 15!)
gero_sistem box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l su
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l su --step
```
