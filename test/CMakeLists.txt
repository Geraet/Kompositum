# Copyright(c) 2016 Markus Engelbrecht.
# Distributed under the MIT License (http://opensource.org/licenses/MIT)

add_executable(test_basic basic.cpp)
add_test(basic test_basic)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    target_compile_options(test_basic PRIVATE -std=c++11)
endif()

target_link_libraries(test_basic PUBLIC kompositum)
