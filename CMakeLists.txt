cmake_minimum_required(VERSION 3.28)

project(orbit2d)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(orbit2d
    src/main.cpp
    src/Math.cpp    
)

target_include_directories(orbit2d PRIVATE include)

