import os

# ============================================================================
# MULTILANG-ASM KIDS CONTENT GENERATOR
# Generates: Docs, Examples, and Exercises for all 27 languages
# ============================================================================

# 1. LANGUAGE DEFINITIONS (Kids Mode Verbs)
# Format: code: {name, put, add, sub, show}
LANGUAGES = {
    # Core Languages
    "en": {"name": "English", "put": "put", "add": "add", "sub": "take", "show": "look"},
    "es": {"name": "Español", "put": "pon", "add": "suma", "sub": "resta", "show": "enseña"},
    "fr": {"name": "Français", "put": "mets", "add": "ajoute", "sub": "enleve", "show": "montre"},
    "de": {"name": "Deutsch", "put": "setze", "add": "addiere", "sub": "ziehe_ab", "show": "zeige"},
    "it": {"name": "Italiano", "put": "metti", "add": "aggiungi", "sub": "togli", "show": "mostra"},
    "pt": {"name": "Português", "put": "coloca", "add": "soma", "sub": "tira", "show": "mostra"},
    "ru": {"name": "Russian", "put": "положи", "add": "добавь", "sub": "отними", "show": "покажи"},
    "ja": {"name": "Japanese", "put": "irete", "add": "tashite", "sub": "hiite", "show": "misete"},
    "zh": {"name": "Chinese", "put": "fang", "add": "jia", "sub": "jian", "show": "kan"},
    "ko": {"name": "Korean", "put": "neoh", "add": "deohae", "sub": "ppaera", "show": "boyeo"},
    "ar": {"name": "Arabic", "put": "da", "add": "ijma", "sub": "itrah", "show": "anzur"},
    
    # Expanded Languages
    "hi": {"name": "Hindi", "put": "rakho", "add": "jodo", "sub": "ghatao", "show": "dikhao"},
    "tr": {"name": "Turkish", "put": "koy", "add": "ekle", "sub": "cikar", "show": "goster"},
    "pl": {"name": "Polish", "put": "wsadz", "add": "dodaj", "sub": "odejmij", "show": "pokaz"},
    "sv": {"name": "Swedish", "put": "stall", "add": "addera", "sub": "dra_av", "show": "visa"},
    "nl": {"name": "Dutch", "put": "zet", "add": "tel_op", "sub": "trek_af", "show": "toon"},
    "el": {"name": "Greek", "put": "bale", "add": "prosthese", "sub": "afairese", "show": "diekse"},
    "he": {"name": "Hebrew", "put": "sim", "add": "hosef", "sub": "haser", "show": "hare"},
    "th": {"name": "Thai", "put": "sai", "add": "buak", "sub": "lop", "show": "sadang"},
    "vi": {"name": "Vietnamese", "put": "dat", "add": "them", "sub": "tru", "show": "hien"},
    "sw": {"name": "Swahili", "put": "weka", "add": "ongeza", "sub": "toa", "show": "onyesha"},
    "tl": {"name": "Tagalog", "put": "lagay", "add": "dagdag", "sub": "bawas", "show": "pakita"},
    "ms": {"name": "Malay", "put": "letak", "add": "tambah", "sub": "tolak", "show": "tunjuk"},
    "fa": {"name": "Persian", "put": "bezor", "add": "jam", "sub": "kam", "show": "neshon"},
    "uk": {"name": "Ukrainian", "put": "polozhy", "add": "dodaty", "sub": "vidnyaty", "show": "pokazhy"},
    "ro": {"name": "Romanian", "put": "pune", "add": "adauga", "sub": "scade", "show": "arata"},
    "id": {"name": "Indonesian", "put": "taruh", "add": "tambah", "sub": "kurang", "show": "tampil"}
}

# 2. DIALECTS (A selection for examples)
DIALECTS = {
    "en_cockney": {"name": "English (Cockney)", "put": "stash", "add": "lob", "sub": "nick", "show": "gawk"},
    "en_tx": {"name": "English (Texas)", "put": "hitch", "add": "roundup", "sub": "cut", "show": "spy"},
    "es_mad": {"name": "Español (Madrid)", "put": "apanca", "add": "suma", "sub": "pilla", "show": "lipa"},
    "de_bay": {"name": "Deutsch (Bavarian)", "put": "pack", "add": "dazu", "sub": "weg", "show": "schau"}
}

def create_directory(path):
    if not os.path.exists(path):
        os.makedirs(path)

def generate_docs():
    create_directory("docs")
    for code, lang in LANGUAGES.items():
        filename = f"docs/GUIDE_{code.upper()}.md"
        content = f"""# 🧸 {lang['name']} Kids Coding Guide

## Welcome!
Learn to speak to your computer in {lang['name']}! 

In MultiLang-ASM Kids, we use magic words to move numbers around.

## The Magic Words (Keywords)

| Action | Command | Meaning |
| :--- | :--- | :--- |
| **Put** | `{lang['put']}` | Put a number in a box |
| **Add** | `{lang['add']}` | Add two numbers together |
| **Take** | `{lang['sub']}` | Take away a number |
| **Show** | `{lang['show']}` | Show the result on screen |

## Your First Program

```masm
; {lang['name']} Program
{lang['put']} rax 5    ; Box 1 has 5
{lang['add']} rax 2    ; Add 2 (Now it's 7)
{lang['show']} rax     ; Show me the 7!
```
"""
        with open(filename, "w", encoding="utf-8") as f:
            f.write(content)
    print("Documentation generated.")

def generate_examples():
    create_directory("examples")
    # Standard Languages
    for code, lang in LANGUAGES.items():
        dir_path = f"examples/{lang['name']}_{code.upper()}"
        create_directory(dir_path)
        
        # Hello World equivalent (Math)
        with open(f"{dir_path}/first_steps.masm", "w", encoding="utf-8") as f:
            f.write(f"""; My First Program in {lang['name']}
; 1. Put value 10 into 'rax'
; 2. Add 5 to it
; 3. Show the result

{lang['put']} rax 10
{lang['add']} rax 5
{lang['show']} rax
""")
            
    # Dialects
    for code, lang in DIALECTS.items():
        dir_path = f"examples/Dialects/{lang['name']}"
        create_directory(dir_path)
        with open(f"{dir_path}/slang_demo.masm", "w", encoding="utf-8") as f:
            f.write(f"""; Slang Demo in {lang['name']}
{lang['put']} rax 100
{lang['sub']} rax 50
{lang['show']} rax
""")
    print("Examples generated.")

def generate_exercises():
    create_directory("exercises")
    for code, lang in LANGUAGES.items():
        dir_path = f"exercises/{lang['name']}_{code.upper()}"
        create_directory(dir_path)
        
        # Exercise 1
        with open(f"{dir_path}/01_addition.masm", "w", encoding="utf-8") as f:
            f.write(f"""; CHALLENGE 1: The Candy Counting
; You have 5 candies (rax).
; You get 3 more.
; How many do you have?

{lang['put']} rax 5
; TODO: Add 3 using '{lang['add']}' command
; TODO: Show the result using '{lang['show']}' command
""")
            
    print("Exercises generated.")

def generate_wiki():
    create_directory("wiki")
    
    # 1. HOME
    with open("wiki/Home.md", "w", encoding="utf-8") as f:
        f.write("""# 🧸 Welcome to MultiLang-ASM Kids Wiki!

This is the official manual for the **MultiLang-ASM Kids** edition.

## 📚 Contents
- **[Troubleshooting](Troubleshooting)**: Having problems? Look here!
- **[Instruction Reference](Reference)**: What do the magic words do?
- **[Examples Library](Examples)**: Code examples in 27 languages.
- **[Teacher's Guide](Teachers)**: How to use this in class.

---
*Part of the Neuro-OS Ecosystem*
""")

    # 2. TROUBLESHOOTING
    with open("wiki/Troubleshooting.md", "w", encoding="utf-8") as f:
        f.write("""# 🔧 Troubleshooting (Problemas y Soluciones)

### ❌ "Command not found" or "no se reconoce el comando"
**Problem:** Python is not installed or not in your PATH.
**Solution:** Install Python 3.10+ and make sure to check "Add Python to PATH" during installation.

### ❌ "Syntax Error" on line 1
**Problem:** You are using the wrong language keywords for the detected language.
**Solution:** 
1. Check if you are using Spanish keywords (`pon`) in a file meant for English (`put`).
2. Use `mlasm.py auto file.masm` to let the AI detect the language.

### ❌ "Unicodeencodeerror"
**Problem:** Windows console sometimes struggles with emojis or special characters.
**Solution:** Use `chcp 65001` in your terminal before running the compiler.

### ❌ "Output file is empty"
**Problem:** The program ran but didn't output anything.
**Solution:** Ensure you are using the `show` (or translated equivalent) command at the end!

""")

    # 3. REFERENCE (DESGLOSE DE FUNCIONES)
    with open("wiki/Reference.md", "w", encoding="utf-8") as f:
        f.write("""# 📖 Instruction Reference (Desglose de Funciones)

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

""")

    # 4. EXAMPLES (ALL LANGUAGES)
    with open("wiki/Examples.md", "w", encoding="utf-8") as f:
        f.write("# 🌍 Global Examples Library\n\nHere is how to write **'Hello World' (Math Edition)** in all 27 supported languages.\n\n")
        
        for code, lang in LANGUAGES.items():
            f.write(f"## {lang['name']}\n")
            f.write("```masm\n")
            f.write(f"; {lang['name']} Code\n")
            f.write(f"{lang['put']} rax 10\n")
            f.write(f"{lang['add']} rax 5\n")
            f.write(f"{lang['show']} rax\n")
            f.write("```\n\n")
            
        f.write("# 🎭 Dialect Examples\n\n")
        for code, lang in DIALECTS.items():
            f.write(f"## {lang['name']}\n")
            f.write("```masm\n")
            f.write(f"{lang['put']} rax 10\n")
            f.write(f"{lang['add']} rax 5\n")
            f.write(f"{lang['show']} rax\n")
            f.write("```\n\n")

    print("Wiki generated.")

if __name__ == "__main__":
    print("Generating MultiLang-ASM Kids Content...")
    generate_docs()
    generate_examples()
    generate_exercises()
    generate_wiki()
    print("Done!")
