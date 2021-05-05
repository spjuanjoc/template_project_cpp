# template project for C++

.

| System | App |Status|
|---|---|---:|
|Linux build   |Travis CI  | [![Build Status](https://www.travis-ci.com/spjuanjoc/template_project_cpp.svg?branch=main)](https://www.travis-ci.com/spjuanjoc/template_project_cpp) |
|Windows build |AppVeyor   | x |
|Apple build   |Github     | x |
|Coverage      |codecov    | [![codecov](https://codecov.io/gh/spjuanjoc/template_project_cpp/branch/main/graph/badge.svg)](https://codecov.io/gh/spjuanjoc/template_project_cpp) |

For codecov add repository: https://codecov.io/gh/spjuanjoc

## Build

1. Build in debug mode:

    ````
    mkdir build && cd build
    cmake .. -O0 -DCMAKE_BUILD_TYPE=Debug
    cmake --build ./ -- -j8
    ````

2. Build with ninja:

    ````
    mkdir build && cd build
    cmake .. -G"Ninja" -O3 -DCMAKE_BUILD_TYPE=Release
    ninja -j8
    ````
