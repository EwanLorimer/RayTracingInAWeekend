cmake_minimum_required(VERSION 3.28)
project(raytracer)

set(CMAKE_CXX_STANDARD 17)

add_executable(raytracer main.cpp
        vec3.cpp
        vec3.h
)
