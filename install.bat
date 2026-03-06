@echo off
cd /d "%~dp0"
copy wait.exe %windir%\system32
echo Install complete!
pause