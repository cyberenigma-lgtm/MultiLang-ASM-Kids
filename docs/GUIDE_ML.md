# 🧸 Malayalam / മലയാളം Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Malayalam / മലയാളം**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Malayalam / മലയാളം | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `നീക്കുക` | `MOV` | Put a number in a magic box |
| **Add** | `കൂട്ടുക` | `ADD` | Add a number to what's in the box |
| **Take** | `കുറയ്ക്കുക` | `SUB` | Take away a number from the box |
| **Times** | `ഗുണിക്കുക` | `IMUL` | Multiply the box by a number |
| **Split** | `ഹരിക്കുക` | `IDIV` | Divide the box by a number |
| **Show** | `സിസ്റ്റം_കോൾ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ചാടുക` | `JMP` | Jump to another step |
| **Compare** | `താരതമ്യം` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ചക്രം` | `LOOP` | Repeat a block of code |
| **Save** | `നിക്ഷേപിക്കുക` | `PUSH` | Save a number in the backpack |
| **Load** | `എടുക്കുക` | `POP` | Get the number back |
| **Call** | `വിളിക്കുക` | `CALL` | Call a magic trick or function |
| **Back** | `തിരികെ` | `RET` | Come back from the trick |
| **Stop** | `നിർത്തുക` | `HLT` | Finish the program |
| **Wait** | `ഒന്നുമില്ല` | `NOP` | Wait a moment |

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
; My First Program in Malayalam / മലയാളം
നീക്കുക box 10       ; Put 10 into the box
കൂട്ടുക box 5        ; Add 5 to it (now 15!)
സിസ്റ്റം_കോൾ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ml
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ml --step
```
