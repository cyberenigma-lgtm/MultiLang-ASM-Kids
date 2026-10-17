# 🧸 Venda / Tshivenḓa Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Venda / Tshivenḓa**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Venda / Tshivenḓa | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `sudzusa` | `MOV` | Put a number in a magic box |
| **Add** | `engedza` | `ADD` | Add a number to what's in the box |
| **Take** | `tusa` | `SUB` | Take away a number from the box |
| **Times** | `andisa` | `IMUL` | Multiply the box by a number |
| **Split** | `kovha` | `IDIV` | Divide the box by a number |
| **Show** | `uvhidza_sisitemu` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `fhufha` | `JMP` | Jump to another step |
| **Compare** | `vhambedza` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `mutingo` | `LOOP` | Repeat a block of code |
| **Save** | `dhengedza` | `PUSH` | Save a number in the backpack |
| **Load** | `bvisa` | `POP` | Get the number back |
| **Call** | `vhidza` | `CALL` | Call a magic trick or function |
| **Back** | `vhuyelela` | `RET` | Come back from the trick |
| **Stop** | `ima` | `HLT` | Finish the program |
| **Wait** | `a_huna_tshithu` | `NOP` | Wait a moment |

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
; My First Program in Venda / Tshivenḓa
sudzusa box 10       ; Put 10 into the box
engedza box 5        ; Add 5 to it (now 15!)
uvhidza_sisitemu box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ve
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ve --step
```
