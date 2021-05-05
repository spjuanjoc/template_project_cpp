# template project for C++

.

| System | App |Status|
|---|---|---:|
|OSX build     |Travis CI  | [![Build Status](https://www.travis-ci.com/spjuanjoc/template_project_cpp.svg?branch=main)](https://www.travis-ci.com/spjuanjoc/template_project_cpp) |
|Windows build |AppVeyor   | [![Build status](https://ci.appveyor.com/api/projects/status/kkg8iaq74wql90rj/branch/main?svg=true)](https://ci.appveyor.com/project/spjuanjoc/template-project-cpp/branch/main) |
|Linux build   |Github     | [![.github/workflows/main.yml](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/main.yml/badge.svg)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/main.yml) |
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
