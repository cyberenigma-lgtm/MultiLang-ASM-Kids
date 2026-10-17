# 🧸 MultiLang-ASM Kids

<div align="center">

![MultiLang-ASM Kids Banner](assets/banner.png)

### **The Fun, Colorful, and Sovereign Way to Learn Computer Architecture & Assembly!**

[![UPL+ Standard](https://img.shields.io/badge/Standard-UPL%2B%20v1.0-blue?style=for-the-badge&logo=codeforces)](https://github.com/cyberenigma-lgtm/UNIVERSAL-POLYGLOT-LAYER-UPL)
[![C99 Native](https://img.shields.io/badge/Engine-100%25%20ANSI%20C99-brightgreen?style=for-the-badge&logo=c)](src/mlasm_kids.c)
[![Zero Python](https://img.shields.io/badge/Runtime-0%25%20Python-orange?style=for-the-badge)]()
[![World Languages](https://img.shields.io/badge/Languages-154%20World%20Tongues-purple?style=for-the-badge&logo=google-translate)](langs/)
[![License](https://img.shields.io/badge/License-GPL%20v3.0-red?style=for-the-badge)](LICENSE)

**[Español](README_ES.md)** | **[English](README.md)** | **[Curriculum](wiki/Curriculum.md)** | **[Teacher's Guide](wiki/Teachers_Guide.md)** | **[Wiki](wiki/Home.md)**

</div>

---

## 🚀 Why Assembly for Kids?

Every computer in the world—from smartphones and game consoles to supercomputers—speaks **Machine Language**. 

Traditional assembly languages intimidate students with cryptic abbreviations like `mov`, `lea`, `imul`, and `sysret`. **MultiLang-ASM Kids** breaks down the barrier:
- Kids write logic using **natural action verbs in their mother tongue**.
- Instead of confusing memory pointers, kids interact with **"Magic Boxes"** (Registers) and **"Backpacks"** (Stack).
- The built-in **interactive virtual stepper** lets kids watch numbers move and change step-by-step with vivid colors and feedback!

```kasm
; English Example
put box 10        ; Put 10 candies in the box
add box 5         ; Add 5 more (now 15!)
take box 2        ; Eat 2 candies (13 left!)
look box          ; 🎈 [SCREEN]: 13
```

```kasm
; Ejemplo en Español
pon caja 10       ; Pon 10 caramelos en la caja
suma caja 5       ; Suma 5 más (¡ahora 15!)
resta caja 2      ; Cómete 2 caramelos (¡quedan 13!)
enseña caja       ; 🎈 [PANTALLA]: 13
```

---

## 🌍 Supported Languages (154 World Languages & Dialects)

MultiLang-ASM Kids natively covers **154 world languages and dialects** across every continent:

| Region | Featured Languages |
| :--- | :--- |
| **Western & Northern Europe** | English, Español, Français, Deutsch, Italiano, Português, Nederlands, Svenska, Norsk, Dansk, Suomi, Íslenska, Føroyskt, Lëtzebuergesch... |
| **Eastern & Southern Europe** | Русский, Українська, Polski, Čeština, Slovenčina, Română, Ελληνικά, Български, Српски, Hrvatski, Bosanski, Shqip, Euskara, Català, Galego... |
| **East & Southeast Asia** | 中文 (Mandarin), 廣東話 (Cantonese), 日本語, 한국어, Tiếng Việt, ภาษาไทย, Bahasa Indonesia, Bahasa Melayu, Tagalog, မြန်မာ, ភាសាខ្មែរ... |
| **South & Central Asia** | हिन्दी, বাংলা, தமிழ், తెలుగు, മലയാളം, ಕನ್ನಡ, ગુજરાતી, ਪੰਜਾਬੀ, मराठी, اردو, فارسی, پښتو, Oʻzbek, Қазақ, Кыргызча... |
| **Middle East & North Africa** | العربية, עברית, Türkçe, Kurdî, Tamazight, Somali... |
| **Sub-Saharan Africa** | Kiswahili, Yorùbá, Igbo, Hausa, Amharic, Oromo, Zulu, Xhosa, Shona, Malagasy, Lingala, Kinyarwanda... |
| **Indigenous & Classical** | Guaraní, Quechua, Aymara, Classical Nahuatl, Lingua Latina, Esperanto... |
| **Popular Dialects** | English (Cockney), English (Texas), Español (Madrid), Deutsch (Bavarian)... |

*Browse all dictionaries in [`langs/`](langs/) or read the localized guides in [`docs/`](docs/).*

---

## 🎓 The 5-Level Curriculum

| Level | Name | Age | Target Concept | Keywords Learned |
| :---: | :--- | :---: | :--- | :--- |
| **1** | **The Magic Box** | 5–8 | Variables, assignment, registers | `put`, `look` (`pon`, `enseña`) |
| **2** | **The Calculator** | 9–11 | Arithmetic, ALU, accumulators | `add`, `take`, `times`, `split` (`suma`, `resta`, `multiplica`, `divide`) |
| **3** | **The Logic Detective** | 12–14 | Comparisons, decisions, branching | `compare`, `if_equal`, `if_different`, `if_greater` |
| **4** | **The Code Commander** | 14–16 | Loops, counters, repetition | `repeat`, `jump`, `counter` (`repite`, `salta`, `contador`) |
| **5** | **The Wizard's Spells** | 16–18 | Call stack, subroutines, push & pop | `save`, `load`, `call`, `back`, `stop` (`guarda`, `recupera`, `llama`, `vuelve`, `para`) |

*Read the complete [Curriculum Guide](wiki/Curriculum.md) and [Teacher's Guide](wiki/Teachers_Guide.md).*

---

## ⚡ Quickstart

### 1. Compile the Engine (Zero Dependencies)
MultiLang-ASM Kids is written in pure ANSI C99. You can build it anywhere in 1 second using GCC, Clang, or MSVC:

```bash
# Windows (MinGW GCC)
gcc -std=c99 -O2 src/mlasm_kids.c -o mlasm_kids.exe

# Linux / macOS
gcc -std=c99 -O2 src/mlasm_kids.c -o mlasm_kids
```

### 2. Run a Program in Interactive Stepper Mode
Watch the computer calculate step-by-step:

```bash
# Spanish
./mlasm_kids run examples/Spanish_ES/first_steps.kasm --step

# English
./mlasm_kids run examples/English_EN/first_steps.kasm --step

# Japanese
./mlasm_kids run examples/Japanese_JA/first_steps.kasm --step
```

### 3. Transpile to Real 64-bit NASM Assembly
When students are ready to see real machine code:

```bash
./mlasm_kids compile examples/Spanish_ES/first_steps.kasm -o real_code.asm -l es
```

---

## 🧪 Testing

Run the cross-platform test suites:
```bash
# Windows
test.bat

# Linux / macOS
./test.sh
```

---

## 🏛️ Ecosystem Lineage

- **[Universal Polyglot Layer (UPL)](https://github.com/cyberenigma-lgtm/UNIVERSAL-POLYGLOT-LAYER-UPL)**: The foundational sovereign multilingual computing specification.
- **[MultiLang-ASM](https://github.com/cyberenigma-lgtm/MultiLang-ASM)**: The technical 150-language x86_64 preprocessor and assembler.
- **[MultiLang-ASM Kids](https://github.com/cyberenigma-lgtm/MultiLang-ASM-Kids)**: The sovereign educational engine for schools and children.

---

<div align="center">
  <b>Developed with ❤️ for the children, teachers, and future engineers of the world.</b><br/>
  <i>Part of the Neuro-OS Sovereign Computing Ecosystem</i>
</div>
