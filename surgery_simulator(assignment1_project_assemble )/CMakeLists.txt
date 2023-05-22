cmake_minimum_required(VERSION 3.23)
project(surgery_simulator_assignment1_project_assemble__)

set(CMAKE_CXX_STANDARD 17)

# in order to add the include directory
include_directories(include)

add_executable(surgery_simulator_assignment1_project_assemble__ src/main.cpp include/tools.h src/Point.cpp)
