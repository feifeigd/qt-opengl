@echo off

:: build
cmake -H. -B_builds -DHUNTER_STATUS_DEBUG=OFF -G"Visual Studio 15 2017" 
if %errorlevel% NEQ 0 goto error

cmake --build _builds --config Release
if %errorlevel% NEQ 0 goto error

cmake --build _builds --config Debug
if %errorlevel% NEQ 0 goto error

:: test
cd _builds && ctest -C Debug -VV
if %errorlevel% NEQ 0 goto error

goto :EOF

:error
pause
