cmake_minimum_required(VERSION 3.22.1)

set(PROJECT_NAME "using_dynamic_libs")

project(${PROJECT_NAME} LANGUAGES CXX)

include_directories(include)

# Including vector library
add_library(vector SHARED IMPORTED)
set_property(TARGET vector PROPERTY IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/libs/libvector.so)

# Add executable
add_executable(${PROJECT_NAME} src/using_vector.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE vector)