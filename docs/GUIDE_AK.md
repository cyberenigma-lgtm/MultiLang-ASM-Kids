# 🧸 Akan Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Akan**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Akan | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `tu` | `MOV` | Put a number in a magic box |
| **Add** | `ka_ho` | `ADD` | Add a number to what's in the box |
| **Take** | `yi_fi_mu` | `SUB` | Take away a number from the box |
| **Times** | `dɔɔso` | `IMUL` | Multiply the box by a number |
| **Split** | `kyɛ` | `IDIV` | Divide the box by a number |
| **Show** | `frɛ_nhyehyɛe` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `huri` | `JMP` | Jump to another step |
| **Compare** | `toto` | `CMP` | Compare two values |
| **If Equal** | `sɛ_ɛyɛ_pɛ` | `JE` | Jump if numbers are identical |
| **Repeat** | `kɔ_to_ho` | `LOOP` | Repeat a block of code |
| **Save** | `pia_mu` | `PUSH` | Save a number in the backpack |
| **Load** | `yi_adi` | `POP` | Get the number back |
| **Call** | `frɛ` | `CALL` | Call a magic trick or function |
| **Back** | `ba_man` | `RET` | Come back from the trick |
| **Stop** | `gyina` | `HLT` | Finish the program |
| **Wait** | `hwee_nni_hɔ` | `NOP` | Wait a moment |

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
; My First Program in Akan
tu box 10       ; Put 10 into the box
ka_ho box 5        ; Add 5 to it (now 15!)
frɛ_nhyehyɛe box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ak
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ak --step
```
