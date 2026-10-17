# 🧸 Japanese / 日本語 Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Japanese / 日本語**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Japanese / 日本語 | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `irete` | `MOV` | Put a number in a magic box |
| **Add** | `tashite` | `ADD` | Add a number to what's in the box |
| **Take** | `hiite` | `SUB` | Take away a number from the box |
| **Times** | `kakete` | `IMUL` | Multiply the box by a number |
| **Split** | `watte` | `IDIV` | Divide the box by a number |
| **Show** | `misete` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `tonde` | `JMP` | Jump to another step |
| **Compare** | `kurabete` | `CMP` | Compare two values |
| **If Equal** | `onaji_nara` | `JE` | Jump if numbers are identical |
| **Repeat** | `kurikaeshite` | `LOOP` | Repeat a block of code |
| **Save** | `nokoshite` | `PUSH` | Save a number in the backpack |
| **Load** | `toridashite` | `POP` | Get the number back |
| **Call** | `yonde` | `CALL` | Call a magic trick or function |
| **Back** | `modotte` | `RET` | Come back from the trick |
| **Stop** | `tomare` | `HLT` | Finish the program |
| **Wait** | `matte` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `hako` (or `rax`): Your main magic treasure box.
- `hako2` (or `rbx`): A second box for extra numbers.
- `kanta` (or `rcx`): The counter box for loops.
- `hako3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Japanese / 日本語
irete hako 10       ; Put 10 into the box
tashite hako 5        ; Add 5 to it (now 15!)
misete hako         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ja
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ja --step
```
