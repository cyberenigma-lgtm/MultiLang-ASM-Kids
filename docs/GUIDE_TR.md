# 🧸 Turkish / Türkçe Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Turkish / Türkçe**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Turkish / Türkçe | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `koy` | `MOV` | Put a number in a magic box |
| **Add** | `ekle` | `ADD` | Add a number to what's in the box |
| **Take** | `cikar` | `SUB` | Take away a number from the box |
| **Times** | `carp` | `IMUL` | Multiply the box by a number |
| **Split** | `bol` | `IDIV` | Divide the box by a number |
| **Show** | `goster` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `atla` | `JMP` | Jump to another step |
| **Compare** | `karsilas` | `CMP` | Compare two values |
| **If Equal** | `esitse` | `JE` | Jump if numbers are identical |
| **Repeat** | `tekrarla` | `LOOP` | Repeat a block of code |
| **Save** | `sakla` | `PUSH` | Save a number in the backpack |
| **Load** | `al` | `POP` | Get the number back |
| **Call** | `cagir` | `CALL` | Call a magic trick or function |
| **Back** | `don` | `RET` | Come back from the trick |
| **Stop** | `dur` | `HLT` | Finish the program |
| **Wait** | `bekle` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `kutu` (or `rax`): Your main magic treasure box.
- `kutu2` (or `rbx`): A second box for extra numbers.
- `sayac` (or `rcx`): The counter box for loops.
- `kutu3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Turkish / Türkçe
koy kutu 10       ; Put 10 into the box
ekle kutu 5        ; Add 5 to it (now 15!)
goster kutu         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l tr
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l tr --step
```
