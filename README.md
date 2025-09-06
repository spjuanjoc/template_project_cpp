# Template project for C++

This is a base CMake project with the basic configuration to build a
cross-platform c++ application for Linux, OSX, and Windows x64. Triggers the CI
to build and run the tests, and run coverage. Uses conan to install
dependencies: Catch2 for testing, and fmt. Format with clang-format

## Requirements

- CMake > 3.24
- A C++23 compliant compiler
- Conan 2.x


## Build Status

| System   | App        | Status                                                                                                                                                                                         |
|----------|------------|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Linux    | GH Actions | [![linux](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/linux.yml/badge.svg?branch=main)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/linux.yml) |

[//]: # (| OSX      | GH Actions | [![macos]&#40;https://github.com/spjuanjoc/template_project_cpp/actions/workflows/macosx.yml/badge.svg&#41;]&#40;https://github.com/spjuanjoc/template_project_cpp/actions/workflows/macosx.yml&#41;           |)
[//]: # (| Win x64  | GH Actions | [![windows]&#40;https://github.com/spjuanjoc/template_project_cpp/actions/workflows/windows.yml/badge.svg&#41;]&#40;https://github.com/spjuanjoc/template_project_cpp/actions/workflows/windows.yml&#41;       |)


## Code Coverage

| System   | App        | Status                                                                                                                                                                                         |
|----------|------------|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Coverage | codecov    | [![codecov](https://codecov.io/gh/spjuanjoc/template_project_cpp/branch/main/graph/badge.svg)](https://codecov.io/gh/spjuanjoc/template_project_cpp)                                           |


For codecov add public repository: [Codecov Dashboard](https://codecov.io/gh/)


## Build

Build in debug mode with tests:

```shell
mkdir build && cd build
cmake .. -DENABLE_TESTS=True -DCMAKE_PROJECT_TOP_LEVEL_INCLUDES=/abs/path/to/cmake/conan_provider.cmake -DCMAKE_BUILD_TYPE=Debug
cmake --build .
```


## Run tests

```shell
ctest -V 
```


## License

[![](https://img.shields.io/github/license/spjuanjoc/template_project_cpp)](https://img.shields.io/github/license/spjuanjoc/template_project_cpp)
