cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 11)

project(engine LANGUAGES C CXX)
find_package(SDL2 REQUIRED)
file(GLOB MY_SRCS src/* src/engine/*)

add_executable(engine ${MY_SRCS})
target_link_libraries(engine PRIVATE SDL2 ogg vorbis vorbisfile)