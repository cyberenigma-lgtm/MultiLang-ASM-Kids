@echo off
if not exist "%~dp0mlasm_kids.exe" (
    echo [BUILD] Compiling mlasm_kids.exe...
    gcc -std=c99 -O2 "%~dp0src\mlasm_kids.c" -o "%~dp0mlasm_kids.exe"
)
"%~dp0mlasm_kids.exe" %*
