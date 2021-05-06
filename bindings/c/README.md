# pHash C bindings

pHash source code is written in C-style using C headers, but uses C++ idioms and the C++ CImg library.

These bindings allow calling pHash functions from C and building with a C compiler, while pHash is built separately using the C++ compiler.

When using CMake, your project's `CMakeLists.txt` should include:
```CMake
set(PHASH_C_BINDINGS ON CACHE BOOL "Include C bindings")
add_subdirectory(pHash)
target_link_libraries(MyProject PRIVATE pHash)
```
