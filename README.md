# template project for C++

.

| System | App       |Status|
|  ---   |  ---      |:---:|
|Linux   | GH Actions| [![linux](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/linux.yml/badge.svg?branch=main)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/linux.yml) |
|OSX     | GH Actions| [![macos](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/macosx.yml/badge.svg)](https://github.com/spjuanjoc/template_project_cpp/actions/workflows/macosx.yml) |
|Windows |AppVeyor   | [![Build status](https://ci.appveyor.com/api/projects/status/kkg8iaq74wql90rj/branch/main?svg=true)](https://ci.appveyor.com/project/spjuanjoc/template-project-cpp/branch/main) |
|Coverage|codecov    | [![codecov](https://codecov.io/gh/spjuanjoc/template_project_cpp/branch/main/graph/badge.svg)](https://codecov.io/gh/spjuanjoc/template_project_cpp) |

[comment]: <> (|Windows | GH Actions| [![windows]&#40;https://github.com/spjuanjoc/template_project_cpp/actions/workflows/windows.yml/badge.svg&#41;]&#40;https://github.com/spjuanjoc/template_project_cpp/actions/workflows/windows.yml&#41; |)

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
