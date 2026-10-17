# 🧸 Nepali / नेपाली Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Nepali / नेपाली**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Nepali / नेपाली | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `सार्नुहोस्` | `MOV` | Put a number in a magic box |
| **Add** | `जोड्नुहोस्` | `ADD` | Add a number to what's in the box |
| **Take** | `घटाउनुहोस्` | `SUB` | Take away a number from the box |
| **Times** | `गुणन_गर्नुहोस्` | `IMUL` | Multiply the box by a number |
| **Split** | `भाग_गर्नुहोस्` | `IDIV` | Divide the box by a number |
| **Show** | `प्रणाली_कल` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `उफ्रनुहोस्` | `JMP` | Jump to another step |
| **Compare** | `तुलना_गर्नुहोस्` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `लुप` | `LOOP` | Repeat a block of code |
| **Save** | `राख्नुहोस्` | `PUSH` | Save a number in the backpack |
| **Load** | `निकाल्नुहोस्` | `POP` | Get the number back |
| **Call** | `बोलाउनुहोस्` | `CALL` | Call a magic trick or function |
| **Back** | `फर्कनुहोस्` | `RET` | Come back from the trick |
| **Stop** | `रोक्नुहोस्` | `HLT` | Finish the program |
| **Wait** | `केही_छैन` | `NOP` | Wait a moment |

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
; My First Program in Nepali / नेपाली
सार्नुहोस् box 10       ; Put 10 into the box
जोड्नुहोस् box 5        ; Add 5 to it (now 15!)
प्रणाली_कल box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ne
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ne --step
```
