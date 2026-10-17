# 🧸 Korean / 한국어 Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Korean / 한국어**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Korean / 한국어 | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `neoh` | `MOV` | Put a number in a magic box |
| **Add** | `deohae` | `ADD` | Add a number to what's in the box |
| **Take** | `ppaera` | `SUB` | Take away a number from the box |
| **Times** | `gophae` | `IMUL` | Multiply the box by a number |
| **Split** | `nanwo` | `IDIV` | Divide the box by a number |
| **Show** | `boyeo` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ttwieo` | `JMP` | Jump to another step |
| **Compare** | `bigyo` | `CMP` | Compare two values |
| **If Equal** | `gat_damyeon` | `JE` | Jump if numbers are identical |
| **Repeat** | `banbok` | `LOOP` | Repeat a block of code |
| **Save** | `jeojang` | `PUSH` | Save a number in the backpack |
| **Load** | `bullaewa` | `POP` | Get the number back |
| **Call** | `bulleo` | `CALL` | Call a magic trick or function |
| **Back** | `doraga` | `RET` | Come back from the trick |
| **Stop** | `meomchwo` | `HLT` | Finish the program |
| **Wait** | `gidaryeo` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `sangja` (or `rax`): Your main magic treasure box.
- `sangja2` (or `rbx`): A second box for extra numbers.
- `gesangi` (or `rcx`): The counter box for loops.
- `sangja3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Korean / 한국어
neoh sangja 10       ; Put 10 into the box
deohae sangja 5        ; Add 5 to it (now 15!)
boyeo sangja         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ko
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ko --step
```
