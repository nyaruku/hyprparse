cmake_minimum_required(VERSION 3.5)
project(hyprparse_test LANGUAGES C CXX)

include_directories(${PROJECT_SOURCE_DIR})
add_library(testy STATIC testy/test_main.c)

add_executable(hyprparse_test hyprparse_test.cpp)
target_link_libraries(hyprparse_test PRIVATE testy)

# testing
enable_testing()
add_test(NAME hyprparse_test COMMAND hyprparse_test)
