# This file is a CMake toolchain file for cross-compiling to WebAssembly using Emscripten
# It should be used with the -DCMAKE_TOOLCHAIN_FILE=<path_to_this_file> option

# Don't look for programs in the host paths
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

# Set the target architecture
set(TARGET_ARCH "EMSCRIPTEN")

# Disable threading by default (can be enabled with -DENABLE_THREADS=ON)
option(ENABLE_THREADS "Enable threading support" OFF)

# Option for browser environment (exports functions for JS)
option(BROWSER_ENVIRONMENT "Build for browser environment" ON)

# Option for filesystem support
option(ENABLE_FILESYSTEM "Enable filesystem support" OFF)

# Set default build type if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type" FORCE)
endif()

# Recommended settings for AWS SDK with Emscripten
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build shared libraries" FORCE)
set(ENABLE_TESTING OFF CACHE BOOL "Enable testing" FORCE)
set(MINIMIZE_SIZE ON CACHE BOOL "Minimize size" FORCE)
set(NO_HTTP_CLIENT ON CACHE BOOL "No HTTP client" FORCE)
set(CUSTOM_MEMORY_MANAGEMENT OFF CACHE BOOL "Custom memory management" FORCE)

message(STATUS "Configured for Emscripten/WebAssembly compilation")
