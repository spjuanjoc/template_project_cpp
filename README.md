# template project for C++

.

| System | App |Status|
|---|---|:---:|
|Linux   | GH Actions| [![linux](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/linux.yml/badge.svg?branch=main)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/linux.yml) |
|OSX     | GH Actions| [![macos](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/macosx.yml/badge.svg)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/macosx.yml) |
|Windows | GH Actions| [![windows](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/windows.yml/badge.svg)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/windows.yml) |
|OSX     |Travis CI  | [![Build Status](https://www.travis-ci.com/spjuanjoc/template_project_cpp.svg?branch=main)](https://www.travis-ci.com/spjuanjoc/template_project_cpp) |
|Coverage      |codecov    | [![codecov](https://codecov.io/gh/spjuanjoc/template_project_cpp/branch/main/graph/badge.svg)](https://codecov.io/gh/spjuanjoc/template_project_cpp) |

For codecov add repository: [Codecov Dashboard](https://codecov.io/gh/)  
For AppVeyor add project: [AppVeyor Projects](https://ci.appveyor.com/project)  


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
