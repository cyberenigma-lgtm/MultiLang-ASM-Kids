@echo off
set GIT_PATH="git.exe"

echo ===========================================
echo   MULTILANG-ASM KIDS - FORCE SYNC
echo ===========================================
echo.

%GIT_PATH% config user.name "cyberenigma-lgtm"
%GIT_PATH% config user.email "cyberenigma-lgtm@users.noreply.github.com"

%GIT_PATH% add .
%GIT_PATH% commit -m "chore: sync kids repository"

set /p GITHUB_TOKEN="Pegue su GitHub Personal Access Token: "
%GIT_PATH% push "https://%GITHUB_TOKEN%@github.com/cyberenigma-lgtm/MultiLang-ASM-Kids.git" main
pause
