#include "Keyboard.h"
#include <iostream>

void inputNumbers(RAM& ram) {
    std::cout << "Enter 8 numbers: ";
    for (int i = 0; i < 8; ++i) {
        std::cin >> ram.buffer[i];
    }
}
