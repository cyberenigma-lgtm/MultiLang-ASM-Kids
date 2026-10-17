# 🧸 French / Français Kids Coding Guide

## Welcome!
Learn to speak to your computer in **French / Français**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in French / Français | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `mets` | `MOV` | Put a number in a magic box |
| **Add** | `ajoute` | `ADD` | Add a number to what's in the box |
| **Take** | `enleve` | `SUB` | Take away a number from the box |
| **Times** | `multiplie` | `IMUL` | Multiply the box by a number |
| **Split** | `divise` | `IDIV` | Divide the box by a number |
| **Show** | `montre` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `saute` | `JMP` | Jump to another step |
| **Compare** | `compare` | `CMP` | Compare two values |
| **If Equal** | `si_egal` | `JE` | Jump if numbers are identical |
| **Repeat** | `repete` | `LOOP` | Repeat a block of code |
| **Save** | `sauve` | `PUSH` | Save a number in the backpack |
| **Load** | `recupere` | `POP` | Get the number back |
| **Call** | `appelle` | `CALL` | Call a magic trick or function |
| **Back** | `reviens` | `RET` | Come back from the trick |
| **Stop** | `arrete` | `HLT` | Finish the program |
| **Wait** | `attends` | `NOP` | Wait a moment |

---

## 📦 Magic Boxes (Registers)
- `boite` (or `rax`): Your main magic treasure box.
- `boite2` (or `rbx`): A second box for extra numbers.
- `compteur` (or `rcx`): The counter box for loops.
- `boite3` (or `rdx`): A third box.

---

## 🚀 Your First Program

Save this in a file named `first_steps.kasm`:

```kasm
; My First Program in French / Français
mets boite 10       ; Put 10 into the box
ajoute boite 5        ; Add 5 to it (now 15!)
montre boite         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l fr
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l fr --step
```
