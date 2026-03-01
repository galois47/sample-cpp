cmake_minimum_required(VERSION 3.22.1)

project(vector VERSION 0.0.1)

include_directories(vector PUBLIC include)

add_library(vector SHARED src/vector.cpp)
