cmake_minimum_required(VERSION 3.17)
project(fltk_demo)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES fltk-demo.cpp)

add_executable(fltk_demo fltk-demo.cpp)
set(FLTK_SKIP_FLUID true)
find_package(FLTK REQUIRED)
include_directories(${FLTK_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${FLTK_BASE_LIBRARY} ${FLTK_PLATFORM_DEPENDENT_LIBS})
