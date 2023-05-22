#include <iostream>
#include "CPU.h"

void CPU::compute(const RAM& ram) {
    int sum = 0;
    for (int i = 0; i < ram.size(); i++) {
        sum += ram.read(i);
    }
    std::cout << "Sum: " << sum << std::endl;
}
