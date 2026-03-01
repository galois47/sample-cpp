cmake_minimum_required(VERSION 3.22.1)

project(vector VERSION 0.0.1)

include_directories(vector PUBLIC include)

set(SOURCES src/vector.cpp)

add_library(vector SHARED ${SOURCES})