# Copyright(c) 2016 Markus Engelbrecht.
# Distributed under the MIT License (http://opensource.org/licenses/MIT)

cmake_minimum_required(VERSION 3.12.0)

project(kompositum)

include(CTest)

add_library(kompositum INTERFACE)

target_include_directories(kompositum 
    INTERFACE 
        ${CMAKE_CURRENT_LIST_DIR}/include
)

target_compile_features(kompositum
    INTERFACE
        cxx_std_11
)

enable_testing()

if (BUILD_TESTING)
    add_subdirectory("test")
endif ()

install(DIRECTORY include/kompositum DESTINATION include PATTERN "*.h")
