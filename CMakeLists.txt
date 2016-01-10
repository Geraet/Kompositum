# Copyright(c) 2016 Markus Engelbrecht.
# Distributed under the MIT License (http://opensource.org/licenses/MIT)

cmake_minimum_required(VERSION 3.0.0)

project(kompositum)

include(CTest)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(kompositum INTERFACE)
target_include_directories(kompositum INTERFACE include)

if (BUILD_TESTING)
  add_subdirectory("test")
endif ()

install(DIRECTORY include/kompositum DESTINATION include PATTERN "*.h")
