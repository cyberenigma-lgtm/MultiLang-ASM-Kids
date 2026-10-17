@echo off
set GIT_PATH="git.exe"

echo ===========================================
echo   MULTILANG-ASM KIDS - INITIAL DEPLOY
echo ===========================================
echo.

%GIT_PATH% config user.name "cyberenigma-lgtm"
%GIT_PATH% config user.email "cyberenigma-lgtm@users.noreply.github.com"

%GIT_PATH% checkout -b main
%GIT_PATH% add .
%GIT_PATH% commit -m "feat(v1.0.0): sovereign release - 100% ANSI C99 native kids engine, UPL+ standard, 154 world languages & curriculum"

echo.
echo ===========================================
echo   CONFIGURANDO REMOTO
echo ===========================================
echo.
set /p GITHUB_TOKEN="Pegue su GitHub Personal Access Token: "

%GIT_PATH% remote add origin "https://%GITHUB_TOKEN%@github.com/cyberenigma-lgtm/MultiLang-ASM-Kids.git"

echo.
echo [PUSH] Subiendo nuevo repositorio...
%GIT_PATH% push -u origin main

echo.
echo ===========================================
echo   REPO KIDS PUBLICADO! 🧸
echo ===========================================
pause
