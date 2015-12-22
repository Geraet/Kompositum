# Copyright(c) 2016 Markus Engelbrecht.
# Distributed under the MIT License (http://opensource.org/licenses/MIT)

add_executable(test_basic basic.cpp)
add_test(basic test_basic)
target_link_libraries(test_basic PUBLIC kompositum)
