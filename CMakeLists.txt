# Copyright(c) 2016 Markus Engelbrecht.
# Distributed under the MIT License (http://opensource.org/licenses/MIT)

cmake_minimum_required(VERSION 3.15.0)

project(kompositum)

include(CTest)

add_library(kompositum INTERFACE)

target_include_directories(kompositum 
    INTERFACE 
        ${CMAKE_CURRENT_LIST_DIR}/include
)

enable_testing()

if (BUILD_TESTING)
    add_subdirectory("test")
endif ()

install(DIRECTORY include/kompositum DESTINATION include PATTERN "*.h")
