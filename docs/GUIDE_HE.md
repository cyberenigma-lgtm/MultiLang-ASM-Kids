# 🧸 Hebrew / עברית Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Hebrew / עברית**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Hebrew / עברית | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `sim` | `MOV` | Put a number in a magic box |
| **Add** | `hosef` | `ADD` | Add a number to what's in the box |
| **Take** | `haser` | `SUB` | Take away a number from the box |
| **Times** | `hakhpel` | `IMUL` | Multiply the box by a number |
| **Split** | `halk` | `IDIV` | Divide the box by a number |
| **Show** | `hare` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `kfotz` | `JMP` | Jump to another step |
| **Compare** | `hasve` | `CMP` | Compare two values |
| **If Equal** | `im_shave` | `JE` | Jump if numbers are identical |
| **Repeat** | `hazor` | `LOOP` | Repeat a block of code |
| **Save** | `shmor` | `PUSH` | Save a number in the backpack |
| **Load** | `tean` | `POP` | Get the number back |
| **Call** | `kra` | `CALL` | Call a magic trick or function |
| **Back** | `hazor_ahora` | `RET` | Come back from the trick |
| **Stop** | `atzor` | `HLT` | Finish the program |
| **Wait** | `hamten` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `kufsa` (or `rax`): Your main magic treasure box.
- `kufsa2` (or `rbx`): A second box for extra numbers.
- `mone` (or `rcx`): The counter box for loops.
- `kufsa3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in Hebrew / עברית
sim kufsa 10       ; Put 10 into the box
hosef kufsa 5        ; Add 5 to it (now 15!)
hare kufsa         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l he
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l he --step
```
