# 🧸 Tongan / Lea Faka-Tonga Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Tongan / Lea Faka-Tonga**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Tongan / Lea Faka-Tonga | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `hiki` | `MOV` | Put a number in a magic box |
| **Add** | `tanaki` | `ADD` | Add a number to what's in the box |
| **Take** | `toʻo` | `SUB` | Take away a number from the box |
| **Times** | `liungofua` | `IMUL` | Multiply the box by a number |
| **Split** | `vahevahe` | `IDIV` | Divide the box by a number |
| **Show** | `ui_fakatoka` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `hopohopo` | `JMP` | Jump to another step |
| **Compare** | `fakafanongo` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `takai` | `LOOP` | Repeat a block of code |
| **Save** | `teke` | `PUSH` | Save a number in the backpack |
| **Load** | `fusi` | `POP` | Get the number back |
| **Call** | `ui` | `CALL` | Call a magic trick or function |
| **Back** | `foki` | `RET` | Come back from the trick |
| **Stop** | `taʻofi` | `HLT` | Finish the program |
| **Wait** | `hala_ha_meʻa` | `NOP` | Wait a moment |

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
; My First Program in Tongan / Lea Faka-Tonga
hiki box 10       ; Put 10 into the box
tanaki box 5        ; Add 5 to it (now 15!)
ui_fakatoka box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l to
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l to --step
```
