# 🧸 Belgian French / Français (Belgique) Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Belgian French / Français (Belgique)**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Belgian French / Français (Belgique) | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `copier` | `MOV` | Put a number in a magic box |
| **Add** | `ajouter` | `ADD` | Add a number to what's in the box |
| **Take** | `soustraire` | `SUB` | Take away a number from the box |
| **Times** | `multiplier` | `IMUL` | Multiply the box by a number |
| **Split** | `diviser` | `IDIV` | Divide the box by a number |
| **Show** | `appel_systeme` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `sauter` | `JMP` | Jump to another step |
| **Compare** | `comparer` | `CMP` | Compare two values |
| **If Equal** | `si_egal` | `JE` | Jump if numbers are identical |
| **Repeat** | `tourner` | `LOOP` | Repeat a block of code |
| **Save** | `pousser` | `PUSH` | Save a number in the backpack |
| **Load** | `tirer` | `POP` | Get the number back |
| **Call** | `appeler` | `CALL` | Call a magic trick or function |
| **Back** | `revenir` | `RET` | Come back from the trick |
| **Stop** | `stop` | `HLT` | Finish the program |
| **Wait** | `rien` | `NOP` | Wait a moment |

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
; My First Program in Belgian French / Français (Belgique)
copier box 10       ; Put 10 into the box
ajouter box 5        ; Add 5 to it (now 15!)
appel_systeme box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l fr_be
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l fr_be --step
```
