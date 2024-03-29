set(TEST_NAME ${PROJECT_NAME}_AllTests)

file(GLOB_RECURSE
    TEST_SOURCES
    LIST_DIRECTORIES false
      test.*.cpp
      test.*.${PLATFORM_EXTENSION}
    )

add_executable(${TEST_NAME} ${TEST_SOURCES})
add_test(NAME ${TEST_NAME} # for ctest
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMAND ${TEST_NAME} -d yes --order lex
)
message("** tests working directory: ${CMAKE_CURRENT_BINARY_DIR}")
message("** project working directory: ${CMAKE_BINARY_DIR}")
message("** runtime directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


## Compiler options
include(../cmake/CompilerOptions.cmake)
set_compiler_options(${TEST_NAME})


## Find third-party packages
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_BINARY_DIR})
find_package(fmt REQUIRED)
find_package(Catch2 REQUIRED)


## Target
target_link_libraries(${TEST_NAME} PRIVATE fmt::fmt ${PROJECT_NAME})
target_compile_features(${TEST_NAME} PUBLIC cxx_std_20)
target_include_directories(${TEST_NAME} PRIVATE ${Catch2_INCLUDE_DIRS} ../include)
