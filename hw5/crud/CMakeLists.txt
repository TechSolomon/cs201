cmake_minimum_required(VERSION 3.17)
project(crud)

set(CMAKE_CXX_STANDARD 14)

add_executable(crud database.cpp database.hpp crud.cpp)