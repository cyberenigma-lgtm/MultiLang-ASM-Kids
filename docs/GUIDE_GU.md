# 🧸 Gujarati / ગુજરાતી Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Gujarati / ગુજરાતી**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Gujarati / ગુજરાતી | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ખસેડો` | `MOV` | Put a number in a magic box |
| **Add** | `ઉમેરો` | `ADD` | Add a number to what's in the box |
| **Take** | `બાદ_કરો` | `SUB` | Take away a number from the box |
| **Times** | `ગુણાકાર` | `IMUL` | Multiply the box by a number |
| **Split** | `ભાગાકાર` | `IDIV` | Divide the box by a number |
| **Show** | `સિસ્ટમ_કૉલ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `કૂદો` | `JMP` | Jump to another step |
| **Compare** | `સરખામણી` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `લૂપ` | `LOOP` | Repeat a block of code |
| **Save** | `મૂકો` | `PUSH` | Save a number in the backpack |
| **Load** | `કાઢો` | `POP` | Get the number back |
| **Call** | `બોલાવો` | `CALL` | Call a magic trick or function |
| **Back** | `પાછા` | `RET` | Come back from the trick |
| **Stop** | `અટકો` | `HLT` | Finish the program |
| **Wait** | `કંઈ_નહીં` | `NOP` | Wait a moment |

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
; My First Program in Gujarati / ગુજરાતી
ખસેડો box 10       ; Put 10 into the box
ઉમેરો box 5        ; Add 5 to it (now 15!)
સિસ્ટમ_કૉલ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l gu
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l gu --step
```
