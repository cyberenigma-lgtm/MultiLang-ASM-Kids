# 🧸 Hawaiian / ʻŌlelo Hawaiʻi Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Hawaiian / ʻŌlelo Hawaiʻi**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Hawaiian / ʻŌlelo Hawaiʻi | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `neʻe` | `MOV` | Put a number in a magic box |
| **Add** | `hoʻohui` | `ADD` | Add a number to what's in the box |
| **Take** | `kāpae` | `SUB` | Take away a number from the box |
| **Times** | `hoʻomāhuahua` | `IMUL` | Multiply the box by a number |
| **Split** | `māhele` | `IDIV` | Divide the box by a number |
| **Show** | `kāhea_ʻōnaehana` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `lele` | `JMP` | Jump to another step |
| **Compare** | `hoʻohālike` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `luka` | `LOOP` | Repeat a block of code |
| **Save** | `pahu` | `PUSH` | Save a number in the backpack |
| **Load** | `huki` | `POP` | Get the number back |
| **Call** | `kāhea` | `CALL` | Call a magic trick or function |
| **Back** | `hoʻi` | `RET` | Come back from the trick |
| **Stop** | `hoʻomaha` | `HLT` | Finish the program |
| **Wait** | `ʻaʻohe_mea` | `NOP` | Wait a moment |

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
; My First Program in Hawaiian / ʻŌlelo Hawaiʻi
neʻe box 10       ; Put 10 into the box
hoʻohui box 5        ; Add 5 to it (now 15!)
kāhea_ʻōnaehana box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l haw
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l haw --step
```
