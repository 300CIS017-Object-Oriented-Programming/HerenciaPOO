cmake_minimum_required(VERSION 3.19)
project(Herencia)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib)
include_directories(src)
include_directories(testing)

add_subdirectory(lib/googleTest)
add_subdirectory(src)
add_subdirectory(testing)