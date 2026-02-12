@echo off
set GIT_PATH="C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\TeamFoundation\Team Explorer\Git\cmd\git.exe"

echo ===========================================
echo   MULTILANG-ASM KIDS - WIKI UPDATE
echo ===========================================
echo.

%GIT_PATH% config user.name "Neuro-OS Builder"
%GIT_PATH% config user.email "neuro.os.builder@internal"

echo [ADD] Agregando nueva Wiki...
%GIT_PATH% add wiki/
%GIT_PATH% add generate_kids_content.py
%GIT_PATH% commit -m "docs: add comprehensive Wiki (Troubleshooting, Reference, All Examples)"

echo.
echo ===========================================
echo   SUBIENDO WIKI
echo ===========================================
echo.
set /p GITHUB_TOKEN="Pegue su GitHub Personal Access Token: "

%GIT_PATH% push "https://%GITHUB_TOKEN%@github.com/cyberenigma-lgtm/MultiLang-ASM-Kids.git" main

echo.
echo ===========================================
echo   WIKI PUBLICADA! 📚
echo ===========================================
pause
