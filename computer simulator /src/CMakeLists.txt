add_executable(computer_simulator main.cpp CPU.cpp Disk.cpp GPU.cpp RAM.cpp Keyboard.cpp)
target_include_directories(computer_simulator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
