cmake_minimum_required(VERSION 3.24)

project(template_project_cpp
  VERSION "1.0.1"
  DESCRIPTION "A cross-platform c++ application template"
  LANGUAGES CXX
)


## Options
option(ENABLE_COVERAGE    "Enable gcov coverage"              False)
option(ENABLE_PCH         "Enable Precompiled Headers"        False)
option(ENABLE_TESTS       "Enable tests"                      False)
option(ENABLE_WERROR      "Treat compiler warnings as errors" False)


## Source files common for all platforms .cpp .hpp
if (${CMAKE_SYSTEM_NAME} MATCHES "Linux") # .cc .hh
  set(PLATFORM_EXTENSION cc)
elseif (${CMAKE_SYSTEM_NAME} MATCHES "Windows") # .cxx .hxx
  set(PLATFORM_EXTENSION cxx)
  set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS True) # Allow DLL symbols generation
  set(BUILD_SHARED_LIBS True)
  message(STATUS "Parent export all symbols: ${CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS}")
  message(STATUS "Parent Build shared libs: ${BUILD_SHARED_LIBS}")
elseif (${CMAKE_SYSTEM_NAME} MATCHES "Darwin") # OSX .c++ .h++
  set(PLATFORM_EXTENSION c++)
endif ()

file(GLOB_RECURSE
  SOURCE_FILES
    src/*.cpp
    src/*.inl
    src/*.${PLATFORM_EXTENSION}
)

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})


## Compiler options
include(cmake/CompilerOptions.cmake)
set_compiler_options(${PROJECT_NAME})


## Find third-party packages
find_package(fmt REQUIRED)


## Target
target_include_directories(${PROJECT_NAME} PRIVATE include)
target_link_libraries(${PROJECT_NAME} PRIVATE ${fmt_LIBRARIES})


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
install(TARGETS ${PROJECT_NAME}
  EXPORT ${PROJECT_NAME}
  CONFIGURATIONS ${CMAKE_BUILD_TYPE}
  LIBRARY         DESTINATION "/opt/${PROJECT_NAME}/${CMAKE_BUILD_TYPE}/lib"
  ARCHIVE         DESTINATION "/opt/${PROJECT_NAME}/${CMAKE_BUILD_TYPE}/lib"
  RUNTIME         DESTINATION "/opt/${PROJECT_NAME}/${CMAKE_BUILD_TYPE}/bin"
  PRIVATE_HEADER  DESTINATION "/opt/${PROJECT_NAME}/${CMAKE_BUILD_TYPE}/include"
  PUBLIC_HEADER   DESTINATION "/opt/${PROJECT_NAME}/${CMAKE_BUILD_TYPE}/include"
)

## Create .cmake
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
  Find${PROJECT_NAME}.cmake
  VERSION ${PACKAGE_VERSION}
  COMPATIBILITY AnyNewerVersion
)

install(EXPORT ${PROJECT_NAME}
  FILE Find${PROJECT_NAME}.cmake
  NAMESPACE
  DESTINATION "/opt/${PROJECT_NAME}/${CMAKE_BUILD_TYPE}/lib/cmake"
)

include(CPack)
set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Juan Jose Castellanos <juancho.312@hotmail.com>")
set(CPACK_RESOURCE_FILE_LICENSE ${CMAKE_CURRENT_SOURCE_DIR}/LICENSE)
