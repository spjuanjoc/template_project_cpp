cmake_minimum_required(VERSION 3.12)
project(template_project_cpp VERSION 0.1.1 LANGUAGES CXX)

option(ENABLE_PCH   "Enable Precompiled Headers"  False)
option(ENABLE_TESTS "Enable tests"                False)


## Sources common for all platforms .cpp .hpp
if (${CMAKE_SYSTEM_NAME} MATCHES "Linux") # .cc .hh
  set(PLATFORM_EXTENSION cc)
elseif (${CMAKE_SYSTEM_NAME} MATCHES "Windows") # .cxx .hxx
  set(PLATFORM_EXTENSION cxx)
elseif (${CMAKE_SYSTEM_NAME} MATCHES "Darwin") # OSX .c++ .h++
  set(PLATFORM_EXTENSION c++)
endif ()

file(GLOB_RECURSE
  SOURCE_FILES
    src/*.cpp
    src/*.inl
    src/*.${PLATFORM_EXTENSION}
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})


## Compiler options
include(cmake/CompilerOptions.cmake)
set_project_options(${PROJECT_NAME})


## Setup Conan
# conan_cmake_run [see](https://github.com/selassje/eyeTracker/blob/master/CMakeLists.txt)
if (NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
  message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
  file(DOWNLOAD
      "https://raw.githubusercontent.com/conan-io/cmake-conan/master/conan.cmake"
      "${CMAKE_BINARY_DIR}/conan.cmake"
      )
endif ()

include(${CMAKE_BINARY_DIR}/conan.cmake)
conan_cmake_run(CONANFILE conanfile.txt BASIC_SETUP NO_OUTPUT_DIRS)


## Find third-party packages
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_BINARY_DIR})
find_package(fmt REQUIRED)


## Target
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
target_include_directories(${PROJECT_NAME} PRIVATE include)
#target_sources(${PROJECT_NAME} ${SOURCES})


## Check custom options
if (ENABLE_PCH) # Since CMake 3.15
  target_precompile_headers(${PROJECT_NAME} INTERFACE <vector> <string> <map> <utility>)
  message(STATUS "PCH enabled")
endif ()

if (ENABLE_TESTS)
  message(STATUS "Tests enabled")
  enable_testing() # Must be placed before add_subdirectory
  add_subdirectory(test)
endif ()

## Enable static analysis
## clang-tidy
## cppcheck

## Enable runtime analysis
## Sanitizers
##  Address (ASan)
##  Undefined Behavior (UBSan) (More on Undefined Behavior later)
##  Thread


## Install commands
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION "/opt/${PROJECT_NAME}")

set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Juan Jose Castellanos <juancho.312@hotmail.com>")
include(CPack)
