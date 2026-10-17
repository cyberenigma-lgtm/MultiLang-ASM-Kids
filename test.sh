#!/usr/bin/env bash
set -e

echo "================================================================="
echo "  🧸 MultiLang-ASM Kids - Unix Continuous Test Suite"
echo "  100% Standalone ANSI C99 / UPL+ Sovereign Engine"
echo "================================================================="
echo ""

# 1. Compile C99 Engine
echo "[1/4] Compiling mlasm_kids with GCC/Clang..."
gcc -std=c99 -O2 -Wall -Wextra src/mlasm_kids.c -o mlasm_kids
echo "[PASS] Compiled mlasm_kids successfully."
echo ""

# 2. Run Internal Self-Tests
echo "[2/4] Running internal self-tests..."
./mlasm_kids --test
echo ""

# 3. Test Interactive Stepper across multiple languages
echo "[3/4] Testing Interactive Stepper across multiple languages..."

echo "--- Spanish (es) ---"
./mlasm_kids run examples/Spanish_ES/first_steps.kasm --step

echo "--- English (en) ---"
./mlasm_kids run examples/English_EN/first_steps.kasm --step

echo "--- French (fr) ---"
./mlasm_kids run examples/French_FR/first_steps.kasm --step

echo "--- Japanese (ja) ---"
./mlasm_kids run examples/Japanese_JA/first_steps.kasm --step

echo ""
# 4. Test NASM Transpiler
echo "[4/4] Testing NASM Transpilation..."
./mlasm_kids compile examples/Spanish_ES/first_steps.kasm -o test_output.asm -l es
test -f test_output.asm
rm -f test_output.asm
echo "[PASS] Transpilation passed!"

echo ""
echo "================================================================="
echo "  🎉 ALL TESTS PASSED! MultiLang-ASM Kids is 100% Operational!"
echo "================================================================="
