# 🧸 Deutsch (Bavarian) Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Deutsch (Bavarian)**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Deutsch (Bavarian) | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `pack` | `MOV` | Put a number in a magic box |
| **Add** | `dazu` | `ADD` | Add a number to what's in the box |
| **Take** | `weg` | `SUB` | Take away a number from the box |
| **Times** | `moi` | `IMUL` | Multiply the box by a number |
| **Split** | `teils` | `IDIV` | Divide the box by a number |
| **Show** | `schau` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `hopf` | `JMP` | Jump to another step |
| **Compare** | `schaug_o` | `CMP` | Compare two values |
| **If Equal** | `wanns_basst` | `JE` | Jump if numbers are identical |
| **Repeat** | `nochamoi` | `LOOP` | Repeat a block of code |
| **Save** | `steck_ei` | `PUSH` | Save a number in the backpack |
| **Load** | `hols_raus` | `POP` | Get the number back |
| **Call** | `gruaf` | `CALL` | Call a magic trick or function |
| **Back** | `zruck` | `RET` | Come back from the trick |
| **Stop** | `aus_is` | `HLT` | Finish the program |
| **Wait** | `hock_di` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `kistn` (or `rax`): Your main magic treasure box.
- `kistn2` (or `rbx`): A second box for extra numbers.
- `zehla` (or `rcx`): The counter box for loops.
- `kistn3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Deutsch (Bavarian)
pack kistn 10       ; Put 10 into the box
dazu kistn 5        ; Add 5 to it (now 15!)
schau kistn         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l de_bay
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l de_bay --step
```
