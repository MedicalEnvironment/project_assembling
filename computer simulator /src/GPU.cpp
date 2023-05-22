#include "GPU.h"
#include <iostream>

void displayNumbers(const RAM& ram) {
    std::cout << "Numbers in RAM: ";
    for (int i = 0; i < 8; ++i) {
        std::cout << ram.buffer[i] << " ";
    }
    std::cout << std::endl;
}
