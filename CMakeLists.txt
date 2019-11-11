# cmake_minimum_required(VERSION <specify CMake version here>)
project(CS_321_PA2_ C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CS_321_PA2_
        PA2.c ThirdSetFunctions.h)
