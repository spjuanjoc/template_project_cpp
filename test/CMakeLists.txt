set(TEST_NAME ${PROJECT_NAME}_AllTests)

#add_definitions(-DGTEST_LANGUAGE_CXX11) # for gtest

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false test.*.cpp)

#
#find_package(Catch2 REQUIRED)
#
#if (Catch2_FOUND)
#  message("Catch2 found: ${Catch2_INCLUDE_DIRS}")
#endif ()

add_executable(${TEST_NAME} ${TEST_SOURCES})
add_test(${TEST_NAME} ${TEST_NAME}) # for ctest

target_link_libraries(${TEST_NAME} pthread #[[fmt::fmt]])
target_compile_features(${TEST_NAME} PUBLIC cxx_std_17)
target_compile_options(${TEST_NAME} INTERFACE ${PROJECT_OPTIONS})
#target_include_directories(${TEST_NAME} PRIVATE ${Catch2_INCLUDE_DIRS} ../include)
