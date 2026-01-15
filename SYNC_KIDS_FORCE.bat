@echo off
set GIT_PATH="C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\TeamFoundation\Team Explorer\Git\cmd\git.exe"

echo ===========================================
echo   MULTILANG-ASM KIDS - FORCE SYNC
echo ===========================================
echo.

%GIT_PATH% config user.name "Neuro-OS Builder"
%GIT_PATH% config user.email "neuro.os.builder@internal"

echo [ADD] Asegurando que todo esta preparado...
%GIT_PATH% add .
%GIT_PATH% commit -m "feat: complete Kids Mode suite (27 languages, docs, examples, exercises)"

echo.
echo ===========================================
echo   SINCRONIZANDO CON GITHUB
echo ===========================================
echo.
set /p GITHUB_TOKEN="Pegue su GitHub Personal Access Token: "

echo [PULL] Bajando cambios remotos (si existen)...
%GIT_PATH% pull "https://%GITHUB_TOKEN%@github.com/cyberenigma-lgtm/MultiLang-ASM-Kids.git" main --rebase

echo.
echo [PUSH] Subiendo contenido final...
%GIT_PATH% push "https://%GITHUB_TOKEN%@github.com/cyberenigma-lgtm/MultiLang-ASM-Kids.git" main

echo.
echo ===========================================
echo   REPO KIDS SINCRONIZADO! 🧸
echo ===========================================
pause
