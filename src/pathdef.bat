@echo off
set PATHDEF_FILE=auto\pathdef.c
set PATHDEF_TEMP=auto\pathdef.tmp
set CONFIGURATION=%1
set PLATFORMTARGET=%2

echo /* pathdef.c */>%PATHDEF_TEMP%
echo #include "vim.h">>%PATHDEF_TEMP%
echo char_u *default_vim_dir = (char_u *)"";>>%PATHDEF_TEMP%
echo char_u *default_vimruntime_dir = (char_u *)"";>>%PATHDEF_TEMP%
echo char_u *all_cflags = (char_u *)"cl (%CONFIGURATION%|%PLATFORMTARGET%)";>>%PATHDEF_TEMP%
echo char_u *all_lflags = (char_u *)"link (%CONFIGURATION%|%PLATFORMTARGET%)";>>%PATHDEF_TEMP%
echo char_u *compiled_user = (char_u *)"%USERNAME%";>>%PATHDEF_TEMP%
echo char_u *compiled_sys = (char_u *)"%COMPUTERNAME%";>>%PATHDEF_TEMP%

fc %PATHDEF_TEMP% %PATHDEF_FILE% > nul 2>&1
if %ERRORLEVEL% neq 0 (
	echo Updating %PATHDEF_FILE%
	copy /y %PATHDEF_TEMP% %PATHDEF_FILE% > nul 2>&1
) else (
	echo %PATHDEF_FILE% is up-to-date
)
del /f %PATHDEF_TEMP% > nul 2>&1
