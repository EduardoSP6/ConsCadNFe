

if EXIST %windir%\SysWOW64 goto Win64

:Win32
ECHO *** Copiando as DLLs ***
if NOT EXIST %windir%\System32\capicom.dll copy capicom.dll %windir%\System32
if NOT EXIST %windir%\System32\msxml5.dll  copy msxml5.dll  %windir%\System32
if NOT EXIST %windir%\System32\msxml5r.dll copy msxml5r.dll %windir%\System32
if NOT EXIST %windir%\System32\msxml6.dll  copy msxml6.dll  %windir%\System32
if NOT EXIST %windir%\System32\msxml6r.dll copy msxml6r.dll %windir%\System32
ECHO *** Registrando as DLLs ***
regsvr32 %windir%\System32\capicom.dll 
regsvr32 %windir%\System32\msxml5.dll
regsvr32 %windir%\System32\msxml6.dll
goto end

:Win64
ECHO *** Copiando as DLLs x64 ***
if NOT EXIST %windir%\SysWOW64\capicom.dll copy capicom.dll %windir%\SysWOW64
if NOT EXIST %windir%\SysWOW64\msxml5.dll  copy msxml5.dll  %windir%\SysWOW64
if NOT EXIST %windir%\SysWOW64\msxml5r.dll copy msxml5r.dll %windir%\SysWOW64
if NOT EXIST %windir%\SysWOW64\msxml6.dll  copy msxml6.dll  %windir%\SysWOW64
if NOT EXIST %windir%\SysWOW64\msxml6r.dll copy msxml6r.dll %windir%\SysWOW64
ECHO *** Registrando as DLLs x64 ***
regsvr32 %windir%\SysWOW64\capicom.dll 
regsvr32 %windir%\SysWOW64\msxml5.dll 
goto end

:end

pause
