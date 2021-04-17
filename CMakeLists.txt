# cmake_minimum_required(VERSION <specify CMake version here>)
project(testchain)

set(CMAKE_CXX_STANDARD 14)

add_executable(testchain main.cpp block.h Blockchain.h sha256.h sha256.cpp Block.cpp Blockchain.cpp)