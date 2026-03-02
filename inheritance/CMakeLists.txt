cmake_minimum_required(VERSION 3.22.1)

set(PROJECT_NAME "inheritance")

# Set the project name and enable C++
project(${PROJECT_NAME} LANGUAGES CXX) 

include_directories(include)

# Define the source files
set(SOURCES
    src/main.cpp
    src/car/car.cpp
    src/vehicle/vehicle.cpp
)

# Add the executable target, listing all source files
add_executable(${PROJECT_NAME} ${SOURCES})