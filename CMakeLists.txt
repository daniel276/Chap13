cmake_minimum_required(VERSION 3.6)
project(Chap13)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        1.cpp
        2.cpp
        2.h
        3.cpp 3.h)
add_executable(Chap13 ${SOURCE_FILES})
add_executable(1 1.cpp)
add_executable(2 2.cpp 2.h)
add_executable(3 3.cpp 3.h)