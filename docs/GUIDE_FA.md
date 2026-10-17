# 🧸 Persian / فارسی Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Persian / فارسی**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Persian / فارسی | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `bezor` | `MOV` | Put a number in a magic box |
| **Add** | `jam` | `ADD` | Add a number to what's in the box |
| **Take** | `kam` | `SUB` | Take away a number from the box |
| **Times** | `zarb` | `IMUL` | Multiply the box by a number |
| **Split** | `taghsim` | `IDIV` | Divide the box by a number |
| **Show** | `neshon` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `bepar` | `JMP` | Jump to another step |
| **Compare** | `moghayeze` | `CMP` | Compare two values |
| **If Equal** | `agar_barabar` | `JE` | Jump if numbers are identical |
| **Repeat** | `tekrar` | `LOOP` | Repeat a block of code |
| **Save** | `zakhire` | `PUSH` | Save a number in the backpack |
| **Load** | `bardar` | `POP` | Get the number back |
| **Call** | `seda` | `CALL` | Call a magic trick or function |
| **Back** | `bargasht` | `RET` | Come back from the trick |
| **Stop** | `ist` | `HLT` | Finish the program |
| **Wait** | `sabr` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `jabe` (or `rax`): Your main magic treasure box.
- `jabe2` (or `rbx`): A second box for extra numbers.
- `shomarande` (or `rcx`): The counter box for loops.
- `jabe3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Persian / فارسی
bezor jabe 10       ; Put 10 into the box
jam jabe 5        ; Add 5 to it (now 15!)
neshon jabe         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l fa
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l fa --step
```
