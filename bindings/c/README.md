pHash source code is written in C-style using C headers, but uses C++ idioms and the C++ CImg library.

These bindings allow calling pHash functions from C, while pHash is built separately using the C++ compiler.

When using CMake, your project's `CMakeLists.txt` should include:
```CMake
add_subdirectory(pHash)
add_executable(MyProject main.c)
target_link_libraries(MyProject PUBLIC pHash)
target_include_directories(MyProject PUBLIC "${pHash_SOURCE_DIR}/bindings/c")
```
