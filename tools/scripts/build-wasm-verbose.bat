@echo off
REM Script to build AWS SDK for C++ targeting WebAssembly using Emscripten (with verbose output)
REM Usage: build-wasm-verbose.bat [build_dir]

setlocal enabledelayedexpansion

REM Get the directory of this script and SDK root
set "SCRIPT_DIR=%~dp0"
set "SDK_ROOT=%SCRIPT_DIR%..\..\"
cd /d "%SDK_ROOT%"
set "SDK_ROOT=%CD%"

REM Default build directory
if "%~1"=="" (
    set "BUILD_DIR=%SDK_ROOT%\build-wasm"
) else (
    set "BUILD_DIR=%~1"
)

REM Check if Emscripten is available
where emcc >nul 2>&1
if %ERRORLEVEL% neq 0 (
    echo Error: Emscripten compiler ^(emcc^) not found in PATH.
    echo Please activate the Emscripten SDK environment before running this script.
    echo Example: call \path\to\emsdk\emsdk_env.bat
    exit /b 1
)

echo === Building AWS SDK for C++ with WebAssembly/Emscripten (verbose mode) ===
echo SDK Root: %SDK_ROOT%
echo Build Directory: %BUILD_DIR%
echo Emscripten: %EMSCRIPTEN%

REM Create build directory
if not exist "%BUILD_DIR%" mkdir "%BUILD_DIR%"
cd /d "%BUILD_DIR%"

REM Configure with CMake
echo === Configuring with CMake ===
emcmake cmake "%SDK_ROOT%" ^
    -G "Ninja" ^
    -DCMAKE_TOOLCHAIN_FILE="%SDK_ROOT%\toolchains\emscripten.cmake" ^
    -DTARGET_ARCH=EMSCRIPTEN ^
    -DBUILD_ONLY="core" ^
    -DENABLE_TESTING=OFF ^
    -DBUILD_TESTING=OFF ^
    -DBUILD_SHARED_LIBS=OFF ^
    -DMINIMIZE_SIZE=ON ^
    -DNO_HTTP_CLIENT=ON ^
    -DNO_ENCRYPTION=ON ^
    -DUSE_OPENSSL=OFF ^
    -DBYO_CRYPTO=ON ^
    -DCUSTOM_MEMORY_MANAGEMENT=OFF ^
    -DENABLE_VIRTUAL_OPERATIONS=OFF ^
    -DBROWSER_ENVIRONMENT=ON ^
    -DCMAKE_CXX_COMPILER_WORKS=1 ^
    -DCMAKE_C_COMPILER_WORKS=1 ^
    -DCMAKE_CROSSCOMPILING=1 ^
    -DCMAKE_VERBOSE_MAKEFILE=ON

echo CMake configuration exit code: %ERRORLEVEL%
if %ERRORLEVEL% neq 0 (
    echo CMake configuration failed.
    exit /b %ERRORLEVEL%
)

echo === Configuration successful, proceeding to build ===
echo Current directory: %CD%
dir

REM Build
echo === Building ===
cmake --build . --config Release --verbose

echo Build exit code: %ERRORLEVEL%
if %ERRORLEVEL% neq 0 (
    echo Build failed.
    exit /b %ERRORLEVEL%
)

echo === Build Complete ===
echo Output files can be found in: %BUILD_DIR%

endlocal
