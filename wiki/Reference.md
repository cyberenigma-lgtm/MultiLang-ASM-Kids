# 📖 Instruction & Verb Reference

MultiLang-ASM Kids provides 19 pedagogical action verbs that map directly to standard x86_64 CPU instructions.

---

## 📋 The 19 Kids Action Verbs

| Action | English | Spanish | French | German | Standard ASM | Meaning |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Put** | `put` | `pon` | `mets` | `setze` | `MOV` | Put a value or register into a box |
| **Add** | `add` | `suma` | `ajoute` | `addiere` | `ADD` | Add a value to the box |
| **Take** | `take` | `resta` | `enleve` | `ziehe_ab` | `SUB` | Take away a value from the box |
| **Multiply** | `times` | `multiplica` | `multiplie` | `mal` | `IMUL` | Multiply box by value |
| **Divide** | `split` | `divide` | `divise` | `teile` | `IDIV` | Divide box by value |
| **Show** | `look` | `enseña` | `montre` | `zeige` | `SYSCALL` / `PRINT` | Show the value on screen |
| **Jump** | `jump` | `salta` | `saute` | `springe` | `JMP` | Unconditional jump to a label |
| **Compare** | `compare` | `compara` | `compare` | `vergleiche` | `CMP` | Compare two values |
| **If Equal** | `if_equal` | `si_igual` | `si_egal` | `wenn_gleich` | `JE` | Jump if comparison was equal |
| **If Different**| `if_different`| `si_diferente` | `si_different` | `wenn_verschieden`| `JNE` | Jump if comparison was different |
| **If Greater**| `if_greater` | `si_mayor` | `si_plus_grand`| `wenn_grosser` | `JG` | Jump if first value was greater |
| **If Smaller**| `if_smaller` | `si_menor` | `si_plus_petit`| `wenn_kleiner` | `JL` | Jump if first value was smaller |
| **Repeat** | `repeat` | `repite` | `repete` | `wiederhole` | `LOOP` | Decrement counter and loop |
| **Save** | `save` | `guarda` | `sauve` | `speichere` | `PUSH` | Push value into backpack (stack) |
| **Load** | `load` | `recupera` | `recupere` | `lade` | `POP` | Pop value from backpack (stack) |
| **Call** | `call` | `llama` | `appelle` | `rufe` | `CALL` | Call a subroutine trick |
| **Back** | `back` | `vuelve` | `reviens` | `zuruck` | `RET` | Return from subroutine |
| **Stop** | `stop` | `para` | `arrete` | `halte` | `HLT` | Stop execution |
| **Wait** | `wait` | `espera` | `attends` | `warte` | `NOP` | Wait / do nothing for one step |

---

## 📦 Magic Boxes (Registers)

| Friendly Box | Canonical Hardware Register | Pedagogical Purpose |
| :--- | :--- | :--- |
| `box` / `caja` | `rax` | Main accumulator treasure box |
| `box2` / `caja2` | `rbx` | Secondary storage box |
| `counter` / `contador` | `rcx` | Counter for loops and iterations |
| `box3` / `caja3` | `rdx` | Third storage box |
| `box4` / `caja4` | `rsi` | Fourth storage box |
| `box5` / `caja5` | `rdi` | Fifth storage box |
