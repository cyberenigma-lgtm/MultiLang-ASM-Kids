# 🧸 Greenlandic / Kalaallisut Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Greenlandic / Kalaallisut**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Greenlandic / Kalaallisut | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `nussorpaa` | `MOV` | Put a number in a magic box |
| **Add** | `ilannguppaa` | `ADD` | Add a number to what's in the box |
| **Take** | `peerpaa` | `SUB` | Take away a number from the box |
| **Times** | `amerlisarpaa` | `IMUL` | Multiply the box by a number |
| **Split** | `aveqqippaa` | `IDIV` | Divide the box by a number |
| **Show** | `atortup_qaaqqussutaa` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `pissippoq` | `JMP` | Jump to another step |
| **Compare** | `nalilersorpaa` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `kaaviiaartoq` | `LOOP` | Repeat a block of code |
| **Save** | `manguppaa` | `PUSH` | Save a number in the backpack |
| **Load** | `nussorpaa_ane` | `POP` | Get the number back |
| **Call** | `torluppaa` | `CALL` | Call a magic trick or function |
| **Back** | `uteqqippoq` | `RET` | Come back from the trick |
| **Stop** | `unitsiguk` | `HLT` | Finish the program |
| **Wait** | `soqanngilaq` | `NOP` | Wait a moment |

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
; My First Program in Greenlandic / Kalaallisut
nussorpaa box 10       ; Put 10 into the box
ilannguppaa box 5        ; Add 5 to it (now 15!)
atortup_qaaqqussutaa box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l kl
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l kl --step
```
