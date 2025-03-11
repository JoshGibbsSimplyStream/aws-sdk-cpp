# Building AWS SDK for C++ for WebAssembly

This document provides instructions for building the AWS SDK for C++ targeting WebAssembly using Emscripten.

## Prerequisites

1. **Emscripten SDK**: You need to have the Emscripten SDK installed and activated.
   - Download and install from: https://emscripten.org/docs/getting_started/downloads.html
   - Activate the SDK environment before building:
     - On Linux/macOS: `source /path/to/emsdk/emsdk_env.sh`
     - On Windows: `call \path\to\emsdk\emsdk_env.bat`

2. **CMake**: Version 3.13 or higher is required.

3. **Git**: Required for cloning the repository (if you haven't already).

## Building the SDK

### Using the Provided Build Scripts

We provide convenience scripts for building the SDK with WebAssembly:

#### On Linux/macOS:

```bash
# Make the script executable
chmod +x tools/scripts/build-wasm.sh

# Run the build script
./tools/scripts/build-wasm.sh [optional_build_directory]
```

#### On Windows:

```cmd
tools\scripts\build-wasm.bat [optional_build_directory]
```

### Manual Build

If you prefer to build manually or need to customize the build further:

1. Create a build directory:
   ```bash
   mkdir build-wasm
   cd build-wasm
   ```

2. Configure with CMake:
   ```bash
   cmake /path/to/aws-sdk-cpp \
       -DCMAKE_TOOLCHAIN_FILE=/path/to/aws-sdk-cpp/toolchains/emscripten.cmake \
       -DTARGET_ARCH=EMSCRIPTEN \
       -DBUILD_ONLY="core;s3;..." \
       -DENABLE_TESTING=OFF \
       -DBUILD_SHARED_LIBS=OFF \
       -DMINIMIZE_SIZE=ON
   ```

3. Build:
   ```bash
   cmake --build . --config Release
   ```

## Configuration Options

The WebAssembly build supports several configuration options:

- `ENABLE_THREADS`: Enable threading support (requires browser support for SharedArrayBuffer)
- `BROWSER_ENVIRONMENT`: Build for browser environment (exports functions for JavaScript)
- `ENABLE_FILESYSTEM`: Enable filesystem support
- `BUILD_ONLY`: Specify which components to build (e.g., "core;s3;dynamodb")

Example:
```bash
cmake /path/to/aws-sdk-cpp \
    -DCMAKE_TOOLCHAIN_FILE=/path/to/aws-sdk-cpp/toolchains/emscripten.cmake \
    -DTARGET_ARCH=EMSCRIPTEN \
    -DBUILD_ONLY="core;s3" \
    -DENABLE_THREADS=ON \
    -DENABLE_FILESYSTEM=ON
```

## Limitations

When building for WebAssembly, be aware of the following limitations:

1. **HTTP Client**: By default, the WebAssembly build disables the built-in HTTP client (`-DNO_HTTP_CLIENT=ON`). You'll need to provide your own HTTP client implementation using JavaScript/browser APIs.

2. **File System Access**: Browser security restrictions limit file system access. Use `-DENABLE_FILESYSTEM=ON` to enable Emscripten's virtual file system.

3. **Memory Usage**: WebAssembly modules have memory limitations. Use `-DMINIMIZE_SIZE=ON` to reduce the binary size.

4. **Threading**: WebAssembly threading support requires browser support for SharedArrayBuffer, which may not be available in all browsers or may require specific headers.

## Using the WebAssembly Build in a Web Application

After building, you'll have:

1. A main `.wasm` file containing the compiled WebAssembly module
2. A JavaScript file that loads and initializes the WebAssembly module

To use these in a web application:

```html
<!DOCTYPE html>
<html>
<head>
    <title>AWS SDK for C++ WebAssembly Example</title>
</head>
<body>
    <script>
        // Load the AWS SDK WebAssembly module
        var Module = {
            onRuntimeInitialized: function() {
                console.log('AWS SDK WebAssembly module loaded');
                // Your code using the AWS SDK here
            }
        };
    </script>
    <script src="path/to/aws-cpp-sdk-core.js"></script>
</body>
</html>
```

## Custom HTTP Client Implementation

Since the default HTTP client is disabled, you'll need to implement your own using JavaScript. Here's a simple example:

```cpp
// In your C++ code
#include <aws/core/http/HttpClient.h>
#include <emscripten/bind.h>

// Implement a custom HTTP client that delegates to JavaScript
class BrowserHttpClient : public Aws::Http::HttpClient {
    // Implementation details...
};

// Expose necessary functions to JavaScript
EMSCRIPTEN_BINDINGS(aws_sdk) {
    // Binding code...
}
```

```javascript
// In your JavaScript code
// Implement the HTTP request handling using fetch or XMLHttpRequest
```

## Additional Resources

- [Emscripten Documentation](https://emscripten.org/docs/index.html)
- [AWS SDK for C++ Documentation](https://docs.aws.amazon.com/sdk-for-cpp/index.html)
