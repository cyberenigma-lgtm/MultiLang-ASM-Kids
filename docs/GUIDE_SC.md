# 🧸 Sardinian / Sardu Kids Coding Guide

## Welcome!
Learn to speak to your computer in **Sardinian / Sardu**! 

In MultiLang-ASM Kids, we use simple, friendly magic words to move numbers, calculate, and solve puzzles inside the computer.

---

## 🪄 The Magic Words (Keywords)

| Action | Command in Sardinian / Sardu | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- |
| **Put** | `movimentare` | `MOV` | Put a number in a magic box |
| **Add** | `azunghere` | `ADD` | Add a number to what's in the box |
| **Take** | `bogare` | `SUB` | Take away a number from the box |
| **Times** | `multiplicare` | `IMUL` | Multiply the box by a number |
| **Split** | `partire` | `IDIV` | Divide the box by a number |
| **Show** | `ciamadore_sistema` | `SYSCALL` / `PRINT` | Show the result on screen |
| **Jump** | `sartare` | `JMP` | Jump to another step |
| **Compare** | `cunfrontare` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `JE` | Jump if numbers are identical |
| **Repeat** | `chircu` | `LOOP` | Repeat a block of code |
| **Save** | `pompire` | `PUSH` | Save a number in the backpack |
| **Load** | `leare` | `POP` | Get the number back |
| **Call** | `ciamare` | `CALL` | Call a magic trick or function |
| **Back** | `torrare` | `RET` | Come back from the trick |
| **Stop** | `firmare` | `HLT` | Finish the program |
| **Wait** | `nudda` | `NOP` | Wait a moment |

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
; My First Program in Sardinian / Sardu
movimentare box 10       ; Put 10 into the box
azunghere box 5        ; Add 5 to it (now 15!)
ciamadore_sistema box         ; Display 15 on the screen!
```

### Running It:
```bash
mlasm_kids run first_steps.kasm -l sc
```
You can also run with step-by-step visual animation:
```bash
mlasm_kids run first_steps.kasm -l sc --step
```
