@echo off
setlocal enabledelayedexpansion

echo =================================================================
echo   🧸 MultiLang-ASM Kids - Windows Continuous Test Suite
echo   100%% Standalone ANSI C99 / UPL+ Sovereign Engine
echo =================================================================
echo.

:: 1. Compile C99 Engine
echo [1/4] Compiling mlasm_kids with GCC...
gcc -std=c99 -O2 -Wall -Wextra src/mlasm_kids.c -o mlasm_kids.exe
if errorlevel 1 (
    echo [FAIL] Compilation failed!
    exit /b 1
)
echo [PASS] Compiled mlasm_kids.exe successfully.
echo.

:: 2. Run Internal Self-Tests
echo [2/4] Running internal self-tests...
mlasm_kids.exe --test
if errorlevel 1 (
    echo [FAIL] Self-tests failed!
    exit /b 1
)
echo.

:: 3. Test Interactive Stepper across multiple languages
echo [3/4] Testing Interactive Stepper across multiple languages...

echo --- Spanish (es) ---
mlasm_kids.exe run examples\Spanish_ES\first_steps.kasm --step
if errorlevel 1 goto error

echo --- English (en) ---
mlasm_kids.exe run examples\English_EN\first_steps.kasm --step
if errorlevel 1 goto error

echo --- French (fr) ---
mlasm_kids.exe run examples\French_FR\first_steps.kasm --step
if errorlevel 1 goto error

echo --- Japanese (ja) ---
mlasm_kids.exe run examples\Japanese_JA\first_steps.kasm --step
if errorlevel 1 goto error

echo.
:: 4. Test NASM Transpiler
echo [4/4] Testing NASM Transpilation...
mlasm_kids.exe compile examples\Spanish_ES\first_steps.kasm -o test_output.asm -l es
if not exist test_output.asm goto error
del test_output.asm
echo [PASS] Transpilation passed!

echo.
echo =================================================================
echo   🎉 ALL TESTS PASSED! MultiLang-ASM Kids is 100%% Operational!
echo =================================================================
exit /b 0

:error
echo [FAIL] Test execution encountered an error!
exit /b 1
