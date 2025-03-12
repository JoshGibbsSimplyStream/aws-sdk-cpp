message(STATUS "Generating Emscripten/WebAssembly build config")
set(SDK_INSTALL_BINARY_PREFIX "wasm")

# Set library suffix for WebAssembly
SET(SUFFIX a)

macro(apply_post_project_platform_settings)
    include(GNUInstallDirs)

    set(PLATFORM_DEP_LIBS)
    set(PLATFORM_DEP_LIBS_ABSTRACT_NAME)

    # Disable exceptions by default for smaller WASM size
    if(NOT DEFINED ENABLE_EXCEPTIONS)
        add_compile_options(-fno-exceptions)
    endif()
    
    # Add Emscripten-specific definitions
    add_definitions(-DPLATFORM_EMSCRIPTEN)


    # Set memory settings for Emscripten builds
    add_link_options(-sMEMORY64=2)
    add_compile_options(-sMEMORY64=2)
    add_compile_options(-mbulk-memory)

    add_link_options(-sUSE_PTHREADS=1)

    # Suppress warnings about deprecated literal operator
    add_compile_options(-Wno-deprecated-literal-operator) 

    # Suppress warnings about redefined macros
    add_compile_options(-Wno-macro-redefined)
    
    # Set appropriate threading model if threads are enabled
    if(ENABLE_THREADS)
        add_compile_options(-pthread)
        add_link_options(-pthread)
        add_definitions(-DENABLE_THREADS)
    endif()
    
    # Export main function for browser environment
    if(BROWSER_ENVIRONMENT)
        add_link_options(-sEXPORTED_RUNTIME_METHODS=['ccall','cwrap'])
        add_link_options(-sEXPORT_NAME=AwsCppSdk)
        add_link_options(-sMODULARIZE=1)
    endif()
    
    # Memory settings
    add_link_options(-sALLOW_MEMORY_GROWTH=1)
    
    # Filesystem settings - enable if needed
    if(ENABLE_FILESYSTEM)
        add_link_options(-sFILESYSTEM=1)
    endif()
    
    # Enable zlib for Emscripten builds
    add_link_options(-sUSE_ZLIB=1)
endmacro()
