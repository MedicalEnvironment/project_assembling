cmake_minimum_required(VERSION 3.23)
project(computer_simulator_)

set(CMAKE_CXX_STANDARD 17)

add_executable(computer_simulator_ src/main.cpp "include /CPU.h" "include /Disk.h" "include /GPU.h" "include /RAM.h" src/CPU.cpp src/Disk.cpp src/GPU.cpp src/RAM.cpp "include /Keyboard.h" src/Keyboard.cpp)

include_directories(src)