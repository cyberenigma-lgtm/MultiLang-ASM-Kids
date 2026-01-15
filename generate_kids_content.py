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

if __name__ == "__main__":
    print("Generating MultiLang-ASM Kids Content...")
    generate_docs()
    generate_examples()
    generate_exercises()
    print("Done!")
