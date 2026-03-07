cmake_minimum_required(VERSION 3.22.1)

project(vector VERSION 0.0.1)

# Set the project name and enable C++
project(${PROJECT_NAME} LANGUAGES CXX) 

include_directories(${PROJECT_NAME} PUBLIC include)

set(SOURCES 
    src/vector3.cpp
    src/vector4.cpp
    )

add_library(${PROJECT_NAME} SHARED ${SOURCES})
