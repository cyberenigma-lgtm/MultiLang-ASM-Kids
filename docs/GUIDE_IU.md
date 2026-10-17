# 🧸 Inuktitut / ᐃᓄᒃᑎᑐᑦ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Inuktitut / ᐃᓄᒃᑎᑐᑦ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Inuktitut / ᐃᓄᒃᑎᑐᑦ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ᓅᑎᕆᕗᖅ` | `MOV` | Put a number in a magic box |
| **Add** | `ᐃᓚᓯᕗᖅ` | `ADD` | Add a number to what's in the box |
| **Take** | `ᐃᓚᖔᖅᐹ` | `SUB` | Take away a number from the box |
| **Times** | `ᐊᒥᓱᖑᖅᑎᐹ` | `IMUL` | Multiply the box by a number |
| **Split** | `ᐊᕕᒃᑐᖅᐹ` | `IDIV` | Divide the box by a number |
| **Show** | `ᖃᕆᑕᐅᔭᐅᑉ_ᑐᒃᓯᕋᐅᑎᖓ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ᖃᖓᑕᕗᖅ` | `JMP` | Jump to another step |
| **Compare** | `ᐊᔾᔨᒌᖕᓂᖏᑦ` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ᑲᐃᕙᓪᓚᒍᑎ` | `LOOP` | Repeat a block of code |
| **Save** | `ᐃᓯᖅᑎᑉᐹ` | `PUSH` | Save a number in the backpack |
| **Load** | `ᐊᓂᑎᑉᐹ` | `POP` | Get the number back |
| **Call** | `ᖃᐃᖁᔨᕗᖅ` | `CALL` | Call a magic trick or function |
| **Back** | `ᐅᑎᖅᐳᖅ` | `RET` | Come back from the trick |
| **Stop** | `ᓄᖅᑲᕆᑦ` | `HLT` | Finish the program |
| **Wait** | `ᓱᓇᖃᙱᑦᑐᖅ` | `NOP` | Wait a moment |

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
; My First Program in Inuktitut / ᐃᓄᒃᑎᑐᑦ
ᓅᑎᕆᕗᖅ box 10       ; Put 10 into the box
ᐃᓚᓯᕗᖅ box 5        ; Add 5 to it (now 15!)
ᖃᕆᑕᐅᔭᐅᑉ_ᑐᒃᓯᕋᐅᑎᖓ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l iu
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l iu --step
```
