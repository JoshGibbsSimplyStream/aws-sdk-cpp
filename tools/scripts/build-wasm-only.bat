@echo off
REM Script to build AWS SDK for C++ targeting WebAssembly using Emscripten (build step only)
REM Usage: build-wasm-only.bat [build_dir]

setlocal enabledelayedexpansion

REM Default build directory
if "%~1"=="" (
    set "BUILD_DIR=%CD%\build-wasm"
) else (
    set "BUILD_DIR=%~1"
)

echo === Building AWS SDK for C++ with WebAssembly/Emscripten (build step only) ===
echo Build Directory: %BUILD_DIR%

cd /d "%BUILD_DIR%"

REM Build
echo === Building ===
cmake --build . --config Release

if %ERRORLEVEL% neq 0 (
    echo Build failed.
    exit /b %ERRORLEVEL%
)

echo === Build Complete ===
echo Output files can be found in: %BUILD_DIR%

endlocal
