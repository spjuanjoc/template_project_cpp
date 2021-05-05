cmake_minimum_required(VERSION 3.12)
project(template_project_cpp VERSION 0.0.1 LANGUAGES CXX)

## Sources common for all platforms .cpp .hpp
set(SOURCES
    src/main.cpp
    )

add_executable(${PROJECT_NAME} ${SOURCES})

## Compiler options
include(cmake/CompilerOptions.cmake)
set_project_options(${PROJECT_NAME})
