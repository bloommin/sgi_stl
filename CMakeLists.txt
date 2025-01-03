cmake_minimum_required(VERSION 3.30)
project(sgistl)

set(CMAKE_CXX_STANDARD 11)

add_executable(sgistl main.cpp)
#target_include_directories(sgistl BEFORE PUBLIC stl)
