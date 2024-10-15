cmake_minimum_required(VERSION 3.10.2)
project(randomutils)

set(CMAKE_CXX_STANDARD 17)
add_library(${PROJECT_NAME} STATIC src/RandomUtils.cpp include/${PROJECT_NAME}/RandomUtils.h)

target_include_directories(${PROJECT_NAME}
        PUBLIC include
        PRIVATE include/${PROJECT_NAME})