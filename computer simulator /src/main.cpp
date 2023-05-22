#include <iostream>
#include <fstream>
#include "RAM.h"
#include "CPU.h"
#include "Disk.h"
#include "GPU.h"
#include "Keyboard.h"

int main() {
    RAM ram;
    initializeRAM(ram);

    std::string command;
    while (true) {
        std::cout << "Enter a command (sum, save, load, input, display, exit): ";
        std::cin >> command;

        if (command == "sum") {
            int result = compute(ram);
            std::cout << "Sum of numbers: " << result << std::endl;
        } else if (command == "save") {
            saveToFile(ram, "data.txt");
            std::cout << "Data saved to file." << std::endl;
        } else if (command == "load") {
            loadFromFile(ram, "data.txt");
            std::cout << "Data loaded from file." << std::endl;
        } else if (command == "input") {
            inputNumbers(ram);
        } else if (command == "display") {
            displayNumbers(ram);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
