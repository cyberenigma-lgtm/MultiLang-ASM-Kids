# 🧸 Fijian / Na Vosa Vakaviti Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Fijian / Na Vosa Vakaviti**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Fijian / Na Vosa Vakaviti | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `tosoya` | `MOV` | Put a number in a magic box |
| **Add** | `kuria` | `ADD` | Add a number to what's in the box |
| **Take** | `kauta_tani` | `SUB` | Take away a number from the box |
| **Times** | `vakalewena` | `IMUL` | Multiply the box by a number |
| **Split** | `wasea` | `IDIV` | Divide the box by a number |
| **Show** | `kaci_ni_ivakarau` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ria` | `JMP` | Jump to another step |
| **Compare** | `vakatautauvatataka` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `wavoki` | `LOOP` | Repeat a block of code |
| **Save** | `biliga` | `PUSH` | Save a number in the backpack |
| **Load** | `kauta_mai` | `POP` | Get the number back |
| **Call** | `kaciva` | `CALL` | Call a magic trick or function |
| **Back** | `lesu` | `RET` | Come back from the trick |
| **Stop** | `cava` | `HLT` | Finish the program |
| **Wait** | `sega_na_ka` | `NOP` | Wait a moment |

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
; My First Program in Fijian / Na Vosa Vakaviti
tosoya box 10       ; Put 10 into the box
kuria box 5        ; Add 5 to it (now 15!)
kaci_ni_ivakarau box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l fj
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l fj --step
```
