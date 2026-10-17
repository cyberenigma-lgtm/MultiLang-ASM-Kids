# 👩‍🏫 MultiLang-ASM Kids Teacher's Guide

A practical guide for schoolteachers, parents, coding clubs, and educators looking to teach computer architecture and low-level logical reasoning using MultiLang-ASM Kids.

---

## 🎯 Pedagogical Philosophy

1. **Mother Tongue First:** Young minds should not struggle with two hurdles at once: unfamiliar English jargon and abstract machine logic. Learning in their native language unlocks immediate conceptual understanding.
2. **Mental Models over Syntax:** Low-level assembly is fundamentally simple: move a number, do arithmetic, check a condition, jump. There are no hidden abstractions, complex class hierarchies, or mysterious runtime magic.
3. **Immediate Visual Feedback:** Using the native interactive stepper (`--step`), students see every step change register values in real time.

---

## 📦 Activity 1: The Unplugged "Cardboard Boxes" Game

Before touching a keyboard, introduce registers physically:
1. Place 3 cardboard shoe boxes on a table labeled:
   - **Box 1** (`caja` / `rax`)
   - **Box 2** (`caja2` / `rbx`)
   - **Counter** (`contador` / `rcx`)
2. Write numbers on index cards or use colored wooden blocks.
3. Have students act as the **CPU**:
   - Teacher calls: `"pon caja 5"` -> Student places 5 in Box 1.
   - Teacher calls: `"suma caja 3"` -> Student replaces card with 8.
   - Teacher calls: `"enseña caja"` -> Student holds up card 8 to the class!

---

## 💻 Activity 2: The Interactive Stepper on Projector

Open a terminal on your classroom projector:
```bash
mlasm_kids run examples/Spanish_ES/first_steps.kasm --step
```
Ask students to predict what will happen before pressing Enter on each step:
- "What number will be in the box after `suma caja 5`?"
- "What happens if we take away 2?"

---

## 🚀 Transitioning to Real x86_64 Assembly

Once students feel comfortable with verbs like `pon`, `suma`, and `enseña`:
1. Explain that real computers use abbreviated labels from historical English engineering:
   - `pon` = `mov` (move)
   - `suma` = `add`
   - `resta` = `sub`
   - `caja` = `rax`
2. Show them how `mlasm_kids compile` generates real machine assembly:
   ```bash
   mlasm_kids compile code.kasm -o real_code.asm
   ```
3. Students will realize they already know real 64-bit assembly language!
