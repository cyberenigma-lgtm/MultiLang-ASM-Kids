@echo off
set GIT_PATH="git.exe"

echo ===========================================
echo   MULTILANG-ASM KIDS - WIKI UPDATE
echo ===========================================
echo.

%GIT_PATH% config user.name "cyberenigma-lgtm"
%GIT_PATH% config user.email "cyberenigma-lgtm@users.noreply.github.com"

echo [ADD] Agregando nueva Wiki...
%GIT_PATH% add wiki/
%GIT_PATH% commit -m "docs: add comprehensive Wiki (Curriculum, Teachers Guide, Troubleshooting, Reference, 154 Languages Examples)"

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
