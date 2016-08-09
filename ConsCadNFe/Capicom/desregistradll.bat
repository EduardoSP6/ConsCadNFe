

if EXIST %windir%\SysWOW64 goto Win64

:Win32
ECHO *** DesRegistrando as DLLs ***
regsvr32 %windir%\System32\capicom.dll /u
regsvr32 %windir%\System32\msxml5.dll /u
regsvr32 %windir%\System32\msxml6.dll /u
goto end

:Win64
ECHO *** DesRegistrando as DLLs x64 ***
regsvr32 %windir%\SysWOW64\capicom.dll /u
regsvr32 %windir%\SysWOW64\msxml5.dll /u
regsvr32 %windir%\SysWOW64\msxml6.dll /u
goto end

:end

pause
