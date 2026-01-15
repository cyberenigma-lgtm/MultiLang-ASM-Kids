# 📖 Instruction Reference (Desglose de Funciones)

In Kids Mode, we use 4 main concepts. Here is how they work:

## 1. 📦 PUT (Movement)
*Standard ASM: `MOV`*
**Description:** Puts a value into a box (register).
**Example:** `put rax 5` (Put number 5 into box rax)

## 2. ➕ ADD (Arithmetic)
*Standard ASM: `ADD`*
**Description:** Adds a number to what is already in the box.
**Example:** `add rax 2` (If box has 5, now it has 7)

## 3. ➖ TAKE (Arithmetic)
*Standard ASM: `SUB`*
**Description:** Takes away a number from the box.
**Example:** `take rax 1` (If box has 7, now it has 6)

## 4. 👀 SHOW (System)
*Standard ASM: `SYSCALL` (mapped for simplicity)*
**Description:** Shows the content of the box on the screen (magic!).
**Example:** `show rax` (Prints "6")

