project(hw02)

cmake_minimum_required(VERSION 3.16)


FILE(GLOB SRC_FILES src/*.cpp)
add_executable(demo_cmake ${SRC_FILES})

set_target_properties(demo_cmake PROPERTIES CXX_STANDARD 11)

