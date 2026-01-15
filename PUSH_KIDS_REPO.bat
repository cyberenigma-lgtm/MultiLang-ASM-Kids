@echo off
set GIT_PATH="C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\TeamFoundation\Team Explorer\Git\cmd\git.exe"

echo ===========================================
echo   MULTILANG-ASM KIDS - INITIAL DEPLOY
echo ===========================================
echo.

%GIT_PATH% config user.name "Neuro-OS Builder"
%GIT_PATH% config user.email "neuro.os.builder@internal"

%GIT_PATH% checkout -b main
%GIT_PATH% add .
%GIT_PATH% commit -m "feat: complete Kids Mode suite (27 languages, docs, examples, exercises)"

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
