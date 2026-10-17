# 🧸 Kyrgyz / Кыргызча Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Kyrgyz / Кыргызча**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Kyrgyz / Кыргызча | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `жылдыруу` | `MOV` | Put a number in a magic box |
| **Add** | `кошуу` | `ADD` | Add a number to what's in the box |
| **Take** | `кемитүү` | `SUB` | Take away a number from the box |
| **Times** | `көбөйтүү` | `IMUL` | Multiply the box by a number |
| **Split** | `бөлүү` | `IDIV` | Divide the box by a number |
| **Show** | `системалык_чакыруу` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `секирүү` | `JMP` | Jump to another step |
| **Compare** | `салыштыруу` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `цикл` | `LOOP` | Repeat a block of code |
| **Save** | `киргизүү` | `PUSH` | Save a number in the backpack |
| **Load** | `алуу` | `POP` | Get the number back |
| **Call** | `чакыруу` | `CALL` | Call a magic trick or function |
| **Back** | `кайтуу` | `RET` | Come back from the trick |
| **Stop** | `токто` | `HLT` | Finish the program |
| **Wait** | `эч_нерсе` | `NOP` | Wait a moment |

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
; My First Program in Kyrgyz / Кыргызча
жылдыруу box 10       ; Put 10 into the box
кошуу box 5        ; Add 5 to it (now 15!)
системалык_чакыруу box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ky
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ky --step
```
