cmake_minimum_required(VERSION 3.26)
project(Triangulo)

set(CMAKE_CXX_STANDARD 23)

add_executable(Triangulo main.cpp
        Point.cpp
        Point.h
        Triangle.cpp
        Triangle.h)
