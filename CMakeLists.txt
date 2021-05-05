cmake_minimum_required(VERSION 3.12)
project(template_project_cpp VERSION 0.0.1 LANGUAGES CXX)

set(SOURCES
    src/main.cpp
    )

add_executable(${PROJECT_NAME} ${SOURCES})
