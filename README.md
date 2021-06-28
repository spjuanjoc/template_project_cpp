# Template project for C++

This is a base CMake project with the basic configuration to build a
cross-platform c++ application for Linux, OSX, and Windows x64. Triggers the CI
to build and run the tests, and run coverage. Uses conan to install
dependencies, Catch2 for testing, and fmt. Format with clang-format

| System | App       |Status|
|  ---   |  ---      |:---:|
|Linux   | GH Actions| [![linux](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/linux.yml/badge.svg?branch=main)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/linux.yml) |
|OSX     | GH Actions| [![macos](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/macosx.yml/badge.svg)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/macosx.yml) |
|Win x64 | GH Actions| [![windows](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/windows.yml/badge.svg)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/windows.yml) |
|Windows | AppVeyor  | [![Build status](https://ci.appveyor.com/api/projects/status/kkg8iaq74wql90rj/branch/main?svg=true)](https://ci.appveyor.com/project/spjuanjoc/template-project-cpp/branch/main) |
|Coverage| codecov   | [![codecov](https://codecov.io/gh/spjuanjoc/template_project_cpp/branch/main/graph/badge.svg)](https://codecov.io/gh/spjuanjoc/template_project_cpp) |

For codecov add public repository: [Codecov Dashboard](https://codecov.io/gh/)  
For AppVeyor add public project: [AppVeyor Projects](https://ci.appveyor.com/project)  


## Requirements

- CMake > 3.12
- A C++17 compliant compiler
- Python (for conan)


## Build

1. Build in debug mode with tests:

```shell
mkdir build && cd build
cmake -DCMAKE_MODULE_PATH=$PWD -DCMAKE_BUILD_TYPE=Debug -DENABLE_TESTS=True ..
cmake --build . --config Debug 
```

2. Build with ninja:

```shell
mkdir build && cd build
cmake -DCMAKE_MODULE_PATH=$PWD -DCMAKE_BUILD_TYPE=Release -G"Ninja" ..
ninja -j8
```


## Run tests

```shell
ctest -V 
```


## License

MIT

