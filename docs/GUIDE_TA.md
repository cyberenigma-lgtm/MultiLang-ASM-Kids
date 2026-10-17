# 🧸 Tamil / தமிழ் Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Tamil / தமிழ்**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Tamil / தமிழ் | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `நகர்த்து` | `MOV` | Put a number in a magic box |
| **Add** | `கூட்டு` | `ADD` | Add a number to what's in the box |
| **Take** | `கழி` | `SUB` | Take away a number from the box |
| **Times** | `பெருக்கு` | `IMUL` | Multiply the box by a number |
| **Split** | `வகு` | `IDIV` | Divide the box by a number |
| **Show** | `அமைப்பு_அழைப்பு` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `தாவு` | `JMP` | Jump to another step |
| **Compare** | `ஒப்பிடு` | `CMP` | Compare two values |
| **If Equal** | `சமம்_என்றால்` | `JE` | Jump if numbers are identical |
| **Repeat** | `சுழற்சி` | `LOOP` | Repeat a block of code |
| **Save** | `தள்ளு` | `PUSH` | Save a number in the backpack |
| **Load** | `எடு` | `POP` | Get the number back |
| **Call** | `அழை` | `CALL` | Call a magic trick or function |
| **Back** | `திரும்பு` | `RET` | Come back from the trick |
| **Stop** | `நிறுத்து` | `HLT` | Finish the program |
| **Wait** | `ஒன்றுமில்லை` | `NOP` | Wait a moment |

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
; My First Program in Tamil / தமிழ்
நகர்த்து box 10       ; Put 10 into the box
கூட்டு box 5        ; Add 5 to it (now 15!)
அமைப்பு_அழைப்பு box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l ta
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l ta --step
```
