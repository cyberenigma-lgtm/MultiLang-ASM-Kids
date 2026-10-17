# 🧸 Greek / Ελληνικά Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Greek / Ελληνικά**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Greek / Ελληνικά | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `bale` | `MOV` | Put a number in a magic box |
| **Add** | `prosthese` | `ADD` | Add a number to what's in the box |
| **Take** | `afairese` | `SUB` | Take away a number from the box |
| **Times** | `pollaplasia` | `IMUL` | Multiply the box by a number |
| **Split** | `diairese` | `IDIV` | Divide the box by a number |
| **Show** | `diekse` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `pida` | `JMP` | Jump to another step |
| **Compare** | `sygkrine` | `CMP` | Compare two values |
| **If Equal** | `an_iso` | `JE` | Jump if numbers are identical |
| **Repeat** | `epanelabe` | `LOOP` | Repeat a block of code |
| **Save** | `apothikefse` | `PUSH` | Save a number in the backpack |
| **Load** | `anakalw` | `POP` | Get the number back |
| **Call** | `kalese` | `CALL` | Call a magic trick or function |
| **Back** | `epistrepse` | `RET` | Come back from the trick |
| **Stop** | `stamata` | `HLT` | Finish the program |
| **Wait** | `perimene` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `kouti` (or `rax`): Your main magic treasure box.
- `kouti2` (or `rbx`): A second box for extra numbers.
- `metritis` (or `rcx`): The counter box for loops.
- `kouti3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Greek / Ελληνικά
bale kouti 10       ; Put 10 into the box
prosthese kouti 5        ; Add 5 to it (now 15!)
diekse kouti         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l el
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l el --step
```
