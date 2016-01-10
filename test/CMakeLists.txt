# Copyright(c) 2016 Markus Engelbrecht.
# Distributed under the MIT License (http://opensource.org/licenses/MIT)

function(add_unit_test name)
    set(target test_${name})

    add_executable(${target} ${ARGN})
    add_test(${name} ${target})
    target_link_libraries(${target} PUBLIC kompositum)

    if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        target_compile_options(${target} PRIVATE -std=c++11)
    endif()
endfunction()

add_unit_test(basic basic.cpp)
