#ifndef RAM_H
#define RAM_H

struct RAM {
    int buffer[8];
};

void initializeRAM(RAM& ram);
void saveToFile(const RAM& ram, const std::string& filename);
void loadFromFile(RAM& ram, const std::string& filename);
void inputNumbers(RAM& ram);
void displayNumbers(const RAM& ram);

#endif  // RAM_H
