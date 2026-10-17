# 🧸 Swedish / Svenska Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Swedish / Svenska**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Swedish / Svenska | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `stall` | `MOV` | Put a number in a magic box |
| **Add** | `addera` | `ADD` | Add a number to what's in the box |
| **Take** | `dra_av` | `SUB` | Take away a number from the box |
| **Times** | `multiplicera` | `IMUL` | Multiply the box by a number |
| **Split** | `dividera` | `IDIV` | Divide the box by a number |
| **Show** | `visa` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `hoppa` | `JMP` | Jump to another step |
| **Compare** | `jamfor` | `CMP` | Compare two values |
| **If Equal** | `om_lika` | `JE` | Jump if numbers are identical |
| **Repeat** | `upprepa` | `LOOP` | Repeat a block of code |
| **Save** | `spara` | `PUSH` | Save a number in the backpack |
| **Load** | `hamta` | `POP` | Get the number back |
| **Call** | `kalla` | `CALL` | Call a magic trick or function |
| **Back** | `tillbaka` | `RET` | Come back from the trick |
| **Stop** | `stanna` | `HLT` | Finish the program |
| **Wait** | `vanta` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `lada` (or `rax`): Your main magic treasure box.
- `lada2` (or `rbx`): A second box for extra numbers.
- `raknare` (or `rcx`): The counter box for loops.
- `lada3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Swedish / Svenska
stall lada 10       ; Put 10 into the box
addera lada 5        ; Add 5 to it (now 15!)
visa lada         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l sv
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l sv --step
```
