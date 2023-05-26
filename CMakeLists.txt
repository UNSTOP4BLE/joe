cmake_minimum_required(VERSION 3.20)

project(whatever LANGUAGES C CXX)
find_package(SDL2 REQUIRED)
FILE(GLOB MY_SRCS src/*)

add_executable(engine MY_SRCS)
target_link_libraries(engine PRIVATE SDL2)