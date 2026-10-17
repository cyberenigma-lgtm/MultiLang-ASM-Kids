# 🧸 Georgian / ქართული Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Georgian / ქართული**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Georgian / ქართული | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `გადატანა` | `MOV` | Put a number in a magic box |
| **Add** | `მიმატება` | `ADD` | Add a number to what's in the box |
| **Take** | `გამოკლება` | `SUB` | Take away a number from the box |
| **Times** | `გამრავლება` | `IMUL` | Multiply the box by a number |
| **Split** | `გაყოფა` | `IDIV` | Divide the box by a number |
| **Show** | `სისტემური_ზარი` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `გადახტომა` | `JMP` | Jump to another step |
| **Compare** | `შედარება` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ციკლი` | `LOOP` | Repeat a block of code |
| **Save** | `ჩადება` | `PUSH` | Save a number in the backpack |
| **Load** | `ამოღება` | `POP` | Get the number back |
| **Call** | `გამოძახება` | `CALL` | Call a magic trick or function |
| **Back** | `დაბრუნება` | `RET` | Come back from the trick |
| **Stop** | `გაჩერება` | `HLT` | Finish the program |
| **Wait** | `არაფერი` | `NOP` | Wait a moment |

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
; My First Program in Georgian / ქართული
გადატანა box 10       ; Put 10 into the box
მიმატება box 5        ; Add 5 to it (now 15!)
სისტემური_ზარი box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ka
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ka --step
```
