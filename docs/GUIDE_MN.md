# 🧸 Mongolian / Монгол Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Mongolian / Монгол**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Mongolian / Монгол | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `зөөх` | `MOV` | Put a number in a magic box |
| **Add** | `нэмэх` | `ADD` | Add a number to what's in the box |
| **Take** | `хасах` | `SUB` | Take away a number from the box |
| **Times** | `үржүүлэх` | `IMUL` | Multiply the box by a number |
| **Split** | `хуваах` | `IDIV` | Divide the box by a number |
| **Show** | `системийн_дуудалт` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `үсрэх` | `JMP` | Jump to another step |
| **Compare** | `харьцуулах` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `давталт` | `LOOP` | Repeat a block of code |
| **Save** | `түлхэх` | `PUSH` | Save a number in the backpack |
| **Load** | `татах` | `POP` | Get the number back |
| **Call** | `дуудах` | `CALL` | Call a magic trick or function |
| **Back** | `буцах` | `RET` | Come back from the trick |
| **Stop** | `зогс` | `HLT` | Finish the program |
| **Wait** | `юу_ч_биш` | `NOP` | Wait a moment |

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
; My First Program in Mongolian / Монгол
зөөх box 10       ; Put 10 into the box
нэмэх box 5        ; Add 5 to it (now 15!)
системийн_дуудалт box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l mn
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l mn --step
```
