cmake_minimum_required(VERSION 3.12)
project(TIRALABRA)

set(CMAKE_CXX_STANDARD 11)


# Collect all the source files
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "headers/*.hpp")

# Add the executable target
add_executable(TIRALABRA ${SOURCES} ${HEADERS})
