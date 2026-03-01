cmake_minimum_required(VERSION 3.22.1)

# Set the project name and enable C++
project(basic_multiple_files  LANGUAGES CXX) 

include_directories(include)

# Define the source files
set(SOURCES
    src/main.cpp
    src/function_a.cpp
    src/function_b.cpp
)

# Add the executable target, listing all source files
add_executable(basic_multiple_files ${SOURCES})