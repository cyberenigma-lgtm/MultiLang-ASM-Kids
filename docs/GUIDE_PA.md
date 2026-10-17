# 🧸 Punjabi / ਪੰਜਾਬੀ Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Punjabi / ਪੰਜਾਬੀ**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Punjabi / ਪੰਜਾਬੀ | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `ਭੇਜੋ` | `MOV` | Put a number in a magic box |
| **Add** | `ਜੋੜੋ` | `ADD` | Add a number to what's in the box |
| **Take** | `ਘਟਾਓ` | `SUB` | Take away a number from the box |
| **Times** | `ਗੁਣਾ` | `IMUL` | Multiply the box by a number |
| **Split** | `ਵੰਡੋ` | `IDIV` | Divide the box by a number |
| **Show** | `ਸਿਸਟਮ_ਕਾਲ` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `ਛਾਲ` | `JMP` | Jump to another step |
| **Compare** | `ਤੁਲਨਾ` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `ਚੱਕਰ` | `LOOP` | Repeat a block of code |
| **Save** | `ਪਾਓ` | `PUSH` | Save a number in the backpack |
| **Load** | `ਕੱਢੋ` | `POP` | Get the number back |
| **Call** | `ਬੁਲਾਓ` | `CALL` | Call a magic trick or function |
| **Back** | `ਵਾਪਸ` | `RET` | Come back from the trick |
| **Stop** | `ਰੁਕੋ` | `HLT` | Finish the program |
| **Wait** | `ਕੁਝ_ਨਹੀਂ` | `NOP` | Wait a moment |

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
; My First Program in Punjabi / ਪੰਜਾਬੀ
ਭੇਜੋ box 10       ; Put 10 into the box
ਜੋੜੋ box 5        ; Add 5 to it (now 15!)
ਸਿਸਟਮ_ਕਾਲ box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l pa
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l pa --step
```
