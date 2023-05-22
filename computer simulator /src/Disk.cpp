#include "Disk.h"
#include <fstream>
#include <iostream>

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
