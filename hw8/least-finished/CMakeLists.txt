cmake_minimum_required(VERSION 3.17)
project(least-finished)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES least-finished.cpp)

add_executable(least-finished least-finished.cpp)
set(FLTK_SKIP_FLUID true)
find_package(FLTK REQUIRED)
include_directories(${FLTK_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${FLTK_BASE_LIBRARY} ${FLTK_PLATFORM_DEPENDENT_LIBS})
