#!/bin/bash
# Script to build AWS SDK for C++ targeting WebAssembly using Emscripten
# Usage: ./build-wasm.sh [build_dir]

set -e

# Get the directory of this script
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
SDK_ROOT="$( cd "$SCRIPT_DIR/../.." && pwd )"

# Default build directory
BUILD_DIR=${1:-"$SDK_ROOT/build-wasm"}

# Check if Emscripten is available
if [ -z "$EMSCRIPTEN" ]; then
    echo "Error: EMSCRIPTEN environment variable is not set."
    echo "Please source the Emscripten SDK environment script before running this script."
    echo "Example: source /path/to/emsdk/emsdk_env.sh"
    exit 1
fi

echo "=== Building AWS SDK for C++ with WebAssembly/Emscripten ==="
echo "SDK Root: $SDK_ROOT"
echo "Build Directory: $BUILD_DIR"
echo "Emscripten: $EMSCRIPTEN"

# Create build directory
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

# Configure with CMake
echo "=== Configuring with CMake ==="
emcmake cmake "$SDK_ROOT" \
    -G "Ninja" \
    -DCMAKE_TOOLCHAIN_FILE="$SDK_ROOT/toolchains/emscripten.cmake" \
    -DTARGET_ARCH=EMSCRIPTEN \
    -DBUILD_ONLY="core" \
    -DENABLE_TESTING=OFF \
    -DBUILD_TESTING=OFF \
    -DBUILD_SHARED_LIBS=OFF \
    -DMINIMIZE_SIZE=ON \
    -DNO_HTTP_CLIENT=ON \
    -DNO_ENCRYPTION=ON \
    -DUSE_OPENSSL=OFF \
    -DBYO_CRYPTO=ON \
    -DCUSTOM_MEMORY_MANAGEMENT=OFF \
    -DENABLE_VIRTUAL_OPERATIONS=OFF \
    -DBROWSER_ENVIRONMENT=ON \
    -DCMAKE_CXX_COMPILER_WORKS=1 \
    -DCMAKE_C_COMPILER_WORKS=1 \
    -DCMAKE_CROSSCOMPILING=1

# Build
echo "=== Building ==="
cmake --build . --config Release

echo "=== Build Complete ==="
echo "Output files can be found in: $BUILD_DIR"
