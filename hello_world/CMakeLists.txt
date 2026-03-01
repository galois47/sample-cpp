cmake_minimum_required(VERSION 3.22.1)

set(PROJECT_NAME "hello_world")

project(${PROJECT_NAME} LANGUAGES CXX)

set(SOURCES src/hello_world.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
