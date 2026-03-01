cmake_minimum_required(VERSION 3.22.1)

set(PROJECT_NAME "using_dynamic_libs")

# Set the project name and enable C++
project(${PROJECT_NAME} LANGUAGES CXX) 

include_directories(include)

# Define the source files
set(SOURCES
    src/main.cpp
    src/function_a/function_a.cpp
    src/function_b/function_b.cpp
)

# Add the executable target, listing all source files
add_executable(${PROJECT_NAME} ${SOURCES})