@echo off
set GIT_PATH="C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\TeamFoundation\Team Explorer\Git\cmd\git.exe"

echo ===========================================
echo   MULTILANG-ASM KIDS - REAL WIKI UPLOAD
echo ===========================================
echo.
echo [INFO] La Wiki de GitHub es un repositorio separado (.wiki.git).
echo [INFO] Preparando subida...
echo.

cd wiki
REM Inicializar repo dentro de la carpeta wiki si no existe
if not exist .git (
    %GIT_PATH% init
    %GIT_PATH% config user.name "Neuro-OS Builder"
    %GIT_PATH% config user.email "neuro.os.builder@internal"
    %GIT_PATH% checkout -b master
)

%GIT_PATH% add .
%GIT_PATH% commit -m "docs: update wiki pages"

echo.
echo ===========================================
echo   CONECTANDO WIKI
echo ===========================================
echo.
set /p GITHUB_TOKEN="Pegue su GitHub Personal Access Token: "

REM Forzar el remoto wiki
%GIT_PATH% remote remove origin
%GIT_PATH% remote add origin "https://%GITHUB_TOKEN%@github.com/cyberenigma-lgtm/MultiLang-ASM-Kids.wiki.git"

echo.
echo [PUSH] Subiendo a la pestaña Wiki...
%GIT_PATH% push -f origin master

echo.
echo ===========================================
echo   WIKI ONLINE! 🌐
echo ===========================================
pause
