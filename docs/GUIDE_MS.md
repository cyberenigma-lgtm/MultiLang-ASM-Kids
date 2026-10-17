# 🧸 Malay / Bahasa Melayu Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Malay / Bahasa Melayu**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Malay / Bahasa Melayu | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `letak` | `MOV` | Put a number in a magic box |
| **Add** | `tambah` | `ADD` | Add a number to what's in the box |
| **Take** | `tolak` | `SUB` | Take away a number from the box |
| **Times** | `darab` | `IMUL` | Multiply the box by a number |
| **Split** | `bahagi` | `IDIV` | Divide the box by a number |
| **Show** | `tunjuk` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `lompat` | `JMP` | Jump to another step |
| **Compare** | `banding` | `CMP` | Compare two values |
| **If Equal** | `jika_sama` | `JE` | Jump if numbers are identical |
| **Repeat** | `ulang` | `LOOP` | Repeat a block of code |
| **Save** | `simpan` | `PUSH` | Save a number in the backpack |
| **Load** | `muat` | `POP` | Get the number back |
| **Call** | `panggil` | `CALL` | Call a magic trick or function |
| **Back** | `kembali` | `RET` | Come back from the trick |
| **Stop** | `berhenti` | `HLT` | Finish the program |
| **Wait** | `tunggu` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `kotak` (or `rax`): Your main magic treasure box.
- `kotak2` (or `rbx`): A second box for extra numbers.
- `pembilang` (or `rcx`): The counter box for loops.
- `kotak3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Malay / Bahasa Melayu
letak kotak 10       ; Put 10 into the box
tambah kotak 5        ; Add 5 to it (now 15!)
tunjuk kotak         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ms
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ms --step
```
