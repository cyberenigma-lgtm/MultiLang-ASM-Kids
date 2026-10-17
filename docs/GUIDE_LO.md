# 🧸 Lao / ພາສາລາວ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Lao / ພາສາລາວ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Lao / ພາສາລາວ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ຍ້າຍ` | `MOV` | Put a number in a magic box |
| **Add** | `ບວກ` | `ADD` | Add a number to what's in the box |
| **Take** | `ລົບ` | `SUB` | Take away a number from the box |
| **Times** | `ຄູນ` | `IMUL` | Multiply the box by a number |
| **Split** | `ຫານ` | `IDIV` | Divide the box by a number |
| **Show** | `ການເອີ້ນລະບົບ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ເຕັ້ນ` | `JMP` | Jump to another step |
| **Compare** | `ປຽບທຽບ` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ຮອບວຽນ` | `LOOP` | Repeat a block of code |
| **Save** | `ໃສ່` | `PUSH` | Save a number in the backpack |
| **Load** | `ດຶງອອກ` | `POP` | Get the number back |
| **Call** | `ເອີ້ນ` | `CALL` | Call a magic trick or function |
| **Back** | `ກັບຄືນ` | `RET` | Come back from the trick |
| **Stop** | `ຢຸດ` | `HLT` | Finish the program |
| **Wait** | `ບໍ່ມີຫຍັງ` | `NOP` | Wait a moment |

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
; My First Program in Lao / ພາສາລາວ
ຍ້າຍ box 10       ; Put 10 into the box
ບວກ box 5        ; Add 5 to it (now 15!)
ການເອີ້ນລະບົບ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l lo
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l lo --step
```
