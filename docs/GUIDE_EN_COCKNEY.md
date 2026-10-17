# 🧸 English (Cockney) Kids Coding Guide

## Welcome!
Learn to speak to your computer in **English (Cockney)**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in English (Cockney) | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `stash` | `MOV` | Put a number in a magic box |
| **Add** | `lob` | `ADD` | Add a number to what's in the box |
| **Take** | `nick` | `SUB` | Take away a number from the box |
| **Times** | `pile_on` | `IMUL` | Multiply the box by a number |
| **Split** | `divvy` | `IDIV` | Divide the box by a number |
| **Show** | `gawk` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `scarper` | `JMP` | Jump to another step |
| **Compare** | `clock` | `CMP` | Compare two values |
| **If Equal** | `if_proper` | `JE` | Jump if numbers are identical |
| **Repeat** | `go_again` | `LOOP` | Repeat a block of code |
| **Save** | `tuck_away` | `PUSH` | Save a number in the backpack |
| **Load** | `fetch` | `POP` | Get the number back |
| **Call** | `shout` | `CALL` | Call a magic trick or function |
| **Back** | `back_to_gaff` | `RET` | Come back from the trick |
| **Stop** | `pack_it_in` | `HLT` | Finish the program |
| **Wait** | `hold_horses` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `tin` (or `rax`): Your main magic treasure box.
- `tin2` (or `rbx`): A second box for extra numbers.
- `ticker` (or `rcx`): The counter box for loops.
- `tin3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in English (Cockney)
stash tin 10       ; Put 10 into the box
lob tin 5        ; Add 5 to it (now 15!)
gawk tin         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l en_cockney
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l en_cockney --step
```
