# template project for C++

.

| x | x |Status|
|---|---|---:|
|Linux build   |Travis CI  | x |
|Windows build |AppVeyor   | x |
|Apple build   |Github     | x |
|Coverage      |codecov    | x |

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
