cmake_minimum_required(VERSION 3.22.1)

set(PROJECT_NAME "bitwise")

project(${PROJECT_NAME} LANGUAGES CXX)

set(SOURCES src/bitwise.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
