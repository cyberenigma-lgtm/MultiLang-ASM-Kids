# 🔧 Troubleshooting (Problemas y Soluciones)

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

