# 🧸 Hmong / Hmoob Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Hmong / Hmoob**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Hmong / Hmoob | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `tsiv` | `MOV` | Put a number in a magic box |
| **Add** | `ntxiv` | `ADD` | Add a number to what's in the box |
| **Take** | `rho` | `SUB` | Take away a number from the box |
| **Times** | `muab_ntau` | `IMUL` | Multiply the box by a number |
| **Split** | `faib` | `IDIV` | Divide the box by a number |
| **Show** | `hu_kab_ke` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `dhia` | `JMP` | Jump to another step |
| **Compare** | `pab_phev` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `voj_kuj` | `LOOP` | Repeat a block of code |
| **Save** | `thawb` | `PUSH` | Save a number in the backpack |
| **Load** | `rub_tawm` | `POP` | Get the number back |
| **Call** | `hu` | `CALL` | Call a magic trick or function |
| **Back** | `rov_qab` | `RET` | Come back from the trick |
| **Stop** | `nres` | `HLT` | Finish the program |
| **Wait** | `tsis_muaj_dabtsi` | `NOP` | Wait a moment |

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
; My First Program in Hmong / Hmoob
tsiv box 10       ; Put 10 into the box
ntxiv box 5        ; Add 5 to it (now 15!)
hu_kab_ke box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l hmn
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l hmn --step
```
