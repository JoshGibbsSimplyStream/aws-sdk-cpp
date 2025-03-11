@echo off
REM Script to test if Emscripten is working correctly
REM Usage: test-emscripten.bat

setlocal enabledelayedexpansion

echo === Testing Emscripten Installation ===

REM Check if Emscripten is available
where emcc >nul 2>&1
if %ERRORLEVEL% neq 0 (
    echo Error: Emscripten compiler ^(emcc^) not found in PATH.
    echo Please activate the Emscripten SDK environment before running this script.
    echo Example: call \path\to\emsdk\emsdk_env.bat
    exit /b 1
)

echo Emscripten found in PATH.
echo Emscripten location: 
where emcc

echo.
echo Emscripten version:
emcc --version

echo.
echo Testing simple compilation...

REM Create a temporary directory
set "TEMP_DIR=%TEMP%\emscripten-test"
if not exist "%TEMP_DIR%" mkdir "%TEMP_DIR%"
cd /d "%TEMP_DIR%"

REM Create a simple C++ file
echo #include ^<iostream^> > test.cpp
echo int main() { >> test.cpp
echo     std::cout ^<^< "Hello, WebAssembly!" ^<^< std::endl; >> test.cpp
echo     return 0; >> test.cpp
echo } >> test.cpp

REM Try to compile it
echo.
echo Compiling test.cpp...
emcc test.cpp -o test.html

if %ERRORLEVEL% neq 0 (
    echo.
    echo Error: Failed to compile test.cpp.
    echo This suggests there might be an issue with your Emscripten installation.
    echo.
    echo Possible solutions:
    echo 1. Make sure you've activated the Emscripten SDK environment correctly.
    echo 2. Try reinstalling or updating Emscripten.
    echo 3. Check if there are any compatibility issues with your system.
) else (
    echo.
    echo Success: Test compilation completed successfully.
    echo This suggests your Emscripten installation is working correctly.
    echo.
    echo If you're still having issues with the AWS SDK build, the problem might be specific to the build configuration or dependencies.
)

REM Clean up
cd /d "%~dp0"
rmdir /s /q "%TEMP_DIR%" >nul 2>&1

endlocal
