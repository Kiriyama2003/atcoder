@echo off

set /p filename="ファイル名を入力してください："
set /p extension="拡張子を入力してください："
set /p number="ファイル数を入力してください："

setlocal enabledelayedexpansion

for /l %%n in (1,1,%number%) do (
  set num=0%%n
  set num=!num:~-2,2!
  type nul > !num!_%filename%.!extension!
)
endlocal