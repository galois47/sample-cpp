cmake_minimum_required(VERSION 3.22.1)

set(PROJECT_NAME "http_server")

project(${PROJECT_NAME} LANGUAGES CXX)

include_directories(include)

set(SOURCES src/http_server.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
