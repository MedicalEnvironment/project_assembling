#include "RAM.h"
#include <fstream>
#include <iostream>

void initializeRAM(RAM& ram) {
    for (int i = 0; i < 8; ++i) {
        ram.buffer[i] = 0;
    }
}

void saveToFile(const RAM& ram, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < 8; ++i) {
            file << ram.buffer[i] << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to open file for saving." << std::endl;
    }
}

void loadFromFile(RAM& ram, const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < 8; ++i) {
            file >> ram.buffer[i];
        }
        file.close();
    } else {
        std::cout << "Unable to open file for loading." << std::endl;
    }
}

void inputNumbers(RAM& ram) {
    std::cout << "Enter 8 numbers: ";
    for (int i = 0; i < 8; ++i) {
        std::cin >> ram.buffer[i];
    }
}

void displayNumbers(const RAM& ram) {
    std::cout << "Numbers in RAM: ";
    for (int i = 0; i < 8; ++i) {
        std::cout << ram.buffer[i] << " ";
    }
    std::cout << std::endl;
}
