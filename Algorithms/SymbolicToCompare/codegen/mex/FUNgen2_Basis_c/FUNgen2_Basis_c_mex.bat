@echo off
call setEnv.bat
"C:\Program Files\MATLAB\R2019b\toolbox\shared\coder\ninja\win64\ninja.exe" -v %*
